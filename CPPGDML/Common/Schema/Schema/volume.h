// -*- C++ -*-
// $Id: volume.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
#ifndef GDML_SCHEMA_VOLUME_H
#define GDML_SCHEMA_VOLUME_H 1

#include "Saxana/SAXObject.h"
#include "Schema/VolumeType.h"

class volume : public SAXObject, public VolumeType
{
  public:
    volume() { }
    ~volume() { }
    virtual SAXObject::Type type() { return SAXObject::element; }
};

#endif // GDML_SCHEMA_VOLUME_H
