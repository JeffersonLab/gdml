//
// $Id: volumeProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_PROCESS_VOLUMEPROCESS_H
#define GDML_PROCESS_VOLUMEPROCESS_H 1

#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/volume.h"

class volumeProcess : public SAXStateProcess
{
  public:
    volumeProcess( const ProcessingContext* context = 0 )
      : SAXStateProcess( context ), m_obj( 0 ) {
    }
  
    virtual ~volumeProcess() {
    }
  
    virtual const SAXComponentObject* Build() const {
      return this;
    }

    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string&,
                               const ASCIIAttributeList& attrs )
    {
      //      std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
      SAXObject** obj = Context()->GetTopObject();
    
      volume* vo = new volume;
    
      vo->set_name( attrs.getValue( "name" ) );
    
      m_obj = vo;
      *obj  = vo;
    }

    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& ) {
      //      std::cout << "PROCESS::END OF TAG  : " << name << " " << std::endl;
    }

    // Analogical to SAX characters callback, it's called for ignorableWhitespace too!
    virtual void Characters( const std::string& ) {
    }
  
    // Invoked whenever one of the daughter state processes has been popped-out of the state stack
    // The name passed-in as the argument is the name of the XML element for which that's been done
    virtual void StackPopNotify( const std::string& name ) {
      SAXObject** so = Context()->GetTopObject();
      volume* vobj = dynamic_cast<volume*>( m_obj );
      vobj->add_content( name, *so );
    }
  
    // The name of the state this object will process
    virtual const std::string& State() const
    {
      static std::string tag = "volume";
      return tag;
    }

  private:
    SAXObject* m_obj;
};

DECLARE_PROCESS_FACTORY(volumeProcess)
    
#endif // GDML_PROCESS_VOLUMEPROCESS_H
