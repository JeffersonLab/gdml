//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: SAXEventGun.cpp,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/framework/XMLPScanToken.hpp>
#include <xercesc/parsers/SAXParser.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/sax/AttributeList.hpp>
#include <xercesc/sax/SAXParseException.hpp>


#include "Saxana/SAXProcessor.h"
#include "Saxana/SAXEvents.h"
#include "Saxana/ASCIIAttributeList.h"
#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/SAXEventGun.h"

// // Disable deprecated warnings for usage of strstream on Linux
// // architectures with gcc >= 3.0 release
// //
// #if (__GNUC__==3) && (__GNUC_MINOR__>0)
//   #undef __DEPRECATED
// #endif
// #include <strstream>

#include <iostream>
#include <sstream>

using namespace xercesc;

StatusCode SAXEventGun::Run()
{
  StatusCode sc;

  fParser = new xercesc::SAXParser();
  
  fParser->setDocumentHandler( this );
  fParser->setErrorHandler( this );
  fParser->setValidationScheme( SAXParser::Val_Always );
  fParser->setDoNamespaces(true);
  fParser->setDoSchema(true);
  fParser->setValidationSchemaFullChecking(true);

  const std::string& uri = fConfig->URI();
  const char* xmlfile = uri.c_str();
  
  try
  {
    fParser->parse( xmlfile );
  }
  catch (const XMLException& e)
  {
    const char* msg = XMLString::transcode( e.getMessage() );
    
    std::cerr << "\nError during parsing: '" << xmlfile << "'\n"
              << "Exception message is:  \n"
              << msg << "\n" << std::endl;
    //XMLPlatformUtils::Terminate();
    if( msg != 0 )
    {
      delete [] msg;
    }
    sc = StatusCode::eError;
  }
  catch (...)
  {
    std::cerr << "\nUnexpected exception during parsing: '" << xmlfile << "'\n";
    //XMLPlatformUtils::Terminate();
    sc = StatusCode::eError;
  }
  
  /*
  try
  {
    // Create a progressive scan token
    XMLPScanToken token;

    if (!fParser.parseFirst(xmlFile, token))
    {
      std::cerr << "scanFirst() failed\n" << std::endl;
      sc = StatusCode::eError;
    }
    else
    {
      //
      //  We started ok, so lets call scanNext() until we find what we want
      //  or hit the end.
      //
      bool gotMore = true;
      while (gotMore && !handler.getDone())
          gotMore = parser.parseNext(token);

      //
      //  Reset the parser. In this simple progrma, since we just exit
      //  now, its not technically required. But, in programs which
      //  would remain open, you should reset after a progressive parse
      //  in case you broke out before the end of the file. This insures
      //  that all opened files, sockets, etc... are closed.
      //
      parser.parseReset(token);
    }
  }

  catch (const XMLException& toCatch)
  {
      cerr << "\nAn error occured: '" << xmlFile << "'\n"
           << "Exception message is: \n"
           << StrX(toCatch.getMessage())
           << "\n" << endl;
      return -1;
  }
  */
    
  return sc;
}

void SAXEventGun::characters( const   XMLCh* const    chars
                               , const unsigned int    length )
// Receive notification of #PCDATA characters in element content.
{
  char* ascii = 0;
  
  if( length > 0 ) {
    ascii = XMLString::transcode( chars );
    SAXEventCharacters event( ascii );
    
    fTarget->ProcessEvent( &event );
  
    if( ascii != 0 )
    {
      delete [] ascii;
    }
  }
}

void SAXEventGun::endDocument()
// Receive notification of the end of the document.
{
  SAXEventEndDocument event;
  fTarget->ProcessEvent( &event );
}

void SAXEventGun::endElement( const XMLCh* const name )
// Receive notification of the end of an element.
{
  const char* ascii = 0;
  
  ascii = XMLString::transcode( name );
  SAXEventEndElement event( ascii );
  fTarget->ProcessEvent( &event );
  
  if( ascii != 0 )
  {
    delete [] ascii;
  }
}

void SAXEventGun::ignorableWhitespace( const   XMLCh* const    chars
                                        , const unsigned int    length )
// Receive notification of ignorable whitespace in element content.
{
  char* ascii = 0;
  
  if( length > 0 ) {
    ascii = XMLString::transcode( chars );
    SAXEventCharacters event( ascii );
    fTarget->ProcessEvent( &event );
  
    if( ascii != 0 )
    {
      delete [] ascii;
    }
  }
}

void SAXEventGun::processingInstruction( const   XMLCh* const    target
                                          , const XMLCh* const    data )
// Receive notification of a processing instruction.
{
  char* ascii_target = 0;
  char* ascii_data   = 0;
  
  ascii_target = XMLString::transcode( target );
  ascii_data   = XMLString::transcode( data );
  SAXEventPI event( ascii_target, ascii_data );
  fTarget->ProcessEvent( &event );
  
  if( ascii_target != 0 )
  {
    delete [] ascii_target;
  }
  if( ascii_data   != 0 )
  {
    delete [] ascii_data;
  }
}

void SAXEventGun::resetDocument()
// Reset the Docuemnt object on its reuse
{
}

void SAXEventGun::setDocumentLocator(const Locator* const)
// Receive a Locator object for document events.
{
}


void SAXEventGun::startDocument()
// Receive notification of the beginning of the document.
{
  SAXEventStartDocument event;
  fTarget->ProcessEvent( &event );
}

void SAXEventGun::startElement( const   XMLCh* const    name
                                 , AttributeList&  attributes )
// Receive notification of the start of an element.
{
  char* ascii = 0;
  ASCIIAttributeList attrs;
  
  ascii = XMLString::transcode( name );
  
  for( unsigned int i = 0; i < attributes.getLength(); i++ ) {
    // Let's transcode the attribute list
    char* name  = XMLString::transcode( attributes.getName(i) );
    char* value = XMLString::transcode( attributes.getValue(i) );
    char* type  = XMLString::transcode( attributes.getType(i) );

    attrs.add( name, value, type );

    delete [] name;
    delete [] value;
    delete [] type;
  }
  
  SAXEventStartElement event( ascii, attrs );
  fTarget->ProcessEvent( &event );
  
  if( ascii != 0 )
  {
    delete [] ascii;
  }
}

//static XMLCh  sEmpty[] = { chLatin_e, chLatin_m, chLatin_p, chLatin_t, chLatin_y, chNull };
InputSource* SAXEventGun::resolveEntity( const   XMLCh* const    // publicId
                                          , const XMLCh* const ) // systemId
// Resolve an external entity.
{
  return 0;
}


void SAXEventGun::error( const SAXParseException& exception )
// Receive notification of a recoverable parser error.
{
  char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );
  
  std::stringstream msgstr;
  
  msgstr    << "error: "
            << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
	
  SAXEventError event( msgstr.str() );
  fTarget->ProcessEvent( &event );
		      		      
  if( publicId != 0 )
  {
    delete [] publicId;
  }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAXEventGun::fatalError( const SAXParseException& exception )
// Report a fatal XML parsing error.
{
  char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );

  std::stringstream msgstr;
  msgstr    << "fatal error: "
            << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
			      
  SAXEventFatalError event( msgstr.str() );
  fTarget->ProcessEvent( &event );
  
  if( publicId != 0 )
  {
    delete [] publicId;
  }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAXEventGun::warning( const SAXParseException& exception )
// Receive notification of a parser warning.
{
  char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );
  
  std::stringstream msgstr;
  msgstr    << "warning: "
            << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
			      
  SAXEventWarning event( msgstr.str() );
  fTarget->ProcessEvent( &event );
  
  if( publicId != 0 )
  {
    delete [] publicId;
  }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAXEventGun::resetErrors()
// Reset the Error handler object on its reuse
{
}

void SAXEventGun::notationDecl( const   XMLCh* const     // name
                                 , const XMLCh* const    // publicId
                                 , const XMLCh* const  ) // systemId
// Receive notification of a notation declaration.
{
}

void SAXEventGun::resetDocType()
// Reset the DTD object on its reuse
{
}

void SAXEventGun::unparsedEntityDecl( const   XMLCh* const    // name
                                       , const XMLCh* const   // publicId
                                       , const XMLCh* const   // systemId
                                       , const XMLCh* const ) // notationName
// Receive notification of an unparsed entity declaration.
{
}

SAXEventGun::SAXEventGun( SAXProcessor* target )
: fTarget( target ), fParser( 0 ), fConfig( 0 )
{
}

SAXEventGun::~SAXEventGun()
{
}

const SAXProcessor* SAXEventGun::Target() const
{
  return fTarget;
}

void SAXEventGun::SetTarget( SAXProcessor* target )
{
  fTarget = target;
}

void SAXEventGun::Configure( ProcessingConfigurator* config )
{
  fConfig = config;
}


