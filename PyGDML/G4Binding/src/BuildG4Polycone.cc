// $Id: BuildG4Polycone.cc,v 1.1 2005/02/04 17:16:07 witoldp Exp $
// Include files 


// local
#include "../include/BuildG4Polycone.hh"

//-----------------------------------------------------------------------------
// Implementation file for class : G4BuildG4Polycone
//
// 2005-02-03 : Witold POKORSKI
//-----------------------------------------------------------------------------

//=============================================================================
// Standard constructor, initializes variables
//=============================================================================
BuildG4Polycone::BuildG4Polycone(){};

//=============================================================================
// Destructor
//=============================================================================
BuildG4Polycone::~BuildG4Polycone() {}; 

//=============================================================================
BuildG4Polycone::BuildG4Polycone(int nb) 
{
  zpl = new double[nb];
  zin = new double[nb];
  zout = new double[nb];
}

void BuildG4Polycone::AddZPlane(int nb, double z, double in, double out)
{
  zpl[nb] = z;
  zin[nb] = in;
  zout[nb] = out;
}

G4Polycone* BuildG4Polycone::Build(G4String& name, double startphi, 
                                     double totalphi, int nb)
{
  return new G4Polycone(name, startphi, totalphi, nb, zpl, zin, zout);
}
