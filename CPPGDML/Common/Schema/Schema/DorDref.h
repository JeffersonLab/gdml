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
// $Id: DorDref.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_3_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef DORDREF_H
#define DORDREF_H 1

#include "QuantityType.h"
#include "ReferenceType.h"
#include "TagorTagref.h"

class D : public SAXObject, public QuantityType
{
public:
  D() {
    set_type( "Density" );
    set_unit( "g/mole" );
  }
  virtual ~D() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

class Dref : public SAXObject, public ReferenceType
{
public:
  Dref() {
  }
  virtual ~Dref() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

typedef TagorTagref DorDref;

#endif // DORDREF_H
