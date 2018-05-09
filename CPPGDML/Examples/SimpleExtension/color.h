// $Header: /cvs/simu/simu/GDML2/CPPGDML/Examples/SimpleExtension/color.h,v 1.1 2007/01/12 01:51:21 mccormi Exp $
#ifndef COLOR_H
#define COLOR_H 1

// GDML
#include "Saxana/SAXObject.h"

// LCDD
#include "ColorType.h"

/**
   @class color
   @brief color element from schema.
*/
class color : public SAXObject, public ColorType
{
public:
  color()
  {}

  virtual ~color()
  {}

  virtual SAXObject::Type type()
  {
    return SAXObject::element;
  }
};

#endif
