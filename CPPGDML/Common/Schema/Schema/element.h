// -*- C++ -*-
// $Id: element.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_ELEMENT_H
#define GDML_SCHEMA_ELEMENT_H 1

#include "MaterialElementType.h"

class element : public SAXObject,
                public MaterialElementType
{
  public:
    element()
    {
    }
    ~element()
    {
    }
    virtual SAXObject::Type type()
    {
      return SAXObject::element;
    }
};

#endif // GDML_SCHEMA_ELEMENT_H
