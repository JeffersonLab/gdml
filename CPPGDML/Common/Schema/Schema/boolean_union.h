// -*- C++ -*-
// $Id: boolean_union.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
#ifndef GDML_SCHEMA_BOOLEAN_UNION_H
#define GDML_SCHEMA_BOOLEAN_UNION_H 1

#include "Saxana/SAXObject.h"

#include "Schema/BooleanSolidType.h"

class boolean_union : public SAXObject, public BooleanSolidType
{
  public:
    boolean_union() {
    }
    virtual ~boolean_union() {
    }
    virtual SAXObject::Type type() {
      return SAXObject::element;
    }
};

#endif // GDML_SCHEMA_BOOLEAN_UNION_H
