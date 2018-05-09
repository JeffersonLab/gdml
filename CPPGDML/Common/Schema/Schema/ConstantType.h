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
// $Id: ConstantType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef CONSTANTTYPE_H
#define CONSTANTTYPE_H 1

#include <string>

class ConstantType {
  // An anonymous, local scope, value
  public:
    ConstantType() {
    }
    ConstantType( std::string& s ) : m_value( s ) {
    }
    ConstantType( char* s ) {
      m_value = s;
    }
    ~ConstantType() {
    }
    void set_value( std::string& s ) {
      m_value = s;
    } 
    std::string get_value() const {
      return m_value;
    }
  private:
    // double    
    std::string m_value;
};

#endif // CONSTANTTYPE_H
