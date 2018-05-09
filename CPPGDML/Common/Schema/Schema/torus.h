//
//********************************************************************
//* DISCLAIMER * * * * The following disclaimer summarizes all the
//specific disclaimers * * of contributors to this software. The
//specific disclaimers,which * * govern, are listed with their
//locations in: * * http://cern.ch/geant4/license * * * * Neither the
//authors of this software system, nor their employing * *
//institutes,nor the agencies providing financial support for this * *
//work make any representation or warranty, express or implied, * *
//regarding this software system or assume any liability for its * *
//use.  * * * * This code implementation is the intellectual property
//of the * * GEANT4 collaboration.  * * By copying, distributing or
//modifying the Program (or any work * * based on the Program) you
//indicate your acceptance of this * * statement, and all its terms.
//*
//********************************************************************
//
//
// $Id: torus.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef TORUS_H
#define TORUS_H 1

#include "Saxana/SAXObject.h"

#include "Schema/SolidType.h"

class torus : public SAXObject, public SolidType
{
public:
  torus() {
  }
  virtual ~torus() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
  
  const std::string& get_rmin() const {
    return m_rmin;
  }
  const std::string& get_rmax() const {
    return m_rmax;
  }
  const std::string& get_rtor() const {
    return m_rtor;
  }
  const std::string& get_startphi() const {
    return m_startphi;
  }
  const std::string& get_deltaphi() const {
    return m_deltaphi;
  }
  
  void set_rmin( const std::string& rmin ) {
    m_rmin = rmin;
  }
  void set_rmax( const std::string& rmax ) {
    m_rmax = rmax;
  }
  void set_rtor( const std::string& rtor ) {
    m_rtor = rtor;
  }
  void set_startphi( const std::string& startphi ) {
    m_startphi = startphi;
  }
  void set_deltaphi( const std::string& deltaphi ) {
    m_deltaphi = deltaphi;
  }
  
private:
  std::string m_rmin;
  std::string m_rmax;
  std::string m_rtor;
  std::string m_startphi;
  std::string m_deltaphi;
};


#endif // TORUS_H
