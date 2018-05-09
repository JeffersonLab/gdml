// -*- C++ -*-
// $Id: FileReferenceType.h,v 1.1 2006/07/19 14:57:50 dkruse Exp $
#ifndef GDML_SCHEMA_FILEREFERENCETYPE_H
#define GDML_SCHEMA_FILEREFERENCETYPE_H 1

#include <string>

class FileReferenceType
{
  public:
    FileReferenceType() { }
    virtual ~FileReferenceType() { }
    void set_name( const std::string& s )
    {
      name = s;
    }
    void set_name( const char* s )
    {
      name = s;
    }
    const std::string& get_name() const
    {
      return name;
    }
    void set_volname( const std::string& s )
    {
      volname = s;
    }
    void set_volname( const char* s )
    {
      volname = s;
    }
    const std::string& get_volname() const
    {
      return volname;
    }
 
  private:
    std::string name;  ///< IDREF
    std::string volname;
};


#endif // GDML_SCHEMA_FILEREFERENCETYPE_H
