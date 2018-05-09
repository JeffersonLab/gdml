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
// $Id: SolidType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_3_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SOLIDTYPE_H
#define SOLIDTYPE_H 1

#include <string>

class SolidType {
public:
  SolidType() {
  }
  ~SolidType() {
  }
  
  const std::string& get_lunit() const {
    return m_lunit;
  }
  const std::string& get_aunit() const {
    return m_aunit;
  }
  const std::string& get_name() const {
    return m_name;
  }
  
  void set_lunit( const std::string& lu ) {
    m_lunit = lu;
  }
  void set_aunit( const std::string& au ) {
    m_aunit = au;
  }
  void set_name( const std::string& name ) {
    m_name = name;
  }
  
private:
  std::string m_lunit;
  std::string m_aunit;
  std::string m_name; 
};



#endif // SOLIDTYPE_H
