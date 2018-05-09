//
#ifndef TORTREF_H
#define TORTREF_H 1

#include "QuantityType.h"
#include "ReferenceType.h"
//#include "TagorTagref.h"

class T : public SAXObject, public QuantityType
{
public:
  T() {
    set_type( "Temperature" );
    set_unit( "kelvin" );
  }
  virtual ~T() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

class Tref : public SAXObject, public ReferenceType
{
public:
  Tref() {
  }
  virtual ~Tref() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

//typedef TagorTagref TorTref;

#endif // TORTREF_H
