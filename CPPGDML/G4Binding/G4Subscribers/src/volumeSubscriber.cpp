// -*- C++ -*-
// $Id: volumeSubscriber.cpp,v 1.20 2006/08/29 10:27:12 dkruse Exp $
#include "Saxana/SAXSubscriber.h"
#include "Saxana/SAXComponentFactory.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/ProcessingConfigurator.h"

#include "G4Processor/GDMLProcessor.h"
#include "G4Processor/MaterialLocator.h"
#include "G4Processor/GenericPositionSizeParameterisation.h"

#include "G4Subscribers/Util.h"

#include "Schema/volume.h"
#include "Schema/physvol.h"
#include "Schema/replicavol.h"
#include "Schema/divisionvol.h"
#include "Schema/replicate_along_axis.h"
#include "Schema/paramvol.h"
#include "Schema/parameterised_position_size.h"
#include "Schema/parameters.h"
#include "Schema/box_dimensions.h"
#include "Schema/tube_dimensions.h"
#include "Schema/SinglePlacementType.h"
#include "Schema/directionType.h"
#include "Schema/define.h"

#include "G4Material.hh"

#include "G4AssemblyVolume.hh"
#include "G4LogicalVolume.hh"
#include "G4PVPlacement.hh"
#include "G4PVReplica.hh"
#include "G4PVParameterised.hh"
#include "G4PVDivision.hh"
#include "G4VPVParameterisation.hh"

#include <iostream>
#include <sstream>

class volumeSubscriber : virtual public SAXSubscriber
{
public:
  virtual const SAXComponentObject* Build() const {
    return this;
  }

public:
  volumeSubscriber() {
    Subscribe( "volume" );
  }

  virtual ~volumeSubscriber() {
  }

  // The activation callback invoked by SAXG4Processor whenever it has
  // a new object created from XML and a corresponding subcriber exists
  virtual void Activate( const SAXObject* object )
  {

    GDMLProcessor*           processor = GDMLProcessor::GetInstance();
    GDMLExpressionEvaluator* calc      = GDMLProcessor::GetInstance()->GetEvaluator();

    const volume* obj = 0;

    if( object != 0 )
    {
      try
      {
        obj = dynamic_cast<const volume*>( object );

        if( obj != 0 )
        {

          // Let's analyze content model if volume
          const ContentSequence* seq = obj->get_content();
          size_t count = seq->size();

          G4Material*      vmaterial = 0;
          G4VSolid*        vsolid    = 0;
          G4PVPlacement*   vphysvol    = 0;
          G4LogicalVolume* vnew      = 0;

          for( size_t i = 0; i < count; i++ )
          {
            if( seq->content(i).tag == "materialref" )
            {
              // Check & retrieve material
              VolumeType::materialref*
                mref = dynamic_cast<VolumeType::materialref*>( seq->content(i).object );

              if( (vmaterial = MaterialLocator::FindMaterial( Util::generateName(mref->get_ref() ) ) ) == 0 )
              {
                std::cerr << "VOLUME SUBSCRIBER:: material " << mref->get_ref()
                          << " not found!" << std::endl;
                std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                std::cerr << "Please, re-order your materials or add the missing one..." << std::endl;
                G4Exception( "Shutting-down due to error(s) in GDML input..." );
              }
            }
            else if( seq->content(i).tag == "solidref" )
            {
              // Check & retrieve solid
              VolumeType::solidref*
                sref = dynamic_cast<VolumeType::solidref*>( seq->content(i).object );

              vsolid = const_cast<G4VSolid*>( processor->GetSolid( sref->get_ref()) );

              if( vsolid == 0 ) {
                std::cerr << "VOLUME SUBSCRIBER:: solid " << sref->get_ref()
                          << " not found!" << std::endl;
                std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                std::cerr << "Please, re-order your solids or add the missing one..." << std::endl;
                G4Exception( "Shutting-down due to error(s) in GDML input..." );
              }
              // At this point we should have material & solid so we can create log. volume
              std::string lname = obj->get_name();
              vnew = new G4LogicalVolume( vsolid, vmaterial, Util::generateName(lname) );
              GDMLProcessor::GetInstance()->AddLogicalVolume( obj->get_name(), vnew );
            }
            else if( seq->content(i).tag == "physvol" )
            {
              // Analyze each physvol's content
              physvol* c = dynamic_cast<physvol*>( seq->content(i).object );
             
              // get the name of the physvol (optional attribute used for the moment 
              // only for optical surfaces)
             
              std::string nameattr = c->get_name();

              const ContentSequence* physvol_volchoice = c->get_content();
              size_t ccount = physvol_volchoice->size();
              SinglePlacementType::file*        f    = 0;
              SinglePlacementType::volumeref*   vr   = 0;
              SinglePlacementType::positionref* pr   = 0;
              SinglePlacementType::rotationref* rr   = 0;
              G4LogicalVolume*                  plog = 0;
              G4AssemblyVolume*                 alog = 0;
              G4ThreeVector*                    ppos = 0;
              G4RotationMatrix*                 prot = 0;
              bool doAssemblyInprint                 = false;
              bool externalFile                      = false;
              std::string                       efwvn; //external_file_world_volume_name

              /*
                std::cout << "debug AA" << std::endl;
                for( size_t cidx = 0; cidx < ccount; cidx++ )
                {
                std::cout << "TAG: " << physvol_volchoice->content(cidx).tag << std::endl;
                }
                std::cout << "debug BB" << std::endl;
              */
	      
              for( size_t cidx = 0; cidx < ccount; cidx++ )
              {
                if( physvol_volchoice->content(cidx).tag == "volumeref" )
                {
                  // Check & retrieve volume
                  vr = dynamic_cast<SinglePlacementType::volumeref*>
                    ( physvol_volchoice->content(cidx).object );
                  plog = const_cast<G4LogicalVolume*>
                    (processor->GetLogicalVolume( vr->get_ref()));
                  if( plog == 0 ) {
                    // Let's check if an assembly request was ment
                    alog = const_cast<G4AssemblyVolume*>(processor->GetAssemblyVolume( vr->get_ref()));

                    if( alog == 0 ) {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol volume " << vr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, re-order your volumes or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                    doAssemblyInprint = true;
                  }
                }
                else if( physvol_volchoice->content(cidx).tag == "file" )
                {
                  externalFile = true;
                  // Check & retrieve volume
                  f = dynamic_cast<SinglePlacementType::file*>
                    ( physvol_volchoice->content(cidx).object );
		  
		  if(!processor->alreadyParsed(f->get_name()))
		  {
		   SAXProcessor sxp;
                   ProcessingConfigurator config;
                   G4VPhysicalVolume* tempWorld;
		   sxp.Initialize();
                   config.SetURI( f->get_name() );
                   config.SetSetupName( "Default" );
                   sxp.Configure( &config );
		   processor->currentlyParsing(f->get_name());
		   sxp.Run();
		   //std::cout<<"volname: "<<f->get_volname() << " filename: "<< f->get_name()<<std::endl; 
                   if(f->get_volname()=="")
		   {
                    //std::cout<<"WRONG PLACE!"<<std::endl;
		    tempWorld =  (G4VPhysicalVolume *)processor->GetTempWorldVolume();
		   }
		   else
		   {
		    //std::cout<<"RIGHT PLACE!"<<std::endl;
		    G4LogicalVolume* wlv = const_cast<G4LogicalVolume*>(processor->GetLogicalVolume(f->get_volname()));
		    G4VPhysicalVolume* wpv = new G4PVPlacement( 0, G4ThreeVector(), wlv, wlv->GetName(), 0, false, 0 );
		    tempWorld =  wpv;
		   }
		   efwvn = tempWorld->GetName(); 
		   processor->AddParsedFile(f->get_name(), tempWorld);
                   
                   if( tempWorld == 0 )
		   {
                    G4Exception("TEMPORARY World volume not set properly check your setup selection criteria or GDML input!");
		   }

                   plog = tempWorld->GetLogicalVolume();
                  }
		  else
		  {
		   const G4VPhysicalVolume* tempWorld = processor->GetWorldVolumeOfParsedFile(f->get_name());
		   if( tempWorld == 0 )
		   {
                    G4Exception("2TEMPORARY World volume not set properly check your setup selection criteria or GDML input!");
		   }
		   efwvn = tempWorld->GetName();
		   plog = const_cast<G4LogicalVolume*> (tempWorld->GetLogicalVolume());
		  }

                  if( plog == 0 )
                  {
                    std::cerr << "plog == 0 !!" << std::endl;
                    G4Exception( "Shutting-down due to error(s) in GDML input..." );
                  }
                }
                else if( physvol_volchoice->content(cidx).tag == "choice" )
                {
                  // Apparently we got the choices holding one of position, rotation,
                  // positionref or rotationref
                  const ContentChoice*
                    vchoice = dynamic_cast<const ContentChoice*>( physvol_volchoice->content(cidx).object );

                  if( vchoice->content().tag == "position" )
                  {
                    // We define::rotation as currently we keep all definitions global
                    // This might change in future if scoped defintions will be needed, if ever
                    define::position* p = dynamic_cast<define::position*>( vchoice->content().object );
                    std::string expr = p->get_x() + "*" + p->get_unit();
                    double dx = calc->Eval( expr.c_str() );
                    expr = p->get_y() + "*" + p->get_unit();
                    double dy = calc->Eval( expr.c_str() );
                    expr = p->get_z() + "*" + p->get_unit();
                    double dz = calc->Eval( expr.c_str() );
                    ppos = new G4ThreeVector( dx, dy, dz );
                    GDMLProcessor::GetInstance()->AddPosition( p->get_name(), ppos );
                  }
                  else if( vchoice->content().tag == "rotation" ) {
                    // We define::rotation as currently we keep all definitions global
                    // This might change in future if scoped defintions will be needed, if ever
                    define::rotation* r = dynamic_cast<define::rotation*>( vchoice->content().object );
                    std::string expr = r->get_x() + "*" + r->get_unit();
                    double dx = calc->Eval( expr.c_str() );
                    expr = r->get_y() + "*" + r->get_unit();
                    double dy = calc->Eval( expr.c_str() );
                    expr = r->get_z() + "*" + r->get_unit();
                    double dz = calc->Eval( expr.c_str() );
                    prot = new G4RotationMatrix;
                    prot->rotateX( dx );
                    prot->rotateY( dy );
                    prot->rotateZ( dz );
                    GDMLProcessor::GetInstance()->AddRotation( r->get_name(), prot );
                  }
                  else if( vchoice->content().tag == "positionref" )
                  {
                    // Check & retrieve position
                    pr   =
                      dynamic_cast<SinglePlacementType::positionref*>( vchoice->content().object );
                    ppos =
                      const_cast<G4ThreeVector*>( processor->GetPosition( pr->get_ref() ) );

                    if( ppos == 0 ) {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol's position " << pr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, check your position definitions or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                  } // if-positionref
                  else if( vchoice->content().tag == "rotationref" ) {
                    // Check & retrieve rotation
                    rr   = dynamic_cast<SinglePlacementType::rotationref*>( vchoice->content().object );
                    prot = const_cast<G4RotationMatrix*>( processor->GetRotation( rr->get_ref() ) );

                    if( prot == 0 ) {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol's rotation " << rr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, check your rotation definitions or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                  } else { /* should not happen */ }  // end of if-positionref
                } else { /* should not happen */ }    // end of if-choice
              }                                       // end-for-loop over physvol's items
              // At this point we should have everything ready to create a physvol
              if( doAssemblyInprint && !externalFile)
              {
#ifdef GDML_VERBOSE
                std::cout << "Imprinting assembly volume: " << vr->get_ref() << std::endl;
#endif
                alog->MakeImprint( vnew, *ppos, prot );
              } 
              else if (!doAssemblyInprint && !externalFile)
              {
                std::stringstream pvname;
                pvname << "pv_" << vr->get_ref() << "_" << (i-2);
                if (nameattr=="") nameattr = pvname.str();

                /* Got a null position so use identity position = (0,0,0) from GDMLProcessor. --JM */
                if ( ppos == 0 ) {
                  ppos = processor->getIdentityPosition();
                }

                vphysvol = new G4PVPlacement(prot, *ppos, plog, Util::generateName(vr->get_ref()), vnew, false, (i-2));
                processor->AddPhysicalVolume( nameattr, vphysvol );
              }
              else if (!doAssemblyInprint && externalFile)
              {
                std::stringstream pvname;
                pvname << "pv_" << efwvn << "_" << (i-2);

                if (nameattr=="") nameattr = pvname.str();

                /* Got a null position so use identity position = (0,0,0) from GDMLProcessor. --JM */
                if ( ppos == 0 ) {
                  ppos = processor->getIdentityPosition();
                }
                
                vphysvol = new G4PVPlacement(prot, *ppos, plog, Util::generateName(efwvn), vnew, false, (i-2));
                processor->AddPhysicalVolume( nameattr, vphysvol );
              }
              else
              {
                std::cout << "Assembly cannot be defined in an external file!" << std::endl;
              }
            } // end of if-physvol
            else if( seq->content(i).tag == "replicavol" )
            {
              // Analyze each replicavol's content
              replicavol* c = dynamic_cast<replicavol*>( seq->content(i).object );
              const ContentSequence* replicavol_seq = c->get_content();
              size_t ccount = replicavol_seq->size();

              ////////////////////// ?????????????????????????????????????
              SinglePlacementType::volumeref*   vr   = 0;
              G4LogicalVolume*                  plog = 0;
              G4AssemblyVolume*                 alog = 0;
              G4PVReplica* vreplivol = 0;
              bool doAssemblyInprint                 = false;
              double width = 0;
              double offset = 0;
              EAxis ax = kZAxis;
              for( size_t cidx = 0; cidx < ccount; cidx++ )
              {
                if( replicavol_seq->content(cidx).tag == "volumeref" )
                {
                  // Check & retrieve volume
                  vr = dynamic_cast<SinglePlacementType::volumeref*>
                    ( replicavol_seq->content(cidx).object );

                  plog = const_cast<G4LogicalVolume*>
                    (processor->GetLogicalVolume( vr->get_ref()));
                  if( plog == 0 )
                  {
                    // Let's check if an assembly request was ment
                    alog = const_cast<G4AssemblyVolume*>(processor->GetAssemblyVolume( vr->get_ref()));

                    if( alog == 0 )
                    {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol volume " << vr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, re-order your volumes or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                    doAssemblyInprint = true;
                  }
                }
                else if(replicavol_seq->content(cidx).tag == "replicate_along_axis")
                {
                  replicate_along_axis* raa = dynamic_cast<replicate_along_axis*>( replicavol_seq->content(cidx).object );

                  const ContentSequence* replialg_seq = raa->get_content();
                  size_t ccount = replialg_seq->size();

                  for( size_t iiii = 0; iiii < ccount; iiii++ )
                  {
                    if(replialg_seq->content(iiii).tag=="width")
                    {
                      //
                      QuantityType* quant = dynamic_cast<QuantityType*>(replialg_seq->content(iiii).object);
                      std::string expr = quant->get_value() + "*" + quant->get_unit();
                      width =  calc->Eval( expr.c_str() );
                    }
                    else if(replialg_seq->content(iiii).tag=="offset")
                    {
                      //
                      QuantityType* quant = dynamic_cast<QuantityType*>(replialg_seq->content(iiii).object);
                      std::string expr = quant->get_value() + "*" + quant->get_unit();
                      offset = calc->Eval( expr.c_str() );
                    }
                    else if(replialg_seq->content(iiii).tag=="direction")
                    {
                      directionType* quant = dynamic_cast<directionType*>(replialg_seq->content(iiii).object);

                      std::string expr = quant->get_x() ;
                      double dx = calc->Eval( expr.c_str() );
                      expr = quant->get_y();
                      double dy = calc->Eval( expr.c_str() );
                      expr = quant->get_z();
                      double dz = calc->Eval( expr.c_str() );

                      if(dx==1 && dy==0 && dz==0)
                      {
                        ax = kXAxis;
                      }
                      else if(dx==0 && dy==1 && dz==0)
                      {
                        ax = kYAxis;
                      }
                      else if(dx==0 && dy==0 && dz==1)
                      {
                        ax = kZAxis;
                      }
                      else std::cerr << "Only directions along axis are supported!" << std::endl;
                    }
                  }
                }
              }

              std::stringstream pvname;
              pvname  << vr->get_ref() << "_" << (i-2);
              vreplivol = new G4PVReplica(Util::generateName(vr->get_ref()), plog, vnew, ax,
                                          (int)calc->Eval(c->get_numb().c_str()), width, offset);

              processor->AddPhysicalVolume( pvname.str(), vreplivol );
            } // end of replicavol
            else if( seq->content(i).tag == "divisionvol" )
            {
              // Analyze each divisionvol's content
              divisionvol* c = dynamic_cast<divisionvol*>( seq->content(i).object );
              const ContentSequence* divisionvol_seq = c->get_content();
              size_t ccount = divisionvol_seq->size();

              ////////////////////// ?????????????????????????????????????
              SinglePlacementType::volumeref*   vr   = 0;
              G4LogicalVolume*                  plog = 0;
              G4AssemblyVolume*                 alog = 0;
              G4PVDivision* vreplivol = 0;
              bool doAssemblyInprint                 = false;
              double width = 0;
              double offset = 0;
              EAxis ax = kZAxis;
              for( size_t cidx = 0; cidx < ccount; cidx++ )
              {
                if( divisionvol_seq->content(cidx).tag == "volumeref" )
                {
                  // Check & retrieve volume
                  vr = dynamic_cast<SinglePlacementType::volumeref*>
                    ( divisionvol_seq->content(cidx).object );

                  plog = const_cast<G4LogicalVolume*>
                    (processor->GetLogicalVolume( vr->get_ref()));
                  if( plog == 0 )
                  {
                    // Let's check if an assembly request was ment
                    alog = const_cast<G4AssemblyVolume*>(processor->GetAssemblyVolume( vr->get_ref()));

                    if( alog == 0 )
                    {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol volume " << vr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, re-order your volumes or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                    doAssemblyInprint = true;
                  }
                }
              }
              
              std::string saxis(c->get_axis());
              if (saxis=="kXAxis")
              {
                ax = kXAxis;
              }
              else if (saxis=="kYAxis")
              {
                ax = kYAxis;
              }
              else if (saxis=="kZAxis")
              {
                ax = kZAxis;
              }
              else if (saxis=="kRho")
              {
                ax = kRho;
              }
              else if (saxis=="kPhi")
              {
                ax = kPhi;
              }
              
              std::stringstream pvname;
              pvname  << vr->get_ref() << "_" << (i-2);

              std::string  sval = c->get_width();
              sval += "*";
              sval += c->get_unit();

              width = calc->Eval( sval );
              
              sval = c->get_offset();
              sval += "*";
              sval += c->get_unit();

              offset = calc->Eval( sval );

              vreplivol = new G4PVDivision(Util::generateName(vr->get_ref()), plog, vnew, ax,
                                           (int)calc->Eval(c->get_number().c_str()), 
                                           width, 
                                           offset);

              processor->AddPhysicalVolume( pvname.str(), vreplivol );
            } // end of divisionvol
            else if( seq->content(i).tag == "paramvol" )
            {
              //G4VPVParameterisation* paralg=0;
              GenericPositionSizeParameterisation* paralg=0;

              // Analyze each paramvol's content
              paramvol* c = dynamic_cast<paramvol*>( seq->content(i).object );
              const ContentSequence* paramvol_seq = c->get_content();
              size_t ccount = paramvol_seq->size();

              //////////////////////??????????????????????????????????
              SinglePlacementType::volumeref*   vr   = 0;
              G4LogicalVolume*                  plog = 0;
              G4AssemblyVolume*                 alog = 0;
              G4PVParameterised* vparamvol = 0;
              bool doAssemblyInprint                 = false;

              for( size_t cidx = 0; cidx < ccount; cidx++ )
              {
                if( paramvol_seq->content(cidx).tag == "volumeref" )
                {
                  // Check & retrieve volume
                  vr = dynamic_cast<SinglePlacementType::volumeref*>
                    ( paramvol_seq->content(cidx).object );

                  plog = const_cast<G4LogicalVolume*>
                    (processor->GetLogicalVolume( vr->get_ref()));
                  if( plog == 0 )
                  {
                    // Let's check if an assembly request was ment
                    alog = const_cast<G4AssemblyVolume*>(processor->GetAssemblyVolume( vr->get_ref()));

                    if( alog == 0 )
                    {
                      std::cerr << "VOLUME SUBSCRIBER:: physvol volume " << vr->get_ref()
                                << " not found!" << std::endl;
                      std::cerr << "Volume " << obj->get_name() << " can't be created!" << std::endl;
                      std::cerr << "Please, re-order your volumes or add the missing one..."
                                << std::endl;
                      G4Exception( "Shutting-down due to error(s) in GDML input..." );
                    }
                    doAssemblyInprint = true;
                  }
                }
                else if(paramvol_seq->content(cidx).tag == "parameterised_position_size")
                {

                  parameterised_position_size* ppc = dynamic_cast<parameterised_position_size*>( paramvol_seq->content(cidx).object );

                  paralg = new GenericPositionSizeParameterisation((int)calc->Eval(c->get_number()));

                  const ContentSequence* paramalg_seq = ppc->get_content();
                  size_t ccount = paramalg_seq->size();

                  for( size_t iiii = 0; iiii < ccount; iiii++ )
                  {
                    if(paramalg_seq->content(iiii).tag=="parameters")
                    {
                      parameters* pc = dynamic_cast<parameters*>( paramalg_seq->content(iiii).object );
                      const ContentSequence* pars_seq = pc->get_content();
                      size_t pccount = pars_seq->size();

                      int mynumber = (int)calc->Eval(pc->get_number());

                      for( size_t jjj = 0; jjj < pccount; jjj++ )
                      {
                        if(pars_seq->content(jjj).tag=="position")
                        {
                          define::position* pos
                            = dynamic_cast<define::position*>
                            (pars_seq->content(jjj).object);

                          //to be done: rotation....
                          G4RotationMatrix* zerorot = new G4RotationMatrix(0,0,0);
                          G4ThreeVector* myvect = new G4ThreeVector; 
                          myvect->setX(calc->Eval(pos->get_x()));
                          myvect->setY(calc->Eval(pos->get_y()));
                          myvect->setZ(calc->Eval(pos->get_z()));

                          paralg->SetTransformation(mynumber,*zerorot,*myvect);
                        }
                        else if(pars_seq->content(jjj).tag=="box_dimensions")
                        {
                          box_dimensions* dimobj = dynamic_cast<box_dimensions*>
                            (pars_seq->content(jjj).object);

                          paralg->SetDimensions(mynumber,
                                                calc->Eval(dimobj->getx()),
                                                calc->Eval(dimobj->gety()),
                                                calc->Eval(dimobj->getz()),
                                                0.0,0.0);
                        }
                        else if(pars_seq->content(jjj).tag=="tube_dimensions")
                        {
                          tube_dimensions* dimobj = dynamic_cast<tube_dimensions*>
                            (pars_seq->content(jjj).object);

                          paralg->SetDimensions(mynumber,
                                                calc->Eval(dimobj->getdp()),
                                                calc->Eval(dimobj->getinr()),
                                                calc->Eval(dimobj->getoutr()),
                                                calc->Eval(dimobj->getsphi()),
                                                calc->Eval(dimobj->gethz()));
                        }
                      }
                    }
                  }
                }
                else
                {
                  //define::position* p =
                  dynamic_cast<define::position*>(paramvol_seq->content(cidx).object);
                }
              }

              std::stringstream pvname;
              pvname << "pv_" << vr->get_ref() << "_" << (i-2);
              vparamvol = new G4PVParameterised(Util::generateName(vr->get_ref()), plog, vnew, kZAxis,
                                                (int)calc->Eval(c->get_number().c_str()),paralg);



              processor->AddPhysicalVolume( pvname.str(), vparamvol );
            } //end of paramvol
              //else
              //{
              //  std::cout << "Something went wrong in volumeSubscriber..." << std::endl;
              //}
          }                                           // end-for-loop over volume's items
        }                                             // end of if-obj
      } catch(...) { std::cerr << "VOLUME SUBSCRIBER:: GOT INTO BAD_CAST TROUBLE!" << std::endl; }
    } else { std::cerr << "VOLUME SUBSCRIBER:: GOT ZERO DATA POINTER!" << std::endl; }

    ////delete object;
  }                                                   // end-of-Activate-method
};

DECLARE_SUBSCRIBER_FACTORY(volumeSubscriber)
