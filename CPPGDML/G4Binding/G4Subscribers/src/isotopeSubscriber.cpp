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
// $Id: isotopeSubscriber.cpp,v 1.1 2005/03/02 10:50:37 witoldp Exp $
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

#include "Schema/isotope.h"

#include "G4Isotope.hh"

#include <iostream>

class isotopeSubscriber : virtual public SAXSubscriber
{
  public:
    virtual const SAXComponentObject* Build() const
    {
      return this;
    }

  public:
    isotopeSubscriber() {
      Subscribe( "isotope" );
    }

    virtual ~isotopeSubscriber() {
    }

    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
      //std::cout << "ISOTOPE SUBSCRIBER:: " << std::endl;
    
      const isotope* obj = 0;
    
      if( object != 0 ) {
        try {
          obj = dynamic_cast<const isotope*>(object);
        
          if( obj != 0 ) {
            //std::cout << "GOT ISOTOPE " << obj->get_name() << std::endl;

            GDMLExpressionEvaluator* calc = GDMLProcessor::GetInstance()->GetEvaluator();
            // The big moment, we're gonna create an isotope
            int z = static_cast<int>(calc->Eval( obj->get_Z() ));
            int n = static_cast<int>(calc->Eval( obj->get_N() ));
            std::string sA = obj->get_atom().get_value();
            sA += "*";
            sA += obj->get_atom().get_unit();
            double a = calc->Eval( sA );
            //std::cout << "Z: " << obj->get_Z() << " " << z << std::endl;
            //std::cout << "N: " << obj->get_N() << " " << n << std::endl;
            //std::cout << "A: " << sA << " " << a/g/mole << std::endl;
            G4Isotope* inew = new G4Isotope( obj->get_name(), z, n, a );
            std::cout << *inew << std::endl;
          }
        } catch(...) {
          std::cerr << "GOT INTO BAD_CAST TROUBLE!" << std::endl;
        }
      } else {
        std::cerr << "GOT ZERO DATA POINTER!" << std::endl;
      }
      delete obj;
    }
  
  private:
    double     m_z;
    double     m_n;
    double     m_a;
    // Geant4 does not require material properties to be specified for isotopes 
};

DECLARE_SUBSCRIBER_FACTORY(isotopeSubscriber)
