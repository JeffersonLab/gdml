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
// $Id: setup.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SETUP_H
#define SETUP_H 1

#include "Saxana/SAXObject.h"

#include "Schema/ReferenceType.h"

class setup : public SAXObject
{
  public:
    class world : public SAXObject, public ReferenceType
    {
      public:
        world() {
        }
        virtual ~world() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };

  public:
    setup() : m_match( false ) {
    }
    virtual ~setup() {
    }
    virtual SAXObject::Type type() {
      return SAXObject::element;
    }
  
    const setup::world& get_world() const {
      return m_world;
    }
    const std::string& get_name() const {
      return m_ID;
    }
    const std::string& get_version() const {
      return m_version;
    }
    bool get_match() const {
      return m_match;
    }
  
    void set_world( const setup::world& w ) {
      m_world = w;
    }
    void set_name( const std::string& n ) {
      m_ID = n;
    }
    void set_version( const std::string& v ) {
      m_version = v;
    }
    void set_match( bool m ) {
      m_match = m;
    }
  
  private:
    setup::world m_world;
    std::string  m_ID;
    std::string  m_version;
    bool         m_match;
};

#endif // SETUP_H
