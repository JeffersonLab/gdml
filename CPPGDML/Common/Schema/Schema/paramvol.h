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
// $Id: paramvol.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef PARAMVOL_H
#define PARAMVOL_H 1

#include "Saxana/SAXObject.h"

#include "Schema/ParameterisedPlacementType.h"

class paramvol : public SAXObject, public ParameterisedPlacementType
{
public:
  paramvol() {
  }
  virtual ~paramvol() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};



#endif // PARAMVOL_H
