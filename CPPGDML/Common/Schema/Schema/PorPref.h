//
#ifndef PORPREF_H
#define PORPREF_H 1

#include "QuantityType.h"
#include "ReferenceType.h"
//#include "TagorTagref.h"

class P : public SAXObject, public QuantityType
{
public:
  P() {
    set_type( "Pressure" );
    set_unit( "pascal" );
  }
  virtual ~P() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

class Pref : public SAXObject, public ReferenceType
{
public:
  Pref() {
  }
  virtual ~Pref() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
};

//typedef TagorTagref PorPref;

#endif // PORPREF_H
