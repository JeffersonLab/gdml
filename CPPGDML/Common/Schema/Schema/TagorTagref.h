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
// $Id: TagorTagref.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef TAGORTAGREF_H
#define TAGORTAGREF_H 1

#include "ContentGroup.h"

class TagorTagref
{
public:
  TagorTagref() {
  }
  ~TagorTagref() {
  }

  const SAXObject* get_content() const {
    return &m_choice;
  }

  void set_content( const std::string& tag, SAXObject* so ) {
    ContentGroup::ContentItem ci = {tag,so};
    m_choice.set_content( ci );
  }

private:
  // choice content model: ( Tag | ref )
  ContentChoice m_choice;
};

#endif // TAGORTAGREF_H
