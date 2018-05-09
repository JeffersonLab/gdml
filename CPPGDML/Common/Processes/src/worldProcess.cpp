//
#include "Processes/ReferenceTypeProcess.h"

#include "Schema/setup.h"

#include <cstdlib>
#include <iostream>

class worldProcess : public ReferenceTypeProcess
{
  public:
    worldProcess( const ProcessingContext* context = 0 )
      : ReferenceTypeProcess( context ) {
    }
  
    virtual ~worldProcess() {
    }
  
    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string& name,
                               const ASCIIAttributeList& attrs )
    {    
      SAXObject** obj = Context()->GetTopObject();
    
      setup::world* wo = new setup::world;
    
      *obj  = wo;
      m_obj = wo;
    
      ReferenceTypeProcess::StartElement( name, attrs );
    }
  
    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& name ) {
      ReferenceTypeProcess::EndElement( name );
    }
  
    // The name of the state this object will process
    virtual const std::string& State() const {
      static std::string tag = "world";
      return tag;
    }
};

DECLARE_PROCESS_FACTORY(worldProcess)

  
