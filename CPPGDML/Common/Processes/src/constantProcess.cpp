//
// $Id: constantProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXObjectHandle.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/define.h"

#include <cstdlib>
#include <iostream>

class constantProcess : public SAXStateProcess
{
public:
  constantProcess( const ProcessingContext* context = 0 )
  : SAXStateProcess( context ) {
  }
  
  virtual ~constantProcess() {
  }
  
  virtual const SAXComponentObject* Build() const {
    return this;
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs ) {    
    //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
    
    std::string cname  = attrs.getValue( "name" );
    std::string cvalue = attrs.getValue( "value" );

    SAXObject** obj = Context()->GetTopObject();
    *obj = new define::constant;
    define::constant* constant_element = dynamic_cast<define::constant*>(*obj);
    constant_element->set_name( cname );
    constant_element->set_value( cvalue );
  }
  
  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& name ) {
    //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
    try
    {
      SAXObject** obj = Context()->GetTopObject();
      define::constant* saxobj = dynamic_cast<define::constant*>( *obj );
      
      if( saxobj != 0 )
      {
        //std::cout << "PROCESS END OF TAG:: Constant " << saxobj->get_name() << " looks OK" << std::endl;
        ;
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
  
  // The name of the state this object will process
  virtual const std::string& State() const {
    static std::string tag = "constant";
    return tag;
  }
};

DECLARE_PROCESS_FACTORY(constantProcess)

