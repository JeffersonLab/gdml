//
#include <stdexcept>


#include "ExN02DetectorConstruction.hh"
#include "ExN02PhysicsList.hh"
#include "ExN02PrimaryGeneratorAction.hh"
#include "ExN02RunAction.hh"
#include "ExN02EventAction.hh"
#include "ExN02SteppingAction.hh"
#include "ExN02SteppingVerbose.hh"

#include "G4RunManager.hh"
#include "G4TransportationManager.hh"
#include "G4UImanager.hh"
#include "G4UIterminal.hh"
#include "G4UItcsh.hh"
#include "G4SolidStore.hh"
#include "G4Box.hh"
#include "G4Sphere.hh"

#ifdef G4VIS_USE
#include "ExN02VisManager.hh"
#endif

//g4 writer
#include "G4Writer/G4GDMLWriter.h"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

int main(int argc,char** argv) {

  //my Verbose output class
  G4VSteppingVerbose::SetInstance(new ExN02SteppingVerbose);
  
  // Run manager
  G4RunManager * runManager = new G4RunManager;

  // UserInitialization classes (mandatory)

  runManager->SetUserInitialization(new ExN02DetectorConstruction);
  //  runManager->SetUserInitialization(new ExN04DetectorConstruction);

  runManager->SetUserInitialization(new ExN02PhysicsList);
  
#ifdef G4VIS_USE
  // Visualization, if you choose to have it!
  G4VisManager* visManager = new ExN02VisManager;
  visManager->Initialize();
#endif
   
  // UserAction classes
  //  runManager->SetUserAction(new ExN02PrimaryGeneratorAction(ExN02detector));
  runManager->SetUserAction(new ExN02RunAction);  
  runManager->SetUserAction(new ExN02EventAction);
  runManager->SetUserAction(new ExN02SteppingAction);

  //Initialize G4 kernel
  runManager->Initialize();

  //scaning geometry tree
  G4VPhysicalVolume* g4wv = G4TransportationManager::GetTransportationManager()->
    GetNavigatorForTracking()->GetWorldVolume();
  
  G4GDMLWriter g4writer("../../../GDMLSchema/gdml.xsd", "geo.gdml");

  try
  {
    g4writer.DumpGeometryInfo(g4wv);
  }
  catch(std::logic_error &lerr)
  {
    std::cout << "Caught an exception: " 
              << lerr.what () << std::endl;
  }
  
  ///////////////////////////////

  //get the pointer to the User Interface manager 
  G4UImanager * UI = G4UImanager::GetUIpointer();  

  if(argc==1)
  // Define (G)UI terminal for interactive mode  
  { 
    // G4UIterminal is a (dumb) terminal.
    G4UIsession * session = 0;
#ifdef G4UI_USE_TCSH
      session = new G4UIterminal(new G4UItcsh);      
#else
      session = new G4UIterminal();
#endif    

    UI->ApplyCommand("/control/execute vis.mac");    
    session->SessionStart();
    delete session;
  }
  else
  // Batch mode
  { 
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UI->ApplyCommand(command+fileName);
  }

#ifdef G4VIS_USE
  delete visManager;
#endif
  delete runManager;

  return 0;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......


