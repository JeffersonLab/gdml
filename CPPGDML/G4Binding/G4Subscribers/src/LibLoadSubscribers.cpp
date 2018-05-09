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
// $Id: LibLoadSubscribers.cpp,v 1.1 2005/03/02 10:50:37 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Saxana/SAXComponentFactory.h"

extern "C" {

  void GDMLSubscriberLibLoad() {
    LOAD_COMPONENT(defineSubscriber)
    LOAD_COMPONENT(isotopeSubscriber)
    LOAD_COMPONENT(elementSubscriber)
    LOAD_COMPONENT(materialSubscriber)
    LOAD_COMPONENT(unionSubscriber)
    LOAD_COMPONENT(subtractionSubscriber)
    LOAD_COMPONENT(intersectionSubscriber)
    LOAD_COMPONENT(boxSubscriber)
    LOAD_COMPONENT(sphereSubscriber)
    LOAD_COMPONENT(tubeSubscriber)
    LOAD_COMPONENT(paraSubscriber)
    LOAD_COMPONENT(coneSubscriber)
    LOAD_COMPONENT(polyconeSubscriber)
    LOAD_COMPONENT(trdSubscriber)
    LOAD_COMPONENT(trapSubscriber)
    LOAD_COMPONENT(torusSubscriber)
    LOAD_COMPONENT(orbSubscriber)
    LOAD_COMPONENT(hypeSubscriber)
    LOAD_COMPONENT(eltubeSubscriber)
    LOAD_COMPONENT(polyhedraSubscriber)
    LOAD_COMPONENT(volumeSubscriber)
    LOAD_COMPONENT(assemblySubscriber)
    LOAD_COMPONENT(setupSubscriber)
  }

};
