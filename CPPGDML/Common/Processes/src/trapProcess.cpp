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
// $Id: trapProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Processes/SolidTypeProcess.h"

#include "Schema/trap.h"

class trapProcess : public SolidTypeProcess
{
  public:
    trapProcess( const ProcessingContext* context = 0 )
      : SolidTypeProcess( context ) {
    }

    virtual ~trapProcess() {
    }

    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string& name,
                               const ASCIIAttributeList& attrs )
    {
      //      std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
    
      SAXObject** obj = Context()->GetTopObject();

      trap* trap_element = new trap;
    
      trap_element->set_x1( attrs.getValue( "x1" ) );
      trap_element->set_x2( attrs.getValue( "x2" ) );
      trap_element->set_x3( attrs.getValue( "x3" ) );
      trap_element->set_x4( attrs.getValue( "x4" ) );
      trap_element->set_y1( attrs.getValue( "y1" ) );
      trap_element->set_y2( attrs.getValue( "y2" ) );
      trap_element->set_z( attrs.getValue( "z" ) );
      trap_element->set_theta( attrs.getValue( "theta" ) );
      trap_element->set_phi( attrs.getValue( "phi" ) );
      trap_element->set_alpha1( attrs.getValue( "alpha1" ) );
      trap_element->set_alpha2( attrs.getValue( "alpha2" ) );

      m_obj = trap_element;
      *obj  = trap_element;
    
      SolidTypeProcess::StartElement( name, attrs );
    }

    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& name ) {
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
      static std::string tag = "trap";
      return tag;
    }
};

DECLARE_PROCESS_FACTORY(trapProcess)
