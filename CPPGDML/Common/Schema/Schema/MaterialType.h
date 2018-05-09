// -*- C++ -*-
// $Id: MaterialType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_MATERIALTYPE_H
#define GDML_SCHEMA_MATERIALTYPE_H 1

#include "MaterialPropertiesGroup.h"
#include "MaterialAttributeGroup.h"

class MaterialType
{
  public:
    virtual ~MaterialType()
    {
      // Make sure the memory is released
      if( m_mpg.m_RLorRLref != 0 )
        delete m_mpg.m_RLorRLref;
      if( m_mpg.m_ALorALref != 0 )
        delete m_mpg.m_ALorALref;
      if( m_mpg.m_TorTref != 0 )
        delete m_mpg.m_TorTref;
      if( m_mpg.m_PorPref != 0 )
        delete m_mpg.m_PorPref;
    }

    void set_RLorRLref( const std::string& tag, SAXObject* so ) {
      if( !m_mpg.m_RLorRLref ) {
        m_mpg.m_RLorRLref = new TagorTagref;
      }
      m_mpg.m_RLorRLref->set_content( tag, so);
    }
    void set_ALorALref( const std::string& tag, SAXObject* so ) {
      if( !m_mpg.m_ALorALref ) {
        m_mpg.m_ALorALref = new TagorTagref;
      }
      m_mpg.m_ALorALref->set_content( tag, so);
    }
    void set_TorTref( const std::string& tag, SAXObject* so ) {
      if( !m_mpg.m_TorTref ) {
        m_mpg.m_TorTref = new TagorTagref;
      }
      m_mpg.m_TorTref->set_content( tag, so);
    }
    void set_PorPref( const std::string& tag, SAXObject* so ) {
      if( !m_mpg.m_PorPref ) {
        m_mpg.m_PorPref = new TagorTagref;
      }
      m_mpg.m_PorPref->set_content( tag, so);
    }

    const SAXObject* get_RLorRLref() const {
      const SAXObject* so = 0;
      if( m_mpg.m_RLorRLref != 0 ) {
        so = m_mpg.m_RLorRLref->get_content();
      }
      return so;
    }
    const SAXObject* get_ALorALref() const {
      const SAXObject* so = 0;
      if( m_mpg.m_ALorALref != 0 ) {
        so = m_mpg.m_ALorALref->get_content();
      }
      return so;
    }
    const SAXObject* get_TorTref() const {
      const SAXObject* so = 0;
      if( m_mpg.m_TorTref != 0 ) {
        so = m_mpg.m_TorTref->get_content();
      }
      return so;
    }
    const SAXObject* get_PorPref() const {
      const SAXObject* so = 0;
      if( m_mpg.m_PorPref != 0 ) {
        so = m_mpg.m_PorPref->get_content();
      }
      return so;
    }

    void set_name( const std::string& s ) {
      m_mag.m_ID = s;
    }

    const std::string& get_name() const {
      return m_mag.m_ID;
    }
  
    void set_formula( const std::string& f ) {
      m_mag.m_formula = f;
    }

    std::string get_formula() const {
      return m_mag.m_formula;
    }

//   void set_state( MaterialState s ) {
//     m_mag.m_state = s;
//   }
// 
//   MaterialState get_state() const {
//     return m_mag.m_state;
//   }
    void set_state( const std::string& s ) {
      m_mag.m_state = s;
    }

    const std::string& get_state() const {
      return m_mag.m_state;
    }

  protected:
    MaterialType()
    {
      m_mag.m_formula = "";
    }

  protected:
    MaterialPropertiesGroup m_mpg;
    MaterialAttributeGroup m_mag;
};

#endif // GDML_SCHEMA_MATERIALTYPE_H
