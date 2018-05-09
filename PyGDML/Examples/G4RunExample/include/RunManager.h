// $Id: RunManager.h,v 1.1 2005/02/11 18:51:29 witoldp Exp $
#ifndef INCLUDE_RUNMANAGER_H 
#define INCLUDE_RUNMANAGER_H 1

// Include files
#include "G4RunManager.hh"

/** @class RunManager RunManager.h include/RunManager.h
 *  
 *
 *  @author Witold POKORSKI
 *  @date   2004-04-28
 */
class RunManager : public G4RunManager {
public: 
  /// Standard constructor
  RunManager( ); 

  virtual ~RunManager( ); ///< Destructor
  
  void BeamOn(G4int n_event,const char* macroFile=0,G4int n_select=-1);
  void Terminate();
  
protected:

private:

};
#endif // INCLUDE_RUNMANAGER_H
