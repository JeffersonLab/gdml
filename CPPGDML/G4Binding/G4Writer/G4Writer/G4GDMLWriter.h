// -*- C++ -*-
// $Id: G4GDMLWriter.h,v 1.3 2005/08/03 09:44:13 witoldp Exp $
#ifndef INCLUDE_G4GDMLWRITER_H 
#define INCLUDE_G4GDMLWRITER_H 1

// Include files
#include "G4RotationMatrix.hh"

// GDML
#include "Writer/DocumentBuilder.h"
#include "Writer/DefinitionsCursor.h"
#include "Writer/StructureCursor.h"
#include "Writer/MaterialsCursor.h"
#include "Writer/SolidsCursor.h"
#include "Writer/SetupCursor.h"

#include "G4Writer/Utils.h"
#include "Writer/Element.h"

// Forward declaration
class G4VPhysicalVolume;

/** @class G4GDMLWriter G4GDMLWriter.h include/G4GDMLWriter.h
 *  
 *
 *  @author Witold POKORSKI
 *  @author Radovan Chytracek
 *  @date   2004-06-23
 */
class G4GDMLWriter
{
public: 
  /// Standard constructor
  G4GDMLWriter( ); 
  G4GDMLWriter( std::string,
		std::string ); 
		
  virtual ~G4GDMLWriter(); ///< Destructor
		
  void DumpGeometryInfo( G4VPhysicalVolume* );
		
private:
  void DumpMaterials();
  void DumpSolids();
  void DumpGeoTree( G4VPhysicalVolume* );
  void getXYZ( const G4RotationMatrix* , double&, double&, double& ) const;

private:
  std::string                      schemaLocation;
  std::string                      outputFile;
  gdml::writer::MaterialsCursor*   matcur;
  gdml::writer::SolidsCursor*      solcur;
  gdml::writer::StructureCursor*   strcur;
  gdml::writer::DefinitionsCursor* defcur;
  gdml::writer::SetupCursor*       stpcur;

  std::vector<G4LogicalVolume*> lvlist;

  Utils* ut;
};

#endif // INCLUDE_G4GDMLWRITER_H
