//
// $Id: dimensionsProcess.cpp,v 1.2 2005/05/26 20:51:59 jmccormi Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
#include "Processes/DimensionsTypeProcess.h"

#include "Schema/dimensions.h"

class dimensionsProcess : public DimensionsTypeProcess
{
public:
  dimensionsProcess( const ProcessingContext* context = 0 )
  : DimensionsTypeProcess( context ) {
  }

  virtual ~dimensionsProcess() {
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList&) {
    //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;

    SAXObject** obj = Context()->GetTopObject();

    dimensions* dimensions_lement = new dimensions;

    m_obj = dimensions_lement;
    *obj  = dimensions_lement;
    
  }

  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& ) {
    //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
  }

  // Invoked whenever one of the daughter state processes has been popped-out of the state stack
  // The name passed-in as the argument is the name of the XML element for which that's been done
  virtual void StackPopNotify( const std::string& name ) {
    //std::cout << "PROCESS::dimensions NOTIFIED AFTER THE TAG: " << name << std::endl;
    DimensionsTypeProcess::StackPopNotify( name );
  }

  // The name of the state this object will process
  virtual const std::string& State() const
  {
    static std::string tag = "dimensions";
    return tag;
  }
};

DECLARE_PROCESS_FACTORY(dimensionsProcess)
