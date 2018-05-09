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
// $Id: unionSubscriber.cpp,v 1.1 2005/03/02 10:50:37 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "G4Subscribers/BooleanSolidTypeSubscriber.h"

#include "Schema/boolean_union.h"

#include "G4UnionSolid.hh"

class unionSubscriber : public BooleanSolidTypeSubscriber
{
  public:
    unionSubscriber() {
      Subscribe( "union" );
    }
    virtual ~unionSubscriber() {
    }
  
    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
    
      const boolean_union* bu = dynamic_cast<const boolean_union*>( object );
    
      // First, let the base class extract the data
      BooleanSolidTypeSubscriber::Activate( object );
    
      // At this moment both constituent solids are ready
      // Let's check whether we need to apply any transformations
      G4VSolid* solid_union = 0;
      bool useTransform = false;
      G4ThreeVector translat;
      G4RotationMatrix transrot;
    
      if( m_translation != 0 ) {
        translat = *m_translation;
        useTransform = true;
      }
    
      if( m_rotation != 0 ) {
        transrot = *m_rotation;
        useTransform = true;
      }

      if( useTransform ) {    
        G4Transform3D transform( transrot, translat );
        solid_union = new G4UnionSolid( bu->get_name(), m_first, m_second, transform );
      } else {      
        solid_union = new G4UnionSolid( bu->get_name(), m_first, m_second );
      }
    
      GDMLProcessor::GetInstance()->AddSolid( bu->get_name(), solid_union );
      delete object;
    }
};

DECLARE_SUBSCRIBER_FACTORY(unionSubscriber)
