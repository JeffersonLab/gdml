// -*- C++ -*-
// $Id: ParameterisedPlacementTypeProcess.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_7_0 $
#ifndef GDML_PROCESS_PARAMETERISEDPLACEMENTTYPEPROCESS_H
#define GDML_PROCESS_PARAMETERISEDPLACEMENTTYPEPROCESS_H 1

#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/ParameterisedPlacementType.h"
#include "Schema/ParameterisationAlgorithmType.h"
#include "Schema/parameterised_position_size.h"

class ParameterisedPlacementTypeProcess : public SAXStateProcess
{
public:
  ParameterisedPlacementTypeProcess( const ProcessingContext* context = 0 )
  : SAXStateProcess( context ) {
  }
  
  virtual ~ParameterisedPlacementTypeProcess() {
  }
  
  virtual const SAXComponentObject* Build() const {
    return this;
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs) 
  {
    //????????????????
    //    std::string numb  = attrs.getValue( "number" );
    //    ParameterisedPlacementType* sobj  = dynamic_cast<ParameterisedPlacementType*>( m_obj );
    //    sobj->set_number(numb);
  }

  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& ) {
  }

  // Analogical to SAX characters callback, it's called for ignorableWhitespace too!
  virtual void Characters( const std::string& ) {
  }
  
  // Invoked whenever one of the daughter state processes has been popped-out of the state stack
  // The name passed-in as the argument is the name of the XML element for which that's been done
  virtual void StackPopNotify( const std::string& name ) {
    SAXObject** so = Context()->GetTopObject();
    ParameterisedPlacementType* sptobj = dynamic_cast<ParameterisedPlacementType*>( m_obj );

    sptobj->add_content( name, *so );

    //    std::cout << "PARAMETERISED PLACEMENT PROCESS NOTIFY GOT: " << name << std::endl;
  }

protected:
  SAXObject* m_obj;
};

#endif // GDML_PROCESS_PARAMETERISEDPLACEMENTTYPEPROCESS_H
