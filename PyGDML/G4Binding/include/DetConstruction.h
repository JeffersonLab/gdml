// $Id: DetConstruction.h,v 1.1 2005/02/08 16:59:58 witoldp Exp $
#ifndef INCLUDE_DETCONSTRUCTION_H 
#define INCLUDE_DETCONSTRUCTION_H 1

// Include files
#include "G4VUserDetectorConstruction.hh"
#include "G4LogicalVolume.hh"

/** @class DetConstruction DetConstruction.h include/DetConstruction.h
 *  
 *
 *  @author Witold POKORSKI
 *  @date   2005-02-07
 */
class DetConstruction : public G4VUserDetectorConstruction
{
public: 
  DetConstruction( ){};
  DetConstruction(G4LogicalVolume* vol) { world = vol; };

  virtual ~DetConstruction( ){};

  G4VPhysicalVolume* Construct();  

private:

  G4LogicalVolume* world;

};
#endif // INCLUDE_DETCONSTRUCTION_H
