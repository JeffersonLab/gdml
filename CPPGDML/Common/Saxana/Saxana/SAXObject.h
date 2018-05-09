// -*- C++ -*-
// $Id: SAXObject.h,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_7_0 $
#ifndef GDML_SAXANA_SAXOBJECT_H
#define GDML_SAXANA_SAXOBJECT_H 1

#include "SAXObjectBase.h"

#include <string>

class SAXObject : virtual public SAXObjectBase
{
public:
  typedef enum {
    element,             // element
    contentGroup,        // choice, sequence, all
    attributeGroup,      // reusable group of attributes
    elementGroup         // reusable group of elements
  } Type;
    
public:
  virtual ~SAXObject() {
  }

  virtual bool IsCacheable() const
  {
    return false;
  }
  
  virtual Type type() = 0;
};

#endif // GDML_SAXANA_SAXOBJECT_H

