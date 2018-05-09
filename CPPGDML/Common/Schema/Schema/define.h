//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: define.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef DEFINE_H
#define DEFINE_H 1


#include "Saxana/SAXObject.h"

#include "Schema/defineType.h"
#include "Schema/IdentifiableConstantType.h"
#include "Schema/IdentifiableQuantityType.h"
#include "Schema/IdentifiableExpressionType.h"
#include "Schema/positionType.h"
#include "Schema/rotationType.h"

class define : public SAXObject, public defineType
{
public:
  define() {
  }
  virtual ~define() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
public:
    class constant : public SAXObject, public IdentifiableConstantType
    {
    public:
      constant() {
      }
      virtual ~constant() {
      }
      virtual SAXObject::Type type() {
        return SAXObject::element;
      }
    };
    class quantity : public SAXObject, public IdentifiableQuantityType
    {
    public:
      quantity() {
      }
      virtual ~quantity() {
      }
      virtual SAXObject::Type type() {
        return SAXObject::element;
      }
    };
    class expression : public SAXObject, public IdentifiableExpressionType
    {
      public:
        expression() {
      }
      virtual ~expression() {
      }
      virtual SAXObject::Type type() {
        return SAXObject::element;
      }
    };
    class position : public SAXObject, public positionType
    {
    public:
      position() {
      }
      virtual ~position() {
      }
      virtual SAXObject::Type type() {
        return SAXObject::element;
      }
    };
    class rotation : public SAXObject, public rotationType
    {
    public:
      rotation() {
      }
      virtual ~rotation() {
      }
      virtual SAXObject::Type type() {
        return SAXObject::element;
      }
    };
};

#endif // DEFINE_H
