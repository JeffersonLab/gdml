#include <stdexcept>

#include "globals.hh"

#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIsession.hh"
#include "G4TransportationManager.hh"

#include "gogdmlDetectorConstruction.h"
#include "gogdmlPhysicsList.h"
#include "gogdmlPrimaryGeneratorAction.h"

//g4 writer
#include "G4Writer/G4GDMLWriter.h"

int main(int argc, char** argv)
{
  // Construct the default run manager
  G4RunManager* runManager = new G4RunManager;

  std::string filename("geo.gdml");
  if (argc>1) filename = argv[1];

  // set mandatory initialization classes
  runManager->SetUserInitialization(new gogdmlDetectorConstruction(filename));
  runManager->SetUserInitialization(new gogdmlPhysicsList);

  // set mandatory user action class
  runManager->SetUserAction(new gogdmlPrimaryGeneratorAction);

  // Initialize G4 kernel
  runManager->Initialize();  
  
  // get the pointer to the UI manager and set verbosities
  G4UImanager* UI = G4UImanager::GetUIpointer();  
  UI->ApplyCommand("/control/execute run.mac"); 

  // start a run
  int numberOfEvent = 1;
  runManager->BeamOn(numberOfEvent);

  // job termination
  delete runManager;
  
  return 0;
}


