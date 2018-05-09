// $Id: BuildG4Polyhedra.hh,v 1.2 2005/02/08 16:59:58 witoldp Exp $
#ifndef INCLUDE_BUILDG4POLYHEDRA_HH 
#define INCLUDE_BUILDG4POLYHEDRA_HH 1

// Include files
#include "G4Polyhedra.hh"

/** @class BuildG4Polyhedra BuildG4Polyhedra.hh include/BuildG4Polyhedra.hh
 *  
 *
 *  @author Witold POKORSKI
 *  @date   2005-02-03
 */
class BuildG4Polyhedra {
public: 
  /// Standard constructor
  BuildG4Polyhedra();
  virtual ~BuildG4Polyhedra( ); ///< Destructor

  BuildG4Polyhedra(int);
  void AddZPlane(int, double, double, double);
  G4Polyhedra* Build(G4String&, double, double, int, int);

private:
  double* zpl;
  double* zin;
  double* zout;

};
#endif // INCLUDE_BUILDG4POLYHEDRA_HH
