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
// $Id: ExN02DetectorConstruction.cpp,v 1.1 2005/03/02 17:59:25 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo...... 
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
#include "ExN02DetectorConstruction.hh"
#include "ExN02DetectorMessenger.hh"
#include "ExN02ChamberParameterisation.hh"
#include "ExN02MagneticField.hh"
#include "ExN02TrackerSD.hh"

#include "G4Material.hh"
#include "G4Box.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4PVParameterised.hh"
#include "G4SDManager.hh"

#include "G4UserLimits.hh"

#include "G4VisAttributes.hh"
#include "G4Colour.hh"

#include "G4ios.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
ExN02DetectorConstruction::ExN02DetectorConstruction()
:solidWorld(0),  logicWorld(0),  physiWorld(0),
 solidTarget(0), logicTarget(0), physiTarget(0), 
 solidTracker(0),logicTracker(0),physiTracker(0), 
 solidChamber(0),logicChamber(0),physiChamber(0), 
 TargetMater(0), ChamberMater(0),fpMagField(0),
 fWorldLength(0.),  fTargetLength(0.), fTrackerLength(0.),
 NbOfChambers(0) ,  ChamberWidth(0.),  ChamberSpacing(0.)
{
  fpMagField = new ExN02MagneticField();
  detectorMessenger = new ExN02DetectorMessenger(this);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
ExN02DetectorConstruction::~ExN02DetectorConstruction()
{
  delete fpMagField;
  delete detectorMessenger;             
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
G4VPhysicalVolume* ExN02DetectorConstruction::Construct()
{
//--------- Material definition ---------

  G4double a, z;
  G4double density, temperature, pressure;
  G4int nel;

  //Air
  G4Element* N = new G4Element("Nitrogen", "N", z=7., a= 14.01*g/mole);
  G4Element* O = new G4Element("Oxygen"  , "O", z=8., a= 16.00*g/mole);
   
  G4Material* Air = new G4Material("Air", density= 1.29*mg/cm3, nel=2);
  Air->AddElement(N, 70*perCent);
  Air->AddElement(O, 30*perCent);

  //Lead
  G4Material* Pb = 
  new G4Material("Lead", z=82., a= 207.19*g/mole, density= 11.35*g/cm3);
    
  //Xenon gas
  G4Material* Xenon = 
  new G4Material("XenonGas", z=54., a=131.29*g/mole, density= 5.458*mg/cm3,
                 kStateGas, temperature= 293.15*kelvin, pressure= 1*atmosphere);

  // Print all the materials defined.
  //
  G4cout << G4endl << "The materials defined are : " << G4endl << G4endl;
  G4cout << *(G4Material::GetMaterialTable()) << G4endl;

//--------- Sizes of the principal geometrical components (solids)  ---------
  
  NbOfChambers = 5;
  ChamberWidth = 20*cm;
  ChamberSpacing = 80*cm;
  
  fTrackerLength = (NbOfChambers+1)*ChamberSpacing; // Full length of Tracker
  fTargetLength  = 5.0 * cm;                        // Full length of Target
  
  TargetMater  = Pb;
  ChamberMater = Xenon;
  
  fWorldLength= 1.2 *(fTargetLength+fTrackerLength);
   
  G4double targetSize  = 0.5*fTargetLength;    // Half length of the Target  
  G4double trackerSize = 0.5*fTrackerLength;   // Half length of the Tracker
      
//--------- Definitions of Solids, Logical Volumes, Physical Volumes ---------
  
  //------------------------------ 
  // World
  //------------------------------ 

  G4double HalfWorldLength = 0.5*fWorldLength;
  
 solidWorld= new G4Box("world",HalfWorldLength,HalfWorldLength,HalfWorldLength);
 logicWorld= new G4LogicalVolume( solidWorld, Air, "World", 0, 0, 0);
  
  //  Must place the World Physical volume unrotated at (0,0,0).
  // 
  physiWorld = new G4PVPlacement(0,               // no rotation
                                 G4ThreeVector(), // at (0,0,0)
                                 logicWorld,      // its logical volume
				 "World",         // its name
                                 0,               // its mother  volume
                                 false,           // no boolean operations
                                 0);              // no field specific to volume
				 
  //------------------------------ 
  // Target
  //------------------------------
  
  G4ThreeVector positionTarget = G4ThreeVector(0,0,-(targetSize+trackerSize));
   
  solidTarget = new G4Box("target",targetSize,targetSize,targetSize);
  logicTarget = new G4LogicalVolume(solidTarget,TargetMater,"Target",0,0,0);
  physiTarget = new G4PVPlacement(0,               // no rotation
				  positionTarget,  // at (x,y,z)
				  logicTarget,     // its logical volume				  
				  "Target",        // its name
				  logicWorld,      // its mother  volume
				  false,           // no boolean operations
				  0);              // no particular field 

  G4cout << "Target is " << fTargetLength/cm << " cm of " 
         << TargetMater->GetName() << G4endl;

  //------------------------------ 
  // Tracker
  //------------------------------
  
  G4ThreeVector positionTracker = G4ThreeVector(0,0,0);
  
  solidTracker = new G4Box("tracker",trackerSize,trackerSize,trackerSize);
  logicTracker = new G4LogicalVolume(solidTracker , Air, "Tracker",0,0,0);  
  physiTracker = new G4PVPlacement(0,              // no rotation
				  positionTracker, // at (x,y,z)
				  logicTracker,    // its logical volume				  
				  "Tracker",       // its name
				  logicWorld,      // its mother  volume
				  false,           // no boolean operations
				  0);              // no particular field 

  //------------------------------ 
  // Tracker segments
  //------------------------------
  // 
  // An example of Parameterised volumes
  // dummy values for G4Box -- modified by parameterised volume

  solidChamber = new G4Box("chamber", 100*cm, 100*cm, 10*cm); 
  logicChamber = new G4LogicalVolume(solidChamber,ChamberMater,"Chamber",0,0,0);
  
  G4double firstPosition = -trackerSize + 0.5*ChamberWidth;
  G4double firstLength = fTrackerLength/10;
  G4double lastLength  = fTrackerLength;
   
  G4VPVParameterisation* chamberParam = new ExN02ChamberParameterisation(  
			   NbOfChambers,          // NoChambers 
			   firstPosition,         // Z of center of first 
			   ChamberSpacing,        // Z spacing of centers
			   ChamberWidth,          // Width Chamber 
			   firstLength,           // lengthInitial 
			   lastLength);           // lengthFinal
			   
  // dummy value : kZAxis -- modified by parameterised volume
  //
  physiChamber = new G4PVParameterised(
                            "Chamber",       // their name
                            logicChamber,    // their logical volume
                            logicTracker,    // Mother logical volume
			    kZAxis,          // Are placed along this axis 
                            NbOfChambers,    // Number of chambers
                            chamberParam);   // The parametrisation

  G4cout << "There are " << NbOfChambers << " chambers in the tracker region. "
         << "The chambers are " << ChamberWidth/mm << " mm of " 
         << ChamberMater->GetName() << "\n The distance between chamber is "
	 << ChamberSpacing/cm << " cm" << G4endl;
	 
  //------------------------------------------------ 
  // Sensitive detectors
  //------------------------------------------------ 

  G4SDManager* SDman = G4SDManager::GetSDMpointer();

  G4String trackerChamberSDname = "ExN02/TrackerChamberSD";
  ExN02TrackerSD* aTrackerSD = new ExN02TrackerSD( trackerChamberSDname );
  SDman->AddNewDetector( aTrackerSD );
  logicChamber->SetSensitiveDetector( aTrackerSD );

//--------- Visualization attributes -------------------------------

  G4VisAttributes* BoxVisAtt= new G4VisAttributes(G4Colour(1.0,1.0,1.0));
  logicWorld  ->SetVisAttributes(BoxVisAtt);  
  logicTarget ->SetVisAttributes(BoxVisAtt);
  logicTracker->SetVisAttributes(BoxVisAtt);
  
  G4VisAttributes* ChamberVisAtt = new G4VisAttributes(G4Colour(1.0,1.0,0.0));
  logicChamber->SetVisAttributes(ChamberVisAtt);
  
//--------- example of User Limits -------------------------------

  // below is an example of how to set tracking constraints in a given
  // logical volume(see also in N02PhysicsList how to setup the process
  // G4UserSpecialCuts).  
  // Sets a max Step length in the tracker region
  // G4double maxStep = 0.5*ChamberWidth, maxLength = 2*fTrackerLength;
  // G4double maxTime = 0.1*ns, minEkin = 10*MeV;
  // logicTracker->SetUserLimits(new G4UserLimits(maxStep,maxLength,maxTime,
  //                                               minEkin));
  
  return physiWorld;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
void ExN02DetectorConstruction::setTargetMaterial(G4String materialName)
{
  // search the material by its name 
  G4Material* pttoMaterial = G4Material::GetMaterial(materialName);  
  if (pttoMaterial)
     {TargetMater = pttoMaterial;
      logicTarget->SetMaterial(pttoMaterial); 
      G4cout << "\n----> The target is " << fTargetLength/cm << " cm of "
             << materialName << G4endl;
     }             
}
 
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void ExN02DetectorConstruction::setChamberMaterial(G4String materialName)
{
  // search the material by its name 
  G4Material* pttoMaterial = G4Material::GetMaterial(materialName);  
  if (pttoMaterial)
     {ChamberMater = pttoMaterial;
      logicChamber->SetMaterial(pttoMaterial); 
      G4cout << "\n----> The chambers are " << ChamberWidth/cm << " cm of "
             << materialName << G4endl;
     }             
}
 
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
void ExN02DetectorConstruction::SetMagField(G4double fieldValue)
{
  fpMagField->SetFieldValue(fieldValue);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
