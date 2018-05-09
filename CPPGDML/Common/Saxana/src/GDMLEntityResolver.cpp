#include "Saxana/GDMLEntityResolver.h"

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/sax/InputSource.hpp>
#include <xercesc/framework/URLInputSource.hpp>

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

using namespace xercesc;
using std::string;
using std::vector;
using std::endl;
using std::cout;

GDMLEntityResolver::GDMLEntityResolver()
{
  /* Add the current working directory to search path. */
  addSearchDir(getCurrentWorkingDir());

  /* Add the variable GDML_SCHEMA_DIR to search path. */
  char* env;
  env = getenv("GDML_SCHEMA_DIR");
  if (env != NULL) {
    addSearchDir(string(env));
  }
}

GDMLEntityResolver::~GDMLEntityResolver()
{;}

/**
 * A simple implementation of entity resolution that pulls out a file's basename from a URL and attempts
 * to find it within a list of directories.  An absolute URL with the "file:" protocol is returned if the
 * document is found locally.  Otherwise, a null input source is returned, so that Xerces' default
 * entity resolution will be used. --JM
 * @return isrc Returns an InputSource pointing to a local copy or NULL.
 */
InputSource* GDMLEntityResolver::resolveEntity( const XMLCh* const, const XMLCh* const systemId) {

  /* Default to null InputSource. */
  InputSource* isrc = 0;

  /* Make string from systemId. */
  string sysIdStr = string( XMLString::transcode(systemId) );

  /* Get current working dir. (Is this x-platform compatible???) */
  char ccwd[PATH_MAX];
  getcwd(ccwd, PATH_MAX);
  string cwd = string(ccwd);

  /* Pull out filename. */
  string::size_type lastSlashIdx = sysIdStr.find_last_of('/');
  string fileName;
  std::string urlStr;

  /* If found a '/', then only the filename is pulled-out, ignoring rest of relative path or URL. */
  if ( lastSlashIdx != string::npos ) {
    fileName = string(sysIdStr, lastSlashIdx + 1);
  }
  /* If a '/' was NOT found, systemId is treated as a filename only, which is used verbatim. */
  else {
    fileName = string(sysIdStr);
  }

  /* Loop over list of search directories. */
  for (vector<string>::const_iterator iter = m_dirs.begin();
       iter != m_dirs.end();
       iter++) {

    const std::string& dir = (*iter);

    /* Try to open the full path -> dir + "/" + basename */
    std::string path = dir + string("/") + fileName;
    std::ifstream fin;
    fin.open(path.c_str(), std::ios::in);

    /* Open was successful? */
    if ( !fin.fail() ) {

      /* Setup "file:" protocol URL pointing to local copy. */
      urlStr = string("file://") + path;
      const XMLURL url = XMLURL(urlStr.c_str());
      isrc = new URLInputSource(url);
      break;
    }
  }

  /* Print an info mesg if this function redirected to a local copy. */
#ifdef GDML_VERBOSE
  if ( isrc != 0 ) {
    cout << "systemId <" << sysIdStr << "> redirected to local copy at <" << urlStr << ">." << endl;
  }
#endif

  return isrc;
}

void GDMLEntityResolver::addSearchDir(std::string dir)
{
#ifdef GDML_VERBOSE
  cout << "Adding search directory <" << dir << ">" << endl;
#endif
  m_dirs.push_back(dir);
}

/* Get current working dir. (Is this x-platform compatible???) */
std::string GDMLEntityResolver::getCurrentWorkingDir()
{
  char ccwd[PATH_MAX];
  getcwd(ccwd, PATH_MAX);
  return string(ccwd);
}
