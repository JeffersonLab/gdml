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
// $Id: defineProcess.cpp,v 1.1 2005/02/28 13:21:30 witoldp Exp $
// GEANT4 tag $Name: GDML_2_3_0 $
//
// 
// --------------------------------------------------------------
// Comments
//
// --------------------------------------------------------------
//
#include "Saxana/ProcessingConfigurator.h"
#include "Saxana/ProcessingContext.h"
#include "Saxana/SAXProcessor.h"
#include "Saxana/StateStack.h"
#include "Saxana/SAXProcessingState.h"
#include "Saxana/SAXStateProcess.h"
#include "Saxana/SAXComponentFactory.h"

#include "Schema/define.h"

#include <cstdlib>
#include <iostream>

class defineProcess : public SAXStateProcess
{
public:
  defineProcess( const ProcessingContext* context = 0 )
  : SAXStateProcess( context ) {
  }

  virtual ~defineProcess() {
  }

  virtual const SAXComponentObject* Build() const {
    return this;
  }

  // Analogical to SAX startElement callback
  virtual void StartElement( const std::string&, const ASCIIAttributeList& ) {
    //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;

    SAXObject** obj = Context()->GetTopObject();
    m_define = new define;
    *obj = m_define;
  }

  // Analogical to SAX endElement callback
  virtual void EndElement( const std::string& ) {
    //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
    try
    {
      SAXObject** obj = Context()->GetTopObject();
      defineType* saxobj = dynamic_cast<defineType*>( *obj );

      if( saxobj != 0 )
      {
        //std::cout << "PROCESS END OF TAG:: define" << std::endl;
        ;
      }
      else
      {
        std::cerr << "PROCESS END OF TAG:: define:: GOT ZERO DATA POINTER! " << std::endl;
      }
    } catch( ... ) {
      std::cerr << "PROCESS END OF TAG:: define:: BAD CAST exception caught...\a" << std::endl;
    }
  }

  // Analogical to SAX characters callback, it's called for ignorableWhitespace too!
  virtual void Characters( const std::string& )
  {
    // Irrelevant in this process
  }

  // Invoked whenever one of the daughter state processes has been popped-out of the state stack
  // The name passed-in as the argument is the name of the XML element for which that's been done
  virtual void StackPopNotify( const std::string& name )
  {
    // Get the defineType interface
    defineType* define_element = dynamic_cast<defineType*>( m_define );

    // We can expect the 5 inner elements: constant, quantity, expression, position, rotation
    // Whenever one of these appears we have to add it as a choice content group into define element
    SAXObject** so = Context()->GetTopObject();
    if( name == "constant" || name == "quantity" || name == "expression" || name == "position" || name == "rotation" ) {
      // Add the element into choice content group of define element
      define_element->add_to_content( name, *so );
    } else {
      // This should not happen, as it's not fatal problem just warn about it
      std::cerr << "Got unexpected element \"" << name << "\"\a" << std::endl;
    }
  }

  // The name of the state this object will process
  virtual const std::string& State() const {
    static std::string m_tag = "define";
    return m_tag;
  }

private:
  define*     m_define;
};

DECLARE_PROCESS_FACTORY(defineProcess)

