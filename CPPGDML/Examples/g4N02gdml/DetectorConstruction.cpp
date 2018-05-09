// 
#include "DetectorConstruction.hh"
#include "ExN02ChamberParameterisation.hh"

#include "G4Material.hh"
#include "G4Box.hh"
#include "G4Orb.hh"
#include "G4Sphere.hh"
#include "G4Tubs.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4PVDivision.hh"
#include "G4PVParameterised.hh"
#include "G4SDManager.hh"
#include "G4ReflectedSolid.hh"
#include "G4UserLimits.hh"

#include "G4VisAttributes.hh"
#include "G4Colour.hh"

#include "G4ios.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
DetectorConstruction::DetectorConstruction()
{}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
DetectorConstruction::~DetectorConstruction()
{
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
G4VPhysicalVolume* DetectorConstruction::Construct()
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

//--------- Definitions of Solids, Logical Volumes, Physical Volumes ---------
  
  //------------------------------ 
  // World
  //------------------------------ 

  G4VSolid*  solidWorld= new G4Box("world",5000,5000,5000);
  G4LogicalVolume* logicWorld= new G4LogicalVolume( solidWorld, Air, "World", 0, 0, 0);
  
  //  Must place the World Physical volume unrotated at (0,0,0).
  // 
  G4VPhysicalVolume* physiWorld = new G4PVPlacement(0,               // no rotation
                                 G4ThreeVector(), // at (0,0,0)
                                 logicWorld,      // its logical volume
                                 "World",         // its name
                                 0,               // its mother  volume
                                 false,           // no boolean operations
                                 0);              // no field specific to volume

  G4ThreeVector positionTracker = G4ThreeVector(0,0,0);
  
  G4VSolid* solidSubW = new G4Tubs("subw",0,3000,3000,0,6.3);
  G4LogicalVolume* logicSubW = new G4LogicalVolume(solidSubW , Air, "SubW",0,0,0);  

  G4VPhysicalVolume* physiSubW = new G4PVPlacement(0,              // no rotation
                                                   positionTracker, // at (x,y,z)
                                                   logicSubW,    // its logical volume	
                                                   "subW",       // its name
                                                   logicWorld,      // its mother  volume
                                                   false,           // no boolean operations
                                                   0);              // no particular field 
  
  G4VSolid* solidDet = new G4Tubs("det",0,1000,1000, 0, 6.5);
  G4LogicalVolume* logicDet = new G4LogicalVolume(solidDet , Air, "Detector",0,0,0);  

  G4VPhysicalVolume* physiDet = new G4PVPlacement(0,              // no rotation
                                                  positionTracker, // at (x,y,z)
                                                  logicDet,    // its logical volume	
                                                  "det",       // its name
                                                  logicSubW,      // its mother  volume
                                                  false,           // no boolean operations
                                                  0);              // no particular field 


  G4VSolid* solidTracker = new G4Tubs("tracker",0,500,500,0,6.3);
  G4LogicalVolume* logicTracker = new G4LogicalVolume(solidTracker , Air, "Tracker",0,0,0);  
    
  
  G4PVDivision* div = new G4PVDivision("div",
                                       logicTracker, logicDet, kZAxis, 3, 100.0, 0.0);
 
  return physiWorld;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
 
