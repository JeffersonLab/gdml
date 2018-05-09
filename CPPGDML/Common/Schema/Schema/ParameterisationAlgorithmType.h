// -*- C++ -*-
// $Id: ParameterisationAlgorithmType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
#ifndef GDML_SCHEMA_PARAMETERISATIONALGORITHMTYPE_H
#define GDML_SCHEMA_PARAMETERISATIONALGORITHMTYPE_H 1

#include "ContentGroup.h"
#include "ReferenceType.h"

class ParameterisationAlgorithmType
{
  
public:
  ParameterisationAlgorithmType() {
  }
  ~ParameterisationAlgorithmType() {
  }
  
  
  const ContentSequence* get_content() const {
    return &m_sequence;
  }
  
  void add_content( const std::string& tag, SAXObject* so ) {
    ContentGroup::ContentItem ci = { tag, so };
    m_sequence.add_content( ci );
  }
  
private:
  ContentSequence m_sequence;
  
};


#endif // GDML_SCHEMA_PRAMETERISATIONALGORITHMTYPE_H
