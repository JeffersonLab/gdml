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
// $Id: SAXErrorEvents.h,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_5_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#ifndef SAX_ERROR_EVENTS_H
#define SAX_ERROR_EVENTS_H 1

#include <string>

#include "SAXEvent.h"

class SAXErrorEventBase
{
public:
  SAXErrorEventBase( const std::string& msg )
  {
    fMessage = msg;
  }
  SAXErrorEventBase( const char* msg ) : fMessage( msg )
  {
  }
  ~SAXErrorEventBase()
  {
  }
  
  const std::string& Message() const
  {
    return fMessage;
  }
  
private:
  std::string fMessage;
};

class SAXEventWarning : virtual public SAXEvent, public SAXErrorEventBase
{
public:
  SAXEventWarning( const std::string& msg ) : SAXErrorEventBase( msg )
  {
  }
  SAXEventWarning( const char* msg ) : SAXErrorEventBase( msg )
  {
  }
  ~SAXEventWarning()
  {
  }
  
  virtual const SAXEvent::EventType Type() const
  {
    return SAXEvent::eWarning;
  }
};

class SAXEventError : virtual public SAXEvent, public SAXErrorEventBase
{
public:
  SAXEventError( const std::string& msg ) : SAXErrorEventBase( msg )
  {
  }
  SAXEventError( const char* msg ) : SAXErrorEventBase( msg )
  {
  }
  ~SAXEventError()
  {
  }
  
  virtual const SAXEvent::EventType Type() const
  {
    return SAXEvent::eError;
  }
};

class SAXEventFatalError : virtual public SAXEvent, public SAXErrorEventBase
{
public:
  SAXEventFatalError( const std::string& msg ) : SAXErrorEventBase( msg )
  {
  }
  SAXEventFatalError( const char* msg ) : SAXErrorEventBase( msg )
  {
  }
  ~SAXEventFatalError()
  {
  }
  
  virtual const SAXEvent::EventType Type() const
  {
    return SAXEvent::eFatalError;
  }
};

#endif // SAX_ERROR_EVENTS_H

