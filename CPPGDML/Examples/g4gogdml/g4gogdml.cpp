#include <stdexcept>

#include "globals.hh"

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIsession.hh"
#include "G4UIterminal.hh"
#include "G4UItcsh.hh"
#include "MyVisManager.hh"
#include "G4TransportationManager.hh"

#include "gogdmlDetectorConstruction.h"
#include "gogdmlPhysicsList.h"
#include "gogdmlPrimaryGeneratorAction.h"

//g4 writer
#include "G4Writer/G4GDMLWriter.h"


int main()
{
  // Construct the default run manager
  G4RunManager* runManager = new G4RunManager;
  //
  G4VisManager* visManager = new MyVisManager;
  visManager->Initialize();

  // set mandatory initialization classes
  runManager->SetUserInitialization(new gogdmlDetectorConstruction);
  runManager->SetUserInitialization(new gogdmlPhysicsList);

  // set mandatory user action class
  runManager->SetUserAction(new gogdmlPrimaryGeneratorAction);

  // Initialize G4 kernel
  runManager->Initialize();  

  /*
  //scaning geometry tree
  G4VPhysicalVolume* g4wv = G4TransportationManager::GetTransportationManager()->
    GetNavigatorForTracking()->GetWorldVolume();
  
  G4GDMLWriter g4writer("../../../GDMLSchema/gdml.xsd", "g4writertest.gdml");
  
  try
  {
    g4writer.DumpGeometryInfo(g4wv);
  }
  catch(std::logic_error &lerr)
  {
    std::cout << "Caught an exception: " 
              << lerr.what () << std::endl;
  }
  */
  
  // get the pointer to the UI manager and set verbosities
  G4UImanager* UI = G4UImanager::GetUIpointer();

  // G4UIterminal is a (dumb) terminal.
  G4UIsession * session = new G4UIterminal(new G4UItcsh);

  //  UI->ApplyCommand("/control/execute vis.mac"); 

  UI->ApplyCommand("/run/verbose 0");
  UI->ApplyCommand("/event/verbose 0");
  UI->ApplyCommand("/tracking/verbose 1");

  // start a run
  int numberOfEvent = 1;
  runManager->BeamOn(numberOfEvent);

  session->SessionStart();

  // job termination
  delete runManager;
  delete visManager;
  
  return 0;
}


