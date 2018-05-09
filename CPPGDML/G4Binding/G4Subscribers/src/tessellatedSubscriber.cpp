//
#include "Saxana/SAXSubscriber.h"
#include "Saxana/SAXComponentFactory.h"

#include "G4Processor/GDMLProcessor.h"
#include "G4Subscribers/Util.h"

#include "Schema/tessellated.h"
#include "Schema/triangular.h"
#include "Schema/quadrangular.h"

#include "G4VSolid.hh"
#include "G4TessellatedSolid.hh"
#include "G4TriangularFacet.hh"
#include "G4QuadrangularFacet.hh"

#include <iostream>

class tessellatedSubscriber : public SAXSubscriber
{
  public:
    virtual const SAXComponentObject* Build() const
    {
      return this;
    }

  public:
    tessellatedSubscriber() {
      Subscribe( "tessellated" );
    }
    virtual ~tessellatedSubscriber() {
    }
   
    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
      if( object != 0 ) {
        try {
          const tessellated* obj = dynamic_cast<const tessellated*>( object );
            
          const std::string& name = obj->get_name();
          std::string sval;        
          
          const ContentSequence* seq = obj->get_content();
          
          G4VSolid* newobj = new G4TessellatedSolid(Util::generateName(name));
          GDMLProcessor* processor = GDMLProcessor::GetInstance();
          // add faces
          int numberOfFaces = seq->size();          
          
          for( int i = 0; i < numberOfFaces; i++ )
          {
            G4VFacet* facet=0;
            G4FacetVertexType type = ABSOLUTE;
            
            if(seq->content(i).tag=="triangular")
            {
              triangular* face=dynamic_cast<triangular*>(seq->content(i).object);

              if(face->get_type()=="ABSOLUTE")
              {
                type = ABSOLUTE;
              }
              else if(face->get_type()=="RELATIVE")
              {
                type = RELATIVE;
              }
              
              facet = new G4TriangularFacet(*const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex1())),
                                            *const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex2())),
                                            *const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex3())),
                                            type);
            }
            else if(seq->content(i).tag=="quadrangular")
            {
              quadrangular* face=dynamic_cast<quadrangular*>(seq->content(i).object);
              if(face->get_type()=="ABSOLUTE")
              {
                type = ABSOLUTE;
              }
              else if(face->get_type()=="RELATIVE")
              {
                type = RELATIVE;
              }
              
              facet = new G4QuadrangularFacet(*const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex1())),
                                              *const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex2())),
                                              *const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex3())),
                                              *const_cast<G4ThreeVector*>(processor->GetPosition(face->get_vertex4())),
                                              type);  
            }
            ((G4TessellatedSolid*)newobj)->AddFacet(facet);
          }
          ((G4TessellatedSolid*)newobj)->SetSolidClosed(true);
          //          ((G4TessellatedSolid*)newobj)->DumpInfo();
          processor->AddSolid( name, newobj );      
        } catch(...) {
          std::cerr << "GOT INTO BAD_CAST TROUBLE!" << std::endl;
        }
      } else {
        std::cerr << "GOT ZERO DATA POINTER!" << std::endl;
      }
    }
};

DECLARE_SUBSCRIBER_FACTORY(tessellatedSubscriber)

  
