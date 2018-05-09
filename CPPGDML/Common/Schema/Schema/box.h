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
// $Id: box.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef BOX_H
#define BOX_H 1

#include "Saxana/SAXObject.h"
#include "Schema/SolidType.h"

class box : public SAXObject, public SolidType {
public:
  box() {
  }
  virtual ~box() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
  
  const std::string& get_x() const {
    return m_x;
  }
  const std::string& get_y() const {
    return m_y;
  }
  const std::string& get_z() const {
    return m_z;
  }
  
  void set_x( const std::string& x ) {
    m_x = x;
  }
  void set_y( const std::string& y ) {
    m_y = y;
  }
  void set_z( const std::string& z ) {
    m_z = z;
  }
  
private:
  std::string m_x;
  std::string m_y;
  std::string m_z;
};



#endif // BOX_H
