// $Id: DetConstruction.cpp,v 1.1 2005/02/08 16:59:58 witoldp Exp $
// Include files

// local
#include "DetConstruction.h"
#include "G4PVPlacement.hh"

//-----------------------------------------------------------------------------
// Implementation file for class : DetConstruction
//
// 2005-02-07 : Witold POKORSKI
//-----------------------------------------------------------------------------

G4VPhysicalVolume* DetConstruction::Construct() 
{ 
  G4VPhysicalVolume* pvworld = new G4PVPlacement(0,G4ThreeVector(),
                                        world,"World",0,false,0);

  return pvworld; 
};  
