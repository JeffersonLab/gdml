// Generated at Wed Aug  3 11:03:14 2005. Do not modify it

#ifdef _WIN32
#pragma warning ( disable : 4786 )
#ifndef LCGDICT_STRING 
#include <string> // Included here since it is sensitive to private->public trick
#endif
#endif
#define private public
#define protected public
#include "../include/G4RunExample.h"
#undef private
#undef protected
#include "Reflex/Builder/ReflexBuilder.h"
#include <typeinfo>
using namespace seal::reflex;

namespace {   Type type_void = TypeBuilder("void");
  Type type_10 = TypeBuilder("G4THitsCollection<TrackerHit>");
  Type type_11 = TypedefTypeBuilder("TrackerHitsCollection", type_10);
  Type type_10243 = PointerBuilder(type_11);
  Type type_8 = TypeBuilder("TrackerSD");
  Type type_8c = ConstBuilder(type_8);
  Type type_10244 = ReferenceBuilder(type_8c);
  Type type_317 = TypeBuilder("G4String");
  Type type_1467 = TypeBuilder("void");
  Type type_170 = TypeBuilder("G4HCofThisEvent");
  Type type_10245 = PointerBuilder(type_170);
  Type type_217 = TypeBuilder("bool");
  Type type_566 = TypedefTypeBuilder("G4bool", type_217);
  Type type_403 = TypeBuilder("G4Step");
  Type type_10246 = PointerBuilder(type_403);
  Type type_330 = TypeBuilder("G4TouchableHistory");
  Type type_10247 = PointerBuilder(type_330);
  Type type_221 = TypeBuilder("int");
  Type type_567 = TypedefTypeBuilder("G4int", type_221);
  Type type_223 = TypeBuilder("double");
  Type type_569 = TypedefTypeBuilder("G4double", type_223);
  Type type_468 = TypeBuilder("CLHEP::Hep3Vector");
  Type type_546 = TypedefTypeBuilder("G4ThreeVector", type_468);
  Type type_13 = TypeBuilder("TrackerHit");
  Type type_13c = ConstBuilder(type_13);
  Type type_10258 = ReferenceBuilder(type_13c);
  Type type_940 = PointerBuilder(type_1467);
  Type type_558 = TypeBuilder("unsigned int");
  Type type_1557 = TypedefTypeBuilder("size_t", type_558);
  Type type_98 = TypeBuilder("G4VGraphicsSystem");
  Type type_10385 = PointerBuilder(type_98);
  Type type_54 = TypeBuilder("G4Scene");
  Type type_10386 = PointerBuilder(type_54);
  Type type_100 = TypeBuilder("G4VSceneHandler");
  Type type_10387 = PointerBuilder(type_100);
  Type type_99 = TypeBuilder("G4VViewer");
  Type type_10388 = PointerBuilder(type_99);
  Type type_95 = TypeBuilder("G4GraphicsSystemList");
  Type type_40 = TypeBuilder("G4SceneList");
  Type type_49 = TypeBuilder("G4SceneHandlerList");
  Type type_3019 = TypeBuilder("G4VisManager::Verbosity");
  Type type_567c = ConstBuilder(type_567);
  Type type_10389 = TypeBuilder("std::vector<G4UImessenger*>");
  Type type_10390 = TypeBuilder("std::vector<G4UIcommand*>");
  Type type_30 = TypeBuilder("G4VisStateDependent");
  Type type_10391 = PointerBuilder(type_30);
  Type type_35 = TypeBuilder("G4NullModel");
  Type type_33 = TypeBuilder("G4TrajectoriesModel");
  Type type_53 = TypeBuilder("G4ModelingParameters");
  Type type_106 = TypeBuilder("G4Circle");
  Type type_106c = ConstBuilder(type_106);
  Type type_10394 = ReferenceBuilder(type_106c);
  Type type_140 = TypeBuilder("HepGeom::Transform3D");
  Type type_213 = TypedefTypeBuilder("HepTransform3D", type_140);
  Type type_141 = TypedefTypeBuilder("G4Transform3D", type_213);
  Type type_141c = ConstBuilder(type_141);
  Type type_10395 = ReferenceBuilder(type_141c);
  Type type_323 = TypeBuilder("G4NURBS");
  Type type_323c = ConstBuilder(type_323);
  Type type_10396 = ReferenceBuilder(type_323c);
  Type type_324 = TypeBuilder("G4Polyhedron");
  Type type_324c = ConstBuilder(type_324);
  Type type_10397 = ReferenceBuilder(type_324c);
  Type type_399 = TypeBuilder("G4Polyline");
  Type type_399c = ConstBuilder(type_399);
  Type type_10398 = ReferenceBuilder(type_399c);
  Type type_103 = TypeBuilder("G4Polymarker");
  Type type_103c = ConstBuilder(type_103);
  Type type_10399 = ReferenceBuilder(type_103c);
  Type type_105 = TypeBuilder("G4Scale");
  Type type_105c = ConstBuilder(type_105);
  Type type_10400 = ReferenceBuilder(type_105c);
  Type type_104 = TypeBuilder("G4Square");
  Type type_104c = ConstBuilder(type_104);
  Type type_10401 = ReferenceBuilder(type_104c);
  Type type_107 = TypeBuilder("G4Text");
  Type type_107c = ConstBuilder(type_107);
  Type type_10402 = ReferenceBuilder(type_107c);
  Type type_173 = TypeBuilder("G4VHit");
  Type type_173c = ConstBuilder(type_173);
  Type type_10403 = ReferenceBuilder(type_173c);
  Type type_397 = TypeBuilder("G4VTrajectory");
  Type type_397c = ConstBuilder(type_397);
  Type type_10404 = ReferenceBuilder(type_397c);
  Type type_544 = TypeBuilder("G4LogicalVolume");
  Type type_544c = ConstBuilder(type_544);
  Type type_10405 = ReferenceBuilder(type_544c);
  Type type_480 = TypeBuilder("G4VisAttributes");
  Type type_480c = ConstBuilder(type_480);
  Type type_3460 = ReferenceBuilder(type_480c);
  Type type_2006 = TypeBuilder("G4VPhysicalVolume");
  Type type_2006c = ConstBuilder(type_2006);
  Type type_10406 = ReferenceBuilder(type_2006c);
  Type type_483 = TypeBuilder("G4VSolid");
  Type type_483c = ConstBuilder(type_483);
  Type type_4857 = ReferenceBuilder(type_483c);
  Type type_95c = ConstBuilder(type_95);
  Type type_10407 = ReferenceBuilder(type_95c);
  Type type_49c = ConstBuilder(type_49);
  Type type_10408 = ReferenceBuilder(type_49c);
  Type type_40c = ConstBuilder(type_40);
  Type type_10409 = ReferenceBuilder(type_40c);
  Type type_4176 = ReferenceBuilder(type_567);
  Type type_10410 = ReferenceBuilder(type_49);
  Type type_10411 = ReferenceBuilder(type_40);
  Type type_317c = ConstBuilder(type_317);
  Type type_8934 = ReferenceBuilder(type_317c);
  Type type_144 = TypeBuilder("G4ParticleGun");
  Type type_10882 = PointerBuilder(type_144);
  Type type_143 = TypeBuilder("GeantinoGun");
  Type type_143c = ConstBuilder(type_143);
  Type type_10883 = ReferenceBuilder(type_143c);
  Type type_377 = TypeBuilder("G4Event");
  Type type_10884 = PointerBuilder(type_377);
  Type type_147 = TypeBuilder("GeantinoPhysicsList");
  Type type_147c = ConstBuilder(type_147);
  Type type_10885 = ReferenceBuilder(type_147c);
  Type type_160 = TypeBuilder("RunManager");
  Type type_160c = ConstBuilder(type_160);
  Type type_11057 = ReferenceBuilder(type_160c);
  Type type_7587 = TypeBuilder("char");
  Type type_7587c = ConstBuilder(type_7587);
  Type type_7497 = PointerBuilder(type_7587c);
}
//------Dictionary for class TrackerSD -------------------------------
class __TrackerSD_dict { 
  public:
  __TrackerSD_dict();
  static void * constructor_2913(void*, const std::vector<void*>&, void*);
  static void * constructor_2914(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::TrackerSD*)o)->~TrackerSD(); return 0;}
  static void * method_2916(void*, const std::vector<void*>&, void*);
  static void * method_2917(void*, const std::vector<void*>&, void*);
  static void * method_2918(void*, const std::vector<void*>&, void*);
  static void* method_x0( void*, const std::vector<void*>&, void* ); 
};


__TrackerSD_dict::__TrackerSD_dict() {
  ClassBuilder< ::TrackerSD >("TrackerSD", PUBLIC | VIRTUAL)
  .addBase< ::G4VSensitiveDetector >(PUBLIC)
  .addDataMember(type_10243, "trackerCollection", OffsetOf(::TrackerSD, trackerCollection), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10244), "TrackerSD", constructor_2913, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_317), "TrackerSD", constructor_2914, 0, "", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~TrackerSD", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10245), "Initialize", method_2916, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_566, type_10246, type_10247), "ProcessHits", method_2917, 0, ";", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10245), "EndOfEvent", method_2918, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x0);
}

//------Stub functions for class TrackerSD -------------------------------
void* __TrackerSD_dict::constructor_2913( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::TrackerSD(*(const ::TrackerSD*)arg[0]);
}

void* __TrackerSD_dict::constructor_2914( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::TrackerSD(*(::G4String*)arg[0]);
}

void* __TrackerSD_dict::method_2916( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerSD*)o)->Initialize((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __TrackerSD_dict::method_2917( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((::TrackerSD*)o)->ProcessHits((::G4Step*)arg[0],
                                       (::G4TouchableHistory*)arg[1]);
  return &ret;
}

void* __TrackerSD_dict::method_2918( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerSD*)o)->EndOfEvent((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __TrackerSD_dict::method_x0( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSensitiveDetector >(), seal::reflex::baseOffset< ::TrackerSD,::G4VSensitiveDetector >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class TrackerHit -------------------------------
class __TrackerHit_dict { 
  public:
  __TrackerHit_dict();
  static void * constructor_2924(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::TrackerHit*)o)->~TrackerHit(); return 0;}
  static void * constructor_2926(void*, const std::vector<void*>&, void*);
  static void * operator_2927(void*, const std::vector<void*>&, void*);
  static void * operator_2928(void*, const std::vector<void*>&, void*);
  static void * operator_2929(void*, const std::vector<void*>&, void*);
  static void * operator_2930(void*, const std::vector<void*>&, void*);
  static void * method_2931(void*, const std::vector<void*>&, void*);
  static void * method_2932(void*, const std::vector<void*>&, void*);
  static void * method_2933(void*, const std::vector<void*>&, void*);
  static void * method_2934(void*, const std::vector<void*>&, void*);
  static void * method_2935(void*, const std::vector<void*>&, void*);
  static void * method_2936(void*, const std::vector<void*>&, void*);
  static void * method_2937(void*, const std::vector<void*>&, void*);
  static void * method_2938(void*, const std::vector<void*>&, void*);
  static void * method_2939(void*, const std::vector<void*>&, void*);
  static void * method_2940(void*, const std::vector<void*>&, void*);
  static void* method_x1( void*, const std::vector<void*>&, void* ); 
};


__TrackerHit_dict::__TrackerHit_dict() {
  ClassBuilder< ::TrackerHit >("TrackerHit", PUBLIC | VIRTUAL)
  .addBase< ::G4VHit >(PUBLIC)
  .addDataMember(type_567, "trackID", OffsetOf(::TrackerHit, trackID), PRIVATE)
  .addDataMember(type_567, "chamberNb", OffsetOf(::TrackerHit, chamberNb), PRIVATE)
  .addDataMember(type_569, "edep", OffsetOf(::TrackerHit, edep), PRIVATE)
  .addDataMember(type_546, "pos", OffsetOf(::TrackerHit, pos), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void), "TrackerHit", constructor_2924, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~TrackerHit", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10258), "TrackerHit", constructor_2926, 0, "", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_10258, type_10258), "operator=", operator_2927, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_10258), "operator==", operator_2928, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_940, type_1557), "operator new", operator_2929, 0, "", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_940), "operator delete", operator_2930, 0, "aHit", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Draw", method_2931, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Print", method_2932, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_567), "SetTrackID", method_2933, 0, "track", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_567), "SetChamberNb", method_2934, 0, "chamb", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_569), "SetEdep", method_2935, 0, "de", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_546), "SetPos", method_2936, 0, "xyz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTrackID", method_2937, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetChamberNb", method_2938, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_569), "GetEdep", method_2939, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_546), "GetPos", method_2940, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x1);
}

//------Stub functions for class TrackerHit -------------------------------
void* __TrackerHit_dict::constructor_2924( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::TrackerHit();
}

void* __TrackerHit_dict::constructor_2926( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::TrackerHit(*(const ::TrackerHit*)arg[0]);
}

void* __TrackerHit_dict::operator_2927( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::TrackerHit*)o)->operator=(*(const ::TrackerHit*)arg[0]);
}

void* __TrackerHit_dict::operator_2928( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::TrackerHit*)o)->operator==(*(const ::TrackerHit*)arg[0]);
  return &ret;
}

void* __TrackerHit_dict::operator_2929( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::TrackerHit*)o)->operator new(*(unsigned int*)arg[0]);
}

void* __TrackerHit_dict::operator_2930( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerHit*)o)->operator delete((void*)arg[0]);
  return 0;
}

void* __TrackerHit_dict::method_2931( void* o, const std::vector<void*>&, void*)
{
  ((::TrackerHit*)o)->Draw();
  return 0;
}

void* __TrackerHit_dict::method_2932( void* o, const std::vector<void*>&, void*)
{
  ((::TrackerHit*)o)->Print();
  return 0;
}

void* __TrackerHit_dict::method_2933( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerHit*)o)->SetTrackID(*(int*)arg[0]);
  return 0;
}

void* __TrackerHit_dict::method_2934( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerHit*)o)->SetChamberNb(*(int*)arg[0]);
  return 0;
}

void* __TrackerHit_dict::method_2935( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerHit*)o)->SetEdep(*(double*)arg[0]);
  return 0;
}

void* __TrackerHit_dict::method_2936( void* o, const std::vector<void*>& arg, void*)
{
  ((::TrackerHit*)o)->SetPos(*(::CLHEP::Hep3Vector*)arg[0]);
  return 0;
}

void* __TrackerHit_dict::method_2937( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::TrackerHit*)o)->GetTrackID();
  return &ret;
}

void* __TrackerHit_dict::method_2938( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::TrackerHit*)o)->GetChamberNb();
  return &ret;
}

void* __TrackerHit_dict::method_2939( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::TrackerHit*)o)->GetEdep();
  return &ret;
}

void* __TrackerHit_dict::method_2940( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((::TrackerHit*)o)->GetPos());
}

void* __TrackerHit_dict::method_x1( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VHit >(), seal::reflex::baseOffset< ::TrackerHit,::G4VHit >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class VisManager -------------------------------
class __VisManager_dict { 
  public:
  __VisManager_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::VisManager*)o)->~VisManager(); return 0;}
  static void * constructor_2997(void*, const std::vector<void*>&, void*);
  static void* method_x2( void*, const std::vector<void*>&, void* ); 
};


__VisManager_dict::__VisManager_dict() {
  ClassBuilder< ::VisManager >("VisManager", PUBLIC | VIRTUAL)
  .addBase< ::G4VisManager >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~VisManager", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_void), "VisManager", constructor_2997, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember<void*(void)>("getBasesTable", method_x2);
}

//------Stub functions for class VisManager -------------------------------
void* __VisManager_dict::constructor_2997( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::VisManager();
}

void* __VisManager_dict::method_x2( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VisManager >(), seal::reflex::baseOffset< ::VisManager,::G4VisManager >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VVisManager >(), seal::reflex::baseOffset< ::VisManager,::G4VVisManager >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4VisManager -------------------------------
class __G4VisManager_dict { 
  public:
  __G4VisManager_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VisManager*)o)->~G4VisManager(); return 0;}
  static void * method_3025(void*, const std::vector<void*>&, void*);
  static void * method_3026(void*, const std::vector<void*>&, void*);
  static void * method_3027(void*, const std::vector<void*>&, void*);
  static void * method_3028(void*, const std::vector<void*>&, void*);
  static void * method_3029(void*, const std::vector<void*>&, void*);
  static void * method_3030(void*, const std::vector<void*>&, void*);
  static void * method_3031(void*, const std::vector<void*>&, void*);
  static void * method_3032(void*, const std::vector<void*>&, void*);
  static void * method_3033(void*, const std::vector<void*>&, void*);
  static void * method_3034(void*, const std::vector<void*>&, void*);
  static void * method_3035(void*, const std::vector<void*>&, void*);
  static void * method_3036(void*, const std::vector<void*>&, void*);
  static void * method_3037(void*, const std::vector<void*>&, void*);
  static void * method_3038(void*, const std::vector<void*>&, void*);
  static void * method_3039(void*, const std::vector<void*>&, void*);
  static void * method_3040(void*, const std::vector<void*>&, void*);
  static void * method_3041(void*, const std::vector<void*>&, void*);
  static void * method_3042(void*, const std::vector<void*>&, void*);
  static void * method_3043(void*, const std::vector<void*>&, void*);
  static void * method_3044(void*, const std::vector<void*>&, void*);
  static void * method_3045(void*, const std::vector<void*>&, void*);
  static void * method_3050(void*, const std::vector<void*>&, void*);
  static void * method_3051(void*, const std::vector<void*>&, void*);
  static void * method_3052(void*, const std::vector<void*>&, void*);
  static void * method_3053(void*, const std::vector<void*>&, void*);
  static void * method_3054(void*, const std::vector<void*>&, void*);
  static void * method_3055(void*, const std::vector<void*>&, void*);
  static void * method_3056(void*, const std::vector<void*>&, void*);
  static void * method_3057(void*, const std::vector<void*>&, void*);
  static void * method_3058(void*, const std::vector<void*>&, void*);
  static void * method_3059(void*, const std::vector<void*>&, void*);
  static void * method_3060(void*, const std::vector<void*>&, void*);
  static void * method_3061(void*, const std::vector<void*>&, void*);
  static void * method_3062(void*, const std::vector<void*>&, void*);
  static void * method_3063(void*, const std::vector<void*>&, void*);
  static void * method_3064(void*, const std::vector<void*>&, void*);
  static void * method_3065(void*, const std::vector<void*>&, void*);
  static void * method_3066(void*, const std::vector<void*>&, void*);
  static void * method_3067(void*, const std::vector<void*>&, void*);
  static void * method_3068(void*, const std::vector<void*>&, void*);
  static void * method_3069(void*, const std::vector<void*>&, void*);
  static void * method_3070(void*, const std::vector<void*>&, void*);
  static void * method_3071(void*, const std::vector<void*>&, void*);
  static void * method_3072(void*, const std::vector<void*>&, void*);
  static void * method_3073(void*, const std::vector<void*>&, void*);
  static void * method_3074(void*, const std::vector<void*>&, void*);
  static void * method_3075(void*, const std::vector<void*>&, void*);
  static void* method_x3( void*, const std::vector<void*>&, void* ); 
};


__G4VisManager_dict::__G4VisManager_dict() {
  ClassBuilder< ::G4VisManager >("G4VisManager", PUBLIC | ABSTRACT | VIRTUAL)
  .addBase< ::G4VVisManager >(PUBLIC)
  .addDataMember(type_566, "fInitialised", OffsetOf(::G4VisManager, fInitialised), PROTECTED)
  .addDataMember(type_10385, "fpGraphicsSystem", OffsetOf(::G4VisManager, fpGraphicsSystem), PROTECTED)
  .addDataMember(type_10386, "fpScene", OffsetOf(::G4VisManager, fpScene), PROTECTED)
  .addDataMember(type_10387, "fpSceneHandler", OffsetOf(::G4VisManager, fpSceneHandler), PROTECTED)
  .addDataMember(type_10388, "fpViewer", OffsetOf(::G4VisManager, fpViewer), PROTECTED)
  .addDataMember(type_95, "fAvailableGraphicsSystems", OffsetOf(::G4VisManager, fAvailableGraphicsSystems), PROTECTED)
  .addDataMember(type_40, "fSceneList", OffsetOf(::G4VisManager, fSceneList), PROTECTED)
  .addDataMember(type_49, "fAvailableSceneHandlers", OffsetOf(::G4VisManager, fAvailableSceneHandlers), PROTECTED)
  .addDataMember(type_3019, "fVerbosity", OffsetOf(::G4VisManager, fVerbosity), PROTECTED)
  .addDataMember(type_567c, "fVerbose", OffsetOf(::G4VisManager, fVerbose), PROTECTED)
  .addDataMember(type_10389, "fMessengerList", OffsetOf(::G4VisManager, fMessengerList), PROTECTED)
  .addDataMember(type_10390, "fDirectoryList", OffsetOf(::G4VisManager, fDirectoryList), PROTECTED)
  .addDataMember(type_10391, "fpStateDependent", OffsetOf(::G4VisManager, fpStateDependent), PROTECTED)
  .addDataMember(type_567, "fWindowSizeHintX", OffsetOf(::G4VisManager, fWindowSizeHintX), PROTECTED)
  .addDataMember(type_567, "fWindowSizeHintY", OffsetOf(::G4VisManager, fWindowSizeHintY), PROTECTED)
  .addDataMember(type_35, "fVisManagerNullModel", OffsetOf(::G4VisManager, fVisManagerNullModel), PROTECTED)
  .addDataMember(type_33, "dummyTrajectoriesModel", OffsetOf(::G4VisManager, dummyTrajectoriesModel), PROTECTED)
  .addDataMember(type_53, "fVisManagerModelingParameters", OffsetOf(::G4VisManager, fVisManagerModelingParameters), PROTECTED)
  .addEnum< G4VisManager::Verbosity >("quiet=0;startup=1;errors=2;warnings=3;confirmations=4;parameters=5;all=6")
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VisManager", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Initialise", method_3025, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Initialize", method_3026, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_566, type_10385), "RegisterGraphicsSystem", method_3027, 0, "pSystem", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10394, type_10395), "Draw", method_3028, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10396, type_10395), "Draw", method_3029, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10397, type_10395), "Draw", method_3030, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10398, type_10395), "Draw", method_3031, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10399, type_10395), "Draw", method_3032, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10400, type_10395), "Draw", method_3033, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10401, type_10395), "Draw", method_3034, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10402, type_10395), "Draw", method_3035, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10403, type_10395), "Draw", method_3036, 0, ";objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10404, type_567, type_10395), "Draw", method_3037, 0, ";i_mode;objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10405, type_3460, type_10395), "Draw", method_3038, 0, ";;objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10406, type_3460, type_10395), "Draw", method_3039, 0, ";;objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_4857, type_3460, type_10395), "Draw", method_3040, 0, ";;objectTransformation", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "GeometryHasChanged", method_3041, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_317), "CreateSceneHandler", method_3042, 0, "name=\"\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_317), "CreateViewer", method_3043, 0, "name=\"\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "DeleteCurrentSceneHandler", method_3044, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "DeleteCurrentViewer", method_3045, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Enable", method_3050, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Disable", method_3051, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10385), "GetCurrentGraphicsSystem", method_3052, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10386), "GetCurrentScene", method_3053, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10387), "GetCurrentSceneHandler", method_3054, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10388), "GetCurrentViewer", method_3055, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10407), "GetAvailableGraphicsSystems", method_3056, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10408), "GetAvailableSceneHandlers", method_3057, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10409), "GetSceneList", method_3058, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3019), "GetVerbosity", method_3059, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_4176, type_4176), "GetWindowSizeHint", method_3060, 0, "xHint;yHint", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10385), "SetCurrentGraphicsSystem", method_3061, 0, "pSystem", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10386), "SetCurrentScene", method_3062, 0, "pScene", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10387), "SetCurrentSceneHandler", method_3063, 0, "pScene", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10388), "SetCurrentViewer", method_3064, 0, "pView", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10410), "SetAvailableSceneHandlers", method_3065, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10411), "SetSceneList", method_3066, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_567), "SetVerboseLevel", method_3067, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_8934), "SetVerboseLevel", method_3068, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_3019), "SetVerboseLevel", method_3069, 0, "verbosity", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_567, type_567), "SetWindowSizeHint", method_3070, 0, "xHint;yHint", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_317, type_8934), "ViewerShortName", method_3071, 0, "viewerName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10388, type_8934), "GetViewer", method_3072, 0, "viewerName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3019, type_8934), "GetVerbosityValue", method_3073, 0, "", PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_3019, type_567), "GetVerbosityValue", method_3074, 0, "", PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_317, type_3019), "VerbosityString", method_3075, 0, "", PUBLIC | STATIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x3);
}

//------Stub functions for class G4VisManager -------------------------------
void* __G4VisManager_dict::method_3025( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->Initialise();
  return 0;
}

void* __G4VisManager_dict::method_3026( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->Initialize();
  return 0;
}

void* __G4VisManager_dict::method_3027( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((::G4VisManager*)o)->RegisterGraphicsSystem((::G4VGraphicsSystem*)arg[0]);
  return &ret;
}

void* __G4VisManager_dict::method_3028( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Circle*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3029( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4NURBS*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3030( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Polyhedron*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3031( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Polyline*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3032( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Polymarker*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3033( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Scale*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3034( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Square*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3035( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4Text*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3036( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4VHit*)arg[0],
                             *(const ::HepGeom::Transform3D*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3037( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4VTrajectory*)arg[0],
                             *(int*)arg[1],
                             *(const ::HepGeom::Transform3D*)arg[2]);
  return 0;
}

void* __G4VisManager_dict::method_3038( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4LogicalVolume*)arg[0],
                             *(const ::G4VisAttributes*)arg[1],
                             *(const ::HepGeom::Transform3D*)arg[2]);
  return 0;
}

void* __G4VisManager_dict::method_3039( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4VPhysicalVolume*)arg[0],
                             *(const ::G4VisAttributes*)arg[1],
                             *(const ::HepGeom::Transform3D*)arg[2]);
  return 0;
}

void* __G4VisManager_dict::method_3040( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->Draw(*(const ::G4VSolid*)arg[0],
                             *(const ::G4VisAttributes*)arg[1],
                             *(const ::HepGeom::Transform3D*)arg[2]);
  return 0;
}

void* __G4VisManager_dict::method_3041( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->GeometryHasChanged();
  return 0;
}

void* __G4VisManager_dict::method_3042( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4VisManager*)o)->CreateSceneHandler();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4VisManager*)o)->CreateSceneHandler(*(::G4String*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4VisManager_dict::method_3043( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4VisManager*)o)->CreateViewer();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4VisManager*)o)->CreateViewer(*(::G4String*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4VisManager_dict::method_3044( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->DeleteCurrentSceneHandler();
  return 0;
}

void* __G4VisManager_dict::method_3045( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->DeleteCurrentViewer();
  return 0;
}

void* __G4VisManager_dict::method_3050( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->Enable();
  return 0;
}

void* __G4VisManager_dict::method_3051( void* o, const std::vector<void*>&, void*)
{
  ((::G4VisManager*)o)->Disable();
  return 0;
}

void* __G4VisManager_dict::method_3052( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VisManager*)o)->GetCurrentGraphicsSystem();
}

void* __G4VisManager_dict::method_3053( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VisManager*)o)->GetCurrentScene();
}

void* __G4VisManager_dict::method_3054( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VisManager*)o)->GetCurrentSceneHandler();
}

void* __G4VisManager_dict::method_3055( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VisManager*)o)->GetCurrentViewer();
}

void* __G4VisManager_dict::method_3056( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::G4VisManager*)o)->GetAvailableGraphicsSystems();
}

void* __G4VisManager_dict::method_3057( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4VisManager*)o)->GetAvailableSceneHandlers();
}

void* __G4VisManager_dict::method_3058( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4VisManager*)o)->GetSceneList();
}

void* __G4VisManager_dict::method_3059( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4VisManager*)o)->GetVerbosity();
  return &ret;
}

void* __G4VisManager_dict::method_3060( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VisManager*)o)->GetWindowSizeHint(*(int*)arg[0],
                                                *(int*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3061( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetCurrentGraphicsSystem((::G4VGraphicsSystem*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3062( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetCurrentScene((::G4Scene*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3063( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetCurrentSceneHandler((::G4VSceneHandler*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3064( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetCurrentViewer((::G4VViewer*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3065( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::G4VisManager*)o)->SetAvailableSceneHandlers();
}

void* __G4VisManager_dict::method_3066( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::G4VisManager*)o)->SetSceneList();
}

void* __G4VisManager_dict::method_3067( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3068( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetVerboseLevel(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3069( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetVerboseLevel(*(::G4VisManager::Verbosity*)arg[0]);
  return 0;
}

void* __G4VisManager_dict::method_3070( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VisManager*)o)->SetWindowSizeHint(*(int*)arg[0],
                                          *(int*)arg[1]);
  return 0;
}

void* __G4VisManager_dict::method_3071( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((const ::G4VisManager*)o)->ViewerShortName(*(const ::G4String*)arg[0]));
}

void* __G4VisManager_dict::method_3072( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4VisManager*)o)->GetViewer(*(const ::G4String*)arg[0]);
}

void* __G4VisManager_dict::method_3073( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4VisManager*)o)->GetVerbosityValue(*(const ::G4String*)arg[0]);
  return &ret;
}

void* __G4VisManager_dict::method_3074( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4VisManager*)o)->GetVerbosityValue(*(int*)arg[0]);
  return &ret;
}

void* __G4VisManager_dict::method_3075( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((::G4VisManager*)o)->VerbosityString(*(::G4VisManager::Verbosity*)arg[0]));
}

void* __G4VisManager_dict::method_x3( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VVisManager >(), seal::reflex::baseOffset< ::G4VisManager,::G4VVisManager >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class GeantinoGun -------------------------------
class __GeantinoGun_dict { 
  public:
  __GeantinoGun_dict();
  static void * constructor_3815(void*, const std::vector<void*>&, void*);
  static void * constructor_3816(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::GeantinoGun*)o)->~GeantinoGun(); return 0;}
  static void * method_3818(void*, const std::vector<void*>&, void*);
  static void * method_3819(void*, const std::vector<void*>&, void*);
  static void* method_x4( void*, const std::vector<void*>&, void* ); 
};


__GeantinoGun_dict::__GeantinoGun_dict() {
  ClassBuilder< ::GeantinoGun >("GeantinoGun", PUBLIC | VIRTUAL)
  .addBase< ::G4VUserPrimaryGeneratorAction >(PUBLIC)
  .addDataMember(type_10882, "particleGun", OffsetOf(::GeantinoGun, particleGun), PRIVATE)
  .addDataMember(type_223, "x", OffsetOf(::GeantinoGun, x), PRIVATE)
  .addDataMember(type_223, "y", OffsetOf(::GeantinoGun, y), PRIVATE)
  .addDataMember(type_223, "z", OffsetOf(::GeantinoGun, z), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10883), "GeantinoGun", constructor_3815, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "GeantinoGun", constructor_3816, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~GeantinoGun", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_10884), "GeneratePrimaries", method_3818, 0, "anEvent", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_223, type_223, type_223), "SetDirection", method_3819, 0, ";;", PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x4);
}

//------Stub functions for class GeantinoGun -------------------------------
void* __GeantinoGun_dict::constructor_3815( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::GeantinoGun(*(const ::GeantinoGun*)arg[0]);
}

void* __GeantinoGun_dict::constructor_3816( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::GeantinoGun();
}

void* __GeantinoGun_dict::method_3818( void* o, const std::vector<void*>& arg, void*)
{
  ((::GeantinoGun*)o)->GeneratePrimaries((::G4Event*)arg[0]);
  return 0;
}

void* __GeantinoGun_dict::method_3819( void* o, const std::vector<void*>& arg, void*)
{
  ((::GeantinoGun*)o)->SetDirection(*(double*)arg[0],
                                    *(double*)arg[1],
                                    *(double*)arg[2]);
  return 0;
}

void* __GeantinoGun_dict::method_x4( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VUserPrimaryGeneratorAction >(), seal::reflex::baseOffset< ::GeantinoGun,::G4VUserPrimaryGeneratorAction >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class GeantinoPhysicsList -------------------------------
class __GeantinoPhysicsList_dict { 
  public:
  __GeantinoPhysicsList_dict();
  static void * constructor_3820(void*, const std::vector<void*>&, void*);
  static void * constructor_3821(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::GeantinoPhysicsList*)o)->~GeantinoPhysicsList(); return 0;}
  static void* method_x5( void*, const std::vector<void*>&, void* ); 
};


__GeantinoPhysicsList_dict::__GeantinoPhysicsList_dict() {
  ClassBuilder< ::GeantinoPhysicsList >("GeantinoPhysicsList", PUBLIC | VIRTUAL)
  .addBase< ::G4VUserPhysicsList >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10885), "GeantinoPhysicsList", constructor_3820, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "GeantinoPhysicsList", constructor_3821, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~GeantinoPhysicsList", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember<void*(void)>("getBasesTable", method_x5);
}

//------Stub functions for class GeantinoPhysicsList -------------------------------
void* __GeantinoPhysicsList_dict::constructor_3820( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::GeantinoPhysicsList(*(const ::GeantinoPhysicsList*)arg[0]);
}

void* __GeantinoPhysicsList_dict::constructor_3821( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::GeantinoPhysicsList();
}

void* __GeantinoPhysicsList_dict::method_x5( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VUserPhysicsList >(), seal::reflex::baseOffset< ::GeantinoPhysicsList,::G4VUserPhysicsList >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class RunManager -------------------------------
class __RunManager_dict { 
  public:
  __RunManager_dict();
  static void * constructor_3891(void*, const std::vector<void*>&, void*);
  static void * constructor_3892(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::RunManager*)o)->~RunManager(); return 0;}
  static void * method_3894(void*, const std::vector<void*>&, void*);
  static void * method_3895(void*, const std::vector<void*>&, void*);
  static void* method_x6( void*, const std::vector<void*>&, void* ); 
};


__RunManager_dict::__RunManager_dict() {
  ClassBuilder< ::RunManager >("RunManager", PUBLIC | VIRTUAL)
  .addBase< ::G4RunManager >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11057), "RunManager", constructor_3891, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "RunManager", constructor_3892, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~RunManager", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1467, type_567, type_7497, type_567), "BeamOn", method_3894, 0, "n_event;macroFile=0;n_select=-1", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1467), "Terminate", method_3895, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x6);
}

//------Stub functions for class RunManager -------------------------------
void* __RunManager_dict::constructor_3891( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::RunManager(*(const ::RunManager*)arg[0]);
}

void* __RunManager_dict::constructor_3892( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::RunManager();
}

void* __RunManager_dict::method_3894( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::RunManager*)o)->BeamOn(*(int*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::RunManager*)o)->BeamOn(*(int*)arg[0],
                               (const char*)arg[1]);
    return 0;
  }
  else if ( arg.size() == 3 ) { 
    ((::RunManager*)o)->BeamOn(*(int*)arg[0],
                               (const char*)arg[1],
                               *(int*)arg[2]);
    return 0;
  }
  return 0;
}

void* __RunManager_dict::method_3895( void* o, const std::vector<void*>&, void*)
{
  ((::RunManager*)o)->Terminate();
  return 0;
}

void* __RunManager_dict::method_x6( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4RunManager >(), seal::reflex::baseOffset< ::RunManager,::G4RunManager >::get(),PUBLIC), 0));
  return &s_bases;
}

namespace {
  struct Dictionaries {
    Dictionaries() {
      __TrackerSD_dict(); 
      __TrackerHit_dict(); 
      __VisManager_dict(); 
      __G4VisManager_dict(); 
      __GeantinoGun_dict(); 
      __GeantinoPhysicsList_dict(); 
      __RunManager_dict(); 
    }
  };
  static Dictionaries instance;
}
