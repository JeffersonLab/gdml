// -*- C++ -*-
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
// $Id: SAX2EventGun.h,v 1.4 2005/09/08 20:49:46 jmccormi Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
//
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SAX2_EVENT_GUN_H
#define SAX2_EVENT_GUN_H 1

#include <xercesc/sax2/DefaultHandler.hpp>

#include "StatusCode.h"

#if defined( XERCES_HAS_CPP_NAMESPACE )
using namespace xercesc;
#endif

class SAXProcessor;
class ProcessingConfigurator;
class GDMLEntityResolver;

class Pimpl; // FIXME!!!!

class SAX2EventGun : public xercesc::DefaultHandler
{

public:
  StatusCode Run();

public:
  /// Receive notification of the #PCDATA characters in element content.
  void characters( const   XMLCh* const    chars, const unsigned int    length );

  /// Receive notification of the end of the document.
  void endDocument();

  /// Receive notification of the end of an element.
  void endElement( const XMLCh* const uri,
		   const XMLCh* const localname,
		   const XMLCh* const qname );

  /// Receive notification of ignorable whitespace in element content.
  void ignorableWhitespace( const XMLCh* const  chars,
			    const unsigned int  length );

  /// Receive notification of a processing instruction.
  void processingInstruction( const XMLCh* const  target,
			      const XMLCh* const  data );

  /// Reset the Docuemnt object on its reuse
  void resetDocument();

  /// Receive a Locator object for document events.
  void setDocumentLocator( const Locator* const locator );

  /// Receive notification of the beginning of the document.
  void startDocument();

  /// Receive notification of the start of an element.
  void startElement( const XMLCh* const uri,
		     const XMLCh* const localname,
		     const XMLCh* const qname,
		     const Attributes&  attributes  );

  /// Resolve an external entity.
  /*  InputSource* resolveEntity( const XMLCh* const publicId,
      const XMLCh* const systemId );*/

  /// Receive notification of a recoverable parser error.
  void error(const SAXParseException& exception);

  /// Report a fatal XML parsing error.
  void fatalError(const SAXParseException& exception);

  /// Receive notification of a parser warning.
  void warning(const SAXParseException& exception);

  /// Reset the Error handler object on its reuse
  void resetErrors();

  /// Receive notification of a notation declaration.
  void notationDecl( const XMLCh* const name,
		     const XMLCh* const publicId,
		     const XMLCh* const systemId );

  /// Reset the DTD object on its reuse
  void resetDocType();

  /// Receive notification of an unparsed entity declaration.
  void unparsedEntityDecl( const XMLCh* const name,
			   const XMLCh* const publicId,
			   const XMLCh* const systemId,
			   const XMLCh* const notationName );

  /// Constructor
  SAX2EventGun( SAXProcessor* target );

  /// Destructor
  ~SAX2EventGun();

  /// Return target
  const SAXProcessor*    Target() const;

  /// Set target
  void SetTarget( SAXProcessor* target );

  /// COnfigure the SAX2 parser
  void Configure( ProcessingConfigurator* config );

private:

  void SetupSchemaValidation();

private:
  SAXProcessor*           fTarget; ///< The consumer of the SAX2 events
  GDMLEntityResolver* fResolver; // entity resolver

protected:
  Pimpl* fPimpl;
};

#endif // SAX2_EVENT_GUN_H

