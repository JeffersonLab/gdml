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
// $Id: SAX2EventGun.cpp,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/framework/XMLPScanToken.hpp>
#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>
#include <xercesc/util/XMLString.hpp>

//#include <xercesc/parsers/SAXParser.hpp>
//#include <xercesc/sax/AttributeList.hpp>
//#include <xercesc/sax/SAXParseException.hpp>


#include "Saxana/SAXProcessor.h"
#include "Saxana/SAXEvents.h"
#include "Saxana/ASCIIAttributeList.h"
#include "Saxana/ProcessingConfigurator.h"

#include "Saxana/SAX2EventGun.h"

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

class Pimpl
{
  public:
    SAX2XMLReader*          fParser;
    ProcessingConfigurator* fConfig;
};

StatusCode SAX2EventGun::Run()
{
  StatusCode sc;

//   fParser = new xercesc::SAXParser();

  fPimpl->fParser = XMLReaderFactory::createXMLReader();
  
  fPimpl->fParser->setContentHandler( this );
  fPimpl->fParser->setErrorHandler( this );
//   fParser->setValidationScheme( SAXParser::Val_Always );
//   fParser->setDoNamespaces(true);
//   fParser->setDoSchema(true);
//   fParser->setValidationSchemaFullChecking(true);

  // We go for full schema checking here at the moment,
  // NOTE! For auto or never the settings must be different!
  //       This is SAX2 spec. watch the valid options here!
  fPimpl->fParser->setFeature( XMLUni::fgSAX2CoreValidation, true  );
  fPimpl->fParser->setFeature( XMLUni::fgXercesDynamic,      false );
  // The rest is fine
  fPimpl->fParser->setFeature( XMLUni::fgSAX2CoreNameSpaces       , true );
  fPimpl->fParser->setFeature( XMLUni::fgXercesSchema             , true );
  fPimpl->fParser->setFeature( XMLUni::fgXercesSchemaFullChecking , true );
  fPimpl->fParser->setFeature( XMLUni::fgSAX2CoreNameSpacePrefixes, true );

  const std::string& uri = fPimpl->fConfig->URI();
  const char* xmlfile = uri.c_str();
  
  try
  {
    fPimpl->fParser->parse( xmlfile );
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

void SAX2EventGun::characters( const   XMLCh* const    chars,
                              const unsigned int    length )
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

void SAX2EventGun::endDocument()
// Receive notification of the end of the document.
{
  SAXEventEndDocument event;
  fTarget->ProcessEvent( &event );
}

void SAX2EventGun::endElement( const XMLCh* const /*uri*/,
                               const XMLCh* const /*localname*/,
                               const XMLCh* const qname )
// Receive notification of the end of an element.
{
  // We ignore in this implementation the XML namespaces, for the time being
  
  const char* ascii = 0;
  
  ascii = XMLString::transcode( qname );
  SAXEventEndElement event( ascii );
  fTarget->ProcessEvent( &event );
  
  if( ascii != 0 )
  {
    delete [] ascii;
  }
}

void SAX2EventGun::ignorableWhitespace( const   XMLCh* const    chars
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

void SAX2EventGun::processingInstruction( const   XMLCh* const    target
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

void SAX2EventGun::resetDocument()
// Reset the Docuemnt object on its reuse
{
}

void SAX2EventGun::setDocumentLocator(const Locator* const)
// Receive a Locator object for document events.
{
}


void SAX2EventGun::startDocument()
// Receive notification of the beginning of the document.
{
  SAXEventStartDocument event;
  fTarget->ProcessEvent( &event );
}

void SAX2EventGun::startElement( const XMLCh* const /*uri*/,
                                 const XMLCh* const /*localname*/,
                                 const XMLCh* const qname,                                 
                                 const Attributes&  attributes )
// Receive notification of the start of an element.
{
  // We ignore in this implementation the XML namespaces, for the time being

  char* ascii = 0;
  ASCIIAttributeList attrs;
  
  ascii = XMLString::transcode( qname );
  
  for( unsigned int i = 0; i < attributes.getLength(); i++ ) {
    // Let's transcode the attribute list
    char* name  = XMLString::transcode( attributes.getQName(i) );
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
InputSource* SAX2EventGun::resolveEntity( const   XMLCh* const    // publicId
                                          , const XMLCh* const ) // systemId
// Resolve an external entity.
{
  // Not used yet
  return 0;
}


void SAX2EventGun::error( const SAXParseException& exception )
// Receive notification of a recoverable parser error.
{
//   char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );
  
  std::stringstream msgstr;
  
  msgstr    << "error: "
//             << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
	
  SAXEventError event( msgstr.str() );
  fTarget->ProcessEvent( &event );
		      		      
//   if( publicId != 0 )
//   {
//     delete [] publicId;
//   }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAX2EventGun::fatalError( const SAXParseException& exception )
// Report a fatal XML parsing error.
{
//   char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );

  std::stringstream msgstr;
  msgstr    << "fatal error: "
//             << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
			      
  SAXEventFatalError event( msgstr.str() );
  fTarget->ProcessEvent( &event );
  
//   if( publicId != 0 )
//   {
//     delete [] publicId;
//   }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAX2EventGun::warning( const SAXParseException& exception )
// Receive notification of a parser warning.
{
//   char* publicId = XMLString::transcode( exception.getPublicId() );
  char* systemId = XMLString::transcode( exception.getSystemId() );
  char* msg      = XMLString::transcode( exception.getMessage()  );
  
  std::stringstream msgstr;
  msgstr    << "warning: "
//             << "publicId: "  << publicId
	          << " systemId: " << systemId
		        << " line: "     << exception.getLineNumber()
			      << " column: "   << exception.getColumnNumber()
			      << "\n"
			      << msg;
			      
  SAXEventWarning event( msgstr.str() );
  fTarget->ProcessEvent( &event );
  
//   if( publicId != 0 )
//   {
//     delete [] publicId;
//   }
  if( systemId != 0 )
  {
    delete [] systemId;
  }
  if( msg != 0 )
  {
    delete [] msg;
  }
}

void SAX2EventGun::resetErrors()
// Reset the Error handler object on its reuse
{
}

void SAX2EventGun::notationDecl( const   XMLCh* const     // name
                                 , const XMLCh* const    // publicId
                                 , const XMLCh* const  ) // systemId
// Receive notification of a notation declaration.
{
  ;
}

void SAX2EventGun::resetDocType()
// Reset the DTD object on its reuse
{
  ;
}

void SAX2EventGun::unparsedEntityDecl( const   XMLCh* const    // name
                                       , const XMLCh* const   // publicId
                                       , const XMLCh* const   // systemId
                                       , const XMLCh* const ) // notationName
// Receive notification of an unparsed entity declaration.
{
  ;
}

SAX2EventGun::SAX2EventGun( SAXProcessor* target )
// : fTarget( target ), fParser( 0 ), fConfig( 0 )
 : fTarget( target ), fPimpl( new Pimpl() )
{
  fPimpl->fParser = 0;
  fPimpl->fConfig = 0;
}

SAX2EventGun::~SAX2EventGun()
{
  delete fPimpl;
}

const SAXProcessor* SAX2EventGun::Target() const
{
  return fTarget;
}

void SAX2EventGun::SetTarget( SAXProcessor* target )
{
  fTarget = target;
}

void SAX2EventGun::Configure( ProcessingConfigurator* config )
{
  fPimpl->fConfig = config;
}


