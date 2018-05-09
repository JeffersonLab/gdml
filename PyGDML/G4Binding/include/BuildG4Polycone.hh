// $Id: BuildG4Polycone.hh,v 1.1 2005/02/04 17:16:07 witoldp Exp $
#ifndef INCLUDE_BUILDG4POLYCONE_HH 
#define INCLUDE_BUILDG4POLYCONE_HH 1

// Include files
#include "G4Polycone.hh"

/** @class BuildG4Polycone BuildG4Polycone.hh include/BuildG4Polycone.hh
 *  
 *
 *  @author Witold POKORSKI
 *  @date   2005-02-03
 */
class BuildG4Polycone {
public: 
  /// Standard constructor
  BuildG4Polycone();
  virtual ~BuildG4Polycone( ); ///< Destructor

  BuildG4Polycone(int);
  void AddZPlane(int, double, double, double);
  G4Polycone* Build(G4String&, double, double, int);

private:
  double* zpl;
  double* zin;
  double* zout;

};
#endif // INCLUDE_BUILDG4POLYCONE_HH
