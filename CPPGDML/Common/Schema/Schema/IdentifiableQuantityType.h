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
// $Id: IdentifiableQuantityType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef IDENTIFIABLEQUANTITYTYPE_H
#define IDENTIFIABLEQUANTITYTYPE_H 1

#include "QuantityType.h"


class IdentifiableQuantityType : public QuantityType {
public:
  IdentifiableQuantityType() {
  }
  ~IdentifiableQuantityType() {
  }
  void set_name( std::string& s ) {
    m_name = s;
  }
  void set_name( char* s ) {
    m_name = s;
  }
  std::string get_name() const {
    return m_name;
  }
  
private:
  std::string m_name;
};



#endif // IDENTIFIABLEQUANTITYTYPE_H
