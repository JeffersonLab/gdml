// -*- C++ -*-
// $Id: material.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_ELEMENT_H
#define GDML_SCHEMA_ELEMENT_H 1

#include "MaterialMixtureType.h"

class material : public SAXObject,
                 public MaterialMixtureType
{
  public:
    material()
    {
    }
    ~material()
    {
    }
    virtual SAXObject::Type type()
    {
      return SAXObject::element;
    }
};

#endif // ELEMENT_H
