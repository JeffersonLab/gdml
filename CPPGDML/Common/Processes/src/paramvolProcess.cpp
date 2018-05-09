//
// $Id: paramvolProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_8_0 $
#include "Processes/ParameterisedPlacementTypeProcess.h"

#include "Schema/paramvol.h"

class paramvolProcess : public ParameterisedPlacementTypeProcess
{
public:
  paramvolProcess( const ProcessingContext* context = 0 )
  : ParameterisedPlacementTypeProcess( context ) {
  }

  virtual ~paramvolProcess() {
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs) {
    //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;

    SAXObject** obj = Context()->GetTopObject();

    paramvol* paramvol_lement = new paramvol;

    m_obj = paramvol_lement;
    *obj  = paramvol_lement;

    
    std::string numb  = attrs.getValue( "ncopies" );
    
    paramvol_lement->set_number(numb);

  }

  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& ) {
    //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
  }

  // Invoked whenever one of the daughter state processes has been popped-out of the state stack
  // The name passed-in as the argument is the name of the XML element for which that's been done
  virtual void StackPopNotify( const std::string& name ) {
    //std::cout << "PROCESS::paramvol NOTIFIED AFTER THE TAG: " << name << std::endl;
    ParameterisedPlacementTypeProcess::StackPopNotify( name );
  }

  // The name of the state this object will process
  virtual const std::string& State() const
  {
    static std::string tag = "paramvol";
    return tag;
  }
};

DECLARE_PROCESS_FACTORY(paramvolProcess)
