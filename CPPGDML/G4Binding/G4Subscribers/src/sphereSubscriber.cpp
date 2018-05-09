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
// $Id: sphereSubscriber.cpp,v 1.1 2005/03/02 10:50:37 witoldp Exp $
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

#include "Schema/sphere.h"

#include "G4VSolid.hh"
#include "G4Sphere.hh"

#include <iostream>

class sphereSubscriber : public SAXSubscriber
{
  public:
    virtual const SAXComponentObject* Build() const {
      return this;
    }

  public:
    sphereSubscriber() {
      Subscribe( "sphere" );
    }
    virtual ~sphereSubscriber() {
    }
   
    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
      //std::cout << "SPHERE SUBSCRIBER:: ";
      if( object != 0 ) {
        try {
          const sphere* obj = dynamic_cast<const sphere*>( object );    
        
          //std::cout << "GOT SPHERE " << obj->get_name() << std::endl;
      
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
          sval = obj->get_startphi();
          sval += "*"+aunit;
          double startphi = calc->Eval( sval );
          sval = obj->get_deltaphi();
          sval += "*"+aunit;
          double deltaphi = calc->Eval( sval );
          sval = obj->get_starttheta();
          sval += "*"+aunit;
          double starttheta = calc->Eval( sval );
          sval = obj->get_deltatheta();
          sval += "*"+aunit;
          double deltatheta = calc->Eval( sval );
        
//         std::cout << "rmin:       "  << obj->get_rmin()       << lunit
//                   << " rmin: "       << rmin << std::endl;
//         std::cout << "rmax:       "  << obj->get_rmax()       << lunit
//                   << " rmax: "       << rmax << std::endl;
//         std::cout << "startphi:   "  << obj->get_startphi()   << aunit
//                   << " startphi: "   << startphi << std::endl;
//         std::cout << "deltaphi:   "  << obj->get_deltaphi()   << aunit
//                   << " deltaphi: "   << deltaphi << std::endl;
//         std::cout << "starttheta: "  << obj->get_starttheta() << aunit
//                   << " starttheta: " << starttheta << std::endl;
//         std::cout << "deltatheta: "  << obj->get_deltatheta() << aunit
//                   << " deltatheta: " << deltatheta << std::endl;

          G4VSolid* newobj = new G4Sphere( name, rmin,       rmax,
                                           startphi,   deltaphi,
                                           starttheta, deltatheta);
        
      
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

DECLARE_SUBSCRIBER_FACTORY(sphereSubscriber)

  
