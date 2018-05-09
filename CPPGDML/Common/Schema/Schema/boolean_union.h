// -*- C++ -*-
// $Id: boolean_union.h,v 1.2 2006/08/29 11:49:29 dkruse Exp $
// GEANT4 tag $Name: GDML_2_9_0 $
#ifndef GDML_SCHEMA_BOOLEAN_UNION_H
#define GDML_SCHEMA_BOOLEAN_UNION_H 1

#include "Saxana/SAXObject.h"

#include "Schema/BooleanSolidType.h"

class boolean_union : public BooleanSolidType
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
