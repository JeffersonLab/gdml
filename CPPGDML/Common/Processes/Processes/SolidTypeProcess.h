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
// $Id: SolidTypeProcess.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SOLIDTYPEPROCESS_H
#define SOLIDTYPEPROCESS_H 1

#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXObjectHandle.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/SolidType.h"

#include <cstdlib>
#include <iostream>

class SolidTypeProcess : public SAXStateProcess
{
public:
  SolidTypeProcess( const ProcessingContext* context = 0 )
  : SAXStateProcess( context ), m_obj( 0 ) {
  }
  
  virtual ~SolidTypeProcess() {
  }
  
  virtual const SAXComponentObject* Build() const {
    return this;
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs )
  {    
    std::string lunit  = attrs.getValue( "lunit" );
    std::string aunit  = attrs.getValue( "aunit" );
    std::string sname   = attrs.getValue( "name" );
    
    SolidType* sobj  = dynamic_cast<SolidType*>( m_obj );
    
    sobj->set_lunit( lunit );
    sobj->set_aunit( aunit );
    sobj->set_name( sname );
  }
  
  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& )
  {
  }
  
  // Analogical to SAX characters callback, it's called for ignorableWhitespace too!
  virtual void Characters( const std::string& )
  {
  }
  
  // Invoked whenever one of the daughter state processes has been popped-out of the state stack
  // The name passed-in as the argument is the name of the XML element for which that's been done
  virtual void StackPopNotify( const std::string& )
  {
  }
  
protected:
  SAXObject* m_obj;
};

#endif // SOLIDTYPEPROCESS_H
