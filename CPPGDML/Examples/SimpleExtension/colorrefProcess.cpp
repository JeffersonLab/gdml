// $Header: /cvs/simu/simu/GDML2/CPPGDML/Examples/SimpleExtension/colorrefProcess.cpp,v 1.1 2007/01/12 01:51:21 mccormi Exp $

#include "Processes/ReferenceTypeProcess.h"

#include "ColorType.h"

class colorrefProcess : public ReferenceTypeProcess
{
public:
  colorrefProcess(const ProcessingContext* context = 0)
    : ReferenceTypeProcess(context)
  {}

  virtual ~colorrefProcess()
  {}

  virtual void StartElement(const std::string& name, const ASCIIAttributeList& attrs)
  {
    SAXObject** obj = Context()->GetTopObject();

    ColorType::colorref* colorref =
      new ColorType::colorref;

    *obj = colorref;
    m_obj = colorref;

    ReferenceTypeProcess::StartElement(name, attrs);
  }

  virtual void EndElement(const std::string& name)
  {
    ReferenceTypeProcess::EndElement(name);
  }

  virtual const std::string& State() const
  {
    static std::string tag = "colorref";
    return tag;
  }
};

DECLARE_PROCESS_FACTORY(colorrefProcess)
