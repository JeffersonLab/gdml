// -*- C++ -*-
// $Id: EditableDocument.h,v 1.1 2005/03/01 09:17:12 witoldp Exp $
#ifndef GDML_WRITER_EDITABLEDOCUMENT_H
#define GDML_WRITER_EDITABLEDOCUMENT_H 1

#include "Writer/Document.h"

#include <iosfwd>

namespace gdml
{
  namespace writer
  {
    class Element;
    class EditableDocumentRegistry;
    
    class EditableDocument : public Document
    {
      public:
        /// Constructor
        EditableDocument( std::ostream& outStream );
        /// Destructor
        ~EditableDocument();
        /// Return mutable document reference
        Element& getDocument();
        /// Return reference to the document registry needed by
        /// document cursors
        EditableDocumentRegistry& getRegistry();

      private:
        EditableDocumentRegistry* m_reg;
    };
  }
}

#endif // GDML_WRITER_EDITABLEDOCUMENT_H
