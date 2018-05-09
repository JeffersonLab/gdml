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
// $Id: orb.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef ORB_H
#define ORB_H 1

#include "Saxana/SAXObject.h"

#include "Schema/SolidType.h"

class orb : public SAXObject, public SolidType
{
  public:
    orb() {
    }
    virtual ~orb() {
    }
    virtual SAXObject::Type type() {
      return SAXObject::element;
    }
  
    const std::string& get_r() const {
      return m_r;
    }
  
    void set_r( const std::string& r ) {
      m_r = r;
    }
  
  private:
    std::string m_r;
};



#endif // ORB_H
