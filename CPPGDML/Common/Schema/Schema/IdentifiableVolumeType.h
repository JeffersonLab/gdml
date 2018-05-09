// -*- C++ -*-
// $Id: IdentifiableVolumeType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_2_0 $
#ifndef GDML_SCHEMA_IDENTIFIABLEVOLUMETYPE_H
#define GDML_SCHEMA_IDENTIFIABLEVOLUMETYPE_H 1

#include <string>

class IdentifiableVolumeType {
public:
  IdentifiableVolumeType() {
  }
  virtual ~IdentifiableVolumeType() {
  }
  const std::string& get_name() const {
    return m_ID;
  }
  void set_name( const std::string& n ) {
    m_ID = n;
  }
private:
  std::string m_ID;
};



#endif // GDML_SCHEMA_IDENTIFIABLEVOLUMETYPE_H
