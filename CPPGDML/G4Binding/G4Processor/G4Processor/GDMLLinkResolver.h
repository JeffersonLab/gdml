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
// $Id: GDMLLinkResolver.h,v 1.1 2005/03/02 10:50:37 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef GDML_LINK_RESOLVER_H
#define GDML_LINK_RESOLVER_H 1

#include "Saxana/SAXEventGun.h"

class GDMLLinkResolver : virtual public SAXEventGun
{
public:
  StatusCode Run();

public:
  virtual void characters( const   XMLCh* const    chars, const unsigned int    length );
  // Receive notification of the #PCDATA characters in element content.

  virtual void endDocument();
  // Receive notification of the end of the document.

  virtual void endElement(const XMLCh* const name);
  // Receive notification of the end of an element.

  virtual void ignorableWhitespace( const   XMLCh* const  chars, const unsigned int  length );
  // Receive notification of ignorable whitespace in element content.

  virtual void startDocument();
  // Receive notification of the beginning of the document.

  virtual void startElement( const   XMLCh* const    name,       AttributeList&  attributes  );
  // Receive notification of the start of an element.

  GDMLLinkResolver( SAXProcessor* target );
  ~GDMLLinkResolver();
  
  bool Done()
  {
    return fIsDone;
  }
  
private:
  bool fFound;
  bool fIsDone;
};

#endif // GDML_LINK_RESOLVER_H

