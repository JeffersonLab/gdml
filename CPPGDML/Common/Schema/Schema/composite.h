// -*- C++ -*-
// $Id: composite.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_COMPOSITE_H
#define GDML_SCHEMA_COMPOSITE_H 1

#include "ReferenceType.h"

class composite : public SAXObject,
                  public ReferenceType
{
  public:
    composite()
    {
    }
    ~composite()
    {
    }
    virtual SAXObject::Type type()
    {
      return SAXObject::element;
    }
    const std::string& get_n() const
    {
      return m_n;
    }
    void set_n( const std::string& n )
    {
      m_n = n;
    }
  
  private:
    std::string m_n;  ///< xs:positiveInteger
};

#endif // GDML_SCHEMA_COMPOSITE_H
