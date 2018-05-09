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
// $Id: ReferenceListType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef REFERENCELISTTYPE_H
#define REFERENCELISTTYPE_H 1

#include <string>


class ReferenceListType {
public:
  ReferenceListType() {
  }
  ~ReferenceListType() {
  }
  void set_refs( std::string& s ) {
    m_refs = s;
  }
  void set_refs( char* s ) {
    m_refs = s;
  }
  std::string& refs() const {
    return m_refs;
  }
 
private:
  // IDREFS
  std::string m_refs;
};


#endif // REFERENCELISTTYPE_H
