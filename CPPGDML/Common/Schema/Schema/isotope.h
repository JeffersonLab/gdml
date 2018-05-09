// -*- C++ -*-
// $Id: isotope.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_ISOTOPE_H
#define GDML_SCHEMA_ISOTOPE_H 1

#include "MaterialIsotopeType.h"

class isotope : public SAXObject,
                public MaterialIsotopeType
{
  public:
    isotope()
    {
    }
    ~isotope()
    {
    }
    virtual SAXObject::Type type()
    {
      return SAXObject::element;
    }
};

#endif // GDML_SCHEMA_ISOTOPE_H
