// -*- C++ -*-
// $Id: ProcessingContext.h,v 1.1 2005/02/11 17:58:48 rado Exp $
// GEANT4 tag $Name: GDML_2_4_0 $
#ifndef GDML_SAXANA_PROCESSING_CONTEXT_H
#define GDML_SAXANA_PROCESSING_CONTEXT_H 1

class StateStack;
class SAXEvent;
class SAXEventGun;
class ProcessingConfigurator;
class SAXObject;

class ProcessingContext
{
public:
  virtual const StateStack*             GetStack() const = 0;
  virtual const SAXEvent*               GetLastEvent() const = 0;
  virtual const SAXEventGun*            GetSAXEventGun() const = 0; 
  virtual void                          SetSAXEventGun( const SAXEventGun* gun ) = 0;
  virtual const ProcessingConfigurator* GetConfig() const = 0;
  virtual SAXObject**                   GetTopObject() const = 0;
  virtual const char*                   GetParentState() const = 0;
};

#endif // GDML_SAXANA_PROCESSING_CONTEXT_H

