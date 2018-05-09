// -*- C++ -*-
// $Id: SinglePlacementType.h,v 1.2 2006/07/19 14:57:50 dkruse Exp $
#ifndef GDML_SCHEMA_SINGLEPLACEMENTTYPE_H
#define GDML_SCHEMA_SINGLEPLACEMENTTYPE_H 1

#include "ContentGroup.h"
#include "ReferenceType.h"
#include "FileReferenceType.h"
#include "Schema/positionType.h"
#include "Schema/rotationType.h"

class SinglePlacementType
{
  public:
    
    class file : public SAXObject, public FileReferenceType {
      public:
        file() {
        }
        virtual ~file() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };
    
    class volumeref : public SAXObject, public ReferenceType {
      public:
        volumeref() {
        }
        virtual ~volumeref() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };
  
    class positionref : public SAXObject, public ReferenceType {
      public:
        positionref() {
        }
        ~positionref() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };

    class position : public SAXObject, public positionType {
      public:
        position() {
        }
        virtual ~position() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };

    class rotation : public SAXObject, public rotationType {
      public:
        rotation() {
        }
        virtual ~rotation() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };

    class rotationref : public SAXObject, public ReferenceType {
      public:
        rotationref() {
        }
        virtual ~rotationref() {
        }
        virtual SAXObject::Type type() {
          return SAXObject::element;
        }
    };
    
  public:
    SinglePlacementType() {
    }
    ~SinglePlacementType() {
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

//  We need to resolve the problem of conlifting non-terminals in grammar
//  This is typical use-case here, the following two elements clash with
//  BooleanSolidType elements
//   class positionref : public SAXObject, public ReferenceType {
//   public:
//     positionref() {
//     }
//     virtual ~positionref() {
//     }
//     virtual SAXObject::Type type() {
//       return SAXObject::element;
//     }
//   };
//   
//   class rotationref : public SAXObject, public ReferenceType {
//   public:
//     rotationref() {
//     }
//     virtual ~rotationref() {
//     }
//     virtual SAXObject::Type type() {
//       return SAXObject::element;
//     }
//   };

#endif // GDML_SCHEMA_SINGLEPLACEMENTTYPE_H
