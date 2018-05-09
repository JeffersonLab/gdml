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
// --------------------------------------------------------------
// Comments
//             G.GUERRIERI - 26.06.2005
// --------------------------------------------------------------
//
#include "Processes/SolidTypeProcess.h"

#include "Schema/ellipsoid.h"

class ellipsoidProcess : public SolidTypeProcess
{
  public:
    ellipsoidProcess( const ProcessingContext* context = 0 )
      : SolidTypeProcess( context ) {
    }

    virtual ~ellipsoidProcess() {
    }

    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string& name, const ASCIIAttributeList& attrs )
    {
      //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
    
      SAXObject** obj = Context()->GetTopObject();

      ellipsoid* ellipsoid_element = new ellipsoid;
    
      ellipsoid_element->set_ax( attrs.getValue( "ax" ) );
      ellipsoid_element->set_by( attrs.getValue( "by" ) );
      ellipsoid_element->set_cz( attrs.getValue( "cz" ) );
      ellipsoid_element->set_zcut1( attrs.getValue( "zcut1" ) );
      ellipsoid_element->set_zcut2( attrs.getValue( "zcut2" ) );

      m_obj = ellipsoid_element;
      *obj  = ellipsoid_element;
    
      SolidTypeProcess::StartElement( name, attrs );
    }

    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& name )
    {
      //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
      SolidTypeProcess::EndElement( name );
    }

    // Invoked whenever one of the daughter state processes has been popped-out of the state stack
    // The name passed-in as the argument is the name of the XML element for which that's been done
    virtual void StackPopNotify( const std::string& name ) {
      //std::cout << "PROCESS::" << name << " NOTIFIED AFTER THE TAG: " << name << std::endl;
      SolidTypeProcess::StackPopNotify( name );
    }

    // The name of the state this object will process
    virtual const std::string& State() const
    {
      static std::string tag = "ellipsoid";
      return tag;
    }
};

DECLARE_PROCESS_FACTORY(ellipsoidProcess)
