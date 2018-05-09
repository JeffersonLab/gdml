// $Id: RunManager.cpp,v 1.2 2005/02/16 13:35:41 witoldp Exp $
// Include files 

// local
#include "RunManager.h"
#include <iostream>
//-----------------------------------------------------------------------------
// Implementation file for class : RunManager
//
// 2004-04-28 : Witold POKORSKI
//-----------------------------------------------------------------------------

//=============================================================================
// Standard constructor, initializes variables
//=============================================================================
RunManager::RunManager(  ) : G4RunManager()
{
}
//=============================================================================
// Destructor
//=============================================================================
RunManager::~RunManager() {}; 

//=============================================================================

void RunManager::BeamOn(G4int n_event,
                        const char* macroFile,
                        G4int n_select)
{  
  G4bool cond = ConfirmBeamOnCondition();
  if(cond)
  {
    numberOfEventToBeProcessed = n_event;
    RunInitialization();
    if(n_event>0) DoEventLoop(n_event,macroFile,n_select);
    // RunTermination();
  }
};

void RunManager::Terminate()
{
  RunTermination();
};

