// $Id: G4GDMLWriter.cpp,v 1.5 2005/11/03 11:22:34 witoldp Exp $
// Include files
#include <iostream>
#include <sstream>

// G4
#include "G4LogicalVolume.hh"
#include "G4VPVParameterisation.hh"
#include "G4Element.hh"
#include "G4ElementTable.hh"
#include "G4Material.hh"
#include "G4MaterialTable.hh"
#include "G4VSolid.hh"
#include "G4SolidStore.hh"

#include "G4Cons.hh"
#include "G4Box.hh"
#include "G4Sphere.hh"
#include "G4Tubs.hh"
#include "G4Polycone.hh"
#include "G4Para.hh"
#include "G4Trap.hh"
#include "G4Trd.hh"
#include "G4Hype.hh"
#include "G4Torus.hh"
#include "G4Orb.hh"
#include "G4Polyhedra.hh"
#include "G4EllipticalTube.hh"

#include "G4BooleanSolid.hh"
#include "G4SubtractionSolid.hh"
#include "G4DisplacedSolid.hh"

// local
#include "G4Writer/G4GDMLWriter.h"

#include <stack>

//-----------------------------------------------------------------------------
// Implementation file for class : G4GDMLWriter
//
// 2004-06-23 : Witold POKORSKI
//-----------------------------------------------------------------------------

//=============================================================================
// Standard constructor, initializes variables
//=============================================================================
G4GDMLWriter::G4GDMLWriter(  )
  : schemaLocation("gdml.xsd"),
    outputFile("g4geo.gdml")
{
  ut = new Utils();
}
G4GDMLWriter::G4GDMLWriter(std::string schema,
                           std::string output)
  : schemaLocation(schema),
    outputFile(output)
{
  ut = new Utils();
}
//=============================================================================
// Destructor
//=============================================================================
G4GDMLWriter::~G4GDMLWriter()
{
}
//============================================================================
void G4GDMLWriter::DumpMaterials()
{
  int howmany=0;

  // writing out materials
  const G4MaterialTable* mattable = G4Material::GetMaterialTable();
  int matsize = mattable->size();
  std::cout << "Dumping " << matsize << " materials"<< std::endl;

  for( G4MaterialTable::const_iterator it=mattable->begin();
       it!=mattable->end();
       it++ )
  {
    howmany++;
    int nbofele = (*it)->GetNumberOfElements();

    if(nbofele > 1)
    {
      gdml::writer::FractionsVector*
        frvect = new gdml::writer::FractionsVector();

      for(int ii=0; ii!=nbofele; ii++)
	    {
	      const G4Element*
          ele = (*it)->GetElement(ii);

	      matcur->addElement(ut->name(ele),
                           ele->GetSymbol(),
                           (int)ele->GetZ(),
                           ele->GetA()*mole/g);
	      frvect->push_back(std::pair<std::string, double>
                          (ut->name((*it)->GetElement(ii)),
                           (*it)->GetFractionVector()[ii]));
	    }
      matcur->addMaterial(ut->name(*it),
                          (*it)->GetChemicalFormula(),
                          (*it)->GetDensity()*cm3/g,
                          *frvect);
    } else {
      matcur->addMaterial(ut->name(*it),
                          (*it)->GetChemicalFormula(),
                          (*it)->GetZ(),
                          (*it)->GetA()*mole/g,
                          (*it)->GetDensity()*cm3/g);
    }
    if(!(howmany%100)) std::cout << howmany << "/"
                                 << matsize << " materials done" << std::endl;
  }
}

void G4GDMLWriter::DumpSolids()
{
  // writing out solids
  G4SolidStore* solidstr = G4SolidStore::GetInstance();
  int howmany = 0;
  int solsize = solidstr->size();

  std::cout << "Dumping " << solsize << " solids"<< std::endl;

  for(G4SolidStore::const_iterator sit = solidstr->begin();
      sit!=solidstr->end();
      sit++)
  {
    howmany++;

    if(!(howmany%100)) std::cout << howmany << "/"
                                 << solsize << " solids done" << std::endl;

    G4VSolid* tempsol = *sit;

    while(const G4DisplacedSolid* disp =
          dynamic_cast<const G4DisplacedSolid*>(tempsol))
    {
      tempsol = disp->GetConstituentMovedSolid();
    }

    if( const G4Sphere* sphere = dynamic_cast<const G4Sphere*>(tempsol) )
    {
      solcur->addSphere( ut->name(sphere),
                         sphere->GetInsideRadius()/mm,
                         sphere->GetOuterRadius()/mm,
                         sphere->GetStartPhiAngle()/deg,
                         sphere->GetDeltaPhiAngle()/deg,
                         sphere->GetStartThetaAngle()/deg,
                         sphere->GetDeltaThetaAngle()/deg,
                         "mm","degree");
    }
    else if( const G4Box* box = dynamic_cast<const G4Box*>(tempsol) )
    {
      solcur->addBox( ut->name(box),
                      2*box->GetXHalfLength()/mm,
                      2*box->GetYHalfLength()/mm,
                      2*box->GetZHalfLength()/mm,"mm" );
    }
    else if( const G4Tubs* tubs = dynamic_cast<const G4Tubs*>(tempsol) )
    {
      solcur->addTube(ut->name(tubs),
                      tubs->GetInnerRadius()/mm,
                      tubs->GetOuterRadius()/mm,
                      2*tubs->GetZHalfLength()/mm,
                      tubs->GetStartPhiAngle()/deg,
                      tubs->GetDeltaPhiAngle()/deg
                      ,"mm","degree");
    }
    else if( const G4Cons* cons = dynamic_cast<const G4Cons*>(tempsol) )
    {
      solcur->addCone(ut->name(cons),
                      cons->GetInnerRadiusMinusZ()/mm,
                      cons->GetOuterRadiusMinusZ()/mm,
                      cons->GetInnerRadiusPlusZ()/mm,
                      cons->GetOuterRadiusPlusZ()/mm,
                      2*cons->GetZHalfLength()/mm,
                      cons->GetStartPhiAngle()/deg,
                      cons->GetDeltaPhiAngle()/deg,
                      "mm","degree");
    }
    else if( const G4Polycone* polycone = dynamic_cast<const G4Polycone*>(tempsol) )
    {
      solcur->addPolyCone(ut->name(polycone),
                          polycone->GetOriginalParameters()->Num_z_planes,
                          polycone->GetOriginalParameters()->Start_angle/deg,
                          polycone->GetOriginalParameters()->Opening_angle/deg,
                          polycone->GetOriginalParameters()->Z_values,
                          polycone->GetOriginalParameters()->Rmin,
                          polycone->GetOriginalParameters()->Rmax,
                          "mm","degree");
    }
    else if( const G4Para* para = dynamic_cast<const G4Para*>(tempsol) )
    {
      double phi;
      if(para->GetSymAxis().z()!=1.0)
        phi = atan(para->GetSymAxis().y()/para->GetSymAxis().x());
      else
        phi = 0;

      solcur->addPara(ut->name(para),
                      2*para->GetXHalfLength()/mm,
                      2*para->GetYHalfLength()/mm,
                      2*para->GetZHalfLength()/mm,
                      atan(para->GetTanAlpha())/deg,
                      acos(para->GetSymAxis().z())/deg,
                      phi/deg,"mm","degree");
    }
    else if( const G4Trap* trap = dynamic_cast<const G4Trap*>(tempsol) )
    {
      double phi;
      if(trap->GetSymAxis().z()!=1.0)
        phi = atan(trap->GetSymAxis().y()/trap->GetSymAxis().x());
      else
        phi = 0;

      solcur->addTrap(ut->name(trap),
                      2*trap->GetXHalfLength1()/mm,
                      2*trap->GetXHalfLength2()/mm,
                      2*trap->GetYHalfLength1()/mm,
                      atan(trap->GetTanAlpha1())/deg,
                      2*trap->GetXHalfLength3()/mm,
                      2*trap->GetXHalfLength4()/mm,
                      2*trap->GetYHalfLength2()/mm,
                      atan(trap->GetTanAlpha2())/deg,
                      acos(trap->GetSymAxis().z())/deg,
                      2*trap->GetZHalfLength()/mm,
                      phi/deg,"mm","degree");


    }
    else if( const G4Trd* trd = dynamic_cast<const G4Trd*>(tempsol) )
    {
      solcur->addTrd(ut->name(trd),
                     2*trd->GetXHalfLength1()/mm,
                     2*trd->GetXHalfLength2()/mm,
                     2*trd->GetYHalfLength1()/mm,
                     2*trd->GetYHalfLength2()/mm,
                     2*trd->GetZHalfLength()/mm,"mm");
    }
    else if( const G4Orb* orb = dynamic_cast<const G4Orb*>(tempsol) )
    {
      solcur->addOrb(ut->name(orb),
                     orb->GetRadius()/mm,
                     "mm");
    }
    else if( const G4Hype* hype = dynamic_cast<const G4Hype*>(tempsol) )
    {
      solcur->addHype(ut->name(hype),
                      hype->GetInnerRadius()/mm,
                      hype->GetOuterRadius()/mm,
                      hype->GetInnerStereo()/deg,
                      hype->GetOuterStereo()/deg,
                      2*hype->GetZHalfLength()/mm,"mm","degree");
    }
    else if( const G4EllipticalTube* eltu = dynamic_cast<const G4EllipticalTube*>(tempsol) )
    {
      solcur->addElTube(ut->name(eltu),
                        eltu->GetDx()/mm,
                        eltu->GetDy()/mm,
                        eltu->GetDz()/mm,"mm");
    }
    else if( const G4Torus* torus = dynamic_cast<const G4Torus*>(tempsol) )
    {
      solcur->addTorus(ut->name(torus),
                       torus->GetRmin()/mm,
                       torus->GetRmax()/mm,
                       torus->GetRtor()/mm,
                       torus->GetSPhi()/degree,
                       torus->GetDPhi()/degree,"mm","degree");
    }
    else if( const G4Polyhedra* polyh = dynamic_cast<const G4Polyhedra*>(tempsol) )
    {
      solcur->addPolyhedra(ut->name(polyh),
                           polyh->GetOriginalParameters()->Num_z_planes,
                           polyh->GetOriginalParameters()->Start_angle/deg,
                           polyh->GetOriginalParameters()->Opening_angle/deg,
                           polyh->GetOriginalParameters()->numSide,
                           polyh->GetOriginalParameters()->Z_values,
                           polyh->GetOriginalParameters()->Rmin,
                           polyh->GetOriginalParameters()->Rmax,
                           "mm",
                           "degree");
    }
    else if( const G4BooleanSolid* boo = dynamic_cast<const G4BooleanSolid*>(tempsol) )
    {
      std::string btype("unknown");
      if(boo->GetEntityType()=="G4SubtractionSolid") btype = "subtraction";
      else if(boo->GetEntityType()=="G4UnionSolid") btype = "union";
      else if(boo->GetEntityType()=="G4IntersectionSolid") btype = "intersection";


      const G4VSolid* constit0 = boo->GetConstituentSolid(0);
      const G4VSolid* constit1 = boo->GetConstituentSolid(1);


      double dx0=0;
      double dy0=0;
      double dz0=0;
      double drx0=0;
      double dry0=0;
      double drz0=0;

      double dx1=0;
      double dy1=0;
      double dz1=0;
      double drx1=0;
      double dry1=0;
      double drz1=0;

      while(const G4DisplacedSolid* disp =
            dynamic_cast<const G4DisplacedSolid*>(constit0))
	    {
	      dx0 += disp->GetObjectTranslation().x()/mm;
	      dy0 += disp->GetObjectTranslation().y()/mm;
	      dz0 += disp->GetObjectTranslation().z()/mm;

	      const G4RotationMatrix r = disp->GetObjectRotation();
	      double tdrx=0; double tdry=0; double tdrz=0;
	      getXYZ( &r, tdrx, tdry, tdrz );
	      drx0+=tdrx; dry0+=tdry; drz0+=tdrz;

	      constit0 = disp->GetConstituentMovedSolid();
	    }

      while(const G4DisplacedSolid* disp =
            dynamic_cast<const G4DisplacedSolid*>(constit1))
	    {
	      dx1 += disp->GetObjectTranslation().x()/mm;
	      dy1 += disp->GetObjectTranslation().y()/mm;
	      dz1 += disp->GetObjectTranslation().z()/mm;

	      const G4RotationMatrix r = disp->GetObjectRotation();
	      double tdrx=0; double tdry=0; double tdrz=0;
	      getXYZ( &r, tdrx, tdry, tdrz );
	      drx1+=tdrx; dry1+=tdry; drz1+=tdrz;

	      constit1 = disp->GetConstituentMovedSolid();
	    }

      solcur->addBoolean(ut->name(boo),
                         btype,
                         ut->name(constit0),
                         ut->name(constit1),
                         dx1/mm, dy1/mm, dz1/mm,
                         drx1/deg, dry1/deg, drz1/deg,
                         dx0/mm, dy0/mm, dz0/mm,
                         drx0/deg, dry0/deg, drz0/deg);
    }
    else
    {
      // (tempsol)->DumpInfo();

      std::cout << "Unknown solid: " << (tempsol)->GetName() << std::endl;
      std::cout << "The corresponding volume will have a null reference to solid!!" << std::endl;
    }
  }
}

void G4GDMLWriter::getXYZ( const G4RotationMatrix* r, double& a, double& b, double& c) const
{
  double cosb = sqrt( r->xx()*r->xx() + r->yx()*r->yx() );

  if (cosb > 16*FLT_EPSILON)
  {
    a = atan2(  r->zy(), r->zz() );
    b = atan2( -r->zx(), cosb    );
    c = atan2(  r->yx(), r->xx() );
  }
  else
  {
    a = atan2( -r->yz(), r->yy() );
    b = atan2( -r->zx(), cosb    );
    c = 0.;
  }
}

void G4GDMLWriter::DumpGeoTree(G4VPhysicalVolume* physvol)
{
  std::stack<G4VPhysicalVolume*> volstack;

  G4LogicalVolume* logvol = physvol->GetLogicalVolume();
  int nbofdaughters = logvol->GetNoDaughters();

  for (int licz = 0; licz < nbofdaughters; licz++)
  {
    G4VPhysicalVolume* pv = logvol->GetDaughter(licz);
    G4LogicalVolume* dlv = pv->GetLogicalVolume();


    std::vector<G4LogicalVolume*>::const_iterator itlv = lvlist.end();

    while(itlv!=lvlist.begin() && *itlv!=dlv) itlv--;

    if(itlv==lvlist.begin())
    {
      lvlist.push_back(pv->GetLogicalVolume());
      DumpGeoTree(pv);
    }
    volstack.push( pv );
  }

  std::string lvname = ut->name(logvol);

  G4VSolid* ts = logvol->GetSolid();

  while(const G4DisplacedSolid* dis =
        dynamic_cast<const G4DisplacedSolid*>(ts))
  {
    ts = dis->GetConstituentMovedSolid();
  }

  strcur->addVolume(lvname,
                    ut->name(logvol->GetMaterial()),
                    ut->name(ts));

  while( !volstack.empty() )
  {
    G4VPhysicalVolume* pv = volstack.top();
    
    if(pv->IsParameterised())
    {
      gdml::writer::Element& param =
        strcur->addParameterised(lvname,// mother volume
                                 ut->name(pv->GetLogicalVolume()),// parametrised volume
                                 pv->GetMultiplicity());// number of copies
      
      G4VSolid* solid = logvol->GetSolid();
      
      for(int cpiter=1;cpiter!=pv->GetMultiplicity()+1;cpiter++)
	    {
        
	      pv->GetParameterisation()->ComputeTransformation(cpiter-1,pv);
        
	      const G4RotationMatrix* r = pv->GetFrameRotation();
        
	      double rx=0.0, ry=0.0, rz=0.0; // axis rotation angles
	      if(r) getXYZ( r, rx, ry, rz );
        
	      if( G4Box* box = dynamic_cast<G4Box*>(solid) )
        {
          pv->GetParameterisation()->ComputeDimensions(*box,cpiter-1,pv);
          
          strcur->addBoxParameterisation(ut->name(pv->GetLogicalVolume()),
                                         param,  // volume
                                         cpiter,                            // copy number
                                         pv->GetObjectTranslation().getX(), // position
                                         pv->GetObjectTranslation().getY(),
                                         pv->GetObjectTranslation().getZ(),
                                         rx, ry, rz, // rotation
                                         box->GetXHalfLength(),
                                         box->GetYHalfLength(),
                                         box->GetZHalfLength()); // half-lengths
        }
	      else if( G4Tubs* tubs = dynamic_cast<G4Tubs*>(solid) )
        {
          pv->GetParameterisation()->ComputeDimensions(*tubs,cpiter-1,pv);
          
          strcur->addTubeParameterisation(ut->name(pv->GetLogicalVolume()),
                                          param,// volume
                                          cpiter,// copy number
                                          pv->GetObjectTranslation().getX(),// position
                                          pv->GetObjectTranslation().getY(),
                                          pv->GetObjectTranslation().getZ(),
                                          rx, ry, rz,// rotation
                                          tubs->GetInnerRadius(),
                                          tubs->GetOuterRadius(),
                                          2*tubs->GetZHalfLength(),
                                          tubs->GetStartPhiAngle()/deg,
                                          tubs->GetDeltaPhiAngle()/deg);
        }
	      else
        {
          std::cout << "Trying to parameterise unknown solid - it will not work!"
                    << std::endl;
        }
	    }
    }
    else if(pv->IsReplicated())
    {
      EAxis ax;
      int nrep;
      double width;
      double offset;
      bool cons;

      pv->GetReplicationData(ax, nrep, width, offset, cons);

      int axi=0;
      
      if(ax==kXAxis)
      {
        axi=1;
      }
      else if(ax==kYAxis)
      {
        axi=2;
      }
      else if(ax==kZAxis)
      {
        axi=3;
      }
      
      strcur->addReplica(lvname,// mother volume
                         ut->name(pv->GetLogicalVolume()),// replicated volume
                         nrep, axi, width, offset);
    }
    else //normal volume
    {
      std::string pvname = ut->name(pv);
      
      double dx=0;
      double dy=0;
      double dz=0;
      double drx=0;
      double dry=0;
      double drz=0;

      G4VSolid* tsol = pv->GetLogicalVolume()->GetSolid();

      while(const G4DisplacedSolid* displ =
            dynamic_cast<const G4DisplacedSolid*>(tsol))
	    {
	      dx += displ->GetObjectTranslation().x()/mm;
	      dy += displ->GetObjectTranslation().y()/mm;
	      dz += displ->GetObjectTranslation().z()/mm;

	      const G4RotationMatrix r = displ->GetObjectRotation();
	      double tdrx=0; double tdry=0; double tdrz=0;
	      getXYZ( &r, tdrx, tdry, tdrz );
	      drx+=tdrx; dry+=tdry; drz+=tdrz;
        
	      tsol = displ->GetConstituentMovedSolid();
	    }
      
      defcur->addPosition( pvname+"in"+lvname+"p",
                           pv->GetObjectTranslation().getX()+dx,
                           pv->GetObjectTranslation().getY()+dy,
                           pv->GetObjectTranslation().getZ()+dz );
      
      double rx=0.0, ry=0.0, rz=0.0; // axis rotation angles
      const G4RotationMatrix* r = pv->GetFrameRotation();

      std::string rotname("");

      if (r) 
      {
        rotname = pvname+"in"+lvname+"r";
        getXYZ( r, rx, ry, rz );
        defcur->addRotation( pvname+"in"+lvname+"r",
                             (rx+drx)/deg, (ry+dry)/deg, (rz+drz)/deg, "degree" );
      }

      strcur->addChild(lvname,
                       ut->name(pv->GetLogicalVolume()),
                       pvname+"in"+lvname+"p",
                       rotname);
    }
    volstack.pop();
  }
};


void G4GDMLWriter::DumpGeometryInfo(G4VPhysicalVolume* worldPV)
{
  std::cout << "Dumping geometry description into GDML file."
            << std::endl;

  gdml::writer::DocumentBuilder db(outputFile);
  db.OpenDocument();
  db.setSchemaLocation( schemaLocation );

  matcur = &db.getMaterialsCursor();
  solcur = &db.getSolidsCursor();
  defcur = &db.getDefinitionsCursor();
  strcur = &db.getStructureCursor();
  stpcur = &db.getSetupCursor();

  DumpMaterials();
  DumpSolids();

  // Traverse the geometry hierarchy and write it down to the file
  std::cout << "Examining the logical tree" << std::endl;
  DumpGeoTree(worldPV);

  // Finalize with the setup pointing to the world volume
  stpcur->addSetup( "Default",                                // Setup ID
                    "1.0",                                    // Setup version
                    ut->name(worldPV->GetLogicalVolume()) ); // World vol. ref.

  db.WriteDocument();
  db.CloseDocument();
  std::cout << "Written out GDML file." << std::endl;
};

