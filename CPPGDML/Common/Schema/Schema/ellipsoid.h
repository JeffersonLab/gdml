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
// $Id: ellipsoid.h,v 1.1 2005/07/12 08:26:08 witoldp Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
//
// 
// --------------------------------------------------------------
// Comments
//                G.GUERRIERI - 26.06.2005
// --------------------------------------------------------------
//
#ifndef ELLIPSOID_H
#define ELLISPOID_H 1

#include "Saxana/SAXObject.h"

#include "Schema/SolidType.h"

class ellipsoid : public SAXObject, public SolidType
{
  public:
    ellipsoid() {
    }
    virtual ~ellipsoid() {
    }
    virtual SAXObject::Type type() {
      return SAXObject::element;
    }
  
    const std::string& get_ax() const {
      return m_ax;
    }
    const std::string& get_by() const {
      return m_by;
    }
    const std::string& get_cz() const {
      return m_cz;
    }
    const std::string& get_zcut1() const {
      return m_zcut1;
    }
    const std::string& get_zcut2() const {
      return m_zcut2;
    }
  
    void set_ax( const std::string& ax ) {
      m_ax = ax;
    }
    void set_by( const std::string& by ) {
      m_by = by;
    }
    void set_cz( const std::string& cz ) {
      m_cz = cz;
    }
    void set_zcut1( const std::string& zcut1 ) {
      m_zcut1 = zcut1;
    }
    void set_zcut2( const std::string& zcut2 ) {
      m_zcut2 = zcut2;
    }
  
  private:
    std::string m_ax;
    std::string m_by;
    std::string m_cz;
    std::string m_zcut1;
    std::string m_zcut2;
};



#endif // ELLIPSOID_H
