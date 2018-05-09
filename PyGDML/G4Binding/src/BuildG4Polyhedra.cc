// $Id: BuildG4Polyhedra.cc,v 1.2 2005/02/08 16:59:58 witoldp Exp $
// Include files 


// local
#include "../include/BuildG4Polyhedra.hh"

//-----------------------------------------------------------------------------
// Implementation file for class : G4BuildG4Polyhedra
//
// 2005-02-03 : Witold POKORSKI
//-----------------------------------------------------------------------------

//=============================================================================
// Standard constructor, initializes variables
//=============================================================================
BuildG4Polyhedra::BuildG4Polyhedra(){};

//=============================================================================
// Destructor
//=============================================================================
BuildG4Polyhedra::~BuildG4Polyhedra() {}; 

//=============================================================================
BuildG4Polyhedra::BuildG4Polyhedra(int nb) 
{
  zpl = new double[nb];
  zin = new double[nb];
  zout = new double[nb];
}

void BuildG4Polyhedra::AddZPlane(int nb, double z, double in, double out)
{
  zpl[nb] = z;
  zin[nb] = in;
  zout[nb] = out;
}

G4Polyhedra* BuildG4Polyhedra::Build(G4String& name, double startphi, 
                                     double totalphi, int numbsides, int nb)
{
  return new G4Polyhedra(name, startphi, totalphi, numbsides, nb, zpl, zin, zout);
}
