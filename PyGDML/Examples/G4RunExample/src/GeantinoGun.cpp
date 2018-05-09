#include "GeantinoGun.h"

#include "G4Event.hh"
#include "G4ParticleGun.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "globals.hh"

GeantinoGun::GeantinoGun()
{
  G4int n_particle = 1;
  particleGun = new G4ParticleGun(n_particle);

  G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
  G4String particleName;
  particleGun->SetParticleDefinition(particleTable->FindParticle(particleName="geantino"));
  particleGun->SetParticleEnergy(1.0*GeV);
  particleGun->SetParticlePosition(G4ThreeVector(0.0, 0.0, 0.0));
  x = 0;
  y = 0;
  z = 0;
}

GeantinoGun::~GeantinoGun()
{
  delete particleGun;
}

void GeantinoGun::GeneratePrimaries(G4Event* anEvent)
{
  G4int i = anEvent->GetEventID() % 3;
  G4ThreeVector v(x, y, z);

  particleGun->SetParticlePosition(G4ThreeVector(0.0, i*1.0, 0));

  particleGun->SetParticleMomentumDirection(v);
  particleGun->GeneratePrimaryVertex(anEvent);
}

void GeantinoGun::SetDirection(double mx, double my, double mz)
{
  x = mx;
  y = my;
  z = mz;
}


