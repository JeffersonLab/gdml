// -*- C++ -*-
// $Id: VolumeType.h,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_7_0 $
#ifndef GDML_SCHEMA_VOLUMETYPE_H
#define GDML_SCHEMA_VOLUMETYPE_H 1

#include "IdentifiableVolumeType.h"
#include "ReferenceType.h"
#include "SinglePlacementType.h"
#include "ContentGroup.h"

class VolumeType : public IdentifiableVolumeType
{
  public:
  
    class materialref : public SAXObject,
                        public ReferenceType
    {
      public:
        materialref() { }
        ~materialref() { }
        virtual SAXObject::Type type() { return SAXObject::element; }
    };
  
    class solidref : public SAXObject,
                     public ReferenceType
    {
      public:
        solidref() { }
        ~solidref() { }
        virtual SAXObject::Type type() { return SAXObject::element; }
    };
  
  public:
    VolumeType() { }
    virtual ~VolumeType() { }
  
    const ContentSequence* get_content() const
    {
      return &m_sequence;
    }
    void add_content( const std::string& tag, SAXObject* so )
    {
      ContentGroup::ContentItem ci = { tag, so };
      m_sequence.add_content( ci );
    }
    
  private:
    ContentSequence m_sequence;
};

#endif // GDML_SCHEMA_VOLUMETYPE_H
