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
// $Id: parameterised_position_size.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef PARAMETERISED_POSITION_SIZE_H
#define PARAMETERISED_POSITION_SIZE_H 1

#include "Saxana/SAXObject.h"

#include "Schema/ParameterisationAlgorithmType.h"

class parameterised_position_size : public SAXObject, public ParameterisationAlgorithmType
{
public:
  parameterised_position_size() {
  }
  virtual ~parameterised_position_size() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};



#endif // PARAMETERISED_POSITION_SIZE_H
