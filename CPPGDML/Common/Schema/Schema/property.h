// -*- C++ -*-
// $Id: property.h,v 1.1 2006/09/05 16:15:12 witoldp Exp $
#ifndef GDML_SCHEMA_PROPERTY_H
#define GDML_SCHEMA_PROPERTY_H 1

#include "ReferenceType.h"

class property : public SAXObject,
                 public ReferenceType
{
  public:
    property()
    {
    }
    ~property()
    {
    }
    virtual SAXObject::Type type()
    {
      return SAXObject::element;
    }
    const std::string& get_name() const
    {
      return m_name;
    }
    void set_name( const std::string& name )
    {
      m_name = name;
    }
  
  private:
    std::string m_name;  
};

#endif // GDML_SCHEMA_PROPERTY_H
