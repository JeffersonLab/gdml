#ifndef GeantinoPhysicsList_h
#define GeantinoPhysicsList_h 1

#include "G4VUserPhysicsList.hh"
#include "globals.hh"

class GeantinoPhysicsList: public G4VUserPhysicsList
{
  public:
    GeantinoPhysicsList();
    ~GeantinoPhysicsList();

  protected:
    // Construct particle and physics process
    void ConstructParticle();
    void ConstructProcess();
    void SetCuts();

};

#endif







