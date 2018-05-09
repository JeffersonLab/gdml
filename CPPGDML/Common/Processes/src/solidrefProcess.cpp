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
// $Id: solidrefProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Processes/ReferenceTypeProcess.h"

#include "Schema/VolumeType.h"

#include <cstdlib>
#include <iostream>

class solidrefProcess : public ReferenceTypeProcess
{
  public:
    solidrefProcess( const ProcessingContext* context = 0 )
      : ReferenceTypeProcess( context ) {
    }
  
    virtual ~solidrefProcess() {
    }
  
    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string& name, const ASCIIAttributeList& attrs )
    {    
      SAXObject** obj = Context()->GetTopObject();
    
      VolumeType::solidref* so = new VolumeType::solidref;
    
      *obj  = so;
      m_obj = so;
    
      ReferenceTypeProcess::StartElement( name, attrs );
    }
  
    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& name ) {
      ReferenceTypeProcess::EndElement( name );
    }
  
    // The name of the state this object will process
    virtual const std::string& State() const {
      static std::string tag = "solidref";
      return tag;
    }
};

DECLARE_PROCESS_FACTORY(solidrefProcess)

  
