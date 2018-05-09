#ifndef GeantinoGun_h
#define GeantinoGun_h 1

#include "G4VUserPrimaryGeneratorAction.hh"

class G4ParticleGun;
class G4Event;

class GeantinoGun : public G4VUserPrimaryGeneratorAction
{
public:
  GeantinoGun();
  ~GeantinoGun();
  
public:
  void GeneratePrimaries(G4Event* anEvent);
  void SetDirection(double, double, double);

private:
  G4ParticleGun* particleGun;
  double x;
  double y;
  double z;
};

#endif


