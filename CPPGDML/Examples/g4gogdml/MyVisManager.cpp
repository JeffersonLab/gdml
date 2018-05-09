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
// $Id: MyVisManager.cpp,v 1.3 2005/05/04 02:24:08 jmccormi Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
//
// John Allison 24th January 1998.

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#define G4VIS_USE 1
//#define G4VIS_USE_OPENGLX 1

#include "MyVisManager.hh"

#include "G4ASCIITree.hh"
#include "G4DAWNFILE.hh"
#include "G4GAGTree.hh"
#include "G4HepRepFile.hh"
#include "G4HepRep.hh"
#include "G4RayTracer.hh"
#include "G4VRML1File.hh"
#include "G4VRML2File.hh"

// Supported drivers...
//#include "G4OpenGLImmediateX.hh"
//#include "G4OpenGLStoredX.hh"


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

MyVisManager::MyVisManager () {}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

void MyVisManager::RegisterGraphicsSystems () {

    // Graphics Systems not needing external packages or libraries...
    RegisterGraphicsSystem (new G4ASCIITree);
    RegisterGraphicsSystem (new G4DAWNFILE);
    RegisterGraphicsSystem (new G4GAGTree);
    RegisterGraphicsSystem (new G4HepRepFile);
    RegisterGraphicsSystem (new G4HepRep);
    RegisterGraphicsSystem (new G4RayTracer);
    RegisterGraphicsSystem (new G4VRML1File);
    RegisterGraphicsSystem (new G4VRML2File);

  if (fVerbose > 0) {
    G4cout <<
      "\nYou have successfully chosen to use the following graphics systems."
	 << G4endl;
    PrintAvailableGraphicsSystems ();
  }
}


//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
