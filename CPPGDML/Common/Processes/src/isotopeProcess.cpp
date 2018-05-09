
#include "Processes/MaterialTypeProcess.h"

#include "Schema/isotope.h"

#include <cstdlib>
#include <iostream>

class isotopeProcess : public MaterialTypeProcess
{
  public:
    isotopeProcess( const ProcessingContext* context = 0 )
      : MaterialTypeProcess( context ) {
    }
  
    virtual ~isotopeProcess() {
    }
  
    // Analogical to SAX startElement callback
    virtual void StartElement( const std::string&, const ASCIIAttributeList& attrs )
    {    
      //std::cout << "PROCESS::START OF TAG  : " << name << std::endl;
    
      std::string iname = attrs.getValue( "name" );
      std::string ifo   = attrs.getValue( "formula" );
      std::string in    = attrs.getValue( "N" );
      std::string iz    = attrs.getValue( "Z" );

      SAXObject** obj = Context()->GetTopObject();

      isotope* isotope_element = new isotope;
    
      isotope_element->set_name( iname );
      isotope_element->set_formula( ifo );
      isotope_element->set_N( in );
      isotope_element->set_Z( iz );
    
      m_obj = isotope_element;
      *obj  = isotope_element;
    }
  
    // Analogical to SAX endElement callback
    virtual void EndElement( const std::string& name )
    {
      //std::cout << "PROCESS::END OF TAG  : " << name << std::endl;
      try
      {
        SAXObject** obj = Context()->GetTopObject();
        isotope* saxobj = dynamic_cast<isotope*>( *obj );
      
        if( saxobj != 0 ) {
          //std::cout << "PROCESS END OF TAG:: isotope " << saxobj->get_name()
          //          << " looks OK" << std::endl;
          ;
        } else {
          std::cerr << "PROCESS END OF TAG:: GOT ZERO DATA POINTER! " << std::endl;
        }
      }
      catch( ... )
      {
        std::cerr << "PROCESS END OF TAG " << name << " ERROR: "
                  << " Cannot cast properly the data object!" << std::endl;
      }
    }
  
    // Analogical to SAX characters callback, it's called for ignorableWhitespace too!
    virtual void Characters( const std::string& ) {
    }
  
    // Invoked whenever one of the daughter state processes has been popped-out of the state stack
    // The name passed-in as the argument is the name of the XML element for which that's been done
    virtual void StackPopNotify( const std::string& name )
    {
      //std::cout << "PROCESS::isotope NOTIFIED AFTER THE TAG: " << name << std::endl;
       
      SAXObject** obj = Context()->GetTopObject();
    
      if( name == "atom" ) {
        atom* saxobj = dynamic_cast<atom*>( *obj );
        isotope* isotope_element = dynamic_cast<isotope*>( m_obj );
        isotope_element->set_atom( *saxobj );
      }	else if( name == "D" || name == "Dref" ) {
        isotope* saxobj = dynamic_cast<isotope*>( m_obj );
        saxobj->set_DorDref( name, *obj );
      } else {
        MaterialTypeProcess::StackPopNotify( name );
      }
    }
  
    // The name of the state this object will process
    virtual const std::string& State() const
    {
      static std::string tag = "isotope";
      return tag;
    }
};

DECLARE_PROCESS_FACTORY(isotopeProcess)

  
