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
// $Id: tubeSusbcriber.cpp,v 1.1 2005/03/02 10:50:37 witoldp Exp $
// GEANT4 tag $Name: GDML_2_1_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Saxana/SAXSubscriber.h"
#include "Saxana/SAXComponentFactory.h"

#include "G4Processor/GDMLProcessor.h"
#include "G4Processor/GDMLExpressionEvaluator.h"

#include "Schema/tube.h"

#include "G4VSolid.hh"
#include "G4Tubs.hh"

#include <iostream>

class tubeSubscriber : public SAXSubscriber
{
  public:
    virtual const SAXComponentObject* Build() const {
      return this;
    }

  public:
    tubeSubscriber() {
      Subscribe( "tube" );
    }
    virtual ~tubeSubscriber() {
    }
   
    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
      //std::cout << "TUBE SUBSCRIBER:: ";
      if( object != 0 ) {
        try {
          const tube* obj = dynamic_cast<const tube*>( object );    
        
          //std::cout << "GOT TUBE " << obj->get_name() << std::endl;
      
          GDMLExpressionEvaluator* calc = GDMLProcessor::GetInstance()->GetEvaluator();
      
          std::string lunit = obj->get_lunit();
          std::string aunit = obj->get_aunit();
          const std::string& name = obj->get_name();
        
          std::string sval = obj->get_rmin();
          sval += "*"+lunit;
          double rmin = calc->Eval( sval );
          sval = obj->get_rmax();
          sval += "*"+lunit;
          double rmax = calc->Eval( sval );
          sval = obj->get_z();
          sval += "*"+lunit;
          double dz = calc->Eval( sval ); dz = dz/2.;
          sval = obj->get_startphi();
          sval += "*"+aunit;
          double startphi = calc->Eval( sval );
          sval = obj->get_deltaphi();
          sval += "*"+aunit;
          double deltaphi = calc->Eval( sval );
        
//         std::cout << "rmin:       "  << obj->get_rmin()       << lunit
//                   << " rmin:      "  << rmin << std::endl;
//         std::cout << "rmax:       "  << obj->get_rmax()       << lunit
//                   << " rmax:      "  << rmax << std::endl;
//         std::cout << "z:          "  << obj->get_z()       << lunit
//                   << " dz:        "  << dz << std::endl;
//         std::cout << "startphi:   "  << obj->get_startphi()   << aunit
//                   << " startphi:  "  << startphi << std::endl;
//         std::cout << "deltaphi:   "  << obj->get_deltaphi()   << aunit
//                   << " deltaphi:  "  << deltaphi << std::endl;

          G4VSolid* newobj = new G4Tubs( name, rmin, rmax, dz, startphi, deltaphi );
      
          GDMLProcessor::GetInstance()->AddSolid( name, newobj );      
        } catch(...) {
          std::cerr << "GOT INTO BAD_CAST TROUBLE!" << std::endl;
        }
      } else {
        std::cerr << "GOT ZERO DATA POINTER!" << std::endl;
      }
      delete object;
    }
};

DECLARE_SUBSCRIBER_FACTORY(tubeSubscriber)

  
