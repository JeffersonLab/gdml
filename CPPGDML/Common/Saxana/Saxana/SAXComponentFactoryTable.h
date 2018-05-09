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
// $Id: SAXComponentFactoryTable.h,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SAX_COMPONENT_FACTORY_TABLE_H
#define SAX_COMPONENT_FACTORY_TABLE_H 1

#include "SAXComponentObject.h"

#include <vector>

class SAXComponentFactoryBase;

class SAXComponentFactoryTable {
public:
  typedef std::vector<SAXComponentFactoryBase*> Components;
  
  const SAXComponentFactoryTable::Components* GetComponents( SAXComponentObject::EType type );
    
  void Register( SAXComponentFactoryBase* c );
  
  static SAXComponentFactoryTable* GetInstance();

  ~SAXComponentFactoryTable();
  
protected:
  SAXComponentFactoryTable();
  SAXComponentFactoryTable( const SAXComponentFactoryTable& );

private:
  SAXComponentFactoryTable::Components* fProcesses;
  SAXComponentFactoryTable::Components* fActions;
  SAXComponentFactoryTable::Components* fSubscribers;
};

#endif // SAX_COMPONENT_FACTORY_TABLE_H

