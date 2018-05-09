//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: GDMLProcessor.h,v 1.2 2005/06/01 01:38:25 jmccormi Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
//
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef GDML_PROCESSOR_H
#define GDML_PROCESSOR_H 1

// G4 includes
#include "globals.hh"
#include "G4ThreeVector.hh"
#include "G4RotationMatrix.hh"

#include "GDMLExpressionEvaluator.h"

#include "G4VSolid.hh"
#include "G4AssemblyVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4VPhysicalVolume.hh"
#include "G4PVPlacement.hh"

#include <string>
#include <map>

// Added here in order to resolve properly link dependecies if G4 build system
#include "G4BooleanSolid.hh"
#include "G4CSGSolid.hh"

// Workaround for SUN linker
extern const double defaultTemp;
extern const double defaultPress;

class GDMLProcessor
{
public:
  typedef std::map<std::string,G4ThreeVector*>     Positions;
  typedef std::map<std::string,G4RotationMatrix*>  Rotations;
  typedef std::map<std::string,G4VSolid*>          Solids;
  typedef std::map<std::string,G4LogicalVolume*>   LogicalVolumes;
  typedef std::map<std::string,G4AssemblyVolume*>  AssemblyVolumes;
  typedef std::map<std::string,G4VPhysicalVolume*> PhysicalVolumes;

  static GDMLProcessor* GetInstance();

  GDMLExpressionEvaluator* GetEvaluator();

  ~GDMLProcessor();

  void AddPosition( const std::string& name, G4ThreeVector* p );
  void AddPosition( const char* name, G4ThreeVector* p );

  void AddRotation( const std::string& name, G4RotationMatrix* p );
  void AddRotation( const char* name, G4RotationMatrix* p );

  void AddSolid( const std::string& name, G4VSolid* p );
  void AddSolid( const char* name, G4VSolid* p );

  void AddLogicalVolume( const std::string& name, G4LogicalVolume* p );
  void AddLogicalVolume( const char* name, G4LogicalVolume* p );

  void AddAssemblyVolume( const std::string& name, G4AssemblyVolume* p );
  void AddAssemblyVolume( const char*        name, G4AssemblyVolume* p );

  void AddPhysicalVolume( const std::string& name, G4VPhysicalVolume* p );
  void AddPhysicalVolume( const char* name, G4VPhysicalVolume* p );

  const G4ThreeVector*    GetPosition( const std::string& name );
  const G4ThreeVector*    GetPosition( const char* name );

  const G4RotationMatrix* GetRotation( const std::string& name );
  const G4RotationMatrix* GetRotation( const char* name );

  const G4VSolid* GetSolid( const std::string& name );
  const G4VSolid* GetSolid( const char* name );

  const G4LogicalVolume* GetLogicalVolume( const std::string& name );
  const G4LogicalVolume* GetLogicalVolume( const char* name );

  const G4AssemblyVolume* GetAssemblyVolume( const std::string& name );
  const G4AssemblyVolume* GetAssemblyVolume( const char* name );

  const G4VPhysicalVolume* GetPhysicalVolume( const std::string& name );
  const G4VPhysicalVolume* GetPhysicalVolume( const char* name );

  const G4VPhysicalVolume* GetWorldVolume()
  {
    return fWorldVolume;
  }

  void SetWorldVolume( G4VPhysicalVolume* newWorldVolume )
  {
    fWorldVolume = newWorldVolume;
  }

  G4ThreeVector* getIdentityPosition()
  {
    return &fIdentityPos;
  }

protected:
  GDMLProcessor();

private:
  GDMLExpressionEvaluator*       fCalc;
  GDMLProcessor::Positions       fPTable;
  GDMLProcessor::Rotations       fRTable;
  GDMLProcessor::Solids          fSolids;
  GDMLProcessor::LogicalVolumes  fLVolumes;
  GDMLProcessor::AssemblyVolumes fAVolumes;
  GDMLProcessor::PhysicalVolumes fPVolumes;
  G4VPhysicalVolume*             fWorldVolume;

  G4ThreeVector fIdentityPos;
};

#endif // GDML_PROCESSOR_H

