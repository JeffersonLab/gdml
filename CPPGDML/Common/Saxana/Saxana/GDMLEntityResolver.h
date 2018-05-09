#ifndef GDML_ENTITY_RESOLVER_H
#define GDML_ENTITY_RESOLVER_H 1

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/sax/EntityResolver.hpp>

#if defined( XERCES_HAS_CPP_NAMESPACE )
using namespace xercesc;
#endif

#include <vector>

/**
 * @class GDMLEntityResolver
 * @brief EntityResolver for GDML's SAX2EventGun.
 * @note This class will search in the current directory and in
 *       the directory pointed to by the GDML_SCHEMA_DIR enviroment
 *       varible.
 */
class GDMLEntityResolver : public EntityResolver
{

 public:
  GDMLEntityResolver();
  virtual ~GDMLEntityResolver();

 public:
  InputSource* resolveEntity(const XMLCh* const, const XMLCh* const);
  void addSearchDir(std::string dir);

 private:
  std::string getCurrentWorkingDir();

 private:
  std::vector<std::string> m_dirs;
};

#endif
