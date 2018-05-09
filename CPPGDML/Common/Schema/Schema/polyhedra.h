//
#ifndef POLYHEDRA_H
#define POLYHEDRA_H 1

#include "ContentGroup.h"
#include "Saxana/SAXObject.h"
#include "Schema/SolidType.h"

class polyhedra : public SAXObject, public SolidType {
public:
  polyhedra() {
  }
  virtual ~polyhedra() {
  }
  virtual SAXObject::Type type() {
    return SAXObject::element;
  }
  
  const std::string& get_startphi() const {
    return m_startphi;
  }
  const std::string& get_totalphi() const {
    return m_totalphi;
  }
  const std::string& get_numsides() const {
    return m_numsides;
  }
  
  void set_startphi( const std::string& startphi ) {
    m_startphi = startphi;
  }
  void set_totalphi( const std::string& totalphi ) {
    m_totalphi = totalphi;
  }
  void set_numsides( const std::string& numsides ) {
    m_numsides = numsides;
  }
  
  const ContentSequence* get_content() const {
    return &m_sequence;
  }
  
  void add_content( const std::string& tag, SAXObject* so ) {
    ContentGroup::ContentItem ci = { tag, so };
    m_sequence.add_content( ci );
  }
  
private:
  std::string m_startphi;
  std::string m_totalphi;
  std::string m_numsides;
  
  ContentSequence m_sequence;
};


#endif // POLYHEDRA_H
