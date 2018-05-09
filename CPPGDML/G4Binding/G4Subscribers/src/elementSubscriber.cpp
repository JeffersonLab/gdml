//
#include "Saxana/SAXSubscriber.h"
#include "Saxana/SAXComponentFactory.h"

#include "G4Processor/GDMLProcessor.h"
//#include "G4Processor/GDMLExpressionEvaluator.h"
#include "G4Subscribers/Util.h"

#include "Schema/element.h"
#include "Schema/fraction.h"

#include "G4Element.hh"

#include <iostream>

class elementSubscriber : virtual public SAXSubscriber
{
  public:
    virtual const SAXComponentObject* Build() const {
      return this;
    }

  public:
    elementSubscriber() {
      Subscribe( "element" );
    }

    virtual ~elementSubscriber() {
    }

    // The activation callback invoked by SAXG4Processor whenever it has
    // a new object created from XML and a corresponding subcriber exists
    virtual void Activate( const SAXObject* object ) {
      
      GDMLExpressionEvaluator* calc = GDMLProcessor::GetInstance()->GetEvaluator();
      
      const element* obj = 0;
            
      if( object != 0 ) {
        try {
          // Try the element type first
          obj = dynamic_cast<const element*>(object);
        
          if( obj != 0 ) {

            double      z = 0.0;
            double      a = 0.0;
            std::string f;

            // We need to check the emptyness as the Z and formula attributes are optional
            f = obj->get_Z();
            if( !f.empty() ) {
              z = calc->Eval( f );
            }
            f = obj->get_formula();
            if( f.empty() ) {
              f=obj->get_name();
            }

            // Now let's inspect the content model
            const ContentGroup* cg = dynamic_cast<const ContentGroup*>( obj->get_AtomOrFraction() );
            if( cg->content_type() == ContentGroup::choice ) {
              // We've got a choice, actually atom should be in
              const ContentChoice* choice = dynamic_cast<const ContentChoice*>( cg );
              ContentGroup::ContentItem ci = choice->content();
              atom* ae = dynamic_cast<atom*>( ci.object );
              std::string sA = ae->get_value();
              sA += "*";
              sA += ae->get_unit();
              a = calc->Eval( sA );

              G4Element* enew = 
              new G4Element( Util::generateName(obj->get_name()), f, z, a );
            } else {
              // Must be the sequence of fractions
              const ContentSequence* seq = dynamic_cast<const ContentSequence*>( cg );
              size_t icount = seq->size();                

              G4Element* enew = new G4Element( Util::generateName(obj->get_name()), f, icount );
              for( unsigned int i = 0; i < icount; i++ ) {
                fraction* fi = dynamic_cast<fraction*>( seq->content( i ).object );
                double      ifrac = calc->Eval( fi->get_n().c_str() );
                enew->AddIsotope( G4Isotope::GetIsotope(fi->get_ref()), ifrac );
              }
#ifdef GDML_VERBOSE
              std::cout << *enew << std::endl;
#endif
            }
              
          } else {
            // We're notified about one of our children
            // We've chosen content model based processing model here, so do nothing here
            ;
          }
        } catch(...) {
          std::cerr << "ELEMENT SUBSCRIBER:: GOT INTO BAD_CAST TROUBLE!" << std::endl;
        }
      } else {
        std::cerr << "ELEMENT SUBSCRIBER:: GOT ZERO DATA POINTER!" << std::endl;
      }
      //delete obj;
    }
};

DECLARE_SUBSCRIBER_FACTORY(elementSubscriber)
