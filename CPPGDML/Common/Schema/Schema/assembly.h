// -*- C++ -*-
// $Id: assembly.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
#ifndef GDML_SCHEMA_ASSEMBLY_H
#define GDML_SCHEMA_ASSEMBLY_H 1

#include "Saxana/SAXObject.h"
#include "Schema/AssemblyVolumeType.h"

class assembly : public SAXObject, public AssemblyVolumeType
{
public:
  assembly() {
  }
  virtual ~assembly() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

#endif // GDML_SCHEMA_ASSEMBLY_H
