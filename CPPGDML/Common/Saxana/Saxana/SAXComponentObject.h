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
// $Id: SAXComponentObject.h,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SAX_COMPONENT_OBJECT_H
#define SAX_COMPONENT_OBJECT_H 1

class SAXComponentObject
{
public:
  typedef enum
  {
    eProcess,
    eAction,
    eSubscriber
  } EType;
  
  SAXComponentObject() {}
  virtual ~SAXComponentObject() {}
  
  virtual const SAXComponentObject* Build() const = 0;
  virtual EType Type() const = 0;
};

#endif // SAX_COMPONENT_OBJECT_H

