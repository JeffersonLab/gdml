#include "GeantinoPhysicsList.h"
#include "G4ParticleTypes.hh"

GeantinoPhysicsList::GeantinoPhysicsList()
{;}

GeantinoPhysicsList::~GeantinoPhysicsList()
{;}

void GeantinoPhysicsList::ConstructParticle()
{
  G4Geantino::GeantinoDefinition();
}

void GeantinoPhysicsList::ConstructProcess()
{
  AddTransportation();
}

void GeantinoPhysicsList::SetCuts()
{
  // suppress error messages even in case e/gamma/proton do not exist            
  G4int temp = GetVerboseLevel();
  SetVerboseLevel(0);                                                           
  //  " G4VUserPhysicsList::SetCutsWithDefault" method sets 
  //   the default cut value for all particle types 
  SetCutsWithDefault();   

  // Retrieve verbose level
  SetVerboseLevel(temp);  
}

