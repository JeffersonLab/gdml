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
// $Id: QuantityTypeProcess.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_3_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef QUANTITYTYPEPROCESS_H
#define QUANTITYTYPEPROCESS_H 1

#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXObjectHandle.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/QuantityType.h"

#include <cstdlib>
#include <iostream>

class QuantityTypeProcess : public SAXStateProcess
{
public:
  QuantityTypeProcess( const ProcessingContext* context = 0 )
  : SAXStateProcess( context ) {
  }
  
  virtual ~QuantityTypeProcess() {
  }
  
  virtual const SAXComponentObject* Build() const {
    return this;
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs ) {    
    QuantityType* qobj = dynamic_cast<QuantityType*>( m_obj );
    
    //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
    
    std::string qunit  = attrs.getValue( "unit" );
    std::string qtype  = attrs.getValue( "type" );
    std::string qvalue = attrs.getValue( "value" );
    
    qobj->set_unit( qunit );
    qobj->set_type( qtype );
    qobj->set_value( qvalue );
  }
  
  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& name )
  {
    //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
    try {
      QuantityType* saxobj = dynamic_cast<QuantityType*>( m_obj );
      
      if( saxobj != 0 )
      {
      //  std::cout << "PROCESS END OF TAG:: " << name
      //            << saxobj->get_type() << ": "
      //            << saxobj->get_value() << "["
      //            << saxobj->get_unit() << "]"                  
      //            << " looks OK" << std::endl;
      }
      else
      {
        std::cerr << "PROCESS END OF TAG:: GOT ZERO DATA POINTER! " << std::endl;
      }
    } catch( ... ) {
      std::cerr << "PROCESS END OF TAG " << name << " ERROR: "
                << " Cannot cast properly the data object!" << std::endl;
    }
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

#endif // QUANTITYTYPEPROCESS_H
