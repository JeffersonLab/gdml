// Generated at Thu Mar  9 17:40:34 2006. Do not modify it

#ifdef _WIN32
#pragma warning ( disable : 4786 )
#ifndef LCGDICT_STRING 
#include <string> // Included here since it is sensitive to private->public trick
#endif
#endif
#define private public
#define protected public
#include "../include/G4classes.h"
#undef private
#undef protected
#include "Reflex/Builder/ReflexBuilder.h"
#include <typeinfo>
using namespace seal::reflex;

namespace {   Type type_void = TypeBuilder("void");
  Type type_27 = TypeBuilder("G4UIcommandTree");
  Type type_10650 = PointerBuilder(type_27);
  Type type_26 = TypeBuilder("G4UIsession");
  Type type_10651 = PointerBuilder(type_26);
  Type type_25 = TypeBuilder("G4UIcontrolMessenger");
  Type type_10652 = PointerBuilder(type_25);
  Type type_24 = TypeBuilder("G4UnitsMessenger");
  Type type_10653 = PointerBuilder(type_24);
  Type type_466 = TypeBuilder("G4String");
  Type type_89 = TypeBuilder("G4UIcommand");
  Type type_10654 = PointerBuilder(type_89);
  Type type_424 = TypeBuilder("int");
  Type type_565 = TypedefTypeBuilder("G4int", type_424);
  Type type_2750 = TypeBuilder("std::basic_ofstream<char,std::char_traits<char> >");
  Type type_2751 = TypedefTypeBuilder("std::ofstream", type_2750);
  Type type_420 = TypeBuilder("bool");
  Type type_564 = TypedefTypeBuilder("G4bool", type_420);
  Type type_3058 = TypeBuilder("std::vector<G4String>");
  Type type_23 = TypeBuilder("G4UIaliasList");
  Type type_10655 = PointerBuilder(type_23);
  Type type_22 = TypeBuilder("G4UImanager");
  Type type_10649 = PointerBuilder(type_22);
  Type type_8017 = TypeBuilder("char");
  Type type_8017c = ConstBuilder(type_8017);
  Type type_7707 = PointerBuilder(type_8017c);
  Type type_1465 = TypeBuilder("void");
  Type type_426 = TypeBuilder("double");
  Type type_567 = TypedefTypeBuilder("G4double", type_426);
  Type type_31 = TypeBuilder("G4ApplicationState");
  Type type_10651c = ConstBuilder(type_10651);
  Type type_131 = TypeBuilder("G4Navigator");
  Type type_10660 = PointerBuilder(type_131);
  Type type_39 = TypeBuilder("G4PropagatorInField");
  Type type_10661 = PointerBuilder(type_39);
  Type type_485 = TypeBuilder("G4FieldManager");
  Type type_10662 = PointerBuilder(type_485);
  Type type_38 = TypeBuilder("G4GeometryMessenger");
  Type type_10663 = PointerBuilder(type_38);
  Type type_37 = TypeBuilder("G4TransportationManager");
  Type type_37c = ConstBuilder(type_37);
  Type type_10665 = ReferenceBuilder(type_37c);
  Type type_10664 = PointerBuilder(type_37);
  Type type_66 = TypeBuilder("G4RunManagerKernel");
  Type type_10758 = PointerBuilder(type_66);
  Type type_67 = TypeBuilder("G4EventManager");
  Type type_10759 = PointerBuilder(type_67);
  Type type_1996 = TypeBuilder("G4VUserDetectorConstruction");
  Type type_10760 = PointerBuilder(type_1996);
  Type type_323 = TypeBuilder("G4VUserPhysicsList");
  Type type_10761 = PointerBuilder(type_323);
  Type type_322 = TypeBuilder("G4UserRunAction");
  Type type_10762 = PointerBuilder(type_322);
  Type type_321 = TypeBuilder("G4VUserPrimaryGeneratorAction");
  Type type_10763 = PointerBuilder(type_321);
  Type type_320 = TypeBuilder("G4UserEventAction");
  Type type_10764 = PointerBuilder(type_320);
  Type type_319 = TypeBuilder("G4UserStackingAction");
  Type type_10765 = PointerBuilder(type_319);
  Type type_318 = TypeBuilder("G4UserTrackingAction");
  Type type_10766 = PointerBuilder(type_318);
  Type type_317 = TypeBuilder("G4UserSteppingAction");
  Type type_10767 = PointerBuilder(type_317);
  Type type_315 = TypeBuilder("G4RunMessenger");
  Type type_10768 = PointerBuilder(type_315);
  Type type_316 = TypeBuilder("G4Timer");
  Type type_10769 = PointerBuilder(type_316);
  Type type_314 = TypeBuilder("G4DCtable");
  Type type_10770 = PointerBuilder(type_314);
  Type type_313 = TypeBuilder("G4Run");
  Type type_10771 = PointerBuilder(type_313);
  Type type_204 = TypeBuilder("G4Event");
  Type type_10772 = PointerBuilder(type_204);
  Type type_15787 = TypeBuilder("std::vector<G4Event*>");
  Type type_10773 = PointerBuilder(type_15787);
  Type type_1997 = TypeBuilder("G4VPhysicalVolume");
  Type type_10743 = PointerBuilder(type_1997);
  Type type_51 = TypeBuilder("G4RunManager");
  Type type_51c = ConstBuilder(type_51);
  Type type_10774 = ReferenceBuilder(type_51c);
  Type type_10757 = PointerBuilder(type_51);
  Type type_550 = TypeBuilder("G4Region");
  Type type_10646 = PointerBuilder(type_550);
  Type type_1996c = ConstBuilder(type_1996);
  Type type_10775 = PointerBuilder(type_1996c);
  Type type_323c = ConstBuilder(type_323);
  Type type_10776 = PointerBuilder(type_323c);
  Type type_322c = ConstBuilder(type_322);
  Type type_10777 = PointerBuilder(type_322c);
  Type type_321c = ConstBuilder(type_321);
  Type type_10778 = PointerBuilder(type_321c);
  Type type_320c = ConstBuilder(type_320);
  Type type_10779 = PointerBuilder(type_320c);
  Type type_319c = ConstBuilder(type_319);
  Type type_10780 = PointerBuilder(type_319c);
  Type type_318c = ConstBuilder(type_318);
  Type type_10781 = PointerBuilder(type_318c);
  Type type_317c = ConstBuilder(type_317);
  Type type_10782 = PointerBuilder(type_317c);
  Type type_313c = ConstBuilder(type_313);
  Type type_10783 = PointerBuilder(type_313c);
  Type type_204c = ConstBuilder(type_204);
  Type type_10784 = PointerBuilder(type_204c);
  Type type_15806 = TypeBuilder("std::vector<G4VHitsCollection*>");
  Type type_10863 = PointerBuilder(type_15806);
  Type type_938 = PointerBuilder(type_1465);
  Type type_553 = TypeBuilder("unsigned int");
  Type type_1555 = TypedefTypeBuilder("size_t", type_553);
  Type type_61 = TypeBuilder("G4VHitsCollection");
  Type type_10864 = PointerBuilder(type_61);
  Type type_61c = ConstBuilder(type_61);
  Type type_10865 = ReferenceBuilder(type_61c);
  Type type_62 = TypeBuilder("G4VHit");
  Type type_10866 = PointerBuilder(type_62);
  Type type_62c = ConstBuilder(type_62);
  Type type_10867 = ReferenceBuilder(type_62c);
  Type type_15809 = TypeBuilder("std::map<G4String,G4AttDef>");
  Type type_15809c = ConstBuilder(type_15809);
  Type type_10868 = PointerBuilder(type_15809c);
  Type type_15811 = TypeBuilder("std::vector<G4AttValue>");
  Type type_15811c = ConstBuilder(type_15811);
  Type type_10869 = PointerBuilder(type_15811c);
  Type type_311 = TypeBuilder("G4StackManager");
  Type type_10898 = PointerBuilder(type_311);
  Type type_310 = TypeBuilder("G4TrackingManager");
  Type type_10899 = PointerBuilder(type_310);
  Type type_213 = TypeBuilder("G4TrajectoryContainer");
  Type type_10901 = PointerBuilder(type_213);
  Type type_84 = TypeBuilder("G4SDManager");
  Type type_10902 = PointerBuilder(type_84);
  Type type_309 = TypeBuilder("G4PrimaryTransformer");
  Type type_10900 = PointerBuilder(type_309);
  Type type_199 = TypeBuilder("G4EvManMessenger");
  Type type_10903 = PointerBuilder(type_199);
  Type type_8468 = TypeBuilder("HepMC::GenEvent");
  Type type_8468c = ConstBuilder(type_8468);
  Type type_10906 = PointerBuilder(type_8468c);
  Type type_210 = TypeBuilder("std::vector<G4Track*>");
  Type type_211 = TypedefTypeBuilder("G4TrackVector", type_210);
  Type type_10907 = PointerBuilder(type_211);
  Type type_83 = TypeBuilder("G4VUserEventInformation");
  Type type_10908 = PointerBuilder(type_83);
  Type type_42 = TypeBuilder("G4SDStructure");
  Type type_10672 = PointerBuilder(type_42);
  Type type_41 = TypeBuilder("G4HCtable");
  Type type_11194 = PointerBuilder(type_41);
  Type type_40 = TypeBuilder("G4SDmessenger");
  Type type_11195 = PointerBuilder(type_40);
  Type type_84c = ConstBuilder(type_84);
  Type type_11196 = ReferenceBuilder(type_84c);
  Type type_484 = TypeBuilder("G4VSensitiveDetector");
  Type type_10667 = PointerBuilder(type_484);
  Type type_59 = TypeBuilder("G4HCofThisEvent");
  Type type_10671 = PointerBuilder(type_59);
  Type type_295 = TypeBuilder("CLHEP::Hep3Vector");
  Type type_528 = TypedefTypeBuilder("G4ThreeVector", type_295);
  Type type_285 = TypeBuilder("G4NavigationHistory");
  Type type_153 = TypeBuilder("G4NormalNavigation");
  Type type_137 = TypeBuilder("G4VoxelNavigation");
  Type type_135 = TypeBuilder("G4ParameterisedNavigation");
  Type type_133 = TypeBuilder("G4ReplicaNavigation");
  Type type_131c = ConstBuilder(type_131);
  Type type_3767 = ReferenceBuilder(type_131c);
  Type type_528c = ConstBuilder(type_528);
  Type type_11354 = ReferenceBuilder(type_528c);
  Type type_567c = ConstBuilder(type_567);
  Type type_3903 = ReferenceBuilder(type_567);
  Type type_158 = TypeBuilder("G4TouchableHistory");
  Type type_158c = ConstBuilder(type_158);
  Type type_11504 = ReferenceBuilder(type_158c);
  Type type_11353 = PointerBuilder(type_528c);
  Type type_564c = ConstBuilder(type_564);
  Type type_281 = TypeBuilder("G4ReferenceCountedHandle<G4VTouchable>");
  Type type_282 = TypedefTypeBuilder("G4TouchableHandle", type_281);
  Type type_11506 = ReferenceBuilder(type_282);
  Type type_284 = TypeBuilder("G4VTouchable");
  Type type_11507 = PointerBuilder(type_284);
  Type type_167 = TypeBuilder("G4GRSVolume");
  Type type_11508 = PointerBuilder(type_167);
  Type type_165 = TypeBuilder("G4GRSSolid");
  Type type_11509 = PointerBuilder(type_165);
  Type type_10745 = PointerBuilder(type_158);
  Type type_155 = TypeBuilder("G4ReferenceCountedHandle<G4TouchableHistory>");
  Type type_156 = TypedefTypeBuilder("G4TouchableHistoryHandle", type_155);
  Type type_11510 = PointerBuilder(type_564);
  Type type_476 = TypeBuilder("G4AffineTransform");
  Type type_476c = ConstBuilder(type_476);
  Type type_11511 = ReferenceBuilder(type_476c);
  Type type_3391 = PointerBuilder(type_565);
  Type type_203 = TypeBuilder("G4PrimaryVertex");
  Type type_10874 = PointerBuilder(type_203);
  Type type_55 = TypeBuilder("G4DCofThisEvent");
  Type type_10813 = PointerBuilder(type_55);
  Type type_10793 = ReferenceBuilder(type_204c);
  Type type_4683 = TypeBuilder("std::_Vector_base<G4Material*,std::allocator<G4Material*> >");
  Type type_557 = TypeBuilder("G4Material");
  Type type_4682 = PointerBuilder(type_557);
  Type type_4686 = PointerBuilder(type_4682);
  Type type_4682c = ConstBuilder(type_4682);
  Type type_4688 = PointerBuilder(type_4682c);
  Type type_4690 = TypeBuilder("__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >");
  Type type_4692 = TypeBuilder("__gnu_cxx::__normal_iterator<G4Material* const*,std::vector<G4Material*> >");
  Type type_4694 = ReferenceBuilder(type_4682);
  Type type_4696 = ReferenceBuilder(type_4682c);
  Type type_1556 = TypedefTypeBuilder("ptrdiff_t", type_424);
  Type type_4700 = TypeBuilder("std::allocator<G4Material*>");
  Type type_4702 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<G4Material* const*, std::vector<G4Material*> > >");
  Type type_4704 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<G4Material**, std::vector<G4Material*> > >");
  Type type_4700c = ConstBuilder(type_4700);
  Type type_11901 = ReferenceBuilder(type_4700c);
  Type type_236 = TypeBuilder("std::vector<G4Material*>");
  Type type_236c = ConstBuilder(type_236);
  Type type_11902 = ReferenceBuilder(type_236c);
  Type type_11903 = ReferenceBuilder(type_236);
  Type type_4751 = TypeBuilder("std::_Vector_base<G4Element*,std::allocator<G4Element*> >");
  Type type_267 = TypeBuilder("G4Element");
  Type type_4753 = PointerBuilder(type_267);
  Type type_4755 = PointerBuilder(type_4753);
  Type type_4753c = ConstBuilder(type_4753);
  Type type_4757 = PointerBuilder(type_4753c);
  Type type_4759 = TypeBuilder("__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >");
  Type type_4761 = TypeBuilder("__gnu_cxx::__normal_iterator<G4Element* const*,std::vector<G4Element*> >");
  Type type_4763 = ReferenceBuilder(type_4753);
  Type type_4765 = ReferenceBuilder(type_4753c);
  Type type_4769 = TypeBuilder("std::allocator<G4Element*>");
  Type type_4771 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<G4Element* const*, std::vector<G4Element*> > >");
  Type type_4773 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<G4Element**, std::vector<G4Element*> > >");
  Type type_4769c = ConstBuilder(type_4769);
  Type type_11932 = ReferenceBuilder(type_4769c);
  Type type_238 = TypeBuilder("std::vector<G4Element*>");
  Type type_238c = ConstBuilder(type_238);
  Type type_11933 = ReferenceBuilder(type_238c);
  Type type_11934 = ReferenceBuilder(type_238);
  Type type_3895 = PointerBuilder(type_567);
  Type type_268 = TypeBuilder("std::vector<G4Isotope*>");
  Type type_269 = TypedefTypeBuilder("G4IsotopeVector", type_268);
  Type type_12036 = PointerBuilder(type_269);
  Type type_271 = TypeBuilder("G4IonisParamElm");
  Type type_12037 = PointerBuilder(type_271);
  Type type_466c = ConstBuilder(type_466);
  Type type_9169 = ReferenceBuilder(type_466c);
  Type type_278 = TypeBuilder("G4Isotope");
  Type type_5055 = PointerBuilder(type_278);
  Type type_278c = ConstBuilder(type_278);
  Type type_12038 = PointerBuilder(type_278c);
  Type type_266 = TypedefTypeBuilder("G4ElementTable", type_238);
  Type type_266c = ConstBuilder(type_266);
  Type type_12039 = PointerBuilder(type_266c);
  Type type_267c = ConstBuilder(type_267);
  Type type_12040 = ReferenceBuilder(type_267c);
  Type type_295c = ConstBuilder(type_295);
  Type type_12149 = ReferenceBuilder(type_295c);
  Type type_9230 = ReferenceBuilder(type_426);
  Type type_12150 = ReferenceBuilder(type_295);
  Type type_488 = TypeBuilder("CLHEP::HepRotation");
  Type type_488c = ConstBuilder(type_488);
  Type type_12151 = ReferenceBuilder(type_488c);
  Type type_8503 = TypeBuilder("CLHEP::HepAxisAngle");
  Type type_8503c = ConstBuilder(type_8503);
  Type type_12152 = ReferenceBuilder(type_8503c);
  Type type_8501 = TypeBuilder("CLHEP::HepEulerAngles");
  Type type_8501c = ConstBuilder(type_8501);
  Type type_12153 = ReferenceBuilder(type_8501c);
  Type type_198 = TypeBuilder("G4SteppingManager");
  Type type_11197 = PointerBuilder(type_198);
  Type type_12355 = ReferenceBuilder(type_317c);
  Type type_230 = TypeBuilder("G4Step");
  Type type_230c = ConstBuilder(type_230);
  Type type_11843 = PointerBuilder(type_230c);
  Type type_12356 = ReferenceBuilder(type_318c);
  Type type_308 = TypeBuilder("G4Track");
  Type type_308c = ConstBuilder(type_308);
  Type type_11349 = PointerBuilder(type_308c);
  Type type_12357 = ReferenceBuilder(type_319c);
  Type type_307 = TypeBuilder("G4ClassificationOfNewTrack");
  Type type_12358 = ReferenceBuilder(type_320c);
  Type type_12360 = ReferenceBuilder(type_322c);
  Type type_302 = TypeBuilder("G4ParticleTable");
  Type type_12159 = PointerBuilder(type_302);
  Type type_5795 = TypeBuilder("G4ParticleTableIterator<G4String,G4ParticleDefinition*>");
  Type type_12162 = PointerBuilder(type_5795);
  Type type_11 = TypeBuilder("G4UserPhysicsListMessenger");
  Type type_12361 = PointerBuilder(type_11);
  Type type_13 = TypeBuilder("G4ProductionCutsTable");
  Type type_10477 = PointerBuilder(type_13);
  Type type_300 = TypeBuilder("G4ParticleDefinition");
  Type type_12111 = PointerBuilder(type_300);
  Type type_304 = TypeBuilder("G4ProcessManager");
  Type type_12158 = PointerBuilder(type_304);
  Type type_489 = TypedefTypeBuilder("G4RotationMatrix", type_488);
  Type type_11685 = PointerBuilder(type_489);
  Type type_558 = TypeBuilder("G4LogicalVolume");
  Type type_10645 = PointerBuilder(type_558);
  Type type_376 = TypeBuilder("HepGeom::Transform3D");
  Type type_415 = TypedefTypeBuilder("HepTransform3D", type_376);
  Type type_377 = TypedefTypeBuilder("G4Transform3D", type_415);
  Type type_377c = ConstBuilder(type_377);
  Type type_12363 = ReferenceBuilder(type_377c);
  Type type_487 = TypeBuilder("G4VPVParameterisation");
  Type type_12364 = PointerBuilder(type_487);
  Type type_534 = TypeBuilder("EAxis");
  Type type_12365 = ReferenceBuilder(type_534);
  Type type_3399 = ReferenceBuilder(type_565);
  Type type_11500 = ReferenceBuilder(type_564);
  Type type_473 = TypeBuilder("G4Polyhedron");
  Type type_12368 = PointerBuilder(type_473);
  Type type_327 = TypeBuilder("G4EllipticalTube");
  Type type_327c = ConstBuilder(type_327);
  Type type_12369 = ReferenceBuilder(type_327c);
  Type type_534c = ConstBuilder(type_534);
  Type type_475 = TypeBuilder("G4VoxelLimits");
  Type type_475c = ConstBuilder(type_475);
  Type type_12370 = ReferenceBuilder(type_475c);
  Type type_533 = TypeBuilder("EInside");
  Type type_12371 = PointerBuilder(type_528);
  Type type_467 = TypedefTypeBuilder("G4GeometryType", type_466);
  Type type_2766 = TypeBuilder("std::basic_ostream<char,std::char_traits<char> >");
  Type type_2767 = TypedefTypeBuilder("std::ostream", type_2766);
  Type type_3684 = ReferenceBuilder(type_2767);
  Type type_474 = TypeBuilder("G4VGraphicsScene");
  Type type_12372 = ReferenceBuilder(type_474);
  Type type_471 = TypeBuilder("G4VisExtent");
  Type type_483 = TypeBuilder("G4VSolid");
  Type type_11631 = PointerBuilder(type_483);
  Type type_565c = ConstBuilder(type_565);
  Type type_1997c = ConstBuilder(type_1997);
  Type type_10751 = PointerBuilder(type_1997c);
  Type type_472 = TypeBuilder("G4NURBS");
  Type type_12404 = PointerBuilder(type_472);
  Type type_433 = TypeBuilder("G4Hype");
  Type type_433c = ConstBuilder(type_433);
  Type type_12508 = ReferenceBuilder(type_433c);
  Type type_334 = TypeBuilder("G4PolyhedraSideRZ");
  Type type_12509 = PointerBuilder(type_334);
  Type type_331 = TypeBuilder("G4PolyhedraHistorical");
  Type type_12510 = PointerBuilder(type_331);
  Type type_454 = TypeBuilder("G4EnclosingCylinder");
  Type type_12511 = PointerBuilder(type_454);
  Type type_3897 = PointerBuilder(type_567c);
  Type type_434 = TypeBuilder("G4Polyhedra");
  Type type_434c = ConstBuilder(type_434);
  Type type_12512 = ReferenceBuilder(type_434c);
  Type type_435 = TypeBuilder("G4Para");
  Type type_435c = ConstBuilder(type_435);
  Type type_12514 = ReferenceBuilder(type_435c);
  Type type_436 = TypeBuilder("G4Torus");
  Type type_436c = ConstBuilder(type_436);
  Type type_12516 = ReferenceBuilder(type_436c);
  Type type_437 = TypeBuilder("G4Orb");
  Type type_437c = ConstBuilder(type_437);
  Type type_12517 = ReferenceBuilder(type_437c);
  Type type_438 = TypeBuilder("G4Sphere");
  Type type_438c = ConstBuilder(type_438);
  Type type_12518 = ReferenceBuilder(type_438c);
  Type type_439 = TypeBuilder("G4Cons");
  Type type_439c = ConstBuilder(type_439);
  Type type_12519 = ReferenceBuilder(type_439c);
  Type type_385 = TypeBuilder("TrapSidePlane");
  Type type_12520 = ArrayBuilder(type_385, 4);
  Type type_440 = TypeBuilder("G4Trap");
  Type type_440c = ConstBuilder(type_440);
  Type type_12521 = ReferenceBuilder(type_440c);
  Type type_441 = TypeBuilder("G4Trd");
  Type type_441c = ConstBuilder(type_441);
  Type type_12523 = ReferenceBuilder(type_441c);
  Type type_442 = TypeBuilder("G4Tubs");
  Type type_442c = ConstBuilder(type_442);
  Type type_12524 = ReferenceBuilder(type_442c);
  Type type_443 = TypeBuilder("G4Box");
  Type type_443c = ConstBuilder(type_443);
  Type type_12525 = ReferenceBuilder(type_443c);
  Type type_7974 = PointerBuilder(type_426);
  Type type_449 = TypeBuilder("BuildG4Polycone");
  Type type_449c = ConstBuilder(type_449);
  Type type_12528 = ReferenceBuilder(type_449c);
  Type type_451 = TypeBuilder("G4Polycone");
  Type type_12529 = PointerBuilder(type_451);
  Type type_10687 = ReferenceBuilder(type_466);
  Type type_457 = TypeBuilder("G4PolyconeSideRZ");
  Type type_12530 = PointerBuilder(type_457);
  Type type_452 = TypeBuilder("G4PolyconeHistorical");
  Type type_12531 = PointerBuilder(type_452);
  Type type_451c = ConstBuilder(type_451);
  Type type_12532 = ReferenceBuilder(type_451c);
  Type type_2806 = TypeBuilder("std::basic_string<char>");
  Type type_2807 = TypedefTypeBuilder("std::string", type_2806);
  Type type_552 = TypeBuilder("G4SubString");
  Type type_552c = ConstBuilder(type_552);
  Type type_12543 = ReferenceBuilder(type_552c);
  Type type_2807c = ConstBuilder(type_2807);
  Type type_12544 = ReferenceBuilder(type_2807c);
  Type type_554 = TypedefTypeBuilder("str_size", type_1555);
  Type type_8987 = ReferenceBuilder(type_8017);
  Type type_9217 = ReferenceBuilder(type_8017c);
  Type type_7147 = TypeBuilder("G4String::caseCompare");
  Type type_2768 = TypeBuilder("std::basic_istream<char,std::char_traits<char> >");
  Type type_2769 = TypedefTypeBuilder("std::istream", type_2768);
  Type type_12545 = ReferenceBuilder(type_2769);
  Type type_478 = TypeBuilder("DetConstruction");
  Type type_478c = ConstBuilder(type_478);
  Type type_12553 = ReferenceBuilder(type_478c);
  Type type_482 = TypeBuilder("G4UserLimits");
  Type type_482c = ConstBuilder(type_482);
  Type type_12556 = ReferenceBuilder(type_482c);
  Type type_11352 = ReferenceBuilder(type_308c);
  Type type_483c = ConstBuilder(type_483);
  Type type_7145 = ReferenceBuilder(type_483c);
  Type type_11630 = PointerBuilder(type_483c);
  Type type_470 = TypeBuilder("G4DisplacedSolid");
  Type type_470c = ConstBuilder(type_470);
  Type type_12547 = PointerBuilder(type_470c);
  Type type_12548 = PointerBuilder(type_470);
  Type type_45 = TypeBuilder("G4CollectionNameVector");
  Type type_47 = TypeBuilder("G4VReadOutGeometry");
  Type type_12558 = PointerBuilder(type_47);
  Type type_484c = ConstBuilder(type_484);
  Type type_12559 = ReferenceBuilder(type_484c);
  Type type_10747 = PointerBuilder(type_230);
  Type type_12568 = ReferenceBuilder(type_443);
  Type type_12569 = ReferenceBuilder(type_442);
  Type type_12570 = ReferenceBuilder(type_441);
  Type type_12571 = ReferenceBuilder(type_440);
  Type type_12572 = ReferenceBuilder(type_439);
  Type type_12573 = ReferenceBuilder(type_438);
  Type type_12574 = ReferenceBuilder(type_437);
  Type type_12575 = ReferenceBuilder(type_436);
  Type type_12576 = ReferenceBuilder(type_435);
  Type type_12577 = ReferenceBuilder(type_451);
  Type type_12578 = ReferenceBuilder(type_434);
  Type type_12579 = ReferenceBuilder(type_433);
  Type type_8582 = TypeBuilder("CLHEP::HepRotationX");
  Type type_8582c = ConstBuilder(type_8582);
  Type type_12586 = ReferenceBuilder(type_8582c);
  Type type_8581 = TypeBuilder("CLHEP::HepRotationY");
  Type type_8581c = ConstBuilder(type_8581);
  Type type_12587 = ReferenceBuilder(type_8581c);
  Type type_8580 = TypeBuilder("CLHEP::HepRotationZ");
  Type type_8580c = ConstBuilder(type_8580);
  Type type_12588 = ReferenceBuilder(type_8580c);
  Type type_12589 = ReferenceBuilder(type_488);
  Type type_8585 = TypeBuilder("CLHEP::HepRep3x3");
  Type type_8585c = ConstBuilder(type_8585);
  Type type_12590 = ReferenceBuilder(type_8585c);
  Type type_7491 = TypeBuilder("CLHEP::HepRotation::HepRotation_row");
  Type type_7491c = ConstBuilder(type_7491);
  Type type_297 = TypeBuilder("CLHEP::HepLorentzVector");
  Type type_8584 = TypeBuilder("CLHEP::HepRep4x4");
  Type type_12592 = ReferenceBuilder(type_8503);
  Type type_8579 = TypeBuilder("CLHEP::HepBoost");
  Type type_8579c = ConstBuilder(type_8579);
  Type type_12593 = ReferenceBuilder(type_8579c);
  Type type_8613 = TypeBuilder("CLHEP::HepLorentzRotation");
  Type type_8613c = ConstBuilder(type_8613);
  Type type_12156 = ReferenceBuilder(type_8613c);
  Type type_297c = ConstBuilder(type_297);
  Type type_12154 = ReferenceBuilder(type_297c);
  Type type_12594 = PointerBuilder(type_295c);
  Type type_235 = TypeBuilder("G4State");
  Type type_239 = TypedefTypeBuilder("G4ElementVector", type_238);
  Type type_12761 = PointerBuilder(type_239);
  Type type_259 = TypeBuilder("G4MaterialPropertiesTable");
  Type type_12762 = PointerBuilder(type_259);
  Type type_258 = TypeBuilder("G4IonisParamMat");
  Type type_12763 = PointerBuilder(type_258);
  Type type_240 = TypeBuilder("G4SandiaTable");
  Type type_12764 = PointerBuilder(type_240);
  Type type_239c = ConstBuilder(type_239);
  Type type_12765 = PointerBuilder(type_239c);
  Type type_3393 = PointerBuilder(type_565c);
  Type type_12766 = PointerBuilder(type_267c);
  Type type_237 = TypedefTypeBuilder("G4MaterialTable", type_236);
  Type type_237c = ConstBuilder(type_237);
  Type type_12767 = PointerBuilder(type_237c);
  Type type_557c = ConstBuilder(type_557);
  Type type_12768 = ReferenceBuilder(type_557c);
  Type type_7873 = TypeBuilder("std::vector<G4VPhysicalVolume*>");
  Type type_12769 = PointerBuilder(type_482);
  Type type_481 = TypeBuilder("G4SmartVoxelHeader");
  Type type_11518 = PointerBuilder(type_481);
  Type type_480 = TypeBuilder("G4VisAttributes");
  Type type_480c = ConstBuilder(type_480);
  Type type_12770 = PointerBuilder(type_480c);
  Type type_479 = TypeBuilder("G4FastSimulationManager");
  Type type_12771 = PointerBuilder(type_479);
  Type type_555 = TypeBuilder("G4MaterialCutsCouple");
  Type type_10484 = PointerBuilder(type_555);
  Type type_555c = ConstBuilder(type_555);
  Type type_10642 = PointerBuilder(type_555c);
  Type type_558c = ConstBuilder(type_558);
  Type type_12836 = ReferenceBuilder(type_558c);
  Type type_12837 = ReferenceBuilder(type_480c);
  Type type_12967 = ReferenceBuilder(type_1997c);
  Type type_489c = ConstBuilder(type_489);
  Type type_11632 = PointerBuilder(type_489c);
  Type type_10338 = TypeBuilder("std::basic_string<char>::_Alloc_hider");
  Type type_9659 = TypeBuilder("std::char_traits<char>");
  Type type_9757 = TypeBuilder("std::allocator<char>");
  Type type_828 = PointerBuilder(type_8017);
  Type type_9234 = TypeBuilder("__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >");
  Type type_10331 = TypeBuilder("__gnu_cxx::__normal_iterator<const char*,std::basic_string<char> >");
  Type type_10333 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<const char*, std::basic_string<char> > >");
  Type type_10335 = TypeBuilder("std::reverse_iterator<__gnu_cxx::__normal_iterator<char*, std::basic_string<char> > >");
  Type type_9757c = ConstBuilder(type_9757);
  Type type_9172 = ReferenceBuilder(type_9757c);
  Type type_2806c = ConstBuilder(type_2806);
  Type type_9144 = ReferenceBuilder(type_2806c);
  Type type_9142 = ReferenceBuilder(type_2806);
}
//------Dictionary for class G4UImanager -------------------------------
class __G4UImanager_dict { 
  public:
  __G4UImanager_dict();
  static void * method_2951(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UImanager*)o)->~G4UImanager(); return 0;}
  static void * method_2958(void*, const std::vector<void*>&, void*);
  static void * method_2959(void*, const std::vector<void*>&, void*);
  static void * method_2960(void*, const std::vector<void*>&, void*);
  static void * method_2961(void*, const std::vector<void*>&, void*);
  static void * method_2962(void*, const std::vector<void*>&, void*);
  static void * method_2963(void*, const std::vector<void*>&, void*);
  static void * method_2964(void*, const std::vector<void*>&, void*);
  static void * method_2965(void*, const std::vector<void*>&, void*);
  static void * method_2966(void*, const std::vector<void*>&, void*);
  static void * method_2967(void*, const std::vector<void*>&, void*);
  static void * method_2968(void*, const std::vector<void*>&, void*);
  static void * method_2969(void*, const std::vector<void*>&, void*);
  static void * method_2970(void*, const std::vector<void*>&, void*);
  static void * method_2971(void*, const std::vector<void*>&, void*);
  static void * method_2972(void*, const std::vector<void*>&, void*);
  static void * method_2973(void*, const std::vector<void*>&, void*);
  static void * method_2974(void*, const std::vector<void*>&, void*);
  static void * method_2975(void*, const std::vector<void*>&, void*);
  static void * method_2976(void*, const std::vector<void*>&, void*);
  static void * method_2980(void*, const std::vector<void*>&, void*);
  static void * method_2981(void*, const std::vector<void*>&, void*);
  static void * method_2982(void*, const std::vector<void*>&, void*);
  static void * method_2983(void*, const std::vector<void*>&, void*);
  static void * method_2984(void*, const std::vector<void*>&, void*);
  static void * method_2985(void*, const std::vector<void*>&, void*);
  static void * method_2986(void*, const std::vector<void*>&, void*);
  static void * method_2987(void*, const std::vector<void*>&, void*);
  static void * method_2988(void*, const std::vector<void*>&, void*);
  static void * method_2989(void*, const std::vector<void*>&, void*);
  static void * method_2990(void*, const std::vector<void*>&, void*);
  static void * method_2991(void*, const std::vector<void*>&, void*);
  static void * method_2992(void*, const std::vector<void*>&, void*);
  static void * method_2993(void*, const std::vector<void*>&, void*);
  static void * method_2994(void*, const std::vector<void*>&, void*);
  static void * method_2995(void*, const std::vector<void*>&, void*);
  static void * method_2996(void*, const std::vector<void*>&, void*);
  static void * method_2997(void*, const std::vector<void*>&, void*);
  static void * method_2998(void*, const std::vector<void*>&, void*);
  static void * method_2999(void*, const std::vector<void*>&, void*);
  static void* method_x0( void*, const std::vector<void*>&, void* ); 
};


__G4UImanager_dict::__G4UImanager_dict() {
  ClassBuilder< ::G4UImanager >("G4UImanager", PUBLIC | VIRTUAL)
  .addBase< ::G4VStateDependent >(PUBLIC)
  .addDataMember(type_10650, "treeTop", OffsetOf(::G4UImanager, treeTop), PRIVATE)
  .addDataMember(type_10651, "session", OffsetOf(::G4UImanager, session), PRIVATE)
  .addDataMember(type_10652, "UImessenger", OffsetOf(::G4UImanager, UImessenger), PRIVATE)
  .addDataMember(type_10653, "UnitsMessenger", OffsetOf(::G4UImanager, UnitsMessenger), PRIVATE)
  .addDataMember(type_466, "savedParameters", OffsetOf(::G4UImanager, savedParameters), PRIVATE)
  .addDataMember(type_10654, "savedCommand", OffsetOf(::G4UImanager, savedCommand), PRIVATE)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4UImanager, verboseLevel), PRIVATE)
  .addDataMember(type_2751, "historyFile", OffsetOf(::G4UImanager, historyFile), PRIVATE)
  .addDataMember(type_564, "saveHistory", OffsetOf(::G4UImanager, saveHistory), PRIVATE)
  .addDataMember(type_3058, "histVec", OffsetOf(::G4UImanager, histVec), PRIVATE)
  .addDataMember(type_10655, "aliasList", OffsetOf(::G4UImanager, aliasList), PRIVATE)
  .addDataMember(type_565, "maxHistSize", OffsetOf(::G4UImanager, maxHistSize), PRIVATE)
  .addDataMember(type_564, "pauseAtBeginOfEvent", OffsetOf(::G4UImanager, pauseAtBeginOfEvent), PRIVATE)
  .addDataMember(type_564, "pauseAtEndOfEvent", OffsetOf(::G4UImanager, pauseAtEndOfEvent), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_10649), "GetUIpointer", method_2951, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UImanager", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_466, type_7707), "GetCurrentValues", method_2958, 0, "aCommand", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10654), "AddNewCommand", method_2959, 0, "newCommand", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10654), "RemoveCommand", method_2960, 0, "aCommand", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "ExecuteMacroFile", method_2961, 0, "fileName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707, type_7707, type_567, type_567, type_567), "Loop", method_2962, 0, "macroFile;variableName;initialValue;finalValue;stepSize=1.0e+0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707, type_7707, type_7707), "Foreach", method_2963, 0, "macroFile;variableName;candidates", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_7707), "ApplyCommand", method_2964, 0, "aCommand", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_466), "ApplyCommand", method_2965, 0, "aCommand", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "StoreHistory", method_2966, 0, "fileName=\"G4history.macro\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564, type_7707), "StoreHistory", method_2967, 0, "historySwitch;fileName=\"G4history.macro\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "ListCommands", method_2968, 0, "direc", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "SetAlias", method_2969, 0, "aliasLine", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "RemoveAlias", method_2970, 0, "aliasName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ListAlias", method_2971, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_7707), "SolveAlias", method_2972, 0, "aCmd", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "CreateHTML", method_2973, 0, "dir=\"/\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "LoopS", method_2974, 0, "valueList", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_7707), "ForeachS", method_2975, 0, "valueList", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_31), "Notify", method_2976, 0, "requestedState", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_7707, type_565, type_564), "GetCurrentStringValue", method_2980, 0, "aCommand;parameterNumber=1;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_7707, type_565, type_564), "GetCurrentIntValue", method_2981, 0, "aCommand;parameterNumber=1;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_7707, type_565, type_564), "GetCurrentDoubleValue", method_2982, 0, "aCommand;parameterNumber=1;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_7707, type_7707, type_564), "GetCurrentStringValue", method_2983, 0, "aCommand;aParameterName;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_7707, type_7707, type_564), "GetCurrentIntValue", method_2984, 0, "aCommand;aParameterName;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_7707, type_7707, type_564), "GetCurrentDoubleValue", method_2985, 0, "aCommand;aParameterName;reGet=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetPauseAtBeginOfEvent", method_2986, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "GetPauseAtBeginOfEvent", method_2987, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetPauseAtEndOfEvent", method_2988, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "GetPauseAtEndOfEvent", method_2989, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10650), "GetTree", method_2990, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10651), "GetSession", method_2991, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10651c), "SetSession", method_2992, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10651c), "SetCoutDestination", method_2993, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_2994, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetVerboseLevel", method_2995, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumberOfHistory", method_2996, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_565), "GetPreviousCommand", method_2997, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetMaxHistSize", method_2998, 0, "mx", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetMaxHistSize", method_2999, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x0);
}

//------Stub functions for class G4UImanager -------------------------------
void* __G4UImanager_dict::method_2951( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4UImanager*)o)->GetUIpointer();
}

void* __G4UImanager_dict::method_2958( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((::G4UImanager*)o)->GetCurrentValues((const char*)arg[0]));
}

void* __G4UImanager_dict::method_2959( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->AddNewCommand((::G4UIcommand*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2960( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->RemoveCommand((::G4UIcommand*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2961( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->ExecuteMacroFile((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2962( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 4 ) {
    ((::G4UImanager*)o)->Loop((const char*)arg[0],
                              (const char*)arg[1],
                              *(double*)arg[2],
                              *(double*)arg[3]);
    return 0;
  }
  else if ( arg.size() == 5 ) { 
    ((::G4UImanager*)o)->Loop((const char*)arg[0],
                              (const char*)arg[1],
                              *(double*)arg[2],
                              *(double*)arg[3],
                              *(double*)arg[4]);
    return 0;
  }
  return 0;
}

void* __G4UImanager_dict::method_2963( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->Foreach((const char*)arg[0],
                               (const char*)arg[1],
                               (const char*)arg[2]);
  return 0;
}

void* __G4UImanager_dict::method_2964( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4UImanager*)o)->ApplyCommand((const char*)arg[0]);
  return &ret;
}

void* __G4UImanager_dict::method_2965( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4UImanager*)o)->ApplyCommand(*(::G4String*)arg[0]);
  return &ret;
}

void* __G4UImanager_dict::method_2966( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4UImanager*)o)->StoreHistory();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4UImanager*)o)->StoreHistory((const char*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4UImanager_dict::method_2967( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4UImanager*)o)->StoreHistory(*(bool*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4UImanager*)o)->StoreHistory(*(bool*)arg[0],
                                      (const char*)arg[1]);
    return 0;
  }
  return 0;
}

void* __G4UImanager_dict::method_2968( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->ListCommands((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2969( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetAlias((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2970( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->RemoveAlias((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2971( void* o, const std::vector<void*>&, void*)
{
  ((::G4UImanager*)o)->ListAlias();
  return 0;
}

void* __G4UImanager_dict::method_2972( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((::G4UImanager*)o)->SolveAlias((const char*)arg[0]));
}

void* __G4UImanager_dict::method_2973( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4UImanager*)o)->CreateHTML();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4UImanager*)o)->CreateHTML((const char*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4UImanager_dict::method_2974( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->LoopS((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2975( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->ForeachS((const char*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2976( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((::G4UImanager*)o)->Notify(*(::G4ApplicationState*)arg[0]);
  return &ret;
}

void* __G4UImanager_dict::method_2980( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    return new G4String(((::G4UImanager*)o)->GetCurrentStringValue((const char*)arg[0]));
  }
  else if ( arg.size() == 2 ) { 
    return new G4String(((::G4UImanager*)o)->GetCurrentStringValue((const char*)arg[0],
                                                                   *(int*)arg[1]));
  }
  else if ( arg.size() == 3 ) { 
    return new G4String(((::G4UImanager*)o)->GetCurrentStringValue((const char*)arg[0],
                                                                   *(int*)arg[1],
                                                                   *(bool*)arg[2]));
  }
  return 0;
}

void* __G4UImanager_dict::method_2981( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  if ( arg.size() == 1 ) {
    ret = ((::G4UImanager*)o)->GetCurrentIntValue((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentIntValue((const char*)arg[0],
                                                  *(int*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentIntValue((const char*)arg[0],
                                                  *(int*)arg[1],
                                                  *(bool*)arg[2]);
    return &ret;
  }
  return 0;
}

void* __G4UImanager_dict::method_2982( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 1 ) {
    ret = ((::G4UImanager*)o)->GetCurrentDoubleValue((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentDoubleValue((const char*)arg[0],
                                                     *(int*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentDoubleValue((const char*)arg[0],
                                                     *(int*)arg[1],
                                                     *(bool*)arg[2]);
    return &ret;
  }
  return 0;
}

void* __G4UImanager_dict::method_2983( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 2 ) {
    return new G4String(((::G4UImanager*)o)->GetCurrentStringValue((const char*)arg[0],
                                                                   (const char*)arg[1]));
  }
  else if ( arg.size() == 3 ) { 
    return new G4String(((::G4UImanager*)o)->GetCurrentStringValue((const char*)arg[0],
                                                                   (const char*)arg[1],
                                                                   *(bool*)arg[2]));
  }
  return 0;
}

void* __G4UImanager_dict::method_2984( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  if ( arg.size() == 2 ) {
    ret = ((::G4UImanager*)o)->GetCurrentIntValue((const char*)arg[0],
                                                  (const char*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentIntValue((const char*)arg[0],
                                                  (const char*)arg[1],
                                                  *(bool*)arg[2]);
    return &ret;
  }
  return 0;
}

void* __G4UImanager_dict::method_2985( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((::G4UImanager*)o)->GetCurrentDoubleValue((const char*)arg[0],
                                                     (const char*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((::G4UImanager*)o)->GetCurrentDoubleValue((const char*)arg[0],
                                                     (const char*)arg[1],
                                                     *(bool*)arg[2]);
    return &ret;
  }
  return 0;
}

void* __G4UImanager_dict::method_2986( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetPauseAtBeginOfEvent(*(bool*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2987( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4UImanager*)o)->GetPauseAtBeginOfEvent();
  return &ret;
}

void* __G4UImanager_dict::method_2988( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetPauseAtEndOfEvent(*(bool*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2989( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4UImanager*)o)->GetPauseAtEndOfEvent();
  return &ret;
}

void* __G4UImanager_dict::method_2990( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4UImanager*)o)->GetTree();
}

void* __G4UImanager_dict::method_2991( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4UImanager*)o)->GetSession();
}

void* __G4UImanager_dict::method_2992( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetSession(*(::G4UIsession* const*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2993( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetCoutDestination(*(::G4UIsession* const*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2994( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2995( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4UImanager*)o)->GetVerboseLevel();
  return &ret;
}

void* __G4UImanager_dict::method_2996( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4UImanager*)o)->GetNumberOfHistory();
  return &ret;
}

void* __G4UImanager_dict::method_2997( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((const ::G4UImanager*)o)->GetPreviousCommand(*(int*)arg[0]));
}

void* __G4UImanager_dict::method_2998( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UImanager*)o)->SetMaxHistSize(*(int*)arg[0]);
  return 0;
}

void* __G4UImanager_dict::method_2999( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4UImanager*)o)->GetMaxHistSize();
  return &ret;
}

void* __G4UImanager_dict::method_x0( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VStateDependent >(), seal::reflex::baseOffset< ::G4UImanager,::G4VStateDependent >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4TransportationManager -------------------------------
class __G4TransportationManager_dict { 
  public:
  __G4TransportationManager_dict();
  static void * constructor_3012(void*, const std::vector<void*>&, void*);
  static void * method_3013(void*, const std::vector<void*>&, void*);
  static void * method_3014(void*, const std::vector<void*>&, void*);
  static void * method_3015(void*, const std::vector<void*>&, void*);
  static void * method_3016(void*, const std::vector<void*>&, void*);
  static void * method_3017(void*, const std::vector<void*>&, void*);
  static void * method_3018(void*, const std::vector<void*>&, void*);
  static void * method_3019(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4TransportationManager*)o)->~G4TransportationManager(); return 0;}
};


__G4TransportationManager_dict::__G4TransportationManager_dict() {
  ClassBuilder< ::G4TransportationManager >("G4TransportationManager", PUBLIC)
  .addDataMember(type_10660, "fNavigatorForTracking", OffsetOf(::G4TransportationManager, fNavigatorForTracking), PRIVATE)
  .addDataMember(type_10661, "fPropagatorInField", OffsetOf(::G4TransportationManager, fPropagatorInField), PRIVATE)
  .addDataMember(type_10662, "fFieldManager", OffsetOf(::G4TransportationManager, fFieldManager), PRIVATE)
  .addDataMember(type_10663, "fGeomMessenger", OffsetOf(::G4TransportationManager, fGeomMessenger), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10665), "G4TransportationManager", constructor_3012, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_10664), "GetTransportationManager", method_3013, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_10660), "GetNavigatorForTracking", method_3014, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10661), "GetPropagatorInField", method_3015, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10662), "GetFieldManager", method_3016, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10660), "SetNavigatorForTracking", method_3017, 0, "newNavigator", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10661), "SetPropagatorInField", method_3018, 0, "newFieldPropagator", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10662), "SetFieldManager", method_3019, 0, "newFieldManager", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4TransportationManager", destructor, 0, 0, PUBLIC | DESTRUCTOR );
}

//------Stub functions for class G4TransportationManager -------------------------------
void* __G4TransportationManager_dict::constructor_3012( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4TransportationManager(*(const ::G4TransportationManager*)arg[0]);
}

void* __G4TransportationManager_dict::method_3013( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4TransportationManager*)o)->GetTransportationManager();
}

void* __G4TransportationManager_dict::method_3014( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4TransportationManager*)o)->GetNavigatorForTracking();
}

void* __G4TransportationManager_dict::method_3015( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4TransportationManager*)o)->GetPropagatorInField();
}

void* __G4TransportationManager_dict::method_3016( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4TransportationManager*)o)->GetFieldManager();
}

void* __G4TransportationManager_dict::method_3017( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4TransportationManager*)o)->SetNavigatorForTracking((::G4Navigator*)arg[0]);
  return 0;
}

void* __G4TransportationManager_dict::method_3018( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4TransportationManager*)o)->SetPropagatorInField((::G4PropagatorInField*)arg[0]);
  return 0;
}

void* __G4TransportationManager_dict::method_3019( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4TransportationManager*)o)->SetFieldManager((::G4FieldManager*)arg[0]);
  return 0;
}

//------Dictionary for class G4RunManager -------------------------------
class __G4RunManager_dict { 
  public:
  __G4RunManager_dict();
  static void * constructor_3126(void*, const std::vector<void*>&, void*);
  static void * method_3127(void*, const std::vector<void*>&, void*);
  static void * constructor_3128(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4RunManager*)o)->~G4RunManager(); return 0;}
  static void * method_3130(void*, const std::vector<void*>&, void*);
  static void * method_3131(void*, const std::vector<void*>&, void*);
  static void * method_3132(void*, const std::vector<void*>&, void*);
  static void * method_3133(void*, const std::vector<void*>&, void*);
  static void * method_3134(void*, const std::vector<void*>&, void*);
  static void * method_3143(void*, const std::vector<void*>&, void*);
  static void * method_3144(void*, const std::vector<void*>&, void*);
  static void * method_3146(void*, const std::vector<void*>&, void*);
  static void * method_3147(void*, const std::vector<void*>&, void*);
  static void * method_3148(void*, const std::vector<void*>&, void*);
  static void * method_3149(void*, const std::vector<void*>&, void*);
  static void * method_3150(void*, const std::vector<void*>&, void*);
  static void * method_3151(void*, const std::vector<void*>&, void*);
  static void * method_3152(void*, const std::vector<void*>&, void*);
  static void * method_3153(void*, const std::vector<void*>&, void*);
  static void * method_3154(void*, const std::vector<void*>&, void*);
  static void * method_3155(void*, const std::vector<void*>&, void*);
  static void * method_3156(void*, const std::vector<void*>&, void*);
  static void * method_3157(void*, const std::vector<void*>&, void*);
  static void * method_3158(void*, const std::vector<void*>&, void*);
  static void * method_3159(void*, const std::vector<void*>&, void*);
  static void * method_3160(void*, const std::vector<void*>&, void*);
  static void * method_3161(void*, const std::vector<void*>&, void*);
  static void * method_3162(void*, const std::vector<void*>&, void*);
  static void * method_3163(void*, const std::vector<void*>&, void*);
  static void * method_3164(void*, const std::vector<void*>&, void*);
  static void * method_3165(void*, const std::vector<void*>&, void*);
  static void * method_3166(void*, const std::vector<void*>&, void*);
  static void * method_3167(void*, const std::vector<void*>&, void*);
  static void * method_3168(void*, const std::vector<void*>&, void*);
  static void * method_3169(void*, const std::vector<void*>&, void*);
  static void * method_3170(void*, const std::vector<void*>&, void*);
  static void * method_3171(void*, const std::vector<void*>&, void*);
  static void * method_3172(void*, const std::vector<void*>&, void*);
  static void * method_3173(void*, const std::vector<void*>&, void*);
  static void * method_3174(void*, const std::vector<void*>&, void*);
  static void * method_3175(void*, const std::vector<void*>&, void*);
  static void * method_3176(void*, const std::vector<void*>&, void*);
  static void * method_3177(void*, const std::vector<void*>&, void*);
  static void * method_3178(void*, const std::vector<void*>&, void*);
  static void * method_3179(void*, const std::vector<void*>&, void*);
  static void * method_3180(void*, const std::vector<void*>&, void*);
  static void * method_3181(void*, const std::vector<void*>&, void*);
  static void * method_3182(void*, const std::vector<void*>&, void*);
  static void * method_3183(void*, const std::vector<void*>&, void*);
};


__G4RunManager_dict::__G4RunManager_dict() {
  ClassBuilder< ::G4RunManager >("G4RunManager", PUBLIC | VIRTUAL)
  .addDataMember(type_10758, "kernel", OffsetOf(::G4RunManager, kernel), PROTECTED)
  .addDataMember(type_10759, "eventManager", OffsetOf(::G4RunManager, eventManager), PROTECTED)
  .addDataMember(type_10760, "userDetector", OffsetOf(::G4RunManager, userDetector), PROTECTED)
  .addDataMember(type_10761, "physicsList", OffsetOf(::G4RunManager, physicsList), PROTECTED)
  .addDataMember(type_10762, "userRunAction", OffsetOf(::G4RunManager, userRunAction), PROTECTED)
  .addDataMember(type_10763, "userPrimaryGeneratorAction", OffsetOf(::G4RunManager, userPrimaryGeneratorAction), PROTECTED)
  .addDataMember(type_10764, "userEventAction", OffsetOf(::G4RunManager, userEventAction), PROTECTED)
  .addDataMember(type_10765, "userStackingAction", OffsetOf(::G4RunManager, userStackingAction), PROTECTED)
  .addDataMember(type_10766, "userTrackingAction", OffsetOf(::G4RunManager, userTrackingAction), PROTECTED)
  .addDataMember(type_10767, "userSteppingAction", OffsetOf(::G4RunManager, userSteppingAction), PROTECTED)
  .addDataMember(type_10768, "runMessenger", OffsetOf(::G4RunManager, runMessenger), PRIVATE)
  .addDataMember(type_564, "geometryInitialized", OffsetOf(::G4RunManager, geometryInitialized), PROTECTED)
  .addDataMember(type_564, "physicsInitialized", OffsetOf(::G4RunManager, physicsInitialized), PROTECTED)
  .addDataMember(type_564, "runAborted", OffsetOf(::G4RunManager, runAborted), PROTECTED)
  .addDataMember(type_564, "initializedAtLeastOnce", OffsetOf(::G4RunManager, initializedAtLeastOnce), PROTECTED)
  .addDataMember(type_564, "geometryToBeOptimized", OffsetOf(::G4RunManager, geometryToBeOptimized), PROTECTED)
  .addDataMember(type_565, "runIDCounter", OffsetOf(::G4RunManager, runIDCounter), PROTECTED)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4RunManager, verboseLevel), PROTECTED)
  .addDataMember(type_10769, "timer", OffsetOf(::G4RunManager, timer), PROTECTED)
  .addDataMember(type_10770, "DCtable", OffsetOf(::G4RunManager, DCtable), PROTECTED)
  .addDataMember(type_10771, "currentRun", OffsetOf(::G4RunManager, currentRun), PROTECTED)
  .addDataMember(type_10772, "currentEvent", OffsetOf(::G4RunManager, currentEvent), PROTECTED)
  .addDataMember(type_10773, "previousEvents", OffsetOf(::G4RunManager, previousEvents), PROTECTED)
  .addDataMember(type_565, "n_perviousEventsToBeStored", OffsetOf(::G4RunManager, n_perviousEventsToBeStored), PROTECTED)
  .addDataMember(type_565, "numberOfEventToBeProcessed", OffsetOf(::G4RunManager, numberOfEventToBeProcessed), PROTECTED)
  .addDataMember(type_564, "storeRandomNumberStatus", OffsetOf(::G4RunManager, storeRandomNumberStatus), PROTECTED)
  .addDataMember(type_466, "randomNumberStatusDir", OffsetOf(::G4RunManager, randomNumberStatusDir), PROTECTED)
  .addDataMember(type_10743, "currentWorld", OffsetOf(::G4RunManager, currentWorld), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10774), "G4RunManager", constructor_3126, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_10757), "GetRunManager", method_3127, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4RunManager", constructor_3128, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4RunManager", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565, type_7707, type_565), "BeamOn", method_3130, 0, "n_event;macroFile=0;n_select=-1", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Initialize", method_3131, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10743, type_564), "DefineWorldVolume", method_3132, 0, "worldVol;topologyIsChanged=true", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "AbortRun", method_3133, 0, "softAbort=false", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "AbortEvent", method_3134, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_466), "DumpRegion", method_3143, 0, "rname", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10646), "DumpRegion", method_3144, 0, "region=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "rndmSaveThisRun", method_3146, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "rndmSaveThisEvent", method_3147, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_466), "RestoreRandomNumberStatus", method_3148, 0, "fileN", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10760), "SetUserInitialization", method_3149, 0, "userInit", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10761), "SetUserInitialization", method_3150, 0, "userInit", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10762), "SetUserAction", method_3151, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10763), "SetUserAction", method_3152, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10764), "SetUserAction", method_3153, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10765), "SetUserAction", method_3154, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10766), "SetUserAction", method_3155, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10767), "SetUserAction", method_3156, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10775), "GetUserDetectorConstruction", method_3157, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10776), "GetUserPhysicsList", method_3158, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10777), "GetUserRunAction", method_3159, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10778), "GetUserPrimaryGeneratorAction", method_3160, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10779), "GetUserEventAction", method_3161, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10780), "GetUserStackingAction", method_3162, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10781), "GetUserTrackingAction", method_3163, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10782), "GetUserSteppingAction", method_3164, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetNumberOfAdditionalWaitingStacks", method_3165, 0, "iAdd", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetVersionString", method_3166, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetRandomNumberStore", method_3167, 0, "flag", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "GetRandomNumberStore", method_3168, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_466), "SetRandomNumberStoreDir", method_3169, 0, "dir", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetRandomNumberStoreDir", method_3170, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "GeometryHasBeenModified", method_3171, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PhysicsHasBeenModified", method_3172, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "CutOffHasBeenModified", method_3173, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_3174, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetVerboseLevel", method_3175, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetGeometryToBeOptimized", method_3176, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "GetGeometryToBeOptimized", method_3177, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetNumberOfEventsToBeStored", method_3178, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10783), "GetCurrentRun", method_3179, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10784), "GetCurrentEvent", method_3180, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10784, type_565), "GetPreviousEvent", method_3181, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetRunIDCounter", method_3182, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10770), "SetDCtable", method_3183, 0, "DCtbl", PUBLIC);
}

//------Stub functions for class G4RunManager -------------------------------
void* __G4RunManager_dict::constructor_3126( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4RunManager(*(const ::G4RunManager*)arg[0]);
}

void* __G4RunManager_dict::method_3127( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4RunManager*)o)->GetRunManager();
}

void* __G4RunManager_dict::constructor_3128( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4RunManager();
}

void* __G4RunManager_dict::method_3130( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4RunManager*)o)->BeamOn(*(int*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4RunManager*)o)->BeamOn(*(int*)arg[0],
                                 (const char*)arg[1]);
    return 0;
  }
  else if ( arg.size() == 3 ) { 
    ((::G4RunManager*)o)->BeamOn(*(int*)arg[0],
                                 (const char*)arg[1],
                                 *(int*)arg[2]);
    return 0;
  }
  return 0;
}

void* __G4RunManager_dict::method_3131( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->Initialize();
  return 0;
}

void* __G4RunManager_dict::method_3132( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4RunManager*)o)->DefineWorldVolume((::G4VPhysicalVolume*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4RunManager*)o)->DefineWorldVolume((::G4VPhysicalVolume*)arg[0],
                                            *(bool*)arg[1]);
    return 0;
  }
  return 0;
}

void* __G4RunManager_dict::method_3133( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4RunManager*)o)->AbortRun();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4RunManager*)o)->AbortRun(*(bool*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4RunManager_dict::method_3134( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->AbortEvent();
  return 0;
}

void* __G4RunManager_dict::method_3143( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4RunManager*)o)->DumpRegion(*(::G4String*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3144( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((const ::G4RunManager*)o)->DumpRegion();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((const ::G4RunManager*)o)->DumpRegion((::G4Region*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4RunManager_dict::method_3146( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->rndmSaveThisRun();
  return 0;
}

void* __G4RunManager_dict::method_3147( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->rndmSaveThisEvent();
  return 0;
}

void* __G4RunManager_dict::method_3148( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->RestoreRandomNumberStatus(*(::G4String*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3149( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserInitialization((::G4VUserDetectorConstruction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3150( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserInitialization((::G4VUserPhysicsList*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3151( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4UserRunAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3152( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4VUserPrimaryGeneratorAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3153( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4UserEventAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3154( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4UserStackingAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3155( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4UserTrackingAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3156( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetUserAction((::G4UserSteppingAction*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3157( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserDetectorConstruction();
}

void* __G4RunManager_dict::method_3158( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserPhysicsList();
}

void* __G4RunManager_dict::method_3159( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserRunAction();
}

void* __G4RunManager_dict::method_3160( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserPrimaryGeneratorAction();
}

void* __G4RunManager_dict::method_3161( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserEventAction();
}

void* __G4RunManager_dict::method_3162( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserStackingAction();
}

void* __G4RunManager_dict::method_3163( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserTrackingAction();
}

void* __G4RunManager_dict::method_3164( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetUserSteppingAction();
}

void* __G4RunManager_dict::method_3165( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetNumberOfAdditionalWaitingStacks(*(int*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3166( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4RunManager*)o)->GetVersionString());
}

void* __G4RunManager_dict::method_3167( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetRandomNumberStore(*(bool*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3168( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4RunManager*)o)->GetRandomNumberStore();
  return &ret;
}

void* __G4RunManager_dict::method_3169( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetRandomNumberStoreDir(*(::G4String*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3170( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4RunManager*)o)->GetRandomNumberStoreDir());
}

void* __G4RunManager_dict::method_3171( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->GeometryHasBeenModified();
  return 0;
}

void* __G4RunManager_dict::method_3172( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->PhysicsHasBeenModified();
  return 0;
}

void* __G4RunManager_dict::method_3173( void* o, const std::vector<void*>&, void*)
{
  ((::G4RunManager*)o)->CutOffHasBeenModified();
  return 0;
}

void* __G4RunManager_dict::method_3174( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3175( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4RunManager*)o)->GetVerboseLevel();
  return &ret;
}

void* __G4RunManager_dict::method_3176( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetGeometryToBeOptimized(*(bool*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3177( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((::G4RunManager*)o)->GetGeometryToBeOptimized();
  return &ret;
}

void* __G4RunManager_dict::method_3178( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetNumberOfEventsToBeStored(*(int*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3179( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetCurrentRun();
}

void* __G4RunManager_dict::method_3180( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetCurrentEvent();
}

void* __G4RunManager_dict::method_3181( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4RunManager*)o)->GetPreviousEvent(*(int*)arg[0]);
}

void* __G4RunManager_dict::method_3182( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetRunIDCounter(*(int*)arg[0]);
  return 0;
}

void* __G4RunManager_dict::method_3183( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4RunManager*)o)->SetDCtable((::G4DCtable*)arg[0]);
  return 0;
}

//------Dictionary for class G4HCofThisEvent -------------------------------
class __G4HCofThisEvent_dict { 
  public:
  __G4HCofThisEvent_dict();
  static void * operator_3214(void*, const std::vector<void*>&, void*);
  static void * operator_3215(void*, const std::vector<void*>&, void*);
  static void * method_3216(void*, const std::vector<void*>&, void*);
  static void * method_3217(void*, const std::vector<void*>&, void*);
  static void * method_3218(void*, const std::vector<void*>&, void*);
  static void * method_3219(void*, const std::vector<void*>&, void*);
};


__G4HCofThisEvent_dict::__G4HCofThisEvent_dict() {
  ClassBuilder< ::G4HCofThisEvent >("G4HCofThisEvent", PUBLIC)
  .addDataMember(type_10863, "HC", OffsetOf(::G4HCofThisEvent, HC), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_938, type_1555), "operator new", operator_3214, 0, "", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_938), "operator delete", operator_3215, 0, "anHCoTH", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565, type_10864), "AddHitsCollection", method_3216, 0, "HCID;aHC", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10864, type_565), "GetHC", method_3217, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumberOfCollections", method_3218, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCapacity", method_3219, 0, 0, PUBLIC);
}

//------Stub functions for class G4HCofThisEvent -------------------------------
void* __G4HCofThisEvent_dict::operator_3214( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4HCofThisEvent*)o)->operator new(*(unsigned int*)arg[0]);
}

void* __G4HCofThisEvent_dict::operator_3215( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4HCofThisEvent*)o)->operator delete((void*)arg[0]);
  return 0;
}

void* __G4HCofThisEvent_dict::method_3216( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4HCofThisEvent*)o)->AddHitsCollection(*(int*)arg[0],
                                             (::G4VHitsCollection*)arg[1]);
  return 0;
}

void* __G4HCofThisEvent_dict::method_3217( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4HCofThisEvent*)o)->GetHC(*(int*)arg[0]);
}

void* __G4HCofThisEvent_dict::method_3218( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::G4HCofThisEvent*)o)->GetNumberOfCollections();
  return &ret;
}

void* __G4HCofThisEvent_dict::method_3219( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::G4HCofThisEvent*)o)->GetCapacity();
  return &ret;
}

//------Dictionary for class G4VHitsCollection -------------------------------
class __G4VHitsCollection_dict { 
  public:
  __G4VHitsCollection_dict();
  static void * constructor_3222(void*, const std::vector<void*>&, void*);
  static void * constructor_3223(void*, const std::vector<void*>&, void*);
  static void * constructor_3224(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VHitsCollection*)o)->~G4VHitsCollection(); return 0;}
  static void * operator_3226(void*, const std::vector<void*>&, void*);
  static void * method_3227(void*, const std::vector<void*>&, void*);
  static void * method_3228(void*, const std::vector<void*>&, void*);
  static void * method_3229(void*, const std::vector<void*>&, void*);
  static void * method_3230(void*, const std::vector<void*>&, void*);
  static void * method_3231(void*, const std::vector<void*>&, void*);
  static void * method_3232(void*, const std::vector<void*>&, void*);
};


__G4VHitsCollection_dict::__G4VHitsCollection_dict() {
  ClassBuilder< ::G4VHitsCollection >("G4VHitsCollection", PUBLIC | VIRTUAL)
  .addDataMember(type_466, "collectionName", OffsetOf(::G4VHitsCollection, collectionName), PROTECTED)
  .addDataMember(type_466, "SDname", OffsetOf(::G4VHitsCollection, SDname), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10865), "G4VHitsCollection", constructor_3222, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4VHitsCollection", constructor_3223, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_466, type_466), "G4VHitsCollection", constructor_3224, 0, "detName;colNam", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VHitsCollection", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_565, type_10865), "operator==", operator_3226, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "DrawAllHits", method_3227, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PrintAllHits", method_3228, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_3229, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetSDname", method_3230, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10866, type_1555), "GetHit", method_3231, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetSize", method_3232, 0, 0, PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VHitsCollection -------------------------------
void* __G4VHitsCollection_dict::constructor_3222( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4VHitsCollection(*(const ::G4VHitsCollection*)arg[0]);
}

void* __G4VHitsCollection_dict::constructor_3223( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4VHitsCollection();
}

void* __G4VHitsCollection_dict::constructor_3224( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4VHitsCollection(*(::G4String*)arg[0],
                                        *(::G4String*)arg[1]);
}

void* __G4VHitsCollection_dict::operator_3226( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4VHitsCollection*)o)->operator==(*(const ::G4VHitsCollection*)arg[0]);
  return &ret;
}

void* __G4VHitsCollection_dict::method_3227( void* o, const std::vector<void*>&, void*)
{
  ((::G4VHitsCollection*)o)->DrawAllHits();
  return 0;
}

void* __G4VHitsCollection_dict::method_3228( void* o, const std::vector<void*>&, void*)
{
  ((::G4VHitsCollection*)o)->PrintAllHits();
  return 0;
}

void* __G4VHitsCollection_dict::method_3229( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((::G4VHitsCollection*)o)->GetName());
}

void* __G4VHitsCollection_dict::method_3230( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((::G4VHitsCollection*)o)->GetSDname());
}

void* __G4VHitsCollection_dict::method_3231( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4VHitsCollection*)o)->GetHit(*(unsigned int*)arg[0]);
}

void* __G4VHitsCollection_dict::method_3232( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4VHitsCollection*)o)->GetSize();
  return &ret;
}

//------Dictionary for class G4VHit -------------------------------
class __G4VHit_dict { 
  public:
  __G4VHit_dict();
  static void * constructor_3233(void*, const std::vector<void*>&, void*);
  static void * constructor_3234(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VHit*)o)->~G4VHit(); return 0;}
  static void * operator_3236(void*, const std::vector<void*>&, void*);
  static void * method_3237(void*, const std::vector<void*>&, void*);
  static void * method_3238(void*, const std::vector<void*>&, void*);
  static void * method_3239(void*, const std::vector<void*>&, void*);
  static void * method_3240(void*, const std::vector<void*>&, void*);
};


__G4VHit_dict::__G4VHit_dict() {
  ClassBuilder< ::G4VHit >("G4VHit", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10867), "G4VHit", constructor_3233, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4VHit", constructor_3234, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VHit", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_565, type_10867), "operator==", operator_3236, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Draw", method_3237, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Print", method_3238, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_10868), "GetAttDefs", method_3239, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_10869), "CreateAttValues", method_3240, 0, 0, PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VHit -------------------------------
void* __G4VHit_dict::constructor_3233( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4VHit(*(const ::G4VHit*)arg[0]);
}

void* __G4VHit_dict::constructor_3234( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4VHit();
}

void* __G4VHit_dict::operator_3236( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4VHit*)o)->operator==(*(const ::G4VHit*)arg[0]);
  return &ret;
}

void* __G4VHit_dict::method_3237( void* o, const std::vector<void*>&, void*)
{
  ((::G4VHit*)o)->Draw();
  return 0;
}

void* __G4VHit_dict::method_3238( void* o, const std::vector<void*>&, void*)
{
  ((::G4VHit*)o)->Print();
  return 0;
}

void* __G4VHit_dict::method_3239( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VHit*)o)->GetAttDefs();
}

void* __G4VHit_dict::method_3240( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VHit*)o)->CreateAttValues();
}

//------Dictionary for class G4EventManager -------------------------------
class __G4EventManager_dict { 
  public:
  __G4EventManager_dict();
  static void * method_3295(void*, const std::vector<void*>&, void*);
  static void * constructor_3296(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4EventManager*)o)->~G4EventManager(); return 0;}
  static void * method_3300(void*, const std::vector<void*>&, void*);
  static void * method_3301(void*, const std::vector<void*>&, void*);
  static void * method_3302(void*, const std::vector<void*>&, void*);
  static void * method_3305(void*, const std::vector<void*>&, void*);
  static void * method_3306(void*, const std::vector<void*>&, void*);
  static void * method_3307(void*, const std::vector<void*>&, void*);
  static void * method_3308(void*, const std::vector<void*>&, void*);
  static void * method_3309(void*, const std::vector<void*>&, void*);
  static void * method_3310(void*, const std::vector<void*>&, void*);
  static void * method_3311(void*, const std::vector<void*>&, void*);
  static void * method_3312(void*, const std::vector<void*>&, void*);
  static void * method_3313(void*, const std::vector<void*>&, void*);
  static void * method_3314(void*, const std::vector<void*>&, void*);
  static void * method_3315(void*, const std::vector<void*>&, void*);
  static void * method_3316(void*, const std::vector<void*>&, void*);
  static void * method_3317(void*, const std::vector<void*>&, void*);
  static void * method_3318(void*, const std::vector<void*>&, void*);
  static void * method_3319(void*, const std::vector<void*>&, void*);
  static void * method_3320(void*, const std::vector<void*>&, void*);
  static void * method_3321(void*, const std::vector<void*>&, void*);
  static void * method_3322(void*, const std::vector<void*>&, void*);
  static void * method_3323(void*, const std::vector<void*>&, void*);
  static void * method_3324(void*, const std::vector<void*>&, void*);
};


__G4EventManager_dict::__G4EventManager_dict() {
  ClassBuilder< ::G4EventManager >("G4EventManager", PUBLIC)
  .addDataMember(type_10772, "currentEvent", OffsetOf(::G4EventManager, currentEvent), PRIVATE)
  .addDataMember(type_10898, "trackContainer", OffsetOf(::G4EventManager, trackContainer), PRIVATE)
  .addDataMember(type_10899, "trackManager", OffsetOf(::G4EventManager, trackManager), PRIVATE)
  .addDataMember(type_10901, "trajectoryContainer", OffsetOf(::G4EventManager, trajectoryContainer), PRIVATE)
  .addDataMember(type_565, "trackIDCounter", OffsetOf(::G4EventManager, trackIDCounter), PRIVATE)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4EventManager, verboseLevel), PRIVATE)
  .addDataMember(type_10902, "sdManager", OffsetOf(::G4EventManager, sdManager), PRIVATE)
  .addDataMember(type_10900, "transformer", OffsetOf(::G4EventManager, transformer), PRIVATE)
  .addDataMember(type_564, "tracking", OffsetOf(::G4EventManager, tracking), PRIVATE)
  .addDataMember(type_564, "abortRequested", OffsetOf(::G4EventManager, abortRequested), PRIVATE)
  .addDataMember(type_10903, "theMessenger", OffsetOf(::G4EventManager, theMessenger), PRIVATE)
  .addDataMember(type_10764, "userEventAction", OffsetOf(::G4EventManager, userEventAction), PRIVATE)
  .addDataMember(type_10765, "userStackingAction", OffsetOf(::G4EventManager, userStackingAction), PRIVATE)
  .addDataMember(type_10766, "userTrackingAction", OffsetOf(::G4EventManager, userTrackingAction), PRIVATE)
  .addDataMember(type_10767, "userSteppingAction", OffsetOf(::G4EventManager, userSteppingAction), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_10759), "GetEventManager", method_3295, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4EventManager", constructor_3296, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4EventManager", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10772), "ProcessOneEvent", method_3300, 0, "anEvent", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10906, type_10772), "ProcessOneEvent", method_3301, 0, "hepmcevt;anEvent=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10907, type_10772), "ProcessOneEvent", method_3302, 0, "trackVector;anEvent=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10784), "GetConstCurrentEvent", method_3305, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10772), "GetNonconstCurrentEvent", method_3306, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "AbortCurrentEvent", method_3307, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10764), "SetUserAction", method_3308, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10765), "SetUserAction", method_3309, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10766), "SetUserAction", method_3310, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10767), "SetUserAction", method_3311, 0, "userAction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10764), "GetUserEventAction", method_3312, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10765), "GetUserStackingAction", method_3313, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10766), "GetUserTrackingAction", method_3314, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10767), "GetUserSteppingAction", method_3315, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetNumberOfAdditionalWaitingStacks", method_3316, 0, "iAdd", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10898), "GetStackManager", method_3317, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10899), "GetTrackingManager", method_3318, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetVerboseLevel", method_3319, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_3320, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10908), "SetUserInformation", method_3321, 0, "anInfo", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10908), "GetUserInformation", method_3322, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10900), "GetPrimaryTransformer", method_3323, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10900), "SetPrimaryTransformer", method_3324, 0, "tf", PUBLIC);
}

//------Stub functions for class G4EventManager -------------------------------
void* __G4EventManager_dict::method_3295( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetEventManager();
}

void* __G4EventManager_dict::constructor_3296( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4EventManager();
}

void* __G4EventManager_dict::method_3300( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->ProcessOneEvent((::G4Event*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3301( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4EventManager*)o)->ProcessOneEvent((const ::HepMC::GenEvent*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4EventManager*)o)->ProcessOneEvent((const ::HepMC::GenEvent*)arg[0],
                                            (::G4Event*)arg[1]);
    return 0;
  }
  return 0;
}

void* __G4EventManager_dict::method_3302( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4EventManager*)o)->ProcessOneEvent((::std::vector<G4Track*>*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4EventManager*)o)->ProcessOneEvent((::std::vector<G4Track*>*)arg[0],
                                            (::G4Event*)arg[1]);
    return 0;
  }
  return 0;
}

void* __G4EventManager_dict::method_3305( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetConstCurrentEvent();
}

void* __G4EventManager_dict::method_3306( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetNonconstCurrentEvent();
}

void* __G4EventManager_dict::method_3307( void* o, const std::vector<void*>&, void*)
{
  ((::G4EventManager*)o)->AbortCurrentEvent();
  return 0;
}

void* __G4EventManager_dict::method_3308( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetUserAction((::G4UserEventAction*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3309( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetUserAction((::G4UserStackingAction*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3310( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetUserAction((::G4UserTrackingAction*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3311( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetUserAction((::G4UserSteppingAction*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3312( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetUserEventAction();
}

void* __G4EventManager_dict::method_3313( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetUserStackingAction();
}

void* __G4EventManager_dict::method_3314( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetUserTrackingAction();
}

void* __G4EventManager_dict::method_3315( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetUserSteppingAction();
}

void* __G4EventManager_dict::method_3316( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetNumberOfAdditionalWaitingStacks(*(int*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3317( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4EventManager*)o)->GetStackManager();
}

void* __G4EventManager_dict::method_3318( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4EventManager*)o)->GetTrackingManager();
}

void* __G4EventManager_dict::method_3319( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::G4EventManager*)o)->GetVerboseLevel();
  return &ret;
}

void* __G4EventManager_dict::method_3320( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3321( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetUserInformation((::G4VUserEventInformation*)arg[0]);
  return 0;
}

void* __G4EventManager_dict::method_3322( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4EventManager*)o)->GetUserInformation();
}

void* __G4EventManager_dict::method_3323( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4EventManager*)o)->GetPrimaryTransformer();
}

void* __G4EventManager_dict::method_3324( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EventManager*)o)->SetPrimaryTransformer((::G4PrimaryTransformer*)arg[0]);
  return 0;
}

//------Dictionary for class G4SDManager -------------------------------
class __G4SDManager_dict { 
  public:
  __G4SDManager_dict();
  static void * constructor_3358(void*, const std::vector<void*>&, void*);
  static void * method_3359(void*, const std::vector<void*>&, void*);
  static void * method_3360(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4SDManager*)o)->~G4SDManager(); return 0;}
  static void * method_3363(void*, const std::vector<void*>&, void*);
  static void * method_3364(void*, const std::vector<void*>&, void*);
  static void * method_3365(void*, const std::vector<void*>&, void*);
  static void * method_3366(void*, const std::vector<void*>&, void*);
  static void * method_3367(void*, const std::vector<void*>&, void*);
  static void * method_3368(void*, const std::vector<void*>&, void*);
  static void * method_3369(void*, const std::vector<void*>&, void*);
  static void * method_3370(void*, const std::vector<void*>&, void*);
  static void * method_3371(void*, const std::vector<void*>&, void*);
  static void * method_3372(void*, const std::vector<void*>&, void*);
  static void * method_3373(void*, const std::vector<void*>&, void*);
  static void * method_3374(void*, const std::vector<void*>&, void*);
};


__G4SDManager_dict::__G4SDManager_dict() {
  ClassBuilder< ::G4SDManager >("G4SDManager", PUBLIC)
  .addDataMember(type_10672, "treeTop", OffsetOf(::G4SDManager, treeTop), PRIVATE)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4SDManager, verboseLevel), PRIVATE)
  .addDataMember(type_11194, "HCtable", OffsetOf(::G4SDManager, HCtable), PRIVATE)
  .addDataMember(type_11195, "theMessenger", OffsetOf(::G4SDManager, theMessenger), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11196), "G4SDManager", constructor_3358, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_10902), "GetSDMpointer", method_3359, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_10902), "GetSDMpointerIfExist", method_3360, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4SDManager", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10667), "AddNewDetector", method_3363, 0, "aSD", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_466, type_564), "Activate", method_3364, 0, "dName;activeFlag", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_466), "GetCollectionID", method_3365, 0, "colName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_10864), "GetCollectionID", method_3366, 0, "aHC", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10667, type_466, type_564), "FindSensitiveDetector", method_3367, 0, "dName;warning=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10671), "PrepareNewEvent", method_3368, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10671), "TerminateCurrentEvent", method_3369, 0, "HCE", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_3370, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10672), "GetTreeTop", method_3371, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ListTree", method_3372, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCollectionCapacity", method_3373, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11194), "GetHCtable", method_3374, 0, 0, PUBLIC);
}

//------Stub functions for class G4SDManager -------------------------------
void* __G4SDManager_dict::constructor_3358( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4SDManager(*(const ::G4SDManager*)arg[0]);
}

void* __G4SDManager_dict::method_3359( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4SDManager*)o)->GetSDMpointer();
}

void* __G4SDManager_dict::method_3360( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4SDManager*)o)->GetSDMpointerIfExist();
}

void* __G4SDManager_dict::method_3363( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4SDManager*)o)->AddNewDetector((::G4VSensitiveDetector*)arg[0]);
  return 0;
}

void* __G4SDManager_dict::method_3364( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4SDManager*)o)->Activate(*(::G4String*)arg[0],
                                *(bool*)arg[1]);
  return 0;
}

void* __G4SDManager_dict::method_3365( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4SDManager*)o)->GetCollectionID(*(::G4String*)arg[0]);
  return &ret;
}

void* __G4SDManager_dict::method_3366( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4SDManager*)o)->GetCollectionID((::G4VHitsCollection*)arg[0]);
  return &ret;
}

void* __G4SDManager_dict::method_3367( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    return (void*)((::G4SDManager*)o)->FindSensitiveDetector(*(::G4String*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return (void*)((::G4SDManager*)o)->FindSensitiveDetector(*(::G4String*)arg[0],
                                                             *(bool*)arg[1]);
  }
  return 0;
}

void* __G4SDManager_dict::method_3368( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4SDManager*)o)->PrepareNewEvent();
}

void* __G4SDManager_dict::method_3369( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4SDManager*)o)->TerminateCurrentEvent((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __G4SDManager_dict::method_3370( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4SDManager*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4SDManager_dict::method_3371( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4SDManager*)o)->GetTreeTop();
}

void* __G4SDManager_dict::method_3372( void* o, const std::vector<void*>&, void*)
{
  ((const ::G4SDManager*)o)->ListTree();
  return 0;
}

void* __G4SDManager_dict::method_3373( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4SDManager*)o)->GetCollectionCapacity();
  return &ret;
}

void* __G4SDManager_dict::method_3374( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4SDManager*)o)->GetHCtable();
}

//------Dictionary for class G4Navigator -------------------------------
class __G4Navigator_dict { 
  public:
  __G4Navigator_dict();
  static void * constructor_3797(void*, const std::vector<void*>&, void*);
  static void * constructor_3798(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Navigator*)o)->~G4Navigator(); return 0;}
  static void * method_3800(void*, const std::vector<void*>&, void*);
  static void * method_3801(void*, const std::vector<void*>&, void*);
  static void * method_3802(void*, const std::vector<void*>&, void*);
  static void * method_3803(void*, const std::vector<void*>&, void*);
  static void * method_3804(void*, const std::vector<void*>&, void*);
  static void * method_3805(void*, const std::vector<void*>&, void*);
  static void * method_3806(void*, const std::vector<void*>&, void*);
  static void * method_3807(void*, const std::vector<void*>&, void*);
  static void * method_3808(void*, const std::vector<void*>&, void*);
  static void * method_3809(void*, const std::vector<void*>&, void*);
  static void * method_3810(void*, const std::vector<void*>&, void*);
  static void * method_3811(void*, const std::vector<void*>&, void*);
  static void * method_3812(void*, const std::vector<void*>&, void*);
  static void * method_3813(void*, const std::vector<void*>&, void*);
  static void * method_3814(void*, const std::vector<void*>&, void*);
  static void * method_3815(void*, const std::vector<void*>&, void*);
  static void * method_3816(void*, const std::vector<void*>&, void*);
  static void * method_3817(void*, const std::vector<void*>&, void*);
  static void * method_3818(void*, const std::vector<void*>&, void*);
  static void * method_3819(void*, const std::vector<void*>&, void*);
  static void * method_3820(void*, const std::vector<void*>&, void*);
  static void * method_3821(void*, const std::vector<void*>&, void*);
  static void * method_3822(void*, const std::vector<void*>&, void*);
  static void * method_3823(void*, const std::vector<void*>&, void*);
};


__G4Navigator_dict::__G4Navigator_dict() {
  ClassBuilder< ::G4Navigator >("G4Navigator", PUBLIC | VIRTUAL)
  .addDataMember(type_528, "fLastLocatedPointLocal", OffsetOf(::G4Navigator, fLastLocatedPointLocal), PRIVATE)
  .addDataMember(type_564, "fWasLimitedByGeometry", OffsetOf(::G4Navigator, fWasLimitedByGeometry), PRIVATE)
  .addDataMember(type_564, "fEntering", OffsetOf(::G4Navigator, fEntering), PRIVATE)
  .addDataMember(type_564, "fExiting", OffsetOf(::G4Navigator, fExiting), PRIVATE)
  .addDataMember(type_10743, "fBlockedPhysicalVolume", OffsetOf(::G4Navigator, fBlockedPhysicalVolume), PRIVATE)
  .addDataMember(type_565, "fBlockedReplicaNo", OffsetOf(::G4Navigator, fBlockedReplicaNo), PRIVATE)
  .addDataMember(type_10743, "fCandidatePhysicalVolume", OffsetOf(::G4Navigator, fCandidatePhysicalVolume), PRIVATE)
  .addDataMember(type_565, "fCandidateReplicaNo", OffsetOf(::G4Navigator, fCandidateReplicaNo), PRIVATE)
  .addDataMember(type_564, "fEnteredDaughter", OffsetOf(::G4Navigator, fEnteredDaughter), PRIVATE)
  .addDataMember(type_564, "fExitedMother", OffsetOf(::G4Navigator, fExitedMother), PRIVATE)
  .addDataMember(type_564, "fValidExitNormal", OffsetOf(::G4Navigator, fValidExitNormal), PRIVATE)
  .addDataMember(type_528, "fExitNormal", OffsetOf(::G4Navigator, fExitNormal), PRIVATE)
  .addDataMember(type_528, "fGrandMotherExitNormal", OffsetOf(::G4Navigator, fGrandMotherExitNormal), PRIVATE)
  .addDataMember(type_285, "fHistory", OffsetOf(::G4Navigator, fHistory), PRIVATE)
  .addDataMember(type_564, "fLastStepWasZero", OffsetOf(::G4Navigator, fLastStepWasZero), PRIVATE)
  .addDataMember(type_564, "fLocatedOnEdge", OffsetOf(::G4Navigator, fLocatedOnEdge), PRIVATE)
  .addDataMember(type_565, "fNumberZeroSteps", OffsetOf(::G4Navigator, fNumberZeroSteps), PRIVATE)
  .addDataMember(type_565, "fActionThreshold_NoZeroSteps", OffsetOf(::G4Navigator, fActionThreshold_NoZeroSteps), PRIVATE)
  .addDataMember(type_565, "fAbandonThreshold_NoZeroSteps", OffsetOf(::G4Navigator, fAbandonThreshold_NoZeroSteps), PRIVATE)
  .addDataMember(type_528, "fPreviousSftOrigin", OffsetOf(::G4Navigator, fPreviousSftOrigin), PRIVATE)
  .addDataMember(type_567, "fPreviousSafety", OffsetOf(::G4Navigator, fPreviousSafety), PRIVATE)
  .addDataMember(type_10743, "fTopPhysical", OffsetOf(::G4Navigator, fTopPhysical), PRIVATE)
  .addDataMember(type_564, "fCheck", OffsetOf(::G4Navigator, fCheck), PRIVATE)
  .addDataMember(type_564, "fPushed", OffsetOf(::G4Navigator, fPushed), PRIVATE)
  .addDataMember(type_565, "fVerbose", OffsetOf(::G4Navigator, fVerbose), PRIVATE)
  .addDataMember(type_153, "fnormalNav", OffsetOf(::G4Navigator, fnormalNav), PRIVATE)
  .addDataMember(type_137, "fvoxelNav", OffsetOf(::G4Navigator, fvoxelNav), PRIVATE)
  .addDataMember(type_135, "fparamNav", OffsetOf(::G4Navigator, fparamNav), PRIVATE)
  .addDataMember(type_133, "freplicaNav", OffsetOf(::G4Navigator, freplicaNav), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_3767), "G4Navigator", constructor_3797, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4Navigator", constructor_3798, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Navigator", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_567c, type_3903), "ComputeStep", method_3800, 0, "pGlobalPoint;pDirection;pCurrentProposedStepLength;pNewSafety", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_10743, type_11354, type_11354, type_11504), "ResetHierarchyAndLocate", method_3801, 0, "point;direction;h", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_10743, type_11354, type_11353, type_564c, type_564c), "LocateGlobalPointAndSetup", method_3802, 0, "point;direction=0;pRelativeSearch=true;ignoreDirection=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11354), "LocateGlobalPointWithinVolume", method_3803, 0, "position", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11354, type_11354, type_11506, type_564c), "LocateGlobalPointAndUpdateTouchableHandle", method_3804, 0, "position;direction;oldTouchableToUpdate;RelativeSearch=true", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11354, type_11354, type_11507, type_564c), "LocateGlobalPointAndUpdateTouchable", method_3805, 0, "position;direction;touchableToUpdate;RelativeSearch=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11354, type_11507, type_564c), "LocateGlobalPointAndUpdateTouchable", method_3806, 0, "position;touchableToUpdate;RelativeSearch=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "SetGeometricallyLimitedStep", method_3807, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_567c), "ComputeSafety", method_3808, 0, "globalpoint;pProposedMaxLength=1.79769313486231570814527423731704356798070567526e+308", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_10743), "GetWorldVolume", method_3809, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10743), "SetWorldVolume", method_3810, 0, "pWorld", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11508), "CreateGRSVolume", method_3811, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11509), "CreateGRSSolid", method_3812, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10745), "CreateTouchableHistory", method_3813, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_156), "CreateTouchableHistoryHandle", method_3814, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11510), "GetLocalExitNormal", method_3815, 0, "valid", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetVerboseLevel", method_3816, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_3817, 0, "level", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "CheckMode", method_3818, 0, "mode", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PrintState", method_3819, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11511), "GetGlobalToLocalTransform", method_3820, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_476c), "GetLocalToGlobalTransform", method_3821, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ResetStackAndState", method_3822, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_3391), "SeverityOfZeroStepping", method_3823, 0, "noZeroSteps", PUBLIC);
}

//------Stub functions for class G4Navigator -------------------------------
void* __G4Navigator_dict::constructor_3797( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Navigator(*(const ::G4Navigator*)arg[0]);
}

void* __G4Navigator_dict::constructor_3798( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4Navigator();
}

void* __G4Navigator_dict::method_3800( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4Navigator*)o)->ComputeStep(*(const ::CLHEP::Hep3Vector*)arg[0],
                                         *(const ::CLHEP::Hep3Vector*)arg[1],
                                         *(const double*)arg[2],
                                         *(double*)arg[3]);
  return &ret;
}

void* __G4Navigator_dict::method_3801( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4Navigator*)o)->ResetHierarchyAndLocate(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                                             *(const ::G4TouchableHistory*)arg[2]);
}

void* __G4Navigator_dict::method_3802( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    return (void*)((::G4Navigator*)o)->LocateGlobalPointAndSetup(*(const ::CLHEP::Hep3Vector*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return (void*)((::G4Navigator*)o)->LocateGlobalPointAndSetup(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                                 (const ::CLHEP::Hep3Vector*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return (void*)((::G4Navigator*)o)->LocateGlobalPointAndSetup(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                                 (const ::CLHEP::Hep3Vector*)arg[1],
                                                                 *(const bool*)arg[2]);
  }
  else if ( arg.size() == 4 ) { 
    return (void*)((::G4Navigator*)o)->LocateGlobalPointAndSetup(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                                 (const ::CLHEP::Hep3Vector*)arg[1],
                                                                 *(const bool*)arg[2],
                                                                 *(const bool*)arg[3]);
  }
  return 0;
}

void* __G4Navigator_dict::method_3803( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Navigator*)o)->LocateGlobalPointWithinVolume(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return 0;
}

void* __G4Navigator_dict::method_3804( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 3 ) {
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchableHandle(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                                   *(const ::CLHEP::Hep3Vector*)arg[1],
                                                                   *(::G4ReferenceCountedHandle<G4VTouchable>*)arg[2]);
    return 0;
  }
  else if ( arg.size() == 4 ) { 
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchableHandle(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                                   *(const ::CLHEP::Hep3Vector*)arg[1],
                                                                   *(::G4ReferenceCountedHandle<G4VTouchable>*)arg[2],
                                                                   *(const bool*)arg[3]);
    return 0;
  }
  return 0;
}

void* __G4Navigator_dict::method_3805( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 3 ) {
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchable(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                                             (::G4VTouchable*)arg[2]);
    return 0;
  }
  else if ( arg.size() == 4 ) { 
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchable(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                                             (::G4VTouchable*)arg[2],
                                                             *(const bool*)arg[3]);
    return 0;
  }
  return 0;
}

void* __G4Navigator_dict::method_3806( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 2 ) {
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchable(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                             (::G4VTouchable*)arg[1]);
    return 0;
  }
  else if ( arg.size() == 3 ) { 
    ((::G4Navigator*)o)->LocateGlobalPointAndUpdateTouchable(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                             (::G4VTouchable*)arg[1],
                                                             *(const bool*)arg[2]);
    return 0;
  }
  return 0;
}

void* __G4Navigator_dict::method_3807( void* o, const std::vector<void*>&, void*)
{
  ((::G4Navigator*)o)->SetGeometricallyLimitedStep();
  return 0;
}

void* __G4Navigator_dict::method_3808( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 1 ) {
    ret = ((::G4Navigator*)o)->ComputeSafety(*(const ::CLHEP::Hep3Vector*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4Navigator*)o)->ComputeSafety(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4Navigator_dict::method_3809( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Navigator*)o)->GetWorldVolume();
}

void* __G4Navigator_dict::method_3810( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Navigator*)o)->SetWorldVolume((::G4VPhysicalVolume*)arg[0]);
  return 0;
}

void* __G4Navigator_dict::method_3811( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Navigator*)o)->CreateGRSVolume();
}

void* __G4Navigator_dict::method_3812( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Navigator*)o)->CreateGRSSolid();
}

void* __G4Navigator_dict::method_3813( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Navigator*)o)->CreateTouchableHistory();
}

void* __G4Navigator_dict::method_3814( void* o, const std::vector<void*>&, void*)
{
  return new G4ReferenceCountedHandle<G4TouchableHistory>(((const ::G4Navigator*)o)->CreateTouchableHistoryHandle());
}

void* __G4Navigator_dict::method_3815( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((::G4Navigator*)o)->GetLocalExitNormal((bool*)arg[0]));
}

void* __G4Navigator_dict::method_3816( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Navigator*)o)->GetVerboseLevel();
  return &ret;
}

void* __G4Navigator_dict::method_3817( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Navigator*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4Navigator_dict::method_3818( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Navigator*)o)->CheckMode(*(bool*)arg[0]);
  return 0;
}

void* __G4Navigator_dict::method_3819( void* o, const std::vector<void*>&, void*)
{
  ((::G4Navigator*)o)->PrintState();
  return 0;
}

void* __G4Navigator_dict::method_3820( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4Navigator*)o)->GetGlobalToLocalTransform();
}

void* __G4Navigator_dict::method_3821( void* o, const std::vector<void*>&, void*)
{
  return new G4AffineTransform(((const ::G4Navigator*)o)->GetLocalToGlobalTransform());
}

void* __G4Navigator_dict::method_3822( void* o, const std::vector<void*>&, void*)
{
  ((::G4Navigator*)o)->ResetStackAndState();
  return 0;
}

void* __G4Navigator_dict::method_3823( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Navigator*)o)->SeverityOfZeroStepping((int*)arg[0]);
  return &ret;
}

//------Dictionary for class G4Event -------------------------------
class __G4Event_dict { 
  public:
  __G4Event_dict();
  static void * operator_4331(void*, const std::vector<void*>&, void*);
  static void * operator_4332(void*, const std::vector<void*>&, void*);
  static void * operator_4333(void*, const std::vector<void*>&, void*);
  static void * operator_4334(void*, const std::vector<void*>&, void*);
  static void * method_4335(void*, const std::vector<void*>&, void*);
  static void * method_4336(void*, const std::vector<void*>&, void*);
  static void * method_4337(void*, const std::vector<void*>&, void*);
  static void * method_4338(void*, const std::vector<void*>&, void*);
  static void * method_4339(void*, const std::vector<void*>&, void*);
  static void * method_4340(void*, const std::vector<void*>&, void*);
  static void * method_4341(void*, const std::vector<void*>&, void*);
  static void * method_4342(void*, const std::vector<void*>&, void*);
  static void * method_4343(void*, const std::vector<void*>&, void*);
  static void * method_4344(void*, const std::vector<void*>&, void*);
  static void * method_4345(void*, const std::vector<void*>&, void*);
  static void * method_4346(void*, const std::vector<void*>&, void*);
  static void * method_4347(void*, const std::vector<void*>&, void*);
  static void * method_4348(void*, const std::vector<void*>&, void*);
  static void * method_4349(void*, const std::vector<void*>&, void*);
  static void * method_4350(void*, const std::vector<void*>&, void*);
  static void * method_4351(void*, const std::vector<void*>&, void*);
};


__G4Event_dict::__G4Event_dict() {
  ClassBuilder< ::G4Event >("G4Event", PUBLIC)
  .addDataMember(type_565, "eventID", OffsetOf(::G4Event, eventID), PRIVATE)
  .addDataMember(type_10874, "thePrimaryVertex", OffsetOf(::G4Event, thePrimaryVertex), PRIVATE)
  .addDataMember(type_565, "numberOfPrimaryVertex", OffsetOf(::G4Event, numberOfPrimaryVertex), PRIVATE)
  .addDataMember(type_10671, "HC", OffsetOf(::G4Event, HC), PRIVATE)
  .addDataMember(type_10813, "DC", OffsetOf(::G4Event, DC), PRIVATE)
  .addDataMember(type_10901, "trajectoryContainer", OffsetOf(::G4Event, trajectoryContainer), PRIVATE)
  .addDataMember(type_564, "eventAborted", OffsetOf(::G4Event, eventAborted), PRIVATE)
  .addDataMember(type_10908, "userInfo", OffsetOf(::G4Event, userInfo), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_938, type_1555), "operator new", operator_4331, 0, "", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_938), "operator delete", operator_4332, 0, "anEvent", PUBLIC | STATIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_10793), "operator==", operator_4333, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_10793), "operator!=", operator_4334, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Print", method_4335, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Draw", method_4336, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetEventID", method_4337, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10671), "SetHCofThisEvent", method_4338, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10813), "SetDCofThisEvent", method_4339, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10901), "SetTrajectoryContainer", method_4340, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "SetEventAborted", method_4341, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetEventID", method_4342, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10874), "AddPrimaryVertex", method_4343, 0, "aPrimaryVertex", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumberOfPrimaryVertex", method_4344, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10874, type_565), "GetPrimaryVertex", method_4345, 0, "i=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10671), "GetHCofThisEvent", method_4346, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10813), "GetDCofThisEvent", method_4347, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10901), "GetTrajectoryContainer", method_4348, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsAborted", method_4349, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10908), "SetUserInformation", method_4350, 0, "anInfo", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10908), "GetUserInformation", method_4351, 0, 0, PUBLIC);
}

//------Stub functions for class G4Event -------------------------------
void* __G4Event_dict::operator_4331( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4Event*)o)->operator new(*(unsigned int*)arg[0]);
}

void* __G4Event_dict::operator_4332( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->operator delete((void*)arg[0]);
  return 0;
}

void* __G4Event_dict::operator_4333( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Event*)o)->operator==(*(const ::G4Event*)arg[0]);
  return &ret;
}

void* __G4Event_dict::operator_4334( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Event*)o)->operator!=(*(const ::G4Event*)arg[0]);
  return &ret;
}

void* __G4Event_dict::method_4335( void* o, const std::vector<void*>&, void*)
{
  ((const ::G4Event*)o)->Print();
  return 0;
}

void* __G4Event_dict::method_4336( void* o, const std::vector<void*>&, void*)
{
  ((const ::G4Event*)o)->Draw();
  return 0;
}

void* __G4Event_dict::method_4337( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->SetEventID(*(int*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4338( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->SetHCofThisEvent((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4339( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->SetDCofThisEvent((::G4DCofThisEvent*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4340( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->SetTrajectoryContainer((::G4TrajectoryContainer*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4341( void* o, const std::vector<void*>&, void*)
{
  ((::G4Event*)o)->SetEventAborted();
  return 0;
}

void* __G4Event_dict::method_4342( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Event*)o)->GetEventID();
  return &ret;
}

void* __G4Event_dict::method_4343( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->AddPrimaryVertex((::G4PrimaryVertex*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4344( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Event*)o)->GetNumberOfPrimaryVertex();
  return &ret;
}

void* __G4Event_dict::method_4345( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    return (void*)((const ::G4Event*)o)->GetPrimaryVertex();
  }
  else if ( arg.size() == 1 ) { 
    return (void*)((const ::G4Event*)o)->GetPrimaryVertex(*(int*)arg[0]);
  }
  return 0;
}

void* __G4Event_dict::method_4346( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Event*)o)->GetHCofThisEvent();
}

void* __G4Event_dict::method_4347( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Event*)o)->GetDCofThisEvent();
}

void* __G4Event_dict::method_4348( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Event*)o)->GetTrajectoryContainer();
}

void* __G4Event_dict::method_4349( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4Event*)o)->IsAborted();
  return &ret;
}

void* __G4Event_dict::method_4350( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Event*)o)->SetUserInformation((::G4VUserEventInformation*)arg[0]);
  return 0;
}

void* __G4Event_dict::method_4351( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Event*)o)->GetUserInformation();
}

//------Dictionary for class vector<G4Material*,std::allocator<G4Material*> > -------------------------------
class __std__vector_G4Materialp__dict { 
  public:
  __std__vector_G4Materialp__dict();
  static void * method_4706(void*, const std::vector<void*>&, void*);
  static void * method_4709(void*, const std::vector<void*>&, void*);
  static void * method_4710(void*, const std::vector<void*>&, void*);
  static void * method_4711(void*, const std::vector<void*>&, void*);
  static void * method_4712(void*, const std::vector<void*>&, void*);
  static void * method_4717(void*, const std::vector<void*>&, void*);
  static void * method_4718(void*, const std::vector<void*>&, void*);
  static void * method_4719(void*, const std::vector<void*>&, void*);
  static void * method_4720(void*, const std::vector<void*>&, void*);
  static void * operator_4721(void*, const std::vector<void*>&, void*);
  static void * operator_4722(void*, const std::vector<void*>&, void*);
  static void * method_4723(void*, const std::vector<void*>&, void*);
  static void * method_4724(void*, const std::vector<void*>&, void*);
  static void * method_4725(void*, const std::vector<void*>&, void*);
  static void * constructor_4726(void*, const std::vector<void*>&, void*);
  static void * constructor_4727(void*, const std::vector<void*>&, void*);
  static void * constructor_4728(void*, const std::vector<void*>&, void*);
  static void * constructor_4729(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::std::vector<G4Material*>*)o)->~vector(); return 0;}
  static void * operator_4731(void*, const std::vector<void*>&, void*);
  static void * method_4732(void*, const std::vector<void*>&, void*);
  static void * method_4733(void*, const std::vector<void*>&, void*);
  static void * method_4734(void*, const std::vector<void*>&, void*);
  static void * method_4735(void*, const std::vector<void*>&, void*);
  static void * method_4736(void*, const std::vector<void*>&, void*);
  static void * method_4737(void*, const std::vector<void*>&, void*);
  static void * method_4738(void*, const std::vector<void*>&, void*);
  static void * method_4739(void*, const std::vector<void*>&, void*);
  static void * method_4740(void*, const std::vector<void*>&, void*);
  static void * method_4741(void*, const std::vector<void*>&, void*);
  static void * method_4742(void*, const std::vector<void*>&, void*);
  static void * method_4743(void*, const std::vector<void*>&, void*);
  static void * method_4744(void*, const std::vector<void*>&, void*);
  static void * method_4745(void*, const std::vector<void*>&, void*);
  static void * method_4746(void*, const std::vector<void*>&, void*);
  static void * method_4747(void*, const std::vector<void*>&, void*);
  static void * method_4748(void*, const std::vector<void*>&, void*);
  static void * method_4749(void*, const std::vector<void*>&, void*);
  static void * method_4750(void*, const std::vector<void*>&, void*);
  static void * constructor_x1(void*, const std::vector<void*>&, void*);
  static void* method_x2( void*, const std::vector<void*>&, void* ); 
  static void* method_x3( void*, const std::vector<void*>&, void* ); 
  static void* method_x4( void*, const std::vector<void*>&, void* ); 
  static void* method_x5( void*, const std::vector<void*>&, void* ); 
};


__std__vector_G4Materialp__dict::__std__vector_G4Materialp__dict() {
  ClassBuilder< ::std::vector<G4Material*> >("std::vector<G4Material*>", PUBLIC)
  .addBase< ::std::_Vector_base<G4Material*,std::allocator<G4Material*> > >(PROTECTED)
  .addTypedef(type_4683, "std::vector<G4Material*>::_Base")
  .addTypedef(type_4682, "std::vector<G4Material*>::value_type")
  .addTypedef(type_4686, "std::vector<G4Material*>::pointer")
  .addTypedef(type_4688, "std::vector<G4Material*>::const_pointer")
  .addTypedef(type_4690, "std::vector<G4Material*>::iterator")
  .addTypedef(type_4692, "std::vector<G4Material*>::const_iterator")
  .addTypedef(type_4694, "std::vector<G4Material*>::reference")
  .addTypedef(type_4696, "std::vector<G4Material*>::const_reference")
  .addTypedef(type_1555, "std::vector<G4Material*>::size_type")
  .addTypedef(type_1556, "std::vector<G4Material*>::difference_type")
  .addTypedef(type_4700, "std::vector<G4Material*>::allocator_type")
  .addTypedef(type_4702, "std::vector<G4Material*>::const_reverse_iterator")
  .addTypedef(type_4704, "std::vector<G4Material*>::reverse_iterator")
  .addFunctionMember(FunctionTypeBuilder(type_4700), "get_allocator", method_4706, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690), "begin", method_4709, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4692), "begin", method_4710, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690), "end", method_4711, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4692), "end", method_4712, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "size", method_4717, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "max_size", method_4718, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "capacity", method_4719, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420), "empty", method_4720, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4694, type_1555), "operator[]", operator_4721, 0, "__n", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_4696, type_1555), "operator[]", operator_4722, 0, "__n", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "_M_range_check", method_4723, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4694, type_1555), "at", method_4724, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4696, type_1555), "at", method_4725, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11901), "vector", constructor_4726, 0, "__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_1555, type_4696, type_11901), "vector", constructor_4727, 0, "__n;__value;__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_1555), "vector", constructor_4728, 0, "__n", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11902), "vector", constructor_4729, 0, "__x", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~vector", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_11903, type_11902), "operator=", operator_4731, 0, "__x", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "reserve", method_4732, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4696), "assign", method_4733, 0, "__n;__val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4696), "_M_fill_assign", method_4734, 0, "__n;__val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4694), "front", method_4735, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4696), "front", method_4736, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4694), "back", method_4737, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4696), "back", method_4738, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4696), "push_back", method_4739, 0, "__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11903), "swap", method_4740, 0, "__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690, type_4690, type_4696), "insert", method_4741, 0, "__position;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690, type_4690), "insert", method_4742, 0, "__position", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4690, type_1555, type_4696), "insert", method_4743, 0, "__pos;__n;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4690, type_1555, type_4696), "_M_fill_insert", method_4744, 0, "__position;__n;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "pop_back", method_4745, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690, type_4690), "erase", method_4746, 0, "__position", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4690, type_4690, type_4690), "erase", method_4747, 0, "__first;__last", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4696), "resize", method_4748, 0, "__new_size;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "resize", method_4749, 0, "__new_size", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "clear", method_4750, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "vector", constructor_x1, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember<void*(void)>("getBasesTable", method_x2)
  .addFunctionMember<void*(std::vector<void*>)>("writeData", method_x3)
  .addFunctionMember<void*(std::vector<void*>)>("readData", method_x4)
  .addFunctionMember<void*(void)>("createCollFuncTable", method_x5);
}

//------Stub functions for class vector<G4Material*,std::allocator<G4Material*> > -------------------------------
void* __std__vector_G4Materialp__dict::method_4706( void* o, const std::vector<void*>&, void*)
{
  return new std::allocator<G4Material*>(((const ::std::vector<G4Material*>*)o)->get_allocator());
}

void* __std__vector_G4Materialp__dict::method_4709( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->begin());
}

void* __std__vector_G4Materialp__dict::method_4710( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material* const*,std::vector<G4Material*> >(((const ::std::vector<G4Material*>*)o)->begin());
}

void* __std__vector_G4Materialp__dict::method_4711( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->end());
}

void* __std__vector_G4Materialp__dict::method_4712( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material* const*,std::vector<G4Material*> >(((const ::std::vector<G4Material*>*)o)->end());
}

void* __std__vector_G4Materialp__dict::method_4717( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Material*>*)o)->size();
  return &ret;
}

void* __std__vector_G4Materialp__dict::method_4718( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Material*>*)o)->max_size();
  return &ret;
}

void* __std__vector_G4Materialp__dict::method_4719( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Material*>*)o)->capacity();
  return &ret;
}

void* __std__vector_G4Materialp__dict::method_4720( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::std::vector<G4Material*>*)o)->empty();
  return &ret;
}

void* __std__vector_G4Materialp__dict::operator_4721( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Material*>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__vector_G4Materialp__dict::operator_4722( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::vector<G4Material*>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__vector_G4Materialp__dict::method_4723( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::std::vector<G4Material*>*)o)->_M_range_check(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4724( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Material*>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Materialp__dict::method_4725( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::vector<G4Material*>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Materialp__dict::constructor_4726( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 0 ) {
    return ::new(mem) ::std::vector<G4Material*>();
  }
  else if ( arg.size() == 1 ) { 
    return ::new(mem) ::std::vector<G4Material*>(*(const ::std::allocator<G4Material*>*)arg[0]);
  }
  return 0;
}

void* __std__vector_G4Materialp__dict::constructor_4727( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 2 ) {
    return ::new(mem) ::std::vector<G4Material*>(*(unsigned int*)arg[0],
                                               *(::G4Material* const*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::std::vector<G4Material*>(*(unsigned int*)arg[0],
                                               *(::G4Material* const*)arg[1],
                                               *(const ::std::allocator<G4Material*>*)arg[2]);
  }
  return 0;
}

void* __std__vector_G4Materialp__dict::constructor_4728( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::vector<G4Material*>(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Materialp__dict::constructor_4729( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::vector<G4Material*>(*(const ::std::vector<G4Material*>*)arg[0]);
}

void* __std__vector_G4Materialp__dict::operator_4731( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Material*>*)o)->operator=(*(const ::std::vector<G4Material*>*)arg[0]);
}

void* __std__vector_G4Materialp__dict::method_4732( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->reserve(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4733( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->assign(*(unsigned int*)arg[0],
                                           *(::G4Material* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4734( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->_M_fill_assign(*(unsigned int*)arg[0],
                                                   *(::G4Material* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4735( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::std::vector<G4Material*>*)o)->front();
}

void* __std__vector_G4Materialp__dict::method_4736( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::std::vector<G4Material*>*)o)->front();
}

void* __std__vector_G4Materialp__dict::method_4737( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::std::vector<G4Material*>*)o)->back();
}

void* __std__vector_G4Materialp__dict::method_4738( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::std::vector<G4Material*>*)o)->back();
}

void* __std__vector_G4Materialp__dict::method_4739( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->push_back(*(::G4Material* const*)arg[0]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4740( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->swap(*(::std::vector<G4Material*>*)arg[0]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4741( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0],
                                                                                                                           *(::G4Material* const*)arg[1]));
}

void* __std__vector_G4Materialp__dict::method_4742( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0]));
}

void* __std__vector_G4Materialp__dict::method_4743( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0],
                                           *(unsigned int*)arg[1],
                                           *(::G4Material* const*)arg[2]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4744( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->_M_fill_insert(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0],
                                                   *(unsigned int*)arg[1],
                                                   *(::G4Material* const*)arg[2]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4745( void* o, const std::vector<void*>&, void*)
{
  ((::std::vector<G4Material*>*)o)->pop_back();
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4746( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->erase(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0]));
}

void* __std__vector_G4Materialp__dict::method_4747( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >(((::std::vector<G4Material*>*)o)->erase(*(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[0],
                                                                                                                          *(::__gnu_cxx::__normal_iterator<G4Material**,std::vector<G4Material*> >*)arg[1]));
}

void* __std__vector_G4Materialp__dict::method_4748( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->resize(*(unsigned int*)arg[0],
                                           *(::G4Material* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4749( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Material*>*)o)->resize(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Materialp__dict::method_4750( void* o, const std::vector<void*>&, void*)
{
  ((::std::vector<G4Material*>*)o)->clear();
  return 0;
}

void* __std__vector_G4Materialp__dict::constructor_x1( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::std::vector<G4Material*>();
}

void* __std__vector_G4Materialp__dict::method_x2( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::std::_Vector_base<G4Material*,std::allocator<G4Material*> > >(), seal::reflex::baseOffset< ::std::vector<G4Material*>,::std::_Vector_base<G4Material*,std::allocator<G4Material*> > >::get(),PROTECTED), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::std::_Vector_alloc_base<G4Material*,std::allocator<G4Material*>,true> >(), seal::reflex::baseOffset< ::std::vector<G4Material*>,::std::_Vector_alloc_base<G4Material*,std::allocator<G4Material*>,true> >::get(),PROTECTED), 1));
  return &s_bases;
}

void* __std__vector_G4Materialp__dict::method_x3( void* o, const std::vector<void*>& args, void*)
{
  std::vector<G4Material*>* v = (std::vector<G4Material*>*)o;
  size_t n = v->size();
  ((void (*)(size_t&, const std::vector<void*>&))args[1])(n, args);
  for(std::vector<G4Material*>::iterator i = v->begin(); i != v->end(); i++) {
    ((void (*)(const void*, const std::vector<void*>&))args[2])(&(*i), args);
  }
  return 0;
}

void* __std__vector_G4Materialp__dict::method_x4( void* o, const std::vector<void*>& args, void*)
{
  std::vector<G4Material*>* v = (std::vector<G4Material*>*)o;
  size_t n = *(size_t*)args[1];
  if (n > 0) {
    v->resize(n);
    for(size_t i = 0; i < n; i++) {
      ((void (*)(const void*, const std::vector<void*>&))args[2])(&(*v)[i], args);
    }
  }
  return 0;
}

void* __std__vector_G4Materialp__dict::method_x5( void*, const std::vector<void*>&, void*)
{
  return seal::reflex::Proxy< ::std::vector<G4Material*> >::generate();
}

//------Dictionary for class vector<G4Element*,std::allocator<G4Element*> > -------------------------------
class __std__vector_G4Elementp__dict { 
  public:
  __std__vector_G4Elementp__dict();
  static void * method_4775(void*, const std::vector<void*>&, void*);
  static void * method_4778(void*, const std::vector<void*>&, void*);
  static void * method_4779(void*, const std::vector<void*>&, void*);
  static void * method_4780(void*, const std::vector<void*>&, void*);
  static void * method_4781(void*, const std::vector<void*>&, void*);
  static void * method_4786(void*, const std::vector<void*>&, void*);
  static void * method_4787(void*, const std::vector<void*>&, void*);
  static void * method_4788(void*, const std::vector<void*>&, void*);
  static void * method_4789(void*, const std::vector<void*>&, void*);
  static void * operator_4790(void*, const std::vector<void*>&, void*);
  static void * operator_4791(void*, const std::vector<void*>&, void*);
  static void * method_4792(void*, const std::vector<void*>&, void*);
  static void * method_4793(void*, const std::vector<void*>&, void*);
  static void * method_4794(void*, const std::vector<void*>&, void*);
  static void * constructor_4795(void*, const std::vector<void*>&, void*);
  static void * constructor_4796(void*, const std::vector<void*>&, void*);
  static void * constructor_4797(void*, const std::vector<void*>&, void*);
  static void * constructor_4798(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::std::vector<G4Element*>*)o)->~vector(); return 0;}
  static void * operator_4800(void*, const std::vector<void*>&, void*);
  static void * method_4801(void*, const std::vector<void*>&, void*);
  static void * method_4802(void*, const std::vector<void*>&, void*);
  static void * method_4803(void*, const std::vector<void*>&, void*);
  static void * method_4804(void*, const std::vector<void*>&, void*);
  static void * method_4805(void*, const std::vector<void*>&, void*);
  static void * method_4806(void*, const std::vector<void*>&, void*);
  static void * method_4807(void*, const std::vector<void*>&, void*);
  static void * method_4808(void*, const std::vector<void*>&, void*);
  static void * method_4809(void*, const std::vector<void*>&, void*);
  static void * method_4810(void*, const std::vector<void*>&, void*);
  static void * method_4811(void*, const std::vector<void*>&, void*);
  static void * method_4812(void*, const std::vector<void*>&, void*);
  static void * method_4813(void*, const std::vector<void*>&, void*);
  static void * method_4814(void*, const std::vector<void*>&, void*);
  static void * method_4815(void*, const std::vector<void*>&, void*);
  static void * method_4816(void*, const std::vector<void*>&, void*);
  static void * method_4817(void*, const std::vector<void*>&, void*);
  static void * method_4818(void*, const std::vector<void*>&, void*);
  static void * method_4819(void*, const std::vector<void*>&, void*);
  static void * constructor_x6(void*, const std::vector<void*>&, void*);
  static void* method_x7( void*, const std::vector<void*>&, void* ); 
  static void* method_x8( void*, const std::vector<void*>&, void* ); 
  static void* method_x9( void*, const std::vector<void*>&, void* ); 
  static void* method_x10( void*, const std::vector<void*>&, void* ); 
};


__std__vector_G4Elementp__dict::__std__vector_G4Elementp__dict() {
  ClassBuilder< ::std::vector<G4Element*> >("std::vector<G4Element*>", PUBLIC)
  .addBase< ::std::_Vector_base<G4Element*,std::allocator<G4Element*> > >(PROTECTED)
  .addTypedef(type_4751, "std::vector<G4Element*>::_Base")
  .addTypedef(type_4753, "std::vector<G4Element*>::value_type")
  .addTypedef(type_4755, "std::vector<G4Element*>::pointer")
  .addTypedef(type_4757, "std::vector<G4Element*>::const_pointer")
  .addTypedef(type_4759, "std::vector<G4Element*>::iterator")
  .addTypedef(type_4761, "std::vector<G4Element*>::const_iterator")
  .addTypedef(type_4763, "std::vector<G4Element*>::reference")
  .addTypedef(type_4765, "std::vector<G4Element*>::const_reference")
  .addTypedef(type_1555, "std::vector<G4Element*>::size_type")
  .addTypedef(type_1556, "std::vector<G4Element*>::difference_type")
  .addTypedef(type_4769, "std::vector<G4Element*>::allocator_type")
  .addTypedef(type_4771, "std::vector<G4Element*>::const_reverse_iterator")
  .addTypedef(type_4773, "std::vector<G4Element*>::reverse_iterator")
  .addFunctionMember(FunctionTypeBuilder(type_4769), "get_allocator", method_4775, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759), "begin", method_4778, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4761), "begin", method_4779, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759), "end", method_4780, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4761), "end", method_4781, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "size", method_4786, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "max_size", method_4787, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "capacity", method_4788, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420), "empty", method_4789, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4763, type_1555), "operator[]", operator_4790, 0, "__n", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_4765, type_1555), "operator[]", operator_4791, 0, "__n", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "_M_range_check", method_4792, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4763, type_1555), "at", method_4793, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4765, type_1555), "at", method_4794, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11932), "vector", constructor_4795, 0, "__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_1555, type_4765, type_11932), "vector", constructor_4796, 0, "__n;__value;__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_1555), "vector", constructor_4797, 0, "__n", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11933), "vector", constructor_4798, 0, "__x", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~vector", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_11934, type_11933), "operator=", operator_4800, 0, "__x", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "reserve", method_4801, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4765), "assign", method_4802, 0, "__n;__val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4765), "_M_fill_assign", method_4803, 0, "__n;__val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4763), "front", method_4804, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4765), "front", method_4805, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4763), "back", method_4806, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4765), "back", method_4807, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4765), "push_back", method_4808, 0, "__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11934), "swap", method_4809, 0, "__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759, type_4759, type_4765), "insert", method_4810, 0, "__position;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759, type_4759), "insert", method_4811, 0, "__position", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4759, type_1555, type_4765), "insert", method_4812, 0, "__pos;__n;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4759, type_1555, type_4765), "_M_fill_insert", method_4813, 0, "__position;__n;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "pop_back", method_4814, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759, type_4759), "erase", method_4815, 0, "__position", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4759, type_4759, type_4759), "erase", method_4816, 0, "__first;__last", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_4765), "resize", method_4817, 0, "__new_size;__x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "resize", method_4818, 0, "__new_size", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "clear", method_4819, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "vector", constructor_x6, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember<void*(void)>("getBasesTable", method_x7)
  .addFunctionMember<void*(std::vector<void*>)>("writeData", method_x8)
  .addFunctionMember<void*(std::vector<void*>)>("readData", method_x9)
  .addFunctionMember<void*(void)>("createCollFuncTable", method_x10);
}

//------Stub functions for class vector<G4Element*,std::allocator<G4Element*> > -------------------------------
void* __std__vector_G4Elementp__dict::method_4775( void* o, const std::vector<void*>&, void*)
{
  return new std::allocator<G4Element*>(((const ::std::vector<G4Element*>*)o)->get_allocator());
}

void* __std__vector_G4Elementp__dict::method_4778( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->begin());
}

void* __std__vector_G4Elementp__dict::method_4779( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element* const*,std::vector<G4Element*> >(((const ::std::vector<G4Element*>*)o)->begin());
}

void* __std__vector_G4Elementp__dict::method_4780( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->end());
}

void* __std__vector_G4Elementp__dict::method_4781( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element* const*,std::vector<G4Element*> >(((const ::std::vector<G4Element*>*)o)->end());
}

void* __std__vector_G4Elementp__dict::method_4786( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Element*>*)o)->size();
  return &ret;
}

void* __std__vector_G4Elementp__dict::method_4787( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Element*>*)o)->max_size();
  return &ret;
}

void* __std__vector_G4Elementp__dict::method_4788( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::vector<G4Element*>*)o)->capacity();
  return &ret;
}

void* __std__vector_G4Elementp__dict::method_4789( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::std::vector<G4Element*>*)o)->empty();
  return &ret;
}

void* __std__vector_G4Elementp__dict::operator_4790( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Element*>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__vector_G4Elementp__dict::operator_4791( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::vector<G4Element*>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__vector_G4Elementp__dict::method_4792( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::std::vector<G4Element*>*)o)->_M_range_check(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4793( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Element*>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Elementp__dict::method_4794( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::vector<G4Element*>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Elementp__dict::constructor_4795( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 0 ) {
    return ::new(mem) ::std::vector<G4Element*>();
  }
  else if ( arg.size() == 1 ) { 
    return ::new(mem) ::std::vector<G4Element*>(*(const ::std::allocator<G4Element*>*)arg[0]);
  }
  return 0;
}

void* __std__vector_G4Elementp__dict::constructor_4796( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 2 ) {
    return ::new(mem) ::std::vector<G4Element*>(*(unsigned int*)arg[0],
                                              *(::G4Element* const*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::std::vector<G4Element*>(*(unsigned int*)arg[0],
                                              *(::G4Element* const*)arg[1],
                                              *(const ::std::allocator<G4Element*>*)arg[2]);
  }
  return 0;
}

void* __std__vector_G4Elementp__dict::constructor_4797( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::vector<G4Element*>(*(unsigned int*)arg[0]);
}

void* __std__vector_G4Elementp__dict::constructor_4798( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::vector<G4Element*>(*(const ::std::vector<G4Element*>*)arg[0]);
}

void* __std__vector_G4Elementp__dict::operator_4800( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::vector<G4Element*>*)o)->operator=(*(const ::std::vector<G4Element*>*)arg[0]);
}

void* __std__vector_G4Elementp__dict::method_4801( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->reserve(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4802( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->assign(*(unsigned int*)arg[0],
                                          *(::G4Element* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4803( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->_M_fill_assign(*(unsigned int*)arg[0],
                                                  *(::G4Element* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4804( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::std::vector<G4Element*>*)o)->front();
}

void* __std__vector_G4Elementp__dict::method_4805( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::std::vector<G4Element*>*)o)->front();
}

void* __std__vector_G4Elementp__dict::method_4806( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::std::vector<G4Element*>*)o)->back();
}

void* __std__vector_G4Elementp__dict::method_4807( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::std::vector<G4Element*>*)o)->back();
}

void* __std__vector_G4Elementp__dict::method_4808( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->push_back(*(::G4Element* const*)arg[0]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4809( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->swap(*(::std::vector<G4Element*>*)arg[0]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4810( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0],
                                                                                                                        *(::G4Element* const*)arg[1]));
}

void* __std__vector_G4Elementp__dict::method_4811( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0]));
}

void* __std__vector_G4Elementp__dict::method_4812( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->insert(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0],
                                          *(unsigned int*)arg[1],
                                          *(::G4Element* const*)arg[2]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4813( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->_M_fill_insert(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0],
                                                  *(unsigned int*)arg[1],
                                                  *(::G4Element* const*)arg[2]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4814( void* o, const std::vector<void*>&, void*)
{
  ((::std::vector<G4Element*>*)o)->pop_back();
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4815( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->erase(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0]));
}

void* __std__vector_G4Elementp__dict::method_4816( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >(((::std::vector<G4Element*>*)o)->erase(*(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[0],
                                                                                                                       *(::__gnu_cxx::__normal_iterator<G4Element**,std::vector<G4Element*> >*)arg[1]));
}

void* __std__vector_G4Elementp__dict::method_4817( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->resize(*(unsigned int*)arg[0],
                                          *(::G4Element* const*)arg[1]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4818( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::vector<G4Element*>*)o)->resize(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__vector_G4Elementp__dict::method_4819( void* o, const std::vector<void*>&, void*)
{
  ((::std::vector<G4Element*>*)o)->clear();
  return 0;
}

void* __std__vector_G4Elementp__dict::constructor_x6( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::std::vector<G4Element*>();
}

void* __std__vector_G4Elementp__dict::method_x7( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::std::_Vector_base<G4Element*,std::allocator<G4Element*> > >(), seal::reflex::baseOffset< ::std::vector<G4Element*>,::std::_Vector_base<G4Element*,std::allocator<G4Element*> > >::get(),PROTECTED), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::std::_Vector_alloc_base<G4Element*,std::allocator<G4Element*>,true> >(), seal::reflex::baseOffset< ::std::vector<G4Element*>,::std::_Vector_alloc_base<G4Element*,std::allocator<G4Element*>,true> >::get(),PROTECTED), 1));
  return &s_bases;
}

void* __std__vector_G4Elementp__dict::method_x8( void* o, const std::vector<void*>& args, void*)
{
  std::vector<G4Element*>* v = (std::vector<G4Element*>*)o;
  size_t n = v->size();
  ((void (*)(size_t&, const std::vector<void*>&))args[1])(n, args);
  for(std::vector<G4Element*>::iterator i = v->begin(); i != v->end(); i++) {
    ((void (*)(const void*, const std::vector<void*>&))args[2])(&(*i), args);
  }
  return 0;
}

void* __std__vector_G4Elementp__dict::method_x9( void* o, const std::vector<void*>& args, void*)
{
  std::vector<G4Element*>* v = (std::vector<G4Element*>*)o;
  size_t n = *(size_t*)args[1];
  if (n > 0) {
    v->resize(n);
    for(size_t i = 0; i < n; i++) {
      ((void (*)(const void*, const std::vector<void*>&))args[2])(&(*v)[i], args);
    }
  }
  return 0;
}

void* __std__vector_G4Elementp__dict::method_x10( void*, const std::vector<void*>&, void*)
{
  return seal::reflex::Proxy< ::std::vector<G4Element*> >::generate();
}

//------Dictionary for class G4Element -------------------------------
class __G4Element_dict { 
  public:
  __G4Element_dict();
  static void * constructor_5020(void*, const std::vector<void*>&, void*);
  static void * constructor_5021(void*, const std::vector<void*>&, void*);
  static void * method_5022(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Element*)o)->~G4Element(); return 0;}
  static void * method_5024(void*, const std::vector<void*>&, void*);
  static void * method_5025(void*, const std::vector<void*>&, void*);
  static void * method_5026(void*, const std::vector<void*>&, void*);
  static void * method_5027(void*, const std::vector<void*>&, void*);
  static void * method_5028(void*, const std::vector<void*>&, void*);
  static void * method_5029(void*, const std::vector<void*>&, void*);
  static void * method_5030(void*, const std::vector<void*>&, void*);
  static void * method_5031(void*, const std::vector<void*>&, void*);
  static void * method_5032(void*, const std::vector<void*>&, void*);
  static void * method_5033(void*, const std::vector<void*>&, void*);
  static void * method_5034(void*, const std::vector<void*>&, void*);
  static void * method_5035(void*, const std::vector<void*>&, void*);
  static void * method_5036(void*, const std::vector<void*>&, void*);
  static void * method_5037(void*, const std::vector<void*>&, void*);
  static void * method_5038(void*, const std::vector<void*>&, void*);
  static void * method_5039(void*, const std::vector<void*>&, void*);
  static void * method_5040(void*, const std::vector<void*>&, void*);
  static void * method_5041(void*, const std::vector<void*>&, void*);
  static void * method_5042(void*, const std::vector<void*>&, void*);
  static void * method_5043(void*, const std::vector<void*>&, void*);
  static void * method_5044(void*, const std::vector<void*>&, void*);
  static void * operator_5045(void*, const std::vector<void*>&, void*);
  static void * operator_5046(void*, const std::vector<void*>&, void*);
};


__G4Element_dict::__G4Element_dict() {
  ClassBuilder< ::G4Element >("G4Element", PUBLIC | VIRTUAL)
  .addDataMember(type_466, "fName", OffsetOf(::G4Element, fName), PRIVATE)
  .addDataMember(type_466, "fSymbol", OffsetOf(::G4Element, fSymbol), PRIVATE)
  .addDataMember(type_567, "fZeff", OffsetOf(::G4Element, fZeff), PRIVATE)
  .addDataMember(type_567, "fNeff", OffsetOf(::G4Element, fNeff), PRIVATE)
  .addDataMember(type_567, "fAeff", OffsetOf(::G4Element, fAeff), PRIVATE)
  .addDataMember(type_565, "fNbOfAtomicShells", OffsetOf(::G4Element, fNbOfAtomicShells), PRIVATE)
  .addDataMember(type_3895, "fAtomicShells", OffsetOf(::G4Element, fAtomicShells), PRIVATE)
  .addDataMember(type_1555, "fNumberOfIsotopes", OffsetOf(::G4Element, fNumberOfIsotopes), PRIVATE)
  .addDataMember(type_12036, "theIsotopeVector", OffsetOf(::G4Element, theIsotopeVector), PRIVATE)
  .addDataMember(type_3895, "fRelativeAbundanceVector", OffsetOf(::G4Element, fRelativeAbundanceVector), PRIVATE)
  .addDataMember(type_565, "fCountUse", OffsetOf(::G4Element, fCountUse), PRIVATE)
  .addDataMember(type_1555, "fIndexInTable", OffsetOf(::G4Element, fIndexInTable), PRIVATE)
  .addDataMember(type_567, "fCoulomb", OffsetOf(::G4Element, fCoulomb), PRIVATE)
  .addDataMember(type_567, "fRadTsai", OffsetOf(::G4Element, fRadTsai), PRIVATE)
  .addDataMember(type_12037, "fIonisation", OffsetOf(::G4Element, fIonisation), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_9169, type_567, type_567), "G4Element", constructor_5020, 0, "name;symbol;Zeff;Aeff", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_9169, type_565), "G4Element", constructor_5021, 0, "name;symbol;nbIsotopes", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_5055, type_567), "AddIsotope", method_5022, 0, "isotope;RelativeAbundance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Element", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_5024, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetSymbol", method_5025, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZ", method_5026, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetN", method_5027, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetA", method_5028, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNbOfAtomicShells", method_5029, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_565), "GetAtomicShell", method_5030, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetNumberOfIsotopes", method_5031, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12036), "GetIsotopeVector", method_5032, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3895), "GetRelativeAbundanceVector", method_5033, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12038, type_565), "GetIsotope", method_5034, 0, "iso", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12039), "GetElementTable", method_5035, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetNumberOfElements", method_5036, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetIndex", method_5037, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4753, type_466), "GetElement", method_5038, 0, "name", PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCountUse", method_5039, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "increaseCountUse", method_5040, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "decreaseCountUse", method_5041, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetfCoulomb", method_5042, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetfRadTsai", method_5043, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12037), "GetIonisation", method_5044, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12040), "operator==", operator_5045, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12040), "operator!=", operator_5046, 0, "", PUBLIC | OPERATOR);
}

//------Stub functions for class G4Element -------------------------------
void* __G4Element_dict::constructor_5020( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Element(*(const ::G4String*)arg[0],
                                *(const ::G4String*)arg[1],
                                *(double*)arg[2],
                                *(double*)arg[3]);
}

void* __G4Element_dict::constructor_5021( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Element(*(const ::G4String*)arg[0],
                                *(const ::G4String*)arg[1],
                                *(int*)arg[2]);
}

void* __G4Element_dict::method_5022( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Element*)o)->AddIsotope((::G4Isotope*)arg[0],
                                *(double*)arg[1]);
  return 0;
}

void* __G4Element_dict::method_5024( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Element*)o)->GetName());
}

void* __G4Element_dict::method_5025( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Element*)o)->GetSymbol());
}

void* __G4Element_dict::method_5026( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetZ();
  return &ret;
}

void* __G4Element_dict::method_5027( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetN();
  return &ret;
}

void* __G4Element_dict::method_5028( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetA();
  return &ret;
}

void* __G4Element_dict::method_5029( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Element*)o)->GetNbOfAtomicShells();
  return &ret;
}

void* __G4Element_dict::method_5030( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetAtomicShell(*(int*)arg[0]);
  return &ret;
}

void* __G4Element_dict::method_5031( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4Element*)o)->GetNumberOfIsotopes();
  return &ret;
}

void* __G4Element_dict::method_5032( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Element*)o)->GetIsotopeVector();
}

void* __G4Element_dict::method_5033( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Element*)o)->GetRelativeAbundanceVector();
}

void* __G4Element_dict::method_5034( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4Element*)o)->GetIsotope(*(int*)arg[0]);
}

void* __G4Element_dict::method_5035( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4Element*)o)->GetElementTable();
}

void* __G4Element_dict::method_5036( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((::G4Element*)o)->GetNumberOfElements();
  return &ret;
}

void* __G4Element_dict::method_5037( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4Element*)o)->GetIndex();
  return &ret;
}

void* __G4Element_dict::method_5038( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4Element*)o)->GetElement(*(::G4String*)arg[0]);
}

void* __G4Element_dict::method_5039( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Element*)o)->GetCountUse();
  return &ret;
}

void* __G4Element_dict::method_5040( void* o, const std::vector<void*>&, void*)
{
  ((::G4Element*)o)->increaseCountUse();
  return 0;
}

void* __G4Element_dict::method_5041( void* o, const std::vector<void*>&, void*)
{
  ((::G4Element*)o)->decreaseCountUse();
  return 0;
}

void* __G4Element_dict::method_5042( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetfCoulomb();
  return &ret;
}

void* __G4Element_dict::method_5043( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Element*)o)->GetfRadTsai();
  return &ret;
}

void* __G4Element_dict::method_5044( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Element*)o)->GetIonisation();
}

void* __G4Element_dict::operator_5045( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Element*)o)->operator==(*(const ::G4Element*)arg[0]);
  return &ret;
}

void* __G4Element_dict::operator_5046( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Element*)o)->operator!=(*(const ::G4Element*)arg[0]);
  return &ret;
}

//------Dictionary for class Hep3Vector -------------------------------
class __CLHEP__Hep3Vector_dict { 
  public:
  __CLHEP__Hep3Vector_dict();
  static void * constructor_5432(void*, const std::vector<void*>&, void*);
  static void * constructor_5433(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::CLHEP::Hep3Vector*)o)->~Hep3Vector(); return 0;}
  static void * operator_5435(void*, const std::vector<void*>&, void*);
  static void * operator_5436(void*, const std::vector<void*>&, void*);
  static void * operator_5437(void*, const std::vector<void*>&, void*);
  static void * operator_5438(void*, const std::vector<void*>&, void*);
  static void * method_5439(void*, const std::vector<void*>&, void*);
  static void * method_5440(void*, const std::vector<void*>&, void*);
  static void * method_5441(void*, const std::vector<void*>&, void*);
  static void * method_5442(void*, const std::vector<void*>&, void*);
  static void * method_5443(void*, const std::vector<void*>&, void*);
  static void * method_5444(void*, const std::vector<void*>&, void*);
  static void * method_5445(void*, const std::vector<void*>&, void*);
  static void * method_5446(void*, const std::vector<void*>&, void*);
  static void * method_5447(void*, const std::vector<void*>&, void*);
  static void * method_5448(void*, const std::vector<void*>&, void*);
  static void * method_5449(void*, const std::vector<void*>&, void*);
  static void * method_5450(void*, const std::vector<void*>&, void*);
  static void * method_5451(void*, const std::vector<void*>&, void*);
  static void * method_5452(void*, const std::vector<void*>&, void*);
  static void * method_5453(void*, const std::vector<void*>&, void*);
  static void * method_5454(void*, const std::vector<void*>&, void*);
  static void * method_5455(void*, const std::vector<void*>&, void*);
  static void * method_5456(void*, const std::vector<void*>&, void*);
  static void * method_5457(void*, const std::vector<void*>&, void*);
  static void * method_5458(void*, const std::vector<void*>&, void*);
  static void * method_5459(void*, const std::vector<void*>&, void*);
  static void * method_5460(void*, const std::vector<void*>&, void*);
  static void * operator_5461(void*, const std::vector<void*>&, void*);
  static void * operator_5462(void*, const std::vector<void*>&, void*);
  static void * operator_5463(void*, const std::vector<void*>&, void*);
  static void * method_5464(void*, const std::vector<void*>&, void*);
  static void * method_5465(void*, const std::vector<void*>&, void*);
  static void * method_5466(void*, const std::vector<void*>&, void*);
  static void * operator_5467(void*, const std::vector<void*>&, void*);
  static void * operator_5468(void*, const std::vector<void*>&, void*);
  static void * operator_5469(void*, const std::vector<void*>&, void*);
  static void * operator_5470(void*, const std::vector<void*>&, void*);
  static void * operator_5471(void*, const std::vector<void*>&, void*);
  static void * method_5472(void*, const std::vector<void*>&, void*);
  static void * method_5473(void*, const std::vector<void*>&, void*);
  static void * method_5474(void*, const std::vector<void*>&, void*);
  static void * method_5475(void*, const std::vector<void*>&, void*);
  static void * method_5476(void*, const std::vector<void*>&, void*);
  static void * method_5477(void*, const std::vector<void*>&, void*);
  static void * method_5478(void*, const std::vector<void*>&, void*);
  static void * method_5479(void*, const std::vector<void*>&, void*);
  static void * method_5480(void*, const std::vector<void*>&, void*);
  static void * method_5481(void*, const std::vector<void*>&, void*);
  static void * method_5482(void*, const std::vector<void*>&, void*);
  static void * method_5483(void*, const std::vector<void*>&, void*);
  static void * method_5484(void*, const std::vector<void*>&, void*);
  static void * operator_5485(void*, const std::vector<void*>&, void*);
  static void * method_5486(void*, const std::vector<void*>&, void*);
  static void * method_5487(void*, const std::vector<void*>&, void*);
  static void * method_5488(void*, const std::vector<void*>&, void*);
  static void * method_5489(void*, const std::vector<void*>&, void*);
  static void * method_5490(void*, const std::vector<void*>&, void*);
  static void * method_5491(void*, const std::vector<void*>&, void*);
  static void * method_5492(void*, const std::vector<void*>&, void*);
  static void * method_5493(void*, const std::vector<void*>&, void*);
  static void * method_5494(void*, const std::vector<void*>&, void*);
  static void * method_5495(void*, const std::vector<void*>&, void*);
  static void * method_5496(void*, const std::vector<void*>&, void*);
  static void * method_5497(void*, const std::vector<void*>&, void*);
  static void * method_5498(void*, const std::vector<void*>&, void*);
  static void * method_5499(void*, const std::vector<void*>&, void*);
  static void * method_5500(void*, const std::vector<void*>&, void*);
  static void * method_5501(void*, const std::vector<void*>&, void*);
  static void * method_5502(void*, const std::vector<void*>&, void*);
  static void * method_5503(void*, const std::vector<void*>&, void*);
  static void * method_5504(void*, const std::vector<void*>&, void*);
  static void * method_5505(void*, const std::vector<void*>&, void*);
  static void * operator_5506(void*, const std::vector<void*>&, void*);
  static void * operator_5507(void*, const std::vector<void*>&, void*);
  static void * operator_5508(void*, const std::vector<void*>&, void*);
  static void * operator_5509(void*, const std::vector<void*>&, void*);
  static void * method_5510(void*, const std::vector<void*>&, void*);
  static void * method_5511(void*, const std::vector<void*>&, void*);
  static void * method_5512(void*, const std::vector<void*>&, void*);
  static void * method_5513(void*, const std::vector<void*>&, void*);
  static void * method_5514(void*, const std::vector<void*>&, void*);
  static void * method_5515(void*, const std::vector<void*>&, void*);
  static void * method_5516(void*, const std::vector<void*>&, void*);
  static void * method_5517(void*, const std::vector<void*>&, void*);
  static void * method_5518(void*, const std::vector<void*>&, void*);
  static void * method_5519(void*, const std::vector<void*>&, void*);
  static void * method_5520(void*, const std::vector<void*>&, void*);
  static void * method_5521(void*, const std::vector<void*>&, void*);
  static void * method_5522(void*, const std::vector<void*>&, void*);
  static void * method_5523(void*, const std::vector<void*>&, void*);
  static void * method_5524(void*, const std::vector<void*>&, void*);
  static void * method_5525(void*, const std::vector<void*>&, void*);
  static void * method_5526(void*, const std::vector<void*>&, void*);
  static void * method_5527(void*, const std::vector<void*>&, void*);
  static void * method_5528(void*, const std::vector<void*>&, void*);
  static void * method_5529(void*, const std::vector<void*>&, void*);
  static void * method_5530(void*, const std::vector<void*>&, void*);
  static void * method_5531(void*, const std::vector<void*>&, void*);
  static void * method_5532(void*, const std::vector<void*>&, void*);
  static void * method_5533(void*, const std::vector<void*>&, void*);
  static void * method_5534(void*, const std::vector<void*>&, void*);
  static void * method_5535(void*, const std::vector<void*>&, void*);
  static void * method_5536(void*, const std::vector<void*>&, void*);
  static void * method_5537(void*, const std::vector<void*>&, void*);
  static void * method_5538(void*, const std::vector<void*>&, void*);
  static void * method_5539(void*, const std::vector<void*>&, void*);
  static void * constructor_x11(void*, const std::vector<void*>&, void*);
};


__CLHEP__Hep3Vector_dict::__CLHEP__Hep3Vector_dict() {
  ClassBuilder< ::CLHEP::Hep3Vector >("CLHEP::Hep3Vector", PUBLIC)
  .addDataMember(type_426, "dx", OffsetOf(::CLHEP::Hep3Vector, dx), PROTECTED)
  .addDataMember(type_426, "dy", OffsetOf(::CLHEP::Hep3Vector, dy), PROTECTED)
  .addDataMember(type_426, "dz", OffsetOf(::CLHEP::Hep3Vector, dz), PROTECTED)
  .addEnum("UnnamedEnum_77", "X=0;Y=1;Z=2;NUM_COORDINATES=3;SIZE=3", &typeid(UnnamedEnum))
  .addEnum("UnnamedEnum_78", "ToleranceTicks=100", &typeid(UnnamedEnum))
  .addFunctionMember(FunctionTypeBuilder(type_void, type_426, type_426, type_426), "Hep3Vector", constructor_5432, 0, "x=0.0;y=0.0;z=0.0", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12149), "Hep3Vector", constructor_5433, 0, "p", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~Hep3Vector", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_426, type_424), "operator()", operator_5435, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_424), "operator[]", operator_5436, 0, "i", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9230, type_424), "operator()", operator_5437, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9230, type_424), "operator[]", operator_5438, 0, "i", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426), "x", method_5439, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "y", method_5440, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "z", method_5441, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setX", method_5442, 0, "x", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setY", method_5443, 0, "y", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setZ", method_5444, 0, "z", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "set", method_5445, 0, "x;y;z", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "phi", method_5446, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "theta", method_5447, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "cosTheta", method_5448, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "cos2Theta", method_5449, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "mag2", method_5450, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "mag", method_5451, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setPhi", method_5452, 0, "ph", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setTheta", method_5453, 0, "th", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setMag", method_5454, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "perp2", method_5455, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "perp", method_5456, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setPerp", method_5457, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setCylTheta", method_5458, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "perp2", method_5459, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "perp", method_5460, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12149), "operator=", operator_5461, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator==", operator_5462, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator!=", operator_5463, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149, type_426), "isNear", method_5464, 0, ";epsilon=CLHEP::Hep3Vector::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "howNear", method_5465, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "deltaR", method_5466, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12149), "operator+=", operator_5467, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12149), "operator-=", operator_5468, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_295), "operator-", operator_5469, 0, 0, PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426), "operator*=", operator_5470, 0, "a", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426), "operator/=", operator_5471, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_295), "unit", method_5472, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "orthogonal", method_5473, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "dot", method_5474, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295, type_12149), "cross", method_5475, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "angle", method_5476, 0, "q", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "pseudoRapidity", method_5477, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setEta", method_5478, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setCylEta", method_5479, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426), "rotateX", method_5480, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426), "rotateY", method_5481, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426), "rotateZ", method_5482, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12149), "rotateUz", method_5483, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426, type_12149), "rotate", method_5484, 0, ";", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12151), "operator*=", operator_5485, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12151), "transform", method_5486, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "setRThetaPhi", method_5487, 0, "r;theta;phi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "setREtaPhi", method_5488, 0, "r;eta;phi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "setRhoPhiZ", method_5489, 0, "rho;phi;z", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "setRhoPhiTheta", method_5490, 0, "rho;phi;theta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426, type_426), "setRhoPhiEta", method_5491, 0, "rho;phi;eta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getX", method_5492, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getY", method_5493, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getZ", method_5494, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getR", method_5495, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getTheta", method_5496, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getPhi", method_5497, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "r", method_5498, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "rho", method_5499, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getRho", method_5500, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "eta", method_5501, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getEta", method_5502, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setR", method_5503, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setRho", method_5504, 0, "rho", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_12149), "compare", method_5505, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator>", operator_5506, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator<", operator_5507, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator>=", operator_5508, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149), "operator<=", operator_5509, 0, "v", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "diff2", method_5510, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_426), "setTolerance", method_5511, 0, "tol", PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getTolerance", method_5512, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149, type_426), "isParallel", method_5513, 0, "v;epsilon=CLHEP::Hep3Vector::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12149, type_426), "isOrthogonal", method_5514, 0, "v;epsilon=CLHEP::Hep3Vector::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "howParallel", method_5515, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "howOrthogonal", method_5516, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "beta", method_5517, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "gamma", method_5518, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "coLinearRapidity", method_5519, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "angle", method_5520, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "theta", method_5521, 0, "q", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "cosTheta", method_5522, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "cos2Theta", method_5523, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "project", method_5524, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295, type_12149), "project", method_5525, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "perpPart", method_5526, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295, type_12149), "perpPart", method_5527, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "rapidity", method_5528, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "rapidity", method_5529, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "eta", method_5530, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "polarAngle", method_5531, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "deltaPhi", method_5532, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149), "azimAngle", method_5533, 0, "v2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149, type_12149), "polarAngle", method_5534, 0, "v2;ref", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12149, type_12149), "azimAngle", method_5535, 0, "v2;ref", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12149, type_426), "rotate", method_5536, 0, "axis;delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12152), "rotate", method_5537, 0, "ax", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_12153), "rotate", method_5538, 0, "e", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12150, type_426, type_426, type_426), "rotate", method_5539, 0, "phi;theta;psi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "Hep3Vector", constructor_x11, 0, 0, PUBLIC | CONSTRUCTOR);
}

//------Stub functions for class Hep3Vector -------------------------------
void* __CLHEP__Hep3Vector_dict::constructor_5432( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 0 ) {
    return ::new(mem) ::CLHEP::Hep3Vector();
  }
  else if ( arg.size() == 1 ) { 
    return ::new(mem) ::CLHEP::Hep3Vector(*(double*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return ::new(mem) ::CLHEP::Hep3Vector(*(double*)arg[0],
                                        *(double*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::CLHEP::Hep3Vector(*(double*)arg[0],
                                        *(double*)arg[1],
                                        *(double*)arg[2]);
  }
  return 0;
}

void* __CLHEP__Hep3Vector_dict::constructor_5433( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::Hep3Vector(*(const ::CLHEP::Hep3Vector*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5435( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator()(*(int*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5436( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator[](*(int*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5437( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator()(*(int*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5438( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator[](*(int*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5439( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->x();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5440( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->y();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5441( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->z();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5442( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setX(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5443( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setY(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5444( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setZ(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5445( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->set(*(double*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5446( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->phi();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5447( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->theta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5448( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->cosTheta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5449( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->cos2Theta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5450( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->mag2();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5451( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->mag();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5452( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setPhi(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5453( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setTheta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5454( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setMag(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5455( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->perp2();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5456( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->perp();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5457( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setPerp(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5458( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setCylTheta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5459( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->perp2(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5460( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->perp(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5461( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator=(*(const ::CLHEP::Hep3Vector*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5462( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator==(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5463( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator!=(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5464( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::Hep3Vector*)o)->isNear(*(const ::CLHEP::Hep3Vector*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::Hep3Vector*)o)->isNear(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                  *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5465( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->howNear(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5466( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->deltaR(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5467( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator+=(*(const ::CLHEP::Hep3Vector*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5468( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator-=(*(const ::CLHEP::Hep3Vector*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5469( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->operator-());
}

void* __CLHEP__Hep3Vector_dict::operator_5470( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator*=(*(double*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::operator_5471( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator/=(*(double*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5472( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->unit());
}

void* __CLHEP__Hep3Vector_dict::method_5473( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->orthogonal());
}

void* __CLHEP__Hep3Vector_dict::method_5474( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->dot(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5475( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->cross(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __CLHEP__Hep3Vector_dict::method_5476( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->angle(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5477( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->pseudoRapidity();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5478( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setEta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5479( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setCylEta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5480( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotateX(*(double*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5481( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotateY(*(double*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5482( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotateZ(*(double*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5483( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotateUz(*(const ::CLHEP::Hep3Vector*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5484( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotate(*(double*)arg[0],
                                                   *(const ::CLHEP::Hep3Vector*)arg[1]);
}

void* __CLHEP__Hep3Vector_dict::operator_5485( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->operator*=(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5486( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->transform(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5487( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setRThetaPhi(*(double*)arg[0],
                                          *(double*)arg[1],
                                          *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5488( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setREtaPhi(*(double*)arg[0],
                                        *(double*)arg[1],
                                        *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5489( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setRhoPhiZ(*(double*)arg[0],
                                        *(double*)arg[1],
                                        *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5490( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setRhoPhiTheta(*(double*)arg[0],
                                            *(double*)arg[1],
                                            *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5491( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setRhoPhiEta(*(double*)arg[0],
                                          *(double*)arg[1],
                                          *(double*)arg[2]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5492( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getX();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5493( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getY();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5494( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getZ();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5495( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getR();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5496( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getTheta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5497( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getPhi();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5498( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->r();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5499( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->rho();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5500( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getRho();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5501( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->eta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5502( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->getEta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5503( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setR(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5504( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::Hep3Vector*)o)->setRho(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5505( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->compare(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5506( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator>(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5507( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator<(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5508( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator>=(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::operator_5509( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->operator<=(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5510( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->diff2(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5511( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::CLHEP::Hep3Vector*)o)->setTolerance(*(double*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5512( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::CLHEP::Hep3Vector*)o)->getTolerance();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5513( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::Hep3Vector*)o)->isParallel(*(const ::CLHEP::Hep3Vector*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::Hep3Vector*)o)->isParallel(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                      *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5514( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::Hep3Vector*)o)->isOrthogonal(*(const ::CLHEP::Hep3Vector*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::Hep3Vector*)o)->isOrthogonal(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__Hep3Vector_dict::method_5515( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->howParallel(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5516( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->howOrthogonal(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5517( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->beta();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5518( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->gamma();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5519( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->coLinearRapidity();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5520( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->angle();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5521( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->theta(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5522( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->cosTheta(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5523( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->cos2Theta(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5524( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->project());
}

void* __CLHEP__Hep3Vector_dict::method_5525( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->project(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __CLHEP__Hep3Vector_dict::method_5526( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->perpPart());
}

void* __CLHEP__Hep3Vector_dict::method_5527( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::Hep3Vector*)o)->perpPart(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __CLHEP__Hep3Vector_dict::method_5528( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->rapidity();
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5529( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->rapidity(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5530( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->eta(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5531( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->polarAngle(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5532( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->deltaPhi(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5533( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->azimAngle(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5534( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->polarAngle(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5535( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::Hep3Vector*)o)->azimAngle(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                   *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __CLHEP__Hep3Vector_dict::method_5536( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotate(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                   *(double*)arg[1]);
}

void* __CLHEP__Hep3Vector_dict::method_5537( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotate(*(const ::CLHEP::HepAxisAngle*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5538( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotate(*(const ::CLHEP::HepEulerAngles*)arg[0]);
}

void* __CLHEP__Hep3Vector_dict::method_5539( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::Hep3Vector*)o)->rotate(*(double*)arg[0],
                                                   *(double*)arg[1],
                                                   *(double*)arg[2]);
}

void* __CLHEP__Hep3Vector_dict::constructor_x11( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::CLHEP::Hep3Vector();
}

//------Dictionary for class G4UserSteppingAction -------------------------------
class __G4UserSteppingAction_dict { 
  public:
  __G4UserSteppingAction_dict();
  static void * constructor_6085(void*, const std::vector<void*>&, void*);
  static void * constructor_6086(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserSteppingAction*)o)->~G4UserSteppingAction(); return 0;}
  static void * method_6088(void*, const std::vector<void*>&, void*);
  static void * method_6089(void*, const std::vector<void*>&, void*);
};


__G4UserSteppingAction_dict::__G4UserSteppingAction_dict() {
  ClassBuilder< ::G4UserSteppingAction >("G4UserSteppingAction", PUBLIC | VIRTUAL)
  .addDataMember(type_11197, "fpSteppingManager", OffsetOf(::G4UserSteppingAction, fpSteppingManager), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12355), "G4UserSteppingAction", constructor_6085, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserSteppingAction", constructor_6086, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserSteppingAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11197), "SetSteppingManagerPointer", method_6088, 0, "pValue", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11843), "UserSteppingAction", method_6089, 0, "", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4UserSteppingAction -------------------------------
void* __G4UserSteppingAction_dict::constructor_6085( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserSteppingAction(*(const ::G4UserSteppingAction*)arg[0]);
}

void* __G4UserSteppingAction_dict::constructor_6086( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserSteppingAction();
}

void* __G4UserSteppingAction_dict::method_6088( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserSteppingAction*)o)->SetSteppingManagerPointer((::G4SteppingManager*)arg[0]);
  return 0;
}

void* __G4UserSteppingAction_dict::method_6089( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserSteppingAction*)o)->UserSteppingAction((const ::G4Step*)arg[0]);
  return 0;
}

//------Dictionary for class G4UserTrackingAction -------------------------------
class __G4UserTrackingAction_dict { 
  public:
  __G4UserTrackingAction_dict();
  static void * constructor_6091(void*, const std::vector<void*>&, void*);
  static void * constructor_6092(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserTrackingAction*)o)->~G4UserTrackingAction(); return 0;}
  static void * method_6094(void*, const std::vector<void*>&, void*);
  static void * method_6095(void*, const std::vector<void*>&, void*);
  static void * method_6096(void*, const std::vector<void*>&, void*);
};


__G4UserTrackingAction_dict::__G4UserTrackingAction_dict() {
  ClassBuilder< ::G4UserTrackingAction >("G4UserTrackingAction", PUBLIC | VIRTUAL)
  .addDataMember(type_10899, "fpTrackingManager", OffsetOf(::G4UserTrackingAction, fpTrackingManager), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12356), "G4UserTrackingAction", constructor_6091, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserTrackingAction", constructor_6092, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserTrackingAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10899), "SetTrackingManagerPointer", method_6094, 0, "pValue", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11349), "PreUserTrackingAction", method_6095, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11349), "PostUserTrackingAction", method_6096, 0, "", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4UserTrackingAction -------------------------------
void* __G4UserTrackingAction_dict::constructor_6091( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserTrackingAction(*(const ::G4UserTrackingAction*)arg[0]);
}

void* __G4UserTrackingAction_dict::constructor_6092( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserTrackingAction();
}

void* __G4UserTrackingAction_dict::method_6094( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserTrackingAction*)o)->SetTrackingManagerPointer((::G4TrackingManager*)arg[0]);
  return 0;
}

void* __G4UserTrackingAction_dict::method_6095( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserTrackingAction*)o)->PreUserTrackingAction((const ::G4Track*)arg[0]);
  return 0;
}

void* __G4UserTrackingAction_dict::method_6096( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserTrackingAction*)o)->PostUserTrackingAction((const ::G4Track*)arg[0]);
  return 0;
}

//------Dictionary for class G4UserStackingAction -------------------------------
class __G4UserStackingAction_dict { 
  public:
  __G4UserStackingAction_dict();
  static void * constructor_6098(void*, const std::vector<void*>&, void*);
  static void * constructor_6099(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserStackingAction*)o)->~G4UserStackingAction(); return 0;}
  static void * method_6101(void*, const std::vector<void*>&, void*);
  static void * method_6102(void*, const std::vector<void*>&, void*);
  static void * method_6103(void*, const std::vector<void*>&, void*);
  static void * method_6104(void*, const std::vector<void*>&, void*);
};


__G4UserStackingAction_dict::__G4UserStackingAction_dict() {
  ClassBuilder< ::G4UserStackingAction >("G4UserStackingAction", PUBLIC | VIRTUAL)
  .addDataMember(type_10898, "stackManager", OffsetOf(::G4UserStackingAction, stackManager), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12357), "G4UserStackingAction", constructor_6098, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserStackingAction", constructor_6099, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserStackingAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10898), "SetStackManager", method_6101, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_307, type_11349), "ClassifyNewTrack", method_6102, 0, "aTrack", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "NewStage", method_6103, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PrepareNewEvent", method_6104, 0, 0, PUBLIC | VIRTUAL);
}

//------Stub functions for class G4UserStackingAction -------------------------------
void* __G4UserStackingAction_dict::constructor_6098( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserStackingAction(*(const ::G4UserStackingAction*)arg[0]);
}

void* __G4UserStackingAction_dict::constructor_6099( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserStackingAction();
}

void* __G4UserStackingAction_dict::method_6101( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserStackingAction*)o)->SetStackManager((::G4StackManager*)arg[0]);
  return 0;
}

void* __G4UserStackingAction_dict::method_6102( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((::G4UserStackingAction*)o)->ClassifyNewTrack((const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserStackingAction_dict::method_6103( void* o, const std::vector<void*>&, void*)
{
  ((::G4UserStackingAction*)o)->NewStage();
  return 0;
}

void* __G4UserStackingAction_dict::method_6104( void* o, const std::vector<void*>&, void*)
{
  ((::G4UserStackingAction*)o)->PrepareNewEvent();
  return 0;
}

//------Dictionary for class G4UserEventAction -------------------------------
class __G4UserEventAction_dict { 
  public:
  __G4UserEventAction_dict();
  static void * constructor_6106(void*, const std::vector<void*>&, void*);
  static void * constructor_6107(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserEventAction*)o)->~G4UserEventAction(); return 0;}
  static void * method_6109(void*, const std::vector<void*>&, void*);
  static void * method_6110(void*, const std::vector<void*>&, void*);
  static void * method_6111(void*, const std::vector<void*>&, void*);
};


__G4UserEventAction_dict::__G4UserEventAction_dict() {
  ClassBuilder< ::G4UserEventAction >("G4UserEventAction", PUBLIC | VIRTUAL)
  .addDataMember(type_10759, "fpEventManager", OffsetOf(::G4UserEventAction, fpEventManager), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12358), "G4UserEventAction", constructor_6106, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserEventAction", constructor_6107, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserEventAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10759), "SetEventManager", method_6109, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10784), "BeginOfEventAction", method_6110, 0, "anEvent", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10784), "EndOfEventAction", method_6111, 0, "anEvent", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4UserEventAction -------------------------------
void* __G4UserEventAction_dict::constructor_6106( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserEventAction(*(const ::G4UserEventAction*)arg[0]);
}

void* __G4UserEventAction_dict::constructor_6107( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserEventAction();
}

void* __G4UserEventAction_dict::method_6109( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserEventAction*)o)->SetEventManager((::G4EventManager*)arg[0]);
  return 0;
}

void* __G4UserEventAction_dict::method_6110( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserEventAction*)o)->BeginOfEventAction((const ::G4Event*)arg[0]);
  return 0;
}

void* __G4UserEventAction_dict::method_6111( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserEventAction*)o)->EndOfEventAction((const ::G4Event*)arg[0]);
  return 0;
}

//------Dictionary for class G4VUserPrimaryGeneratorAction -------------------------------
class __G4VUserPrimaryGeneratorAction_dict { 
  public:
  __G4VUserPrimaryGeneratorAction_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VUserPrimaryGeneratorAction*)o)->~G4VUserPrimaryGeneratorAction(); return 0;}
  static void * method_6115(void*, const std::vector<void*>&, void*);
};


__G4VUserPrimaryGeneratorAction_dict::__G4VUserPrimaryGeneratorAction_dict() {
  ClassBuilder< ::G4VUserPrimaryGeneratorAction >("G4VUserPrimaryGeneratorAction", PUBLIC | ABSTRACT | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VUserPrimaryGeneratorAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10772), "GeneratePrimaries", method_6115, 0, "anEvent", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VUserPrimaryGeneratorAction -------------------------------
void* __G4VUserPrimaryGeneratorAction_dict::method_6115( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPrimaryGeneratorAction*)o)->GeneratePrimaries((::G4Event*)arg[0]);
  return 0;
}

//------Dictionary for class G4UserRunAction -------------------------------
class __G4UserRunAction_dict { 
  public:
  __G4UserRunAction_dict();
  static void * constructor_6116(void*, const std::vector<void*>&, void*);
  static void * constructor_6117(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserRunAction*)o)->~G4UserRunAction(); return 0;}
  static void * method_6119(void*, const std::vector<void*>&, void*);
  static void * method_6120(void*, const std::vector<void*>&, void*);
  static void * method_6121(void*, const std::vector<void*>&, void*);
};


__G4UserRunAction_dict::__G4UserRunAction_dict() {
  ClassBuilder< ::G4UserRunAction >("G4UserRunAction", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12360), "G4UserRunAction", constructor_6116, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserRunAction", constructor_6117, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserRunAction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_10771), "GenerateRun", method_6119, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10783), "BeginOfRunAction", method_6120, 0, "aRun", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10783), "EndOfRunAction", method_6121, 0, "aRun", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4UserRunAction -------------------------------
void* __G4UserRunAction_dict::constructor_6116( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserRunAction(*(const ::G4UserRunAction*)arg[0]);
}

void* __G4UserRunAction_dict::constructor_6117( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserRunAction();
}

void* __G4UserRunAction_dict::method_6119( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4UserRunAction*)o)->GenerateRun();
}

void* __G4UserRunAction_dict::method_6120( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserRunAction*)o)->BeginOfRunAction((const ::G4Run*)arg[0]);
  return 0;
}

void* __G4UserRunAction_dict::method_6121( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserRunAction*)o)->EndOfRunAction((const ::G4Run*)arg[0]);
  return 0;
}

//------Dictionary for class G4VUserPhysicsList -------------------------------
class __G4VUserPhysicsList_dict { 
  public:
  __G4VUserPhysicsList_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VUserPhysicsList*)o)->~G4VUserPhysicsList(); return 0;}
  static void * method_6138(void*, const std::vector<void*>&, void*);
  static void * method_6139(void*, const std::vector<void*>&, void*);
  static void * method_6140(void*, const std::vector<void*>&, void*);
  static void * method_6142(void*, const std::vector<void*>&, void*);
  static void * method_6143(void*, const std::vector<void*>&, void*);
  static void * method_6144(void*, const std::vector<void*>&, void*);
  static void * method_6145(void*, const std::vector<void*>&, void*);
  static void * method_6146(void*, const std::vector<void*>&, void*);
  static void * method_6147(void*, const std::vector<void*>&, void*);
  static void * method_6148(void*, const std::vector<void*>&, void*);
  static void * method_6149(void*, const std::vector<void*>&, void*);
  static void * method_6150(void*, const std::vector<void*>&, void*);
  static void * method_6151(void*, const std::vector<void*>&, void*);
  static void * method_6152(void*, const std::vector<void*>&, void*);
  static void * method_6153(void*, const std::vector<void*>&, void*);
  static void * method_6154(void*, const std::vector<void*>&, void*);
  static void * method_6155(void*, const std::vector<void*>&, void*);
  static void * method_6156(void*, const std::vector<void*>&, void*);
  static void * method_6157(void*, const std::vector<void*>&, void*);
  static void * method_6158(void*, const std::vector<void*>&, void*);
  static void * method_6159(void*, const std::vector<void*>&, void*);
  static void * method_6160(void*, const std::vector<void*>&, void*);
  static void * method_6161(void*, const std::vector<void*>&, void*);
  static void * method_6162(void*, const std::vector<void*>&, void*);
  static void * method_6163(void*, const std::vector<void*>&, void*);
  static void * method_6164(void*, const std::vector<void*>&, void*);
  static void * method_6165(void*, const std::vector<void*>&, void*);
  static void * method_6166(void*, const std::vector<void*>&, void*);
  static void * method_6167(void*, const std::vector<void*>&, void*);
  static void * method_6168(void*, const std::vector<void*>&, void*);
  static void * method_6169(void*, const std::vector<void*>&, void*);
  static void * method_6170(void*, const std::vector<void*>&, void*);
  static void * method_6174(void*, const std::vector<void*>&, void*);
  static void * method_6175(void*, const std::vector<void*>&, void*);
};


__G4VUserPhysicsList_dict::__G4VUserPhysicsList_dict() {
  ClassBuilder< ::G4VUserPhysicsList >("G4VUserPhysicsList", PUBLIC | ABSTRACT | VIRTUAL)
  .addDataMember(type_12159, "theParticleTable", OffsetOf(::G4VUserPhysicsList, theParticleTable), PROTECTED)
  .addDataMember(type_12162, "theParticleIterator", OffsetOf(::G4VUserPhysicsList, theParticleIterator), PROTECTED)
  .addDataMember(type_12361, "theMessenger", OffsetOf(::G4VUserPhysicsList, theMessenger), PROTECTED)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4VUserPhysicsList, verboseLevel), PROTECTED)
  .addDataMember(type_567, "defaultCutValue", OffsetOf(::G4VUserPhysicsList, defaultCutValue), PROTECTED)
  .addDataMember(type_10477, "fCutsTable", OffsetOf(::G4VUserPhysicsList, fCutsTable), PROTECTED)
  .addDataMember(type_564, "fRetrievePhysicsTable", OffsetOf(::G4VUserPhysicsList, fRetrievePhysicsTable), PROTECTED)
  .addDataMember(type_564, "fStoredInAscii", OffsetOf(::G4VUserPhysicsList, fStoredInAscii), PROTECTED)
  .addDataMember(type_564, "fIsCheckedForRetrievePhysicsTable", OffsetOf(::G4VUserPhysicsList, fIsCheckedForRetrievePhysicsTable), PROTECTED)
  .addDataMember(type_564, "fIsRestoredCutValues", OffsetOf(::G4VUserPhysicsList, fIsRestoredCutValues), PROTECTED)
  .addDataMember(type_466, "directoryPhysicsTable", OffsetOf(::G4VUserPhysicsList, directoryPhysicsTable), PROTECTED)
  .addDataMember(type_565, "fDisplayThreshold", OffsetOf(::G4VUserPhysicsList, fDisplayThreshold), PROTECTED)
  .addEnum("UnnamedEnum_92", "FixedStringLengthForStore=32", &typeid(UnnamedEnum))
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VUserPhysicsList", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ConstructParticle", method_6138, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "Construct", method_6139, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ConstructProcess", method_6140, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "SetCuts", method_6142, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetDefaultCutValue", method_6143, 0, "newCutValue", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDefaultCutValue", method_6144, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "BuildPhysicsTable", method_6145, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12111), "PreparePhysicsTable", method_6146, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12111), "BuildPhysicsTable", method_6147, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_9169), "StorePhysicsTable", method_6148, 0, "directory=\".\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsPhysicsTableRetrieved", method_6149, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsStoredInAscii", method_6150, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9169), "GetPhysicsTableDirectory", method_6151, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetPhysicsTableRetrieved", method_6152, 0, "directory=\"\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "SetStoredInAscii", method_6153, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ResetPhysicsTableRetrieved", method_6154, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ResetStoredInAscii", method_6155, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "DumpList", method_6156, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "DumpCutValuesTable", method_6157, 0, "nParticles=3", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "DumpCutValuesTableIfRequested", method_6158, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "DumpCutValues", method_6159, 0, "particle_name=\"ALL\"", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12111), "DumpCutValues", method_6160, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_6161, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetVerboseLevel", method_6162, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "SetCutsWithDefault", method_6163, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_9169), "SetCutValue", method_6164, 0, "aCut;pname", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_9169, type_9169), "SetCutValue", method_6165, 0, "aCut;pname;rname", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_12111, type_10646), "SetParticleCuts", method_6166, 0, "cut;particle;region=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_9169), "SetCutsForRegion", method_6167, 0, "aCut;rname", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ResetCuts", method_6168, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564, type_9169), "SetApplyCuts", method_6169, 0, "value;name", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_9169), "GetApplyCuts", method_6170, 0, "name", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "RemoveProcessManager", method_6174, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12111, type_12158), "AddProcessManager", method_6175, 0, "newParticle;newManager=0", PUBLIC);
}

//------Stub functions for class G4VUserPhysicsList -------------------------------
void* __G4VUserPhysicsList_dict::method_6138( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->ConstructParticle();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6139( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->Construct();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6140( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->ConstructProcess();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6142( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->SetCuts();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6143( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetDefaultCutValue(*(double*)arg[0]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6144( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4VUserPhysicsList*)o)->GetDefaultCutValue();
  return &ret;
}

void* __G4VUserPhysicsList_dict::method_6145( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->BuildPhysicsTable();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6146( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->PreparePhysicsTable((::G4ParticleDefinition*)arg[0]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6147( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->BuildPhysicsTable((::G4ParticleDefinition*)arg[0]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6148( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 0 ) {
    ret = ((::G4VUserPhysicsList*)o)->StorePhysicsTable();
    return &ret;
  }
  else if ( arg.size() == 1 ) { 
    ret = ((::G4VUserPhysicsList*)o)->StorePhysicsTable(*(const ::G4String*)arg[0]);
    return &ret;
  }
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6149( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4VUserPhysicsList*)o)->IsPhysicsTableRetrieved();
  return &ret;
}

void* __G4VUserPhysicsList_dict::method_6150( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4VUserPhysicsList*)o)->IsStoredInAscii();
  return &ret;
}

void* __G4VUserPhysicsList_dict::method_6151( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4VUserPhysicsList*)o)->GetPhysicsTableDirectory();
}

void* __G4VUserPhysicsList_dict::method_6152( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4VUserPhysicsList*)o)->SetPhysicsTableRetrieved();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4VUserPhysicsList*)o)->SetPhysicsTableRetrieved(*(const ::G4String*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6153( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->SetStoredInAscii();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6154( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->ResetPhysicsTableRetrieved();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6155( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->ResetStoredInAscii();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6156( void* o, const std::vector<void*>&, void*)
{
  ((const ::G4VUserPhysicsList*)o)->DumpList();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6157( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4VUserPhysicsList*)o)->DumpCutValuesTable();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4VUserPhysicsList*)o)->DumpCutValuesTable(*(int*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6158( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->DumpCutValuesTableIfRequested();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6159( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4VUserPhysicsList*)o)->DumpCutValues();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4VUserPhysicsList*)o)->DumpCutValues(*(const ::G4String*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6160( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->DumpCutValues((::G4ParticleDefinition*)arg[0]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6161( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6162( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4VUserPhysicsList*)o)->GetVerboseLevel();
  return &ret;
}

void* __G4VUserPhysicsList_dict::method_6163( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->SetCutsWithDefault();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6164( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetCutValue(*(double*)arg[0],
                                          *(const ::G4String*)arg[1]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6165( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetCutValue(*(double*)arg[0],
                                          *(const ::G4String*)arg[1],
                                          *(const ::G4String*)arg[2]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6166( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 2 ) {
    ((::G4VUserPhysicsList*)o)->SetParticleCuts(*(double*)arg[0],
                                                (::G4ParticleDefinition*)arg[1]);
    return 0;
  }
  else if ( arg.size() == 3 ) { 
    ((::G4VUserPhysicsList*)o)->SetParticleCuts(*(double*)arg[0],
                                                (::G4ParticleDefinition*)arg[1],
                                                (::G4Region*)arg[2]);
    return 0;
  }
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6167( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetCutsForRegion(*(double*)arg[0],
                                               *(const ::G4String*)arg[1]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6168( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->ResetCuts();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6169( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VUserPhysicsList*)o)->SetApplyCuts(*(bool*)arg[0],
                                           *(const ::G4String*)arg[1]);
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6170( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4VUserPhysicsList*)o)->GetApplyCuts(*(const ::G4String*)arg[0]);
  return &ret;
}

void* __G4VUserPhysicsList_dict::method_6174( void* o, const std::vector<void*>&, void*)
{
  ((::G4VUserPhysicsList*)o)->RemoveProcessManager();
  return 0;
}

void* __G4VUserPhysicsList_dict::method_6175( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    ((::G4VUserPhysicsList*)o)->AddProcessManager((::G4ParticleDefinition*)arg[0]);
    return 0;
  }
  else if ( arg.size() == 2 ) { 
    ((::G4VUserPhysicsList*)o)->AddProcessManager((::G4ParticleDefinition*)arg[0],
                                                  (::G4ProcessManager*)arg[1]);
    return 0;
  }
  return 0;
}

//------Dictionary for class G4PVPlacement -------------------------------
class __G4PVPlacement_dict { 
  public:
  __G4PVPlacement_dict();
  static void * constructor_6180(void*, const std::vector<void*>&, void*);
  static void * constructor_6181(void*, const std::vector<void*>&, void*);
  static void * constructor_6182(void*, const std::vector<void*>&, void*);
  static void * constructor_6183(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4PVPlacement*)o)->~G4PVPlacement(); return 0;}
  static void * method_6185(void*, const std::vector<void*>&, void*);
  static void * method_6186(void*, const std::vector<void*>&, void*);
  static void * method_6187(void*, const std::vector<void*>&, void*);
  static void * method_6188(void*, const std::vector<void*>&, void*);
  static void * method_6189(void*, const std::vector<void*>&, void*);
  static void * method_6190(void*, const std::vector<void*>&, void*);
  static void * method_6191(void*, const std::vector<void*>&, void*);
  static void* method_x12( void*, const std::vector<void*>&, void* ); 
};


__G4PVPlacement_dict::__G4PVPlacement_dict() {
  ClassBuilder< ::G4PVPlacement >("G4PVPlacement", PUBLIC | VIRTUAL)
  .addBase< ::G4VPhysicalVolume >(PUBLIC)
  .addDataMember(type_564, "fmany", OffsetOf(::G4PVPlacement, fmany), PRIVATE)
  .addDataMember(type_564, "fallocatedRotM", OffsetOf(::G4PVPlacement, fallocatedRotM), PRIVATE)
  .addDataMember(type_565, "fcopyNo", OffsetOf(::G4PVPlacement, fcopyNo), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11685, type_11354, type_10645, type_9169, type_10645, type_564, type_565), "G4PVPlacement", constructor_6180, 0, "pRot;tlate;pCurrentLogical;pName;pMotherLogical;pMany;pCopyNo", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12363, type_10645, type_9169, type_10645, type_564, type_565), "G4PVPlacement", constructor_6181, 0, "Transform3D;pCurrentLogical;pName;pMotherLogical;pMany;pCopyNo", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11685, type_11354, type_9169, type_10645, type_10743, type_564, type_565), "G4PVPlacement", constructor_6182, 0, "pRot;tlate;pName;pLogical;pMother;pMany;pCopyNo", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12363, type_9169, type_10645, type_10743, type_564, type_565), "G4PVPlacement", constructor_6183, 0, "Transform3D;pName;pLogical;pMother;pMany;pCopyNo", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4PVPlacement", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCopyNo", method_6185, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetCopyNo", method_6186, 0, "CopyNo", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsMany", method_6187, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsReplicated", method_6188, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsParameterised", method_6189, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12364), "GetParameterisation", method_6190, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12365, type_3399, type_3903, type_3903, type_11500), "GetReplicationData", method_6191, 0, "axis;nReplicas;width;offset;consuming", PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x12);
}

//------Stub functions for class G4PVPlacement -------------------------------
void* __G4PVPlacement_dict::constructor_6180( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVPlacement((::CLHEP::HepRotation*)arg[0],
                                    *(const ::CLHEP::Hep3Vector*)arg[1],
                                    (::G4LogicalVolume*)arg[2],
                                    *(const ::G4String*)arg[3],
                                    (::G4LogicalVolume*)arg[4],
                                    *(bool*)arg[5],
                                    *(int*)arg[6]);
}

void* __G4PVPlacement_dict::constructor_6181( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVPlacement(*(const ::HepGeom::Transform3D*)arg[0],
                                    (::G4LogicalVolume*)arg[1],
                                    *(const ::G4String*)arg[2],
                                    (::G4LogicalVolume*)arg[3],
                                    *(bool*)arg[4],
                                    *(int*)arg[5]);
}

void* __G4PVPlacement_dict::constructor_6182( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVPlacement((::CLHEP::HepRotation*)arg[0],
                                    *(const ::CLHEP::Hep3Vector*)arg[1],
                                    *(const ::G4String*)arg[2],
                                    (::G4LogicalVolume*)arg[3],
                                    (::G4VPhysicalVolume*)arg[4],
                                    *(bool*)arg[5],
                                    *(int*)arg[6]);
}

void* __G4PVPlacement_dict::constructor_6183( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVPlacement(*(const ::HepGeom::Transform3D*)arg[0],
                                    *(const ::G4String*)arg[1],
                                    (::G4LogicalVolume*)arg[2],
                                    (::G4VPhysicalVolume*)arg[3],
                                    *(bool*)arg[4],
                                    *(int*)arg[5]);
}

void* __G4PVPlacement_dict::method_6185( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4PVPlacement*)o)->GetCopyNo();
  return &ret;
}

void* __G4PVPlacement_dict::method_6186( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4PVPlacement*)o)->SetCopyNo(*(int*)arg[0]);
  return 0;
}

void* __G4PVPlacement_dict::method_6187( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVPlacement*)o)->IsMany();
  return &ret;
}

void* __G4PVPlacement_dict::method_6188( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVPlacement*)o)->IsReplicated();
  return &ret;
}

void* __G4PVPlacement_dict::method_6189( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVPlacement*)o)->IsParameterised();
  return &ret;
}

void* __G4PVPlacement_dict::method_6190( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4PVPlacement*)o)->GetParameterisation();
}

void* __G4PVPlacement_dict::method_6191( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4PVPlacement*)o)->GetReplicationData(*(::EAxis*)arg[0],
                                                  *(int*)arg[1],
                                                  *(double*)arg[2],
                                                  *(double*)arg[3],
                                                  *(bool*)arg[4]);
  return 0;
}

void* __G4PVPlacement_dict::method_x12( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VPhysicalVolume >(), seal::reflex::baseOffset< ::G4PVPlacement,::G4VPhysicalVolume >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4EllipticalTube -------------------------------
class __G4EllipticalTube_dict { 
  public:
  __G4EllipticalTube_dict();
  static void * constructor_6200(void*, const std::vector<void*>&, void*);
  static void * constructor_6201(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4EllipticalTube*)o)->~G4EllipticalTube(); return 0;}
  static void * method_6203(void*, const std::vector<void*>&, void*);
  static void * method_6204(void*, const std::vector<void*>&, void*);
  static void * method_6205(void*, const std::vector<void*>&, void*);
  static void * method_6206(void*, const std::vector<void*>&, void*);
  static void * method_6207(void*, const std::vector<void*>&, void*);
  static void * method_6208(void*, const std::vector<void*>&, void*);
  static void * method_6209(void*, const std::vector<void*>&, void*);
  static void * method_6210(void*, const std::vector<void*>&, void*);
  static void * method_6211(void*, const std::vector<void*>&, void*);
  static void * method_6212(void*, const std::vector<void*>&, void*);
  static void * method_6213(void*, const std::vector<void*>&, void*);
  static void * method_6214(void*, const std::vector<void*>&, void*);
  static void * method_6215(void*, const std::vector<void*>&, void*);
  static void * method_6216(void*, const std::vector<void*>&, void*);
  static void * method_6217(void*, const std::vector<void*>&, void*);
  static void * method_6218(void*, const std::vector<void*>&, void*);
  static void * method_6219(void*, const std::vector<void*>&, void*);
  static void * method_6220(void*, const std::vector<void*>&, void*);
  static void * method_6221(void*, const std::vector<void*>&, void*);
  static void * method_6222(void*, const std::vector<void*>&, void*);
  static void* method_x13( void*, const std::vector<void*>&, void* ); 
};


__G4EllipticalTube_dict::__G4EllipticalTube_dict() {
  ClassBuilder< ::G4EllipticalTube >("G4EllipticalTube", PUBLIC | VIRTUAL)
  .addBase< ::G4VSolid >(PUBLIC)
  .addDataMember(type_567, "dx", OffsetOf(::G4EllipticalTube, dx), PROTECTED)
  .addDataMember(type_567, "dy", OffsetOf(::G4EllipticalTube, dy), PROTECTED)
  .addDataMember(type_567, "dz", OffsetOf(::G4EllipticalTube, dz), PROTECTED)
  .addDataMember(type_567, "fCubicVolume", OffsetOf(::G4EllipticalTube, fCubicVolume), PRIVATE)
  .addDataMember(type_12368, "fpPolyhedron", OffsetOf(::G4EllipticalTube, fpPolyhedron), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12369), "G4EllipticalTube", constructor_6200, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567), "G4EllipticalTube", constructor_6201, 0, "name;theDx;theDy;theDz", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4EllipticalTube", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6203, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6204, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6205, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6206, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6207, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6208, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6209, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6210, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6211, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6212, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6213, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6214, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_471), "GetExtent", method_6215, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "GetPolyhedron", method_6216, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDx", method_6217, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDy", method_6218, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDz", method_6219, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567c), "SetDx", method_6220, 0, "newDx", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567c), "SetDy", method_6221, 0, "newDy", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567c), "SetDz", method_6222, 0, "newDz", PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x13);
}

//------Stub functions for class G4EllipticalTube -------------------------------
void* __G4EllipticalTube_dict::constructor_6200( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4EllipticalTube(*(const ::G4EllipticalTube*)arg[0]);
}

void* __G4EllipticalTube_dict::constructor_6201( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4EllipticalTube(*(const ::G4String*)arg[0],
                                       *(double*)arg[1],
                                       *(double*)arg[2],
                                       *(double*)arg[3]);
}

void* __G4EllipticalTube_dict::method_6203( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4EllipticalTube*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                        *(const ::G4VoxelLimits*)arg[1],
                                                        *(const ::G4AffineTransform*)arg[2],
                                                        *(double*)arg[3],
                                                        *(double*)arg[4]);
  return &ret;
}

void* __G4EllipticalTube_dict::method_6204( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4EllipticalTube*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4EllipticalTube_dict::method_6205( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4EllipticalTube*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4EllipticalTube_dict::method_6206( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                     *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4EllipticalTube_dict::method_6207( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4EllipticalTube_dict::method_6208( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4EllipticalTube*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4EllipticalTube*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1],
                                                        *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4EllipticalTube*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1],
                                                        *(const bool*)arg[2],
                                                        (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4EllipticalTube*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1],
                                                        *(const bool*)arg[2],
                                                        (bool*)arg[3],
                                                        (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4EllipticalTube_dict::method_6209( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4EllipticalTube_dict::method_6210( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4EllipticalTube*)o)->GetEntityType());
}

void* __G4EllipticalTube_dict::method_6211( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4EllipticalTube*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4EllipticalTube_dict::method_6212( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4EllipticalTube*)o)->GetCubicVolume();
  return &ret;
}

void* __G4EllipticalTube_dict::method_6213( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4EllipticalTube*)o)->CreatePolyhedron();
}

void* __G4EllipticalTube_dict::method_6214( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4EllipticalTube*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4EllipticalTube_dict::method_6215( void* o, const std::vector<void*>&, void*)
{
  return new G4VisExtent(((const ::G4EllipticalTube*)o)->GetExtent());
}

void* __G4EllipticalTube_dict::method_6216( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4EllipticalTube*)o)->GetPolyhedron();
}

void* __G4EllipticalTube_dict::method_6217( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->GetDx();
  return &ret;
}

void* __G4EllipticalTube_dict::method_6218( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->GetDy();
  return &ret;
}

void* __G4EllipticalTube_dict::method_6219( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4EllipticalTube*)o)->GetDz();
  return &ret;
}

void* __G4EllipticalTube_dict::method_6220( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EllipticalTube*)o)->SetDx(*(const double*)arg[0]);
  return 0;
}

void* __G4EllipticalTube_dict::method_6221( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EllipticalTube*)o)->SetDy(*(const double*)arg[0]);
  return 0;
}

void* __G4EllipticalTube_dict::method_6222( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4EllipticalTube*)o)->SetDz(*(const double*)arg[0]);
  return 0;
}

void* __G4EllipticalTube_dict::method_x13( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4EllipticalTube,::G4VSolid >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4UnionSolid -------------------------------
class __G4UnionSolid_dict { 
  public:
  __G4UnionSolid_dict();
  static void * constructor_6278(void*, const std::vector<void*>&, void*);
  static void * constructor_6279(void*, const std::vector<void*>&, void*);
  static void * constructor_6280(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UnionSolid*)o)->~G4UnionSolid(); return 0;}
  static void * method_6282(void*, const std::vector<void*>&, void*);
  static void * method_6283(void*, const std::vector<void*>&, void*);
  static void * method_6284(void*, const std::vector<void*>&, void*);
  static void * method_6285(void*, const std::vector<void*>&, void*);
  static void * method_6286(void*, const std::vector<void*>&, void*);
  static void * method_6287(void*, const std::vector<void*>&, void*);
  static void * method_6288(void*, const std::vector<void*>&, void*);
  static void * method_6289(void*, const std::vector<void*>&, void*);
  static void * method_6290(void*, const std::vector<void*>&, void*);
  static void * method_6291(void*, const std::vector<void*>&, void*);
  static void * method_6292(void*, const std::vector<void*>&, void*);
  static void * method_6293(void*, const std::vector<void*>&, void*);
  static void* method_x14( void*, const std::vector<void*>&, void* ); 
};


__G4UnionSolid_dict::__G4UnionSolid_dict() {
  ClassBuilder< ::G4UnionSolid >("G4UnionSolid", PUBLIC | VIRTUAL)
  .addBase< ::G4BooleanSolid >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631), "G4UnionSolid", constructor_6278, 0, "pName;pSolidA;pSolidB", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_11685, type_11354), "G4UnionSolid", constructor_6279, 0, "pName;pSolidA;pSolidB;rotMatrix;transVector", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_12363), "G4UnionSolid", constructor_6280, 0, "pName;pSolidA;pSolidB;transform", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UnionSolid", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6282, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6283, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6284, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6285, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6286, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6287, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6288, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6289, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6290, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6291, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6292, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6293, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x14);
}

//------Stub functions for class G4UnionSolid -------------------------------
void* __G4UnionSolid_dict::constructor_6278( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UnionSolid(*(const ::G4String*)arg[0],
                                   (::G4VSolid*)arg[1],
                                   (::G4VSolid*)arg[2]);
}

void* __G4UnionSolid_dict::constructor_6279( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UnionSolid(*(const ::G4String*)arg[0],
                                   (::G4VSolid*)arg[1],
                                   (::G4VSolid*)arg[2],
                                   (::CLHEP::HepRotation*)arg[3],
                                   *(const ::CLHEP::Hep3Vector*)arg[4]);
}

void* __G4UnionSolid_dict::constructor_6280( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UnionSolid(*(const ::G4String*)arg[0],
                                   (::G4VSolid*)arg[1],
                                   (::G4VSolid*)arg[2],
                                   *(const ::HepGeom::Transform3D*)arg[3]);
}

void* __G4UnionSolid_dict::method_6282( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4UnionSolid*)o)->GetEntityType());
}

void* __G4UnionSolid_dict::method_6283( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4UnionSolid*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                    *(const ::G4VoxelLimits*)arg[1],
                                                    *(const ::G4AffineTransform*)arg[2],
                                                    *(double*)arg[3],
                                                    *(double*)arg[4]);
  return &ret;
}

void* __G4UnionSolid_dict::method_6284( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4UnionSolid*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4UnionSolid_dict::method_6285( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4UnionSolid*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4UnionSolid_dict::method_6286( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4UnionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                 *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4UnionSolid_dict::method_6287( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4UnionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4UnionSolid_dict::method_6288( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4UnionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4UnionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1],
                                                    *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4UnionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1],
                                                    *(const bool*)arg[2],
                                                    (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4UnionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1],
                                                    *(const bool*)arg[2],
                                                    (bool*)arg[3],
                                                    (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4UnionSolid_dict::method_6289( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4UnionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4UnionSolid_dict::method_6290( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UnionSolid*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                          *(const int*)arg[1],
                                          (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4UnionSolid_dict::method_6291( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4UnionSolid*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4UnionSolid_dict::method_6292( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4UnionSolid*)o)->CreatePolyhedron();
}

void* __G4UnionSolid_dict::method_6293( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4UnionSolid*)o)->CreateNURBS();
}

void* __G4UnionSolid_dict::method_x14( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4BooleanSolid >(), seal::reflex::baseOffset< ::G4UnionSolid,::G4BooleanSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4UnionSolid,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4SubtractionSolid -------------------------------
class __G4SubtractionSolid_dict { 
  public:
  __G4SubtractionSolid_dict();
  static void * constructor_6295(void*, const std::vector<void*>&, void*);
  static void * constructor_6296(void*, const std::vector<void*>&, void*);
  static void * constructor_6297(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4SubtractionSolid*)o)->~G4SubtractionSolid(); return 0;}
  static void * method_6299(void*, const std::vector<void*>&, void*);
  static void * method_6300(void*, const std::vector<void*>&, void*);
  static void * method_6301(void*, const std::vector<void*>&, void*);
  static void * method_6302(void*, const std::vector<void*>&, void*);
  static void * method_6303(void*, const std::vector<void*>&, void*);
  static void * method_6304(void*, const std::vector<void*>&, void*);
  static void * method_6305(void*, const std::vector<void*>&, void*);
  static void * method_6306(void*, const std::vector<void*>&, void*);
  static void * method_6307(void*, const std::vector<void*>&, void*);
  static void * method_6308(void*, const std::vector<void*>&, void*);
  static void * method_6309(void*, const std::vector<void*>&, void*);
  static void * method_6310(void*, const std::vector<void*>&, void*);
  static void* method_x15( void*, const std::vector<void*>&, void* ); 
};


__G4SubtractionSolid_dict::__G4SubtractionSolid_dict() {
  ClassBuilder< ::G4SubtractionSolid >("G4SubtractionSolid", PUBLIC | VIRTUAL)
  .addBase< ::G4BooleanSolid >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631), "G4SubtractionSolid", constructor_6295, 0, "pName;pSolidA;pSolidB", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_11685, type_11354), "G4SubtractionSolid", constructor_6296, 0, "pName;pSolidA;pSolidB;rotMatrix;transVector", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_12363), "G4SubtractionSolid", constructor_6297, 0, "pName;pSolidA;pSolidB;transform", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4SubtractionSolid", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6299, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6300, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6301, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6302, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6303, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6304, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6305, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6306, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6307, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6308, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6309, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6310, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x15);
}

//------Stub functions for class G4SubtractionSolid -------------------------------
void* __G4SubtractionSolid_dict::constructor_6295( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4SubtractionSolid(*(const ::G4String*)arg[0],
                                         (::G4VSolid*)arg[1],
                                         (::G4VSolid*)arg[2]);
}

void* __G4SubtractionSolid_dict::constructor_6296( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4SubtractionSolid(*(const ::G4String*)arg[0],
                                         (::G4VSolid*)arg[1],
                                         (::G4VSolid*)arg[2],
                                         (::CLHEP::HepRotation*)arg[3],
                                         *(const ::CLHEP::Hep3Vector*)arg[4]);
}

void* __G4SubtractionSolid_dict::constructor_6297( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4SubtractionSolid(*(const ::G4String*)arg[0],
                                         (::G4VSolid*)arg[1],
                                         (::G4VSolid*)arg[2],
                                         *(const ::HepGeom::Transform3D*)arg[3]);
}

void* __G4SubtractionSolid_dict::method_6299( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4SubtractionSolid*)o)->GetEntityType());
}

void* __G4SubtractionSolid_dict::method_6300( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4SubtractionSolid*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                          *(const ::G4VoxelLimits*)arg[1],
                                                          *(const ::G4AffineTransform*)arg[2],
                                                          *(double*)arg[3],
                                                          *(double*)arg[4]);
  return &ret;
}

void* __G4SubtractionSolid_dict::method_6301( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4SubtractionSolid*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4SubtractionSolid_dict::method_6302( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4SubtractionSolid*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4SubtractionSolid_dict::method_6303( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4SubtractionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                       *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4SubtractionSolid_dict::method_6304( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4SubtractionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4SubtractionSolid_dict::method_6305( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4SubtractionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                          *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4SubtractionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                          *(const ::CLHEP::Hep3Vector*)arg[1],
                                                          *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4SubtractionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                          *(const ::CLHEP::Hep3Vector*)arg[1],
                                                          *(const bool*)arg[2],
                                                          (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4SubtractionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                          *(const ::CLHEP::Hep3Vector*)arg[1],
                                                          *(const bool*)arg[2],
                                                          (bool*)arg[3],
                                                          (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4SubtractionSolid_dict::method_6306( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4SubtractionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4SubtractionSolid_dict::method_6307( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4SubtractionSolid*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                                *(const int*)arg[1],
                                                (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4SubtractionSolid_dict::method_6308( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4SubtractionSolid*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4SubtractionSolid_dict::method_6309( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4SubtractionSolid*)o)->CreatePolyhedron();
}

void* __G4SubtractionSolid_dict::method_6310( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4SubtractionSolid*)o)->CreateNURBS();
}

void* __G4SubtractionSolid_dict::method_x15( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4BooleanSolid >(), seal::reflex::baseOffset< ::G4SubtractionSolid,::G4BooleanSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4SubtractionSolid,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4IntersectionSolid -------------------------------
class __G4IntersectionSolid_dict { 
  public:
  __G4IntersectionSolid_dict();
  static void * constructor_6312(void*, const std::vector<void*>&, void*);
  static void * constructor_6313(void*, const std::vector<void*>&, void*);
  static void * constructor_6314(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4IntersectionSolid*)o)->~G4IntersectionSolid(); return 0;}
  static void * method_6316(void*, const std::vector<void*>&, void*);
  static void * method_6317(void*, const std::vector<void*>&, void*);
  static void * method_6318(void*, const std::vector<void*>&, void*);
  static void * method_6319(void*, const std::vector<void*>&, void*);
  static void * method_6320(void*, const std::vector<void*>&, void*);
  static void * method_6321(void*, const std::vector<void*>&, void*);
  static void * method_6322(void*, const std::vector<void*>&, void*);
  static void * method_6323(void*, const std::vector<void*>&, void*);
  static void * method_6324(void*, const std::vector<void*>&, void*);
  static void * method_6325(void*, const std::vector<void*>&, void*);
  static void * method_6326(void*, const std::vector<void*>&, void*);
  static void * method_6327(void*, const std::vector<void*>&, void*);
  static void* method_x16( void*, const std::vector<void*>&, void* ); 
};


__G4IntersectionSolid_dict::__G4IntersectionSolid_dict() {
  ClassBuilder< ::G4IntersectionSolid >("G4IntersectionSolid", PUBLIC | VIRTUAL)
  .addBase< ::G4BooleanSolid >(PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631), "G4IntersectionSolid", constructor_6312, 0, "pName;pSolidA;pSolidB", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_11685, type_11354), "G4IntersectionSolid", constructor_6313, 0, "pName;pSolidA;pSolidB;rotMatrix;transVector", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11631, type_11631, type_12363), "G4IntersectionSolid", constructor_6314, 0, "pName;pSolidA;pSolidB;transform", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4IntersectionSolid", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6316, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6317, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6318, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6319, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6320, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6321, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6322, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6323, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6324, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6325, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6326, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6327, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x16);
}

//------Stub functions for class G4IntersectionSolid -------------------------------
void* __G4IntersectionSolid_dict::constructor_6312( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4IntersectionSolid(*(const ::G4String*)arg[0],
                                          (::G4VSolid*)arg[1],
                                          (::G4VSolid*)arg[2]);
}

void* __G4IntersectionSolid_dict::constructor_6313( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4IntersectionSolid(*(const ::G4String*)arg[0],
                                          (::G4VSolid*)arg[1],
                                          (::G4VSolid*)arg[2],
                                          (::CLHEP::HepRotation*)arg[3],
                                          *(const ::CLHEP::Hep3Vector*)arg[4]);
}

void* __G4IntersectionSolid_dict::constructor_6314( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4IntersectionSolid(*(const ::G4String*)arg[0],
                                          (::G4VSolid*)arg[1],
                                          (::G4VSolid*)arg[2],
                                          *(const ::HepGeom::Transform3D*)arg[3]);
}

void* __G4IntersectionSolid_dict::method_6316( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4IntersectionSolid*)o)->GetEntityType());
}

void* __G4IntersectionSolid_dict::method_6317( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4IntersectionSolid*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                           *(const ::G4VoxelLimits*)arg[1],
                                                           *(const ::G4AffineTransform*)arg[2],
                                                           *(double*)arg[3],
                                                           *(double*)arg[4]);
  return &ret;
}

void* __G4IntersectionSolid_dict::method_6318( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4IntersectionSolid*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4IntersectionSolid_dict::method_6319( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4IntersectionSolid*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4IntersectionSolid_dict::method_6320( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4IntersectionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4IntersectionSolid_dict::method_6321( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4IntersectionSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4IntersectionSolid_dict::method_6322( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4IntersectionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4IntersectionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                           *(const ::CLHEP::Hep3Vector*)arg[1],
                                                           *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4IntersectionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                           *(const ::CLHEP::Hep3Vector*)arg[1],
                                                           *(const bool*)arg[2],
                                                           (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4IntersectionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                           *(const ::CLHEP::Hep3Vector*)arg[1],
                                                           *(const bool*)arg[2],
                                                           (bool*)arg[3],
                                                           (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4IntersectionSolid_dict::method_6323( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4IntersectionSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4IntersectionSolid_dict::method_6324( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4IntersectionSolid*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                                 *(const int*)arg[1],
                                                 (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4IntersectionSolid_dict::method_6325( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4IntersectionSolid*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4IntersectionSolid_dict::method_6326( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4IntersectionSolid*)o)->CreatePolyhedron();
}

void* __G4IntersectionSolid_dict::method_6327( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4IntersectionSolid*)o)->CreateNURBS();
}

void* __G4IntersectionSolid_dict::method_x16( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4BooleanSolid >(), seal::reflex::baseOffset< ::G4IntersectionSolid,::G4BooleanSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4IntersectionSolid,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4CSGSolid -------------------------------
class __G4CSGSolid_dict { 
  public:
  __G4CSGSolid_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4CSGSolid*)o)->~G4CSGSolid(); return 0;}
  static void * method_6498(void*, const std::vector<void*>&, void*);
  static void * method_6499(void*, const std::vector<void*>&, void*);
  static void* method_x17( void*, const std::vector<void*>&, void* ); 
};


__G4CSGSolid_dict::__G4CSGSolid_dict() {
  ClassBuilder< ::G4CSGSolid >("G4CSGSolid", PUBLIC | ABSTRACT | VIRTUAL)
  .addBase< ::G4VSolid >(PUBLIC)
  .addDataMember(type_567, "fCubicVolume", OffsetOf(::G4CSGSolid, fCubicVolume), PROTECTED)
  .addDataMember(type_12368, "fpPolyhedron", OffsetOf(::G4CSGSolid, fpPolyhedron), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4CSGSolid", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6498, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "GetPolyhedron", method_6499, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x17);
}

//------Stub functions for class G4CSGSolid -------------------------------
void* __G4CSGSolid_dict::method_6498( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4CSGSolid*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4CSGSolid_dict::method_6499( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4CSGSolid*)o)->GetPolyhedron();
}

void* __G4CSGSolid_dict::method_x17( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4CSGSolid,::G4VSolid >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4Hype -------------------------------
class __G4Hype_dict { 
  public:
  __G4Hype_dict();
  static void * constructor_6566(void*, const std::vector<void*>&, void*);
  static void * constructor_6567(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Hype*)o)->~G4Hype(); return 0;}
  static void * method_6569(void*, const std::vector<void*>&, void*);
  static void * method_6570(void*, const std::vector<void*>&, void*);
  static void * method_6571(void*, const std::vector<void*>&, void*);
  static void * method_6572(void*, const std::vector<void*>&, void*);
  static void * method_6573(void*, const std::vector<void*>&, void*);
  static void * method_6574(void*, const std::vector<void*>&, void*);
  static void * method_6575(void*, const std::vector<void*>&, void*);
  static void * method_6576(void*, const std::vector<void*>&, void*);
  static void * method_6577(void*, const std::vector<void*>&, void*);
  static void * method_6578(void*, const std::vector<void*>&, void*);
  static void * method_6579(void*, const std::vector<void*>&, void*);
  static void * method_6580(void*, const std::vector<void*>&, void*);
  static void * method_6581(void*, const std::vector<void*>&, void*);
  static void * method_6582(void*, const std::vector<void*>&, void*);
  static void * method_6583(void*, const std::vector<void*>&, void*);
  static void * method_6584(void*, const std::vector<void*>&, void*);
  static void * method_6585(void*, const std::vector<void*>&, void*);
  static void * method_6586(void*, const std::vector<void*>&, void*);
  static void * method_6587(void*, const std::vector<void*>&, void*);
  static void * method_6588(void*, const std::vector<void*>&, void*);
  static void * method_6589(void*, const std::vector<void*>&, void*);
  static void * method_6590(void*, const std::vector<void*>&, void*);
  static void * method_6591(void*, const std::vector<void*>&, void*);
  static void * method_6592(void*, const std::vector<void*>&, void*);
  static void * method_6593(void*, const std::vector<void*>&, void*);
  static void * method_6594(void*, const std::vector<void*>&, void*);
  static void* method_x18( void*, const std::vector<void*>&, void* ); 
};


__G4Hype_dict::__G4Hype_dict() {
  ClassBuilder< ::G4Hype >("G4Hype", PUBLIC | VIRTUAL)
  .addBase< ::G4VSolid >(PUBLIC)
  .addDataMember(type_567, "innerRadius", OffsetOf(::G4Hype, innerRadius), PROTECTED)
  .addDataMember(type_567, "outerRadius", OffsetOf(::G4Hype, outerRadius), PROTECTED)
  .addDataMember(type_567, "halfLenZ", OffsetOf(::G4Hype, halfLenZ), PROTECTED)
  .addDataMember(type_567, "innerStereo", OffsetOf(::G4Hype, innerStereo), PROTECTED)
  .addDataMember(type_567, "outerStereo", OffsetOf(::G4Hype, outerStereo), PROTECTED)
  .addDataMember(type_567, "tanInnerStereo", OffsetOf(::G4Hype, tanInnerStereo), PROTECTED)
  .addDataMember(type_567, "tanOuterStereo", OffsetOf(::G4Hype, tanOuterStereo), PROTECTED)
  .addDataMember(type_567, "tanInnerStereo2", OffsetOf(::G4Hype, tanInnerStereo2), PROTECTED)
  .addDataMember(type_567, "tanOuterStereo2", OffsetOf(::G4Hype, tanOuterStereo2), PROTECTED)
  .addDataMember(type_567, "innerRadius2", OffsetOf(::G4Hype, innerRadius2), PROTECTED)
  .addDataMember(type_567, "outerRadius2", OffsetOf(::G4Hype, outerRadius2), PROTECTED)
  .addDataMember(type_567, "endInnerRadius2", OffsetOf(::G4Hype, endInnerRadius2), PROTECTED)
  .addDataMember(type_567, "endOuterRadius2", OffsetOf(::G4Hype, endOuterRadius2), PROTECTED)
  .addDataMember(type_567, "endInnerRadius", OffsetOf(::G4Hype, endInnerRadius), PROTECTED)
  .addDataMember(type_567, "endOuterRadius", OffsetOf(::G4Hype, endOuterRadius), PROTECTED)
  .addDataMember(type_567, "fCubicVolume", OffsetOf(::G4Hype, fCubicVolume), PRIVATE)
  .addDataMember(type_12368, "fpPolyhedron", OffsetOf(::G4Hype, fpPolyhedron), PRIVATE)
  .addEnum< G4Hype::ESide >("outerFace=0;innerFace=1;leftCap=2;rightCap=3")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12508), "G4Hype", constructor_6566, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4Hype", constructor_6567, 0, "pName;newInnerRadius;newOuterRadius;newInnerStereo;newOuterStereo;newHalfLenZ", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Hype", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6569, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6570, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInnerRadius", method_6571, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterRadius", method_6572, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6573, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInnerStereo", method_6574, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterStereo", method_6575, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInnerRadius", method_6576, 0, "newIRad", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterRadius", method_6577, 0, "newORad", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6578, 0, "newHLZ", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInnerStereo", method_6579, 0, "newISte", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterStereo", method_6580, 0, "newOSte", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6581, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6582, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6583, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6584, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6585, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6586, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6587, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6588, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6589, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6590, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_471), "GetExtent", method_6591, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6592, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6593, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "GetPolyhedron", method_6594, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x18);
}

//------Stub functions for class G4Hype -------------------------------
void* __G4Hype_dict::constructor_6566( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Hype(*(const ::G4Hype*)arg[0]);
}

void* __G4Hype_dict::constructor_6567( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Hype(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5]);
}

void* __G4Hype_dict::method_6569( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                    *(const int*)arg[1],
                                    (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Hype_dict::method_6570( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Hype*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                              *(const ::G4VoxelLimits*)arg[1],
                                              *(const ::G4AffineTransform*)arg[2],
                                              *(double*)arg[3],
                                              *(double*)arg[4]);
  return &ret;
}

void* __G4Hype_dict::method_6571( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->GetInnerRadius();
  return &ret;
}

void* __G4Hype_dict::method_6572( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->GetOuterRadius();
  return &ret;
}

void* __G4Hype_dict::method_6573( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Hype_dict::method_6574( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->GetInnerStereo();
  return &ret;
}

void* __G4Hype_dict::method_6575( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->GetOuterStereo();
  return &ret;
}

void* __G4Hype_dict::method_6576( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->SetInnerRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6577( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->SetOuterRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6578( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6579( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->SetInnerStereo(*(double*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6580( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Hype*)o)->SetOuterStereo(*(double*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6581( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Hype*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Hype_dict::method_6582( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Hype*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Hype_dict::method_6583( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Hype_dict::method_6584( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Hype_dict::method_6585( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Hype*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Hype*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Hype*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Hype*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3],
                                              (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Hype_dict::method_6586( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Hype*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Hype_dict::method_6587( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Hype*)o)->GetEntityType());
}

void* __G4Hype_dict::method_6588( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Hype*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Hype_dict::method_6589( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Hype*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Hype_dict::method_6590( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Hype*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Hype_dict::method_6591( void* o, const std::vector<void*>&, void*)
{
  return new G4VisExtent(((const ::G4Hype*)o)->GetExtent());
}

void* __G4Hype_dict::method_6592( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Hype*)o)->CreatePolyhedron();
}

void* __G4Hype_dict::method_6593( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Hype*)o)->CreateNURBS();
}

void* __G4Hype_dict::method_6594( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Hype*)o)->GetPolyhedron();
}

void* __G4Hype_dict::method_x18( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Hype,::G4VSolid >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4Polyhedra -------------------------------
class __G4Polyhedra_dict { 
  public:
  __G4Polyhedra_dict();
  static void * constructor_6610(void*, const std::vector<void*>&, void*);
  static void * constructor_6611(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Polyhedra*)o)->~G4Polyhedra(); return 0;}
  static void * constructor_6613(void*, const std::vector<void*>&, void*);
  static void * operator_6614(void*, const std::vector<void*>&, void*);
  static void * method_6615(void*, const std::vector<void*>&, void*);
  static void * method_6616(void*, const std::vector<void*>&, void*);
  static void * method_6617(void*, const std::vector<void*>&, void*);
  static void * method_6618(void*, const std::vector<void*>&, void*);
  static void * method_6619(void*, const std::vector<void*>&, void*);
  static void * method_6620(void*, const std::vector<void*>&, void*);
  static void * method_6621(void*, const std::vector<void*>&, void*);
  static void * method_6622(void*, const std::vector<void*>&, void*);
  static void * method_6623(void*, const std::vector<void*>&, void*);
  static void * method_6624(void*, const std::vector<void*>&, void*);
  static void * method_6625(void*, const std::vector<void*>&, void*);
  static void * method_6626(void*, const std::vector<void*>&, void*);
  static void * method_6627(void*, const std::vector<void*>&, void*);
  static void * method_6628(void*, const std::vector<void*>&, void*);
  static void * method_6629(void*, const std::vector<void*>&, void*);
  static void * method_6630(void*, const std::vector<void*>&, void*);
  static void * method_6631(void*, const std::vector<void*>&, void*);
  static void* method_x19( void*, const std::vector<void*>&, void* ); 
};


__G4Polyhedra_dict::__G4Polyhedra_dict() {
  ClassBuilder< ::G4Polyhedra >("G4Polyhedra", PUBLIC | VIRTUAL)
  .addBase< ::G4VCSGfaceted >(PUBLIC)
  .addDataMember(type_565, "numSide", OffsetOf(::G4Polyhedra, numSide), PROTECTED)
  .addDataMember(type_567, "startPhi", OffsetOf(::G4Polyhedra, startPhi), PROTECTED)
  .addDataMember(type_567, "endPhi", OffsetOf(::G4Polyhedra, endPhi), PROTECTED)
  .addDataMember(type_564, "phiIsOpen", OffsetOf(::G4Polyhedra, phiIsOpen), PROTECTED)
  .addDataMember(type_565, "numCorner", OffsetOf(::G4Polyhedra, numCorner), PROTECTED)
  .addDataMember(type_12509, "corners", OffsetOf(::G4Polyhedra, corners), PROTECTED)
  .addDataMember(type_12510, "original_parameters", OffsetOf(::G4Polyhedra, original_parameters), PROTECTED)
  .addDataMember(type_12511, "enclosingCylinder", OffsetOf(::G4Polyhedra, enclosingCylinder), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_565, type_565, type_3897, type_3897, type_3897), "G4Polyhedra", constructor_6610, 0, "name;phiStart;phiTotal;numSide;numZPlanes;zPlane;rInner;rOuter", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_565, type_565, type_3897, type_3897), "G4Polyhedra", constructor_6611, 0, "name;phiStart;phiTotal;numSide;numRZ;r;z", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Polyhedra", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12512), "G4Polyhedra", constructor_6613, 0, "source", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12512, type_12512), "operator=", operator_6614, 0, "source", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6615, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6616, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6617, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6618, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6619, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6620, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6621, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6622, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "Reset", method_6623, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumSide", method_6624, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartPhi", method_6625, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetEndPhi", method_6626, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsOpen", method_6627, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumRZCorner", method_6628, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_334, type_565c), "GetCorner", method_6629, 0, "index", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12510), "GetOriginalParameters", method_6630, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12510), "SetOriginalParameters", method_6631, 0, "pars", PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x19);
}

//------Stub functions for class G4Polyhedra -------------------------------
void* __G4Polyhedra_dict::constructor_6610( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polyhedra(*(const ::G4String*)arg[0],
                                  *(double*)arg[1],
                                  *(double*)arg[2],
                                  *(int*)arg[3],
                                  *(int*)arg[4],
                                  (const double*)arg[5],
                                  (const double*)arg[6],
                                  (const double*)arg[7]);
}

void* __G4Polyhedra_dict::constructor_6611( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polyhedra(*(const ::G4String*)arg[0],
                                  *(double*)arg[1],
                                  *(double*)arg[2],
                                  *(int*)arg[3],
                                  *(int*)arg[4],
                                  (const double*)arg[5],
                                  (const double*)arg[6]);
}

void* __G4Polyhedra_dict::constructor_6613( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polyhedra(*(const ::G4Polyhedra*)arg[0]);
}

void* __G4Polyhedra_dict::operator_6614( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4Polyhedra*)o)->operator=(*(const ::G4Polyhedra*)arg[0]);
}

void* __G4Polyhedra_dict::method_6615( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Polyhedra*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Polyhedra_dict::method_6616( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Polyhedra*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Polyhedra_dict::method_6617( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Polyhedra*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Polyhedra_dict::method_6618( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Polyhedra*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                         *(const int*)arg[1],
                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Polyhedra_dict::method_6619( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Polyhedra*)o)->GetEntityType());
}

void* __G4Polyhedra_dict::method_6620( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Polyhedra*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Polyhedra_dict::method_6621( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polyhedra*)o)->CreatePolyhedron();
}

void* __G4Polyhedra_dict::method_6622( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polyhedra*)o)->CreateNURBS();
}

void* __G4Polyhedra_dict::method_6623( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((::G4Polyhedra*)o)->Reset();
  return &ret;
}

void* __G4Polyhedra_dict::method_6624( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Polyhedra*)o)->GetNumSide();
  return &ret;
}

void* __G4Polyhedra_dict::method_6625( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Polyhedra*)o)->GetStartPhi();
  return &ret;
}

void* __G4Polyhedra_dict::method_6626( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Polyhedra*)o)->GetEndPhi();
  return &ret;
}

void* __G4Polyhedra_dict::method_6627( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4Polyhedra*)o)->IsOpen();
  return &ret;
}

void* __G4Polyhedra_dict::method_6628( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Polyhedra*)o)->GetNumRZCorner();
  return &ret;
}

void* __G4Polyhedra_dict::method_6629( void* o, const std::vector<void*>& arg, void*)
{
  return new G4PolyhedraSideRZ(((const ::G4Polyhedra*)o)->GetCorner(*(const int*)arg[0]));
}

void* __G4Polyhedra_dict::method_6630( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polyhedra*)o)->GetOriginalParameters();
}

void* __G4Polyhedra_dict::method_6631( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Polyhedra*)o)->SetOriginalParameters((::G4PolyhedraHistorical*)arg[0]);
  return 0;
}

void* __G4Polyhedra_dict::method_x19( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VCSGfaceted >(), seal::reflex::baseOffset< ::G4Polyhedra,::G4VCSGfaceted >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Polyhedra,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Para -------------------------------
class __G4Para_dict { 
  public:
  __G4Para_dict();
  static void * constructor_6641(void*, const std::vector<void*>&, void*);
  static void * constructor_6642(void*, const std::vector<void*>&, void*);
  static void * constructor_6643(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Para*)o)->~G4Para(); return 0;}
  static void * method_6645(void*, const std::vector<void*>&, void*);
  static void * method_6646(void*, const std::vector<void*>&, void*);
  static void * method_6647(void*, const std::vector<void*>&, void*);
  static void * method_6648(void*, const std::vector<void*>&, void*);
  static void * method_6649(void*, const std::vector<void*>&, void*);
  static void * method_6650(void*, const std::vector<void*>&, void*);
  static void * method_6651(void*, const std::vector<void*>&, void*);
  static void * method_6652(void*, const std::vector<void*>&, void*);
  static void * method_6653(void*, const std::vector<void*>&, void*);
  static void * method_6654(void*, const std::vector<void*>&, void*);
  static void * method_6655(void*, const std::vector<void*>&, void*);
  static void * method_6656(void*, const std::vector<void*>&, void*);
  static void * method_6657(void*, const std::vector<void*>&, void*);
  static void * method_6658(void*, const std::vector<void*>&, void*);
  static void * method_6659(void*, const std::vector<void*>&, void*);
  static void * method_6660(void*, const std::vector<void*>&, void*);
  static void * method_6661(void*, const std::vector<void*>&, void*);
  static void * method_6662(void*, const std::vector<void*>&, void*);
  static void * method_6663(void*, const std::vector<void*>&, void*);
  static void * method_6664(void*, const std::vector<void*>&, void*);
  static void * method_6665(void*, const std::vector<void*>&, void*);
  static void * method_6666(void*, const std::vector<void*>&, void*);
  static void * method_6667(void*, const std::vector<void*>&, void*);
  static void * method_6668(void*, const std::vector<void*>&, void*);
  static void * method_6669(void*, const std::vector<void*>&, void*);
  static void * method_6670(void*, const std::vector<void*>&, void*);
  static void* method_x20( void*, const std::vector<void*>&, void* ); 
};


__G4Para_dict::__G4Para_dict() {
  ClassBuilder< ::G4Para >("G4Para", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fDx", OffsetOf(::G4Para, fDx), PRIVATE)
  .addDataMember(type_567, "fDy", OffsetOf(::G4Para, fDy), PRIVATE)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Para, fDz), PRIVATE)
  .addDataMember(type_567, "fTalpha", OffsetOf(::G4Para, fTalpha), PRIVATE)
  .addDataMember(type_567, "fTthetaCphi", OffsetOf(::G4Para, fTthetaCphi), PRIVATE)
  .addDataMember(type_567, "fTthetaSphi", OffsetOf(::G4Para, fTthetaSphi), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12514), "G4Para", constructor_6641, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567, type_567), "G4Para", constructor_6642, 0, "pName;pDx;pDy;pDz;pAlpha;pTheta;pPhi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11353), "G4Para", constructor_6643, 0, "pName;pt", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Para", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6645, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_528), "GetSymAxis", method_6646, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength", method_6647, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength", method_6648, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTanAlpha", method_6649, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6650, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetXHalfLength", method_6651, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetYHalfLength", method_6652, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6653, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetAlpha", method_6654, 0, "alpha", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetTanAlpha", method_6655, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426, type_426), "SetThetaAndPhi", method_6656, 0, "pTheta;pPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_567, type_567, type_567, type_567, type_567), "SetAllParameters", method_6657, 0, "pDx;pDy;pDz;pAlpha;pTheta;pPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6658, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6659, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6660, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6661, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6662, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6663, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6664, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6665, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6666, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6667, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6668, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6669, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6670, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x20);
}

//------Stub functions for class G4Para -------------------------------
void* __G4Para_dict::constructor_6641( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Para(*(const ::G4Para*)arg[0]);
}

void* __G4Para_dict::constructor_6642( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Para(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5],
                             *(double*)arg[6]);
}

void* __G4Para_dict::constructor_6643( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Para(*(const ::G4String*)arg[0],
                             (const ::CLHEP::Hep3Vector*)arg[1]);
}

void* __G4Para_dict::method_6645( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Para_dict::method_6646( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Para*)o)->GetSymAxis());
}

void* __G4Para_dict::method_6647( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->GetYHalfLength();
  return &ret;
}

void* __G4Para_dict::method_6648( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->GetXHalfLength();
  return &ret;
}

void* __G4Para_dict::method_6649( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->GetTanAlpha();
  return &ret;
}

void* __G4Para_dict::method_6650( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Para*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Para_dict::method_6651( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetXHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6652( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetYHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6653( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6654( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetAlpha(*(double*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6655( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetTanAlpha(*(double*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6656( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetThetaAndPhi(*(double*)arg[0],
                                 *(double*)arg[1]);
  return 0;
}

void* __G4Para_dict::method_6657( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->SetAllParameters(*(double*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3],
                                   *(double*)arg[4],
                                   *(double*)arg[5]);
  return 0;
}

void* __G4Para_dict::method_6658( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Para*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                    *(const int*)arg[1],
                                    (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Para_dict::method_6659( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Para*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                              *(const ::G4VoxelLimits*)arg[1],
                                              *(const ::G4AffineTransform*)arg[2],
                                              *(double*)arg[3],
                                              *(double*)arg[4]);
  return &ret;
}

void* __G4Para_dict::method_6660( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Para*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Para_dict::method_6661( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Para*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Para_dict::method_6662( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Para_dict::method_6663( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Para_dict::method_6664( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Para*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Para*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Para*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Para*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3],
                                              (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Para_dict::method_6665( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Para*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Para_dict::method_6666( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Para*)o)->GetEntityType());
}

void* __G4Para_dict::method_6667( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Para*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Para_dict::method_6668( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Para*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Para_dict::method_6669( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Para*)o)->CreatePolyhedron();
}

void* __G4Para_dict::method_6670( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Para*)o)->CreateNURBS();
}

void* __G4Para_dict::method_x20( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Para,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Para,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Torus -------------------------------
class __G4Torus_dict { 
  public:
  __G4Torus_dict();
  static void * constructor_6679(void*, const std::vector<void*>&, void*);
  static void * constructor_6680(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Torus*)o)->~G4Torus(); return 0;}
  static void * method_6682(void*, const std::vector<void*>&, void*);
  static void * method_6683(void*, const std::vector<void*>&, void*);
  static void * method_6684(void*, const std::vector<void*>&, void*);
  static void * method_6685(void*, const std::vector<void*>&, void*);
  static void * method_6686(void*, const std::vector<void*>&, void*);
  static void * method_6687(void*, const std::vector<void*>&, void*);
  static void * method_6688(void*, const std::vector<void*>&, void*);
  static void * method_6689(void*, const std::vector<void*>&, void*);
  static void * method_6690(void*, const std::vector<void*>&, void*);
  static void * method_6691(void*, const std::vector<void*>&, void*);
  static void * method_6692(void*, const std::vector<void*>&, void*);
  static void * method_6693(void*, const std::vector<void*>&, void*);
  static void * method_6694(void*, const std::vector<void*>&, void*);
  static void * method_6695(void*, const std::vector<void*>&, void*);
  static void * method_6696(void*, const std::vector<void*>&, void*);
  static void * method_6697(void*, const std::vector<void*>&, void*);
  static void * method_6698(void*, const std::vector<void*>&, void*);
  static void * method_6699(void*, const std::vector<void*>&, void*);
  static void * method_6700(void*, const std::vector<void*>&, void*);
  static void * method_6701(void*, const std::vector<void*>&, void*);
  static void * method_6702(void*, const std::vector<void*>&, void*);
  static void* method_x21( void*, const std::vector<void*>&, void* ); 
};


__G4Torus_dict::__G4Torus_dict() {
  ClassBuilder< ::G4Torus >("G4Torus", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fRmin", OffsetOf(::G4Torus, fRmin), PROTECTED)
  .addDataMember(type_567, "fRmax", OffsetOf(::G4Torus, fRmax), PROTECTED)
  .addDataMember(type_567, "fRtor", OffsetOf(::G4Torus, fRtor), PROTECTED)
  .addDataMember(type_567, "fSPhi", OffsetOf(::G4Torus, fSPhi), PROTECTED)
  .addDataMember(type_567, "fDPhi", OffsetOf(::G4Torus, fDPhi), PROTECTED)
  .addEnum< G4Torus::ESide >("kNull=0;kRMin=1;kRMax=2;kSPhi=3;kEPhi=4")
  .addEnum< G4Torus::ENorm >("kNRMin=0;kNRMax=1;kNSPhi=2;kNEPhi=3")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12516), "G4Torus", constructor_6679, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4Torus", constructor_6680, 0, "pName;pRmin;pRmax;pRtor;pSPhi;pDPhi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Torus", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmin", method_6682, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmax", method_6683, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRtor", method_6684, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSPhi", method_6685, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDPhi", method_6686, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6687, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6688, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6689, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6690, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6691, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6692, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6693, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6694, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6695, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6696, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6697, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6698, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6699, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6700, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_567, type_567, type_567, type_567), "SetAllParameters", method_6701, 0, "pRmin;pRmax;pRtor;pSPhi;pDPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_567, type_11354, type_11354), "TorusRoots", method_6702, 0, "Ri;p;v", PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x21);
}

//------Stub functions for class G4Torus -------------------------------
void* __G4Torus_dict::constructor_6679( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Torus(*(const ::G4Torus*)arg[0]);
}

void* __G4Torus_dict::constructor_6680( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Torus(*(const ::G4String*)arg[0],
                              *(double*)arg[1],
                              *(double*)arg[2],
                              *(double*)arg[3],
                              *(double*)arg[4],
                              *(double*)arg[5]);
}

void* __G4Torus_dict::method_6682( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->GetRmin();
  return &ret;
}

void* __G4Torus_dict::method_6683( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->GetRmax();
  return &ret;
}

void* __G4Torus_dict::method_6684( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->GetRtor();
  return &ret;
}

void* __G4Torus_dict::method_6685( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->GetSPhi();
  return &ret;
}

void* __G4Torus_dict::method_6686( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->GetDPhi();
  return &ret;
}

void* __G4Torus_dict::method_6687( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Torus*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Torus_dict::method_6688( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Torus*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Torus_dict::method_6689( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Torus*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                               *(const ::G4VoxelLimits*)arg[1],
                                               *(const ::G4AffineTransform*)arg[2],
                                               *(double*)arg[3],
                                               *(double*)arg[4]);
  return &ret;
}

void* __G4Torus_dict::method_6690( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Torus*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                     *(const int*)arg[1],
                                     (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Torus_dict::method_6691( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Torus*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Torus_dict::method_6692( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                            *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Torus_dict::method_6693( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Torus_dict::method_6694( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Torus*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                               *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Torus*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                               *(const ::CLHEP::Hep3Vector*)arg[1],
                                               *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Torus*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                               *(const ::CLHEP::Hep3Vector*)arg[1],
                                               *(const bool*)arg[2],
                                               (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Torus*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                               *(const ::CLHEP::Hep3Vector*)arg[1],
                                               *(const bool*)arg[2],
                                               (bool*)arg[3],
                                               (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Torus_dict::method_6695( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Torus*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Torus_dict::method_6696( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Torus*)o)->GetEntityType());
}

void* __G4Torus_dict::method_6697( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Torus*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Torus_dict::method_6698( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Torus*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Torus_dict::method_6699( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Torus*)o)->CreatePolyhedron();
}

void* __G4Torus_dict::method_6700( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Torus*)o)->CreateNURBS();
}

void* __G4Torus_dict::method_6701( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Torus*)o)->SetAllParameters(*(double*)arg[0],
                                    *(double*)arg[1],
                                    *(double*)arg[2],
                                    *(double*)arg[3],
                                    *(double*)arg[4]);
  return 0;
}

void* __G4Torus_dict::method_6702( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Torus*)o)->TorusRoots(*(double*)arg[0],
                                          *(const ::CLHEP::Hep3Vector*)arg[1],
                                          *(const ::CLHEP::Hep3Vector*)arg[2]);
  return &ret;
}

void* __G4Torus_dict::method_x21( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Torus,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Torus,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Orb -------------------------------
class __G4Orb_dict { 
  public:
  __G4Orb_dict();
  static void * constructor_6723(void*, const std::vector<void*>&, void*);
  static void * constructor_6724(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Orb*)o)->~G4Orb(); return 0;}
  static void * method_6726(void*, const std::vector<void*>&, void*);
  static void * method_6727(void*, const std::vector<void*>&, void*);
  static void * method_6728(void*, const std::vector<void*>&, void*);
  static void * method_6729(void*, const std::vector<void*>&, void*);
  static void * method_6730(void*, const std::vector<void*>&, void*);
  static void * method_6731(void*, const std::vector<void*>&, void*);
  static void * method_6732(void*, const std::vector<void*>&, void*);
  static void * method_6733(void*, const std::vector<void*>&, void*);
  static void * method_6734(void*, const std::vector<void*>&, void*);
  static void * method_6735(void*, const std::vector<void*>&, void*);
  static void * method_6736(void*, const std::vector<void*>&, void*);
  static void * method_6737(void*, const std::vector<void*>&, void*);
  static void * method_6738(void*, const std::vector<void*>&, void*);
  static void * method_6739(void*, const std::vector<void*>&, void*);
  static void * method_6740(void*, const std::vector<void*>&, void*);
  static void * method_6741(void*, const std::vector<void*>&, void*);
  static void* method_x22( void*, const std::vector<void*>&, void* ); 
};


__G4Orb_dict::__G4Orb_dict() {
  ClassBuilder< ::G4Orb >("G4Orb", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fRmax", OffsetOf(::G4Orb, fRmax), PRIVATE)
  .addDataMember(type_567, "fRmaxTolerance", OffsetOf(::G4Orb, fRmaxTolerance), PRIVATE)
  .addEnum< G4Orb::ESide >("kNull=0;kRMax=1")
  .addEnum< G4Orb::ENorm >("kNRMax=0")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12517), "G4Orb", constructor_6723, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567), "G4Orb", constructor_6724, 0, "pName;pRmax", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Orb", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRadius", method_6726, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetRadius", method_6727, 0, "newRmax", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6728, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6729, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6730, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6731, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6732, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6733, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6734, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6735, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6736, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6737, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6738, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6739, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6740, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6741, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x22);
}

//------Stub functions for class G4Orb -------------------------------
void* __G4Orb_dict::constructor_6723( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Orb(*(const ::G4Orb*)arg[0]);
}

void* __G4Orb_dict::constructor_6724( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Orb(*(const ::G4String*)arg[0],
                            *(double*)arg[1]);
}

void* __G4Orb_dict::method_6726( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Orb*)o)->GetRadius();
  return &ret;
}

void* __G4Orb_dict::method_6727( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Orb*)o)->SetRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Orb_dict::method_6728( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Orb*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Orb_dict::method_6729( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Orb*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                   *(const int*)arg[1],
                                   (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Orb_dict::method_6730( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Orb*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                             *(const ::G4VoxelLimits*)arg[1],
                                             *(const ::G4AffineTransform*)arg[2],
                                             *(double*)arg[3],
                                             *(double*)arg[4]);
  return &ret;
}

void* __G4Orb_dict::method_6731( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Orb*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Orb_dict::method_6732( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Orb*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Orb_dict::method_6733( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Orb*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                          *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Orb_dict::method_6734( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Orb*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Orb_dict::method_6735( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Orb*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Orb*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Orb*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Orb*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3],
                                             (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Orb_dict::method_6736( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Orb*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Orb_dict::method_6737( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Orb*)o)->GetEntityType());
}

void* __G4Orb_dict::method_6738( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Orb*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Orb_dict::method_6739( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Orb*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Orb_dict::method_6740( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Orb*)o)->CreatePolyhedron();
}

void* __G4Orb_dict::method_6741( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Orb*)o)->CreateNURBS();
}

void* __G4Orb_dict::method_x22( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Orb,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Orb,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Sphere -------------------------------
class __G4Sphere_dict { 
  public:
  __G4Sphere_dict();
  static void * constructor_6751(void*, const std::vector<void*>&, void*);
  static void * constructor_6752(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Sphere*)o)->~G4Sphere(); return 0;}
  static void * method_6754(void*, const std::vector<void*>&, void*);
  static void * method_6755(void*, const std::vector<void*>&, void*);
  static void * method_6756(void*, const std::vector<void*>&, void*);
  static void * method_6757(void*, const std::vector<void*>&, void*);
  static void * method_6758(void*, const std::vector<void*>&, void*);
  static void * method_6759(void*, const std::vector<void*>&, void*);
  static void * method_6760(void*, const std::vector<void*>&, void*);
  static void * method_6761(void*, const std::vector<void*>&, void*);
  static void * method_6762(void*, const std::vector<void*>&, void*);
  static void * method_6763(void*, const std::vector<void*>&, void*);
  static void * method_6764(void*, const std::vector<void*>&, void*);
  static void * method_6765(void*, const std::vector<void*>&, void*);
  static void * method_6766(void*, const std::vector<void*>&, void*);
  static void * method_6767(void*, const std::vector<void*>&, void*);
  static void * method_6768(void*, const std::vector<void*>&, void*);
  static void * method_6769(void*, const std::vector<void*>&, void*);
  static void * method_6770(void*, const std::vector<void*>&, void*);
  static void * method_6771(void*, const std::vector<void*>&, void*);
  static void * method_6772(void*, const std::vector<void*>&, void*);
  static void * method_6773(void*, const std::vector<void*>&, void*);
  static void * method_6774(void*, const std::vector<void*>&, void*);
  static void * method_6775(void*, const std::vector<void*>&, void*);
  static void * method_6776(void*, const std::vector<void*>&, void*);
  static void * method_6777(void*, const std::vector<void*>&, void*);
  static void * method_6778(void*, const std::vector<void*>&, void*);
  static void * method_6779(void*, const std::vector<void*>&, void*);
  static void * method_6780(void*, const std::vector<void*>&, void*);
  static void * method_6781(void*, const std::vector<void*>&, void*);
  static void * method_6782(void*, const std::vector<void*>&, void*);
  static void * method_6783(void*, const std::vector<void*>&, void*);
  static void * method_6784(void*, const std::vector<void*>&, void*);
  static void * method_6785(void*, const std::vector<void*>&, void*);
  static void * method_6786(void*, const std::vector<void*>&, void*);
  static void* method_x23( void*, const std::vector<void*>&, void* ); 
};


__G4Sphere_dict::__G4Sphere_dict() {
  ClassBuilder< ::G4Sphere >("G4Sphere", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fRmin", OffsetOf(::G4Sphere, fRmin), PRIVATE)
  .addDataMember(type_567, "fRmax", OffsetOf(::G4Sphere, fRmax), PRIVATE)
  .addDataMember(type_567, "fSPhi", OffsetOf(::G4Sphere, fSPhi), PRIVATE)
  .addDataMember(type_567, "fDPhi", OffsetOf(::G4Sphere, fDPhi), PRIVATE)
  .addDataMember(type_567, "fSTheta", OffsetOf(::G4Sphere, fSTheta), PRIVATE)
  .addDataMember(type_567, "fDTheta", OffsetOf(::G4Sphere, fDTheta), PRIVATE)
  .addDataMember(type_567, "fEpsilon", OffsetOf(::G4Sphere, fEpsilon), PRIVATE)
  .addEnum< G4Sphere::ESide >("kNull=0;kRMin=1;kRMax=2;kSPhi=3;kEPhi=4;kSTheta=5;kETheta=6")
  .addEnum< G4Sphere::ENorm >("kNRMin=0;kNRMax=1;kNSPhi=2;kNEPhi=3;kNSTheta=4;kNETheta=5")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12518), "G4Sphere", constructor_6751, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567, type_567), "G4Sphere", constructor_6752, 0, "pName;pRmin;pRmax;pSPhi;pDPhi;pSTheta;pDTheta", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Sphere", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInsideRadius", method_6754, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterRadius", method_6755, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartPhiAngle", method_6756, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDeltaPhiAngle", method_6757, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartThetaAngle", method_6758, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDeltaThetaAngle", method_6759, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6760, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInsideRadius", method_6761, 0, "newRmin", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterRadius", method_6762, 0, "newRmax", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetStartPhiAngle", method_6763, 0, "newSphi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetDeltaPhiAngle", method_6764, 0, "newDphi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetStartThetaAngle", method_6765, 0, "newSTheta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetDeltaThetaAngle", method_6766, 0, "newDTheta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6767, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6768, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6769, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6770, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6771, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6772, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6773, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6774, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6775, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6776, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_471), "GetExtent", method_6777, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6778, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6779, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6780, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmin", method_6781, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmax", method_6782, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSPhi", method_6783, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDPhi", method_6784, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSTheta", method_6785, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDTheta", method_6786, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x23);
}

//------Stub functions for class G4Sphere -------------------------------
void* __G4Sphere_dict::constructor_6751( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Sphere(*(const ::G4Sphere*)arg[0]);
}

void* __G4Sphere_dict::constructor_6752( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Sphere(*(const ::G4String*)arg[0],
                               *(double*)arg[1],
                               *(double*)arg[2],
                               *(double*)arg[3],
                               *(double*)arg[4],
                               *(double*)arg[5],
                               *(double*)arg[6]);
}

void* __G4Sphere_dict::method_6754( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetInsideRadius();
  return &ret;
}

void* __G4Sphere_dict::method_6755( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetOuterRadius();
  return &ret;
}

void* __G4Sphere_dict::method_6756( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetStartPhiAngle();
  return &ret;
}

void* __G4Sphere_dict::method_6757( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetDeltaPhiAngle();
  return &ret;
}

void* __G4Sphere_dict::method_6758( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetStartThetaAngle();
  return &ret;
}

void* __G4Sphere_dict::method_6759( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetDeltaThetaAngle();
  return &ret;
}

void* __G4Sphere_dict::method_6760( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Sphere*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Sphere_dict::method_6761( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetInsideRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6762( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetOuterRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6763( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetStartPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6764( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetDeltaPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6765( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetStartThetaAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6766( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->SetDeltaThetaAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6767( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Sphere*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                      *(const int*)arg[1],
                                      (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Sphere_dict::method_6768( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Sphere*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                *(const ::G4VoxelLimits*)arg[1],
                                                *(const ::G4AffineTransform*)arg[2],
                                                *(double*)arg[3],
                                                *(double*)arg[4]);
  return &ret;
}

void* __G4Sphere_dict::method_6769( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Sphere*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Sphere_dict::method_6770( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Sphere*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Sphere_dict::method_6771( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Sphere_dict::method_6772( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Sphere_dict::method_6773( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Sphere*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Sphere*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Sphere*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2],
                                                (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Sphere*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2],
                                                (bool*)arg[3],
                                                (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Sphere_dict::method_6774( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Sphere_dict::method_6775( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Sphere*)o)->GetEntityType());
}

void* __G4Sphere_dict::method_6776( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Sphere*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Sphere_dict::method_6777( void* o, const std::vector<void*>&, void*)
{
  return new G4VisExtent(((const ::G4Sphere*)o)->GetExtent());
}

void* __G4Sphere_dict::method_6778( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Sphere*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Sphere_dict::method_6779( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Sphere*)o)->CreatePolyhedron();
}

void* __G4Sphere_dict::method_6780( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Sphere*)o)->CreateNURBS();
}

void* __G4Sphere_dict::method_6781( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetRmin();
  return &ret;
}

void* __G4Sphere_dict::method_6782( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetRmax();
  return &ret;
}

void* __G4Sphere_dict::method_6783( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetSPhi();
  return &ret;
}

void* __G4Sphere_dict::method_6784( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetDPhi();
  return &ret;
}

void* __G4Sphere_dict::method_6785( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetSTheta();
  return &ret;
}

void* __G4Sphere_dict::method_6786( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Sphere*)o)->GetDTheta();
  return &ret;
}

void* __G4Sphere_dict::method_x23( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Sphere,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Sphere,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Cons -------------------------------
class __G4Cons_dict { 
  public:
  __G4Cons_dict();
  static void * constructor_6797(void*, const std::vector<void*>&, void*);
  static void * constructor_6798(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Cons*)o)->~G4Cons(); return 0;}
  static void * method_6800(void*, const std::vector<void*>&, void*);
  static void * method_6801(void*, const std::vector<void*>&, void*);
  static void * method_6802(void*, const std::vector<void*>&, void*);
  static void * method_6803(void*, const std::vector<void*>&, void*);
  static void * method_6804(void*, const std::vector<void*>&, void*);
  static void * method_6805(void*, const std::vector<void*>&, void*);
  static void * method_6806(void*, const std::vector<void*>&, void*);
  static void * method_6807(void*, const std::vector<void*>&, void*);
  static void * method_6808(void*, const std::vector<void*>&, void*);
  static void * method_6809(void*, const std::vector<void*>&, void*);
  static void * method_6810(void*, const std::vector<void*>&, void*);
  static void * method_6811(void*, const std::vector<void*>&, void*);
  static void * method_6812(void*, const std::vector<void*>&, void*);
  static void * method_6813(void*, const std::vector<void*>&, void*);
  static void * method_6814(void*, const std::vector<void*>&, void*);
  static void * method_6815(void*, const std::vector<void*>&, void*);
  static void * method_6816(void*, const std::vector<void*>&, void*);
  static void * method_6817(void*, const std::vector<void*>&, void*);
  static void * method_6818(void*, const std::vector<void*>&, void*);
  static void * method_6819(void*, const std::vector<void*>&, void*);
  static void * method_6820(void*, const std::vector<void*>&, void*);
  static void * method_6821(void*, const std::vector<void*>&, void*);
  static void * method_6822(void*, const std::vector<void*>&, void*);
  static void * method_6823(void*, const std::vector<void*>&, void*);
  static void * method_6824(void*, const std::vector<void*>&, void*);
  static void * method_6825(void*, const std::vector<void*>&, void*);
  static void * method_6826(void*, const std::vector<void*>&, void*);
  static void * method_6827(void*, const std::vector<void*>&, void*);
  static void * method_6828(void*, const std::vector<void*>&, void*);
  static void * method_6829(void*, const std::vector<void*>&, void*);
  static void * method_6830(void*, const std::vector<void*>&, void*);
  static void * method_6831(void*, const std::vector<void*>&, void*);
  static void * method_6832(void*, const std::vector<void*>&, void*);
  static void * method_6833(void*, const std::vector<void*>&, void*);
  static void * method_6834(void*, const std::vector<void*>&, void*);
  static void* method_x24( void*, const std::vector<void*>&, void* ); 
};


__G4Cons_dict::__G4Cons_dict() {
  ClassBuilder< ::G4Cons >("G4Cons", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fRmin1", OffsetOf(::G4Cons, fRmin1), PRIVATE)
  .addDataMember(type_567, "fRmin2", OffsetOf(::G4Cons, fRmin2), PRIVATE)
  .addDataMember(type_567, "fRmax1", OffsetOf(::G4Cons, fRmax1), PRIVATE)
  .addDataMember(type_567, "fRmax2", OffsetOf(::G4Cons, fRmax2), PRIVATE)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Cons, fDz), PRIVATE)
  .addDataMember(type_567, "fSPhi", OffsetOf(::G4Cons, fSPhi), PRIVATE)
  .addDataMember(type_567, "fDPhi", OffsetOf(::G4Cons, fDPhi), PRIVATE)
  .addEnum< G4Cons::ESide >("kNull=0;kRMin=1;kRMax=2;kSPhi=3;kEPhi=4;kPZ=5;kMZ=6")
  .addEnum< G4Cons::ENorm >("kNRMin=0;kNRMax=1;kNSPhi=2;kNEPhi=3;kNZ=4")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12519), "G4Cons", constructor_6797, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567, type_567, type_567), "G4Cons", constructor_6798, 0, "pName;pRmin1;pRmax1;pRmin2;pRmax2;pDz;pSPhi;pDPhi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Cons", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInnerRadiusMinusZ", method_6800, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterRadiusMinusZ", method_6801, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInnerRadiusPlusZ", method_6802, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterRadiusPlusZ", method_6803, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6804, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartPhiAngle", method_6805, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDeltaPhiAngle", method_6806, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6807, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInnerRadiusMinusZ", method_6808, 0, "Rmin1", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterRadiusMinusZ", method_6809, 0, "Rmax1", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInnerRadiusPlusZ", method_6810, 0, "Rmin2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterRadiusPlusZ", method_6811, 0, "Rmax2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6812, 0, "newDz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetStartPhiAngle", method_6813, 0, "newSPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetDeltaPhiAngle", method_6814, 0, "newDPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6815, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6816, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6817, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6818, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6819, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6820, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6821, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6822, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6823, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6824, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6825, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6826, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6827, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmin1", method_6828, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmax1", method_6829, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmin2", method_6830, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRmax2", method_6831, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDz", method_6832, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSPhi", method_6833, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDPhi", method_6834, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x24);
}

//------Stub functions for class G4Cons -------------------------------
void* __G4Cons_dict::constructor_6797( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Cons(*(const ::G4Cons*)arg[0]);
}

void* __G4Cons_dict::constructor_6798( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Cons(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5],
                             *(double*)arg[6],
                             *(double*)arg[7]);
}

void* __G4Cons_dict::method_6800( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetInnerRadiusMinusZ();
  return &ret;
}

void* __G4Cons_dict::method_6801( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetOuterRadiusMinusZ();
  return &ret;
}

void* __G4Cons_dict::method_6802( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetInnerRadiusPlusZ();
  return &ret;
}

void* __G4Cons_dict::method_6803( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetOuterRadiusPlusZ();
  return &ret;
}

void* __G4Cons_dict::method_6804( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Cons_dict::method_6805( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetStartPhiAngle();
  return &ret;
}

void* __G4Cons_dict::method_6806( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetDeltaPhiAngle();
  return &ret;
}

void* __G4Cons_dict::method_6807( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Cons*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Cons_dict::method_6808( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetInnerRadiusMinusZ(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6809( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetOuterRadiusMinusZ(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6810( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetInnerRadiusPlusZ(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6811( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetOuterRadiusPlusZ(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6812( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6813( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetStartPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6814( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->SetDeltaPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6815( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Cons*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                    *(const int*)arg[1],
                                    (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Cons_dict::method_6816( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Cons*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                              *(const ::G4VoxelLimits*)arg[1],
                                              *(const ::G4AffineTransform*)arg[2],
                                              *(double*)arg[3],
                                              *(double*)arg[4]);
  return &ret;
}

void* __G4Cons_dict::method_6817( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Cons*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Cons_dict::method_6818( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Cons*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Cons_dict::method_6819( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Cons_dict::method_6820( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Cons_dict::method_6821( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Cons*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Cons*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Cons*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Cons*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3],
                                              (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Cons_dict::method_6822( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Cons_dict::method_6823( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Cons*)o)->GetEntityType());
}

void* __G4Cons_dict::method_6824( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Cons*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Cons_dict::method_6825( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Cons*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Cons_dict::method_6826( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Cons*)o)->CreatePolyhedron();
}

void* __G4Cons_dict::method_6827( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Cons*)o)->CreateNURBS();
}

void* __G4Cons_dict::method_6828( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetRmin1();
  return &ret;
}

void* __G4Cons_dict::method_6829( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetRmax1();
  return &ret;
}

void* __G4Cons_dict::method_6830( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetRmin2();
  return &ret;
}

void* __G4Cons_dict::method_6831( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetRmax2();
  return &ret;
}

void* __G4Cons_dict::method_6832( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetDz();
  return &ret;
}

void* __G4Cons_dict::method_6833( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetSPhi();
  return &ret;
}

void* __G4Cons_dict::method_6834( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Cons*)o)->GetDPhi();
  return &ret;
}

void* __G4Cons_dict::method_x24( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Cons,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Cons,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Trap -------------------------------
class __G4Trap_dict { 
  public:
  __G4Trap_dict();
  static void * constructor_6848(void*, const std::vector<void*>&, void*);
  static void * constructor_6849(void*, const std::vector<void*>&, void*);
  static void * constructor_6850(void*, const std::vector<void*>&, void*);
  static void * constructor_6851(void*, const std::vector<void*>&, void*);
  static void * constructor_6852(void*, const std::vector<void*>&, void*);
  static void * constructor_6853(void*, const std::vector<void*>&, void*);
  static void * constructor_6854(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Trap*)o)->~G4Trap(); return 0;}
  static void * method_6856(void*, const std::vector<void*>&, void*);
  static void * method_6857(void*, const std::vector<void*>&, void*);
  static void * method_6858(void*, const std::vector<void*>&, void*);
  static void * method_6859(void*, const std::vector<void*>&, void*);
  static void * method_6860(void*, const std::vector<void*>&, void*);
  static void * method_6861(void*, const std::vector<void*>&, void*);
  static void * method_6862(void*, const std::vector<void*>&, void*);
  static void * method_6863(void*, const std::vector<void*>&, void*);
  static void * method_6864(void*, const std::vector<void*>&, void*);
  static void * method_6865(void*, const std::vector<void*>&, void*);
  static void * method_6866(void*, const std::vector<void*>&, void*);
  static void * method_6867(void*, const std::vector<void*>&, void*);
  static void * method_6868(void*, const std::vector<void*>&, void*);
  static void * method_6869(void*, const std::vector<void*>&, void*);
  static void * method_6870(void*, const std::vector<void*>&, void*);
  static void * method_6871(void*, const std::vector<void*>&, void*);
  static void * method_6872(void*, const std::vector<void*>&, void*);
  static void * method_6873(void*, const std::vector<void*>&, void*);
  static void * method_6874(void*, const std::vector<void*>&, void*);
  static void * method_6875(void*, const std::vector<void*>&, void*);
  static void * method_6876(void*, const std::vector<void*>&, void*);
  static void * method_6877(void*, const std::vector<void*>&, void*);
  static void * method_6878(void*, const std::vector<void*>&, void*);
  static void * method_6879(void*, const std::vector<void*>&, void*);
  static void * method_6880(void*, const std::vector<void*>&, void*);
  static void * method_6881(void*, const std::vector<void*>&, void*);
  static void* method_x25( void*, const std::vector<void*>&, void* ); 
};


__G4Trap_dict::__G4Trap_dict() {
  ClassBuilder< ::G4Trap >("G4Trap", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Trap, fDz), PRIVATE)
  .addDataMember(type_567, "fTthetaCphi", OffsetOf(::G4Trap, fTthetaCphi), PRIVATE)
  .addDataMember(type_567, "fTthetaSphi", OffsetOf(::G4Trap, fTthetaSphi), PRIVATE)
  .addDataMember(type_567, "fDy1", OffsetOf(::G4Trap, fDy1), PRIVATE)
  .addDataMember(type_567, "fDx1", OffsetOf(::G4Trap, fDx1), PRIVATE)
  .addDataMember(type_567, "fDx2", OffsetOf(::G4Trap, fDx2), PRIVATE)
  .addDataMember(type_567, "fTalpha1", OffsetOf(::G4Trap, fTalpha1), PRIVATE)
  .addDataMember(type_567, "fDy2", OffsetOf(::G4Trap, fDy2), PRIVATE)
  .addDataMember(type_567, "fDx3", OffsetOf(::G4Trap, fDx3), PRIVATE)
  .addDataMember(type_567, "fDx4", OffsetOf(::G4Trap, fDx4), PRIVATE)
  .addDataMember(type_567, "fTalpha2", OffsetOf(::G4Trap, fTalpha2), PRIVATE)
  .addDataMember(type_12520, "fPlanes", OffsetOf(::G4Trap, fPlanes), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12521), "G4Trap", constructor_6848, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567), "G4Trap", constructor_6849, 0, "pName;pDz;pTheta;pPhi;pDy1;pDx1;pDx2;pAlp1;pDy2;pDx3;pDx4;pAlp2", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_11353), "G4Trap", constructor_6850, 0, "pName;pt", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567), "G4Trap", constructor_6851, 0, "pName;pZ;pY;pX;pLTX", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4Trap", constructor_6852, 0, "pName;pDx1;pDx2;pDy1;pDy2;pDz", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567, type_567), "G4Trap", constructor_6853, 0, "pName;pDx;pDy;pDz;pAlpha;pTheta;pPhi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169), "G4Trap", constructor_6854, 0, "pName", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Trap", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6856, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength1", method_6857, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength1", method_6858, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength2", method_6859, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTanAlpha1", method_6860, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength2", method_6861, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength3", method_6862, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength4", method_6863, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTanAlpha2", method_6864, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_385, type_565), "GetSidePlane", method_6865, 0, "n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_528), "GetSymAxis", method_6866, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6867, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567, type_567), "SetAllParameters", method_6868, 0, "pDz;pTheta;pPhi;pDy1;pDx1;pDx2;pAlp1;pDy2;pDx3;pDx4;pAlp2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6869, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6870, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6871, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6872, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6873, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6874, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6875, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6876, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6877, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6878, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6879, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6880, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6881, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x25);
}

//------Stub functions for class G4Trap -------------------------------
void* __G4Trap_dict::constructor_6848( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4Trap*)arg[0]);
}

void* __G4Trap_dict::constructor_6849( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5],
                             *(double*)arg[6],
                             *(double*)arg[7],
                             *(double*)arg[8],
                             *(double*)arg[9],
                             *(double*)arg[10],
                             *(double*)arg[11]);
}

void* __G4Trap_dict::constructor_6850( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0],
                             (const ::CLHEP::Hep3Vector*)arg[1]);
}

void* __G4Trap_dict::constructor_6851( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4]);
}

void* __G4Trap_dict::constructor_6852( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5]);
}

void* __G4Trap_dict::constructor_6853( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5],
                             *(double*)arg[6]);
}

void* __G4Trap_dict::constructor_6854( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trap(*(const ::G4String*)arg[0]);
}

void* __G4Trap_dict::method_6856( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Trap_dict::method_6857( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetYHalfLength1();
  return &ret;
}

void* __G4Trap_dict::method_6858( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetXHalfLength1();
  return &ret;
}

void* __G4Trap_dict::method_6859( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetXHalfLength2();
  return &ret;
}

void* __G4Trap_dict::method_6860( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetTanAlpha1();
  return &ret;
}

void* __G4Trap_dict::method_6861( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetYHalfLength2();
  return &ret;
}

void* __G4Trap_dict::method_6862( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetXHalfLength3();
  return &ret;
}

void* __G4Trap_dict::method_6863( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetXHalfLength4();
  return &ret;
}

void* __G4Trap_dict::method_6864( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->GetTanAlpha2();
  return &ret;
}

void* __G4Trap_dict::method_6865( void* o, const std::vector<void*>& arg, void*)
{
  return new TrapSidePlane(((const ::G4Trap*)o)->GetSidePlane(*(int*)arg[0]));
}

void* __G4Trap_dict::method_6866( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Trap*)o)->GetSymAxis());
}

void* __G4Trap_dict::method_6867( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Trap*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Trap_dict::method_6868( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trap*)o)->SetAllParameters(*(double*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3],
                                   *(double*)arg[4],
                                   *(double*)arg[5],
                                   *(double*)arg[6],
                                   *(double*)arg[7],
                                   *(double*)arg[8],
                                   *(double*)arg[9],
                                   *(double*)arg[10]);
  return 0;
}

void* __G4Trap_dict::method_6869( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trap*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                    *(const int*)arg[1],
                                    (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Trap_dict::method_6870( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Trap*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                              *(const ::G4VoxelLimits*)arg[1],
                                              *(const ::G4AffineTransform*)arg[2],
                                              *(double*)arg[3],
                                              *(double*)arg[4]);
  return &ret;
}

void* __G4Trap_dict::method_6871( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Trap*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trap_dict::method_6872( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Trap*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Trap_dict::method_6873( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Trap_dict::method_6874( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trap_dict::method_6875( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Trap*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Trap*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Trap*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Trap*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3],
                                              (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Trap_dict::method_6876( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trap*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trap_dict::method_6877( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Trap*)o)->GetEntityType());
}

void* __G4Trap_dict::method_6878( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Trap*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Trap_dict::method_6879( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Trap*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Trap_dict::method_6880( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Trap*)o)->CreatePolyhedron();
}

void* __G4Trap_dict::method_6881( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Trap*)o)->CreateNURBS();
}

void* __G4Trap_dict::method_x25( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Trap,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Trap,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Trd -------------------------------
class __G4Trd_dict { 
  public:
  __G4Trd_dict();
  static void * constructor_6891(void*, const std::vector<void*>&, void*);
  static void * constructor_6892(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Trd*)o)->~G4Trd(); return 0;}
  static void * method_6894(void*, const std::vector<void*>&, void*);
  static void * method_6895(void*, const std::vector<void*>&, void*);
  static void * method_6896(void*, const std::vector<void*>&, void*);
  static void * method_6897(void*, const std::vector<void*>&, void*);
  static void * method_6898(void*, const std::vector<void*>&, void*);
  static void * method_6899(void*, const std::vector<void*>&, void*);
  static void * method_6900(void*, const std::vector<void*>&, void*);
  static void * method_6901(void*, const std::vector<void*>&, void*);
  static void * method_6902(void*, const std::vector<void*>&, void*);
  static void * method_6903(void*, const std::vector<void*>&, void*);
  static void * method_6904(void*, const std::vector<void*>&, void*);
  static void * method_6905(void*, const std::vector<void*>&, void*);
  static void * method_6906(void*, const std::vector<void*>&, void*);
  static void * method_6907(void*, const std::vector<void*>&, void*);
  static void * method_6908(void*, const std::vector<void*>&, void*);
  static void * method_6909(void*, const std::vector<void*>&, void*);
  static void * method_6910(void*, const std::vector<void*>&, void*);
  static void * method_6911(void*, const std::vector<void*>&, void*);
  static void * method_6912(void*, const std::vector<void*>&, void*);
  static void * method_6913(void*, const std::vector<void*>&, void*);
  static void * method_6914(void*, const std::vector<void*>&, void*);
  static void * method_6915(void*, const std::vector<void*>&, void*);
  static void * method_6916(void*, const std::vector<void*>&, void*);
  static void * method_6917(void*, const std::vector<void*>&, void*);
  static void * method_6918(void*, const std::vector<void*>&, void*);
  static void * method_6919(void*, const std::vector<void*>&, void*);
  static void* method_x26( void*, const std::vector<void*>&, void* ); 
};


__G4Trd_dict::__G4Trd_dict() {
  ClassBuilder< ::G4Trd >("G4Trd", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fDx1", OffsetOf(::G4Trd, fDx1), PROTECTED)
  .addDataMember(type_567, "fDx2", OffsetOf(::G4Trd, fDx2), PROTECTED)
  .addDataMember(type_567, "fDy1", OffsetOf(::G4Trd, fDy1), PROTECTED)
  .addDataMember(type_567, "fDy2", OffsetOf(::G4Trd, fDy2), PROTECTED)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Trd, fDz), PROTECTED)
  .addEnum< G4Trd::ESide >("kUndefined=0;kPX=1;kMX=2;kPY=3;kMY=4;kPZ=5;kMZ=6")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12523), "G4Trd", constructor_6891, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4Trd", constructor_6892, 0, "pName;pdx1;pdx2;pdy1;pdy2;pdz", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Trd", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength1", method_6894, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength2", method_6895, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength1", method_6896, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength2", method_6897, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6898, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6899, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetXHalfLength1", method_6900, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetXHalfLength2", method_6901, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetYHalfLength1", method_6902, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetYHalfLength2", method_6903, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6904, 0, "val", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6905, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6906, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6907, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6908, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6909, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6910, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6911, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6912, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_567, type_567, type_567, type_567), "CheckAndSetAllParameters", method_6913, 0, "pdx1;pdx2;pdy1;pdy2;pdz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567, type_567, type_567, type_567, type_567), "SetAllParameters", method_6914, 0, "pdx1;pdx2;pdy1;pdy2;pdz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6915, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6916, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6917, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6918, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6919, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x26);
}

//------Stub functions for class G4Trd -------------------------------
void* __G4Trd_dict::constructor_6891( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trd(*(const ::G4Trd*)arg[0]);
}

void* __G4Trd_dict::constructor_6892( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Trd(*(const ::G4String*)arg[0],
                            *(double*)arg[1],
                            *(double*)arg[2],
                            *(double*)arg[3],
                            *(double*)arg[4],
                            *(double*)arg[5]);
}

void* __G4Trd_dict::method_6894( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->GetXHalfLength1();
  return &ret;
}

void* __G4Trd_dict::method_6895( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->GetXHalfLength2();
  return &ret;
}

void* __G4Trd_dict::method_6896( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->GetYHalfLength1();
  return &ret;
}

void* __G4Trd_dict::method_6897( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->GetYHalfLength2();
  return &ret;
}

void* __G4Trd_dict::method_6898( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Trd_dict::method_6899( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Trd*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Trd_dict::method_6900( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetXHalfLength1(*(double*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6901( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetXHalfLength2(*(double*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6902( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetYHalfLength1(*(double*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6903( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetYHalfLength2(*(double*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6904( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6905( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                   *(const int*)arg[1],
                                   (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Trd_dict::method_6906( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Trd*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                             *(const ::G4VoxelLimits*)arg[1],
                                             *(const ::G4AffineTransform*)arg[2],
                                             *(double*)arg[3],
                                             *(double*)arg[4]);
  return &ret;
}

void* __G4Trd_dict::method_6907( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Trd*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trd_dict::method_6908( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Trd*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Trd_dict::method_6909( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                          *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Trd_dict::method_6910( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trd_dict::method_6911( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Trd*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Trd*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Trd*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Trd*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3],
                                             (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Trd_dict::method_6912( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Trd*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Trd_dict::method_6913( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->CheckAndSetAllParameters(*(double*)arg[0],
                                          *(double*)arg[1],
                                          *(double*)arg[2],
                                          *(double*)arg[3],
                                          *(double*)arg[4]);
  return 0;
}

void* __G4Trd_dict::method_6914( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Trd*)o)->SetAllParameters(*(double*)arg[0],
                                  *(double*)arg[1],
                                  *(double*)arg[2],
                                  *(double*)arg[3],
                                  *(double*)arg[4]);
  return 0;
}

void* __G4Trd_dict::method_6915( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Trd*)o)->GetEntityType());
}

void* __G4Trd_dict::method_6916( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Trd*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Trd_dict::method_6917( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Trd*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Trd_dict::method_6918( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Trd*)o)->CreatePolyhedron();
}

void* __G4Trd_dict::method_6919( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Trd*)o)->CreateNURBS();
}

void* __G4Trd_dict::method_x26( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Trd,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Trd,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Tubs -------------------------------
class __G4Tubs_dict { 
  public:
  __G4Tubs_dict();
  static void * constructor_6928(void*, const std::vector<void*>&, void*);
  static void * constructor_6929(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Tubs*)o)->~G4Tubs(); return 0;}
  static void * method_6931(void*, const std::vector<void*>&, void*);
  static void * method_6932(void*, const std::vector<void*>&, void*);
  static void * method_6933(void*, const std::vector<void*>&, void*);
  static void * method_6934(void*, const std::vector<void*>&, void*);
  static void * method_6935(void*, const std::vector<void*>&, void*);
  static void * method_6936(void*, const std::vector<void*>&, void*);
  static void * method_6937(void*, const std::vector<void*>&, void*);
  static void * method_6938(void*, const std::vector<void*>&, void*);
  static void * method_6939(void*, const std::vector<void*>&, void*);
  static void * method_6940(void*, const std::vector<void*>&, void*);
  static void * method_6941(void*, const std::vector<void*>&, void*);
  static void * method_6942(void*, const std::vector<void*>&, void*);
  static void * method_6943(void*, const std::vector<void*>&, void*);
  static void * method_6944(void*, const std::vector<void*>&, void*);
  static void * method_6945(void*, const std::vector<void*>&, void*);
  static void * method_6946(void*, const std::vector<void*>&, void*);
  static void * method_6947(void*, const std::vector<void*>&, void*);
  static void * method_6948(void*, const std::vector<void*>&, void*);
  static void * method_6949(void*, const std::vector<void*>&, void*);
  static void * method_6950(void*, const std::vector<void*>&, void*);
  static void * method_6951(void*, const std::vector<void*>&, void*);
  static void * method_6952(void*, const std::vector<void*>&, void*);
  static void * method_6953(void*, const std::vector<void*>&, void*);
  static void * method_6954(void*, const std::vector<void*>&, void*);
  static void * method_6955(void*, const std::vector<void*>&, void*);
  static void * method_6956(void*, const std::vector<void*>&, void*);
  static void * method_6957(void*, const std::vector<void*>&, void*);
  static void * method_6958(void*, const std::vector<void*>&, void*);
  static void * method_6959(void*, const std::vector<void*>&, void*);
  static void* method_x27( void*, const std::vector<void*>&, void* ); 
};


__G4Tubs_dict::__G4Tubs_dict() {
  ClassBuilder< ::G4Tubs >("G4Tubs", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fRMin", OffsetOf(::G4Tubs, fRMin), PROTECTED)
  .addDataMember(type_567, "fRMax", OffsetOf(::G4Tubs, fRMax), PROTECTED)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Tubs, fDz), PROTECTED)
  .addDataMember(type_567, "fSPhi", OffsetOf(::G4Tubs, fSPhi), PROTECTED)
  .addDataMember(type_567, "fDPhi", OffsetOf(::G4Tubs, fDPhi), PROTECTED)
  .addEnum< G4Tubs::ESide >("kNull=0;kRMin=1;kRMax=2;kSPhi=3;kEPhi=4;kPZ=5;kMZ=6")
  .addEnum< G4Tubs::ENorm >("kNRMin=0;kNRMax=1;kNSPhi=2;kNEPhi=3;kNZ=4")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12524), "G4Tubs", constructor_6928, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4Tubs", constructor_6929, 0, "pName;pRMin;pRMax;pDz;pSPhi;pDPhi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Tubs", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetInnerRadius", method_6931, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetOuterRadius", method_6932, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6933, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartPhiAngle", method_6934, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDeltaPhiAngle", method_6935, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6936, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetInnerRadius", method_6937, 0, "newRMin", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetOuterRadius", method_6938, 0, "newRMax", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6939, 0, "newDz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetStartPhiAngle", method_6940, 0, "newSPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetDeltaPhiAngle", method_6941, 0, "newDPhi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6942, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6943, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6944, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6945, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6946, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6947, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6948, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6949, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6950, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6951, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6952, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6953, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6954, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRMin", method_6955, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRMax", method_6956, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDz", method_6957, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSPhi", method_6958, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDPhi", method_6959, 0, 0, PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x27);
}

//------Stub functions for class G4Tubs -------------------------------
void* __G4Tubs_dict::constructor_6928( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Tubs(*(const ::G4Tubs*)arg[0]);
}

void* __G4Tubs_dict::constructor_6929( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Tubs(*(const ::G4String*)arg[0],
                             *(double*)arg[1],
                             *(double*)arg[2],
                             *(double*)arg[3],
                             *(double*)arg[4],
                             *(double*)arg[5]);
}

void* __G4Tubs_dict::method_6931( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetInnerRadius();
  return &ret;
}

void* __G4Tubs_dict::method_6932( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetOuterRadius();
  return &ret;
}

void* __G4Tubs_dict::method_6933( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Tubs_dict::method_6934( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetStartPhiAngle();
  return &ret;
}

void* __G4Tubs_dict::method_6935( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetDeltaPhiAngle();
  return &ret;
}

void* __G4Tubs_dict::method_6936( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Tubs*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Tubs_dict::method_6937( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->SetInnerRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6938( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->SetOuterRadius(*(double*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6939( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6940( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->SetStartPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6941( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->SetDeltaPhiAngle(*(double*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6942( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Tubs*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                    *(const int*)arg[1],
                                    (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Tubs_dict::method_6943( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Tubs*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                              *(const ::G4VoxelLimits*)arg[1],
                                              *(const ::G4AffineTransform*)arg[2],
                                              *(double*)arg[3],
                                              *(double*)arg[4]);
  return &ret;
}

void* __G4Tubs_dict::method_6944( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Tubs*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Tubs_dict::method_6945( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Tubs*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Tubs_dict::method_6946( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                           *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Tubs_dict::method_6947( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Tubs_dict::method_6948( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Tubs*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Tubs*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Tubs*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Tubs*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                              *(const ::CLHEP::Hep3Vector*)arg[1],
                                              *(const bool*)arg[2],
                                              (bool*)arg[3],
                                              (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Tubs_dict::method_6949( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Tubs_dict::method_6950( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Tubs*)o)->GetEntityType());
}

void* __G4Tubs_dict::method_6951( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Tubs*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Tubs_dict::method_6952( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Tubs*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Tubs_dict::method_6953( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Tubs*)o)->CreatePolyhedron();
}

void* __G4Tubs_dict::method_6954( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Tubs*)o)->CreateNURBS();
}

void* __G4Tubs_dict::method_6955( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetRMin();
  return &ret;
}

void* __G4Tubs_dict::method_6956( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetRMax();
  return &ret;
}

void* __G4Tubs_dict::method_6957( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetDz();
  return &ret;
}

void* __G4Tubs_dict::method_6958( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetSPhi();
  return &ret;
}

void* __G4Tubs_dict::method_6959( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Tubs*)o)->GetDPhi();
  return &ret;
}

void* __G4Tubs_dict::method_x27( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Tubs,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Tubs,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4Box -------------------------------
class __G4Box_dict { 
  public:
  __G4Box_dict();
  static void * constructor_6965(void*, const std::vector<void*>&, void*);
  static void * constructor_6966(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Box*)o)->~G4Box(); return 0;}
  static void * method_6968(void*, const std::vector<void*>&, void*);
  static void * method_6969(void*, const std::vector<void*>&, void*);
  static void * method_6970(void*, const std::vector<void*>&, void*);
  static void * method_6971(void*, const std::vector<void*>&, void*);
  static void * method_6972(void*, const std::vector<void*>&, void*);
  static void * method_6973(void*, const std::vector<void*>&, void*);
  static void * method_6974(void*, const std::vector<void*>&, void*);
  static void * method_6975(void*, const std::vector<void*>&, void*);
  static void * method_6976(void*, const std::vector<void*>&, void*);
  static void * method_6977(void*, const std::vector<void*>&, void*);
  static void * method_6978(void*, const std::vector<void*>&, void*);
  static void * method_6979(void*, const std::vector<void*>&, void*);
  static void * method_6980(void*, const std::vector<void*>&, void*);
  static void * method_6981(void*, const std::vector<void*>&, void*);
  static void * method_6982(void*, const std::vector<void*>&, void*);
  static void * method_6983(void*, const std::vector<void*>&, void*);
  static void * method_6984(void*, const std::vector<void*>&, void*);
  static void * method_6985(void*, const std::vector<void*>&, void*);
  static void * method_6986(void*, const std::vector<void*>&, void*);
  static void * method_6987(void*, const std::vector<void*>&, void*);
  static void * method_6988(void*, const std::vector<void*>&, void*);
  static void* method_x28( void*, const std::vector<void*>&, void* ); 
};


__G4Box_dict::__G4Box_dict() {
  ClassBuilder< ::G4Box >("G4Box", PUBLIC | VIRTUAL)
  .addBase< ::G4CSGSolid >(PUBLIC)
  .addDataMember(type_567, "fDx", OffsetOf(::G4Box, fDx), PRIVATE)
  .addDataMember(type_567, "fDy", OffsetOf(::G4Box, fDy), PRIVATE)
  .addDataMember(type_567, "fDz", OffsetOf(::G4Box, fDz), PRIVATE)
  .addEnum< G4Box::ESide >("kUndefined=0;kPX=1;kMX=2;kPY=3;kMY=4;kPZ=5;kMZ=6")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12525), "G4Box", constructor_6965, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567), "G4Box", constructor_6966, 0, "pName;pX;pY;pZ", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Box", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_6968, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_6969, 0, "pAxis;pVoxelLimit;pTransform;pmin;pmax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetXHalfLength", method_6970, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetYHalfLength", method_6971, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZHalfLength", method_6972, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetXHalfLength", method_6973, 0, "dx", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetYHalfLength", method_6974, 0, "dy", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetZHalfLength", method_6975, 0, "dz", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_6976, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_6977, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_6978, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_6979, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_6980, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_6981, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_6982, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_6983, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_6984, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_6985, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_471), "GetExtent", method_6986, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_6987, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_6988, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x28);
}

//------Stub functions for class G4Box -------------------------------
void* __G4Box_dict::constructor_6965( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Box(*(const ::G4Box*)arg[0]);
}

void* __G4Box_dict::constructor_6966( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Box(*(const ::G4String*)arg[0],
                            *(double*)arg[1],
                            *(double*)arg[2],
                            *(double*)arg[3]);
}

void* __G4Box_dict::method_6968( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Box*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                   *(const int*)arg[1],
                                   (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Box_dict::method_6969( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4Box*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                             *(const ::G4VoxelLimits*)arg[1],
                                             *(const ::G4AffineTransform*)arg[2],
                                             *(double*)arg[3],
                                             *(double*)arg[4]);
  return &ret;
}

void* __G4Box_dict::method_6970( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->GetXHalfLength();
  return &ret;
}

void* __G4Box_dict::method_6971( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->GetYHalfLength();
  return &ret;
}

void* __G4Box_dict::method_6972( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->GetZHalfLength();
  return &ret;
}

void* __G4Box_dict::method_6973( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Box*)o)->SetXHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Box_dict::method_6974( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Box*)o)->SetYHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Box_dict::method_6975( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Box*)o)->SetZHalfLength(*(double*)arg[0]);
  return 0;
}

void* __G4Box_dict::method_6976( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4Box*)o)->GetCubicVolume();
  return &ret;
}

void* __G4Box_dict::method_6977( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Box*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Box_dict::method_6978( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4Box*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4Box_dict::method_6979( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                          *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Box_dict::method_6980( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Box_dict::method_6981( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4Box*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4Box*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4Box*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4Box*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1],
                                             *(const bool*)arg[2],
                                             (bool*)arg[3],
                                             (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4Box_dict::method_6982( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Box*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Box_dict::method_6983( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Box*)o)->GetEntityType());
}

void* __G4Box_dict::method_6984( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Box*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Box_dict::method_6985( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4Box*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4Box_dict::method_6986( void* o, const std::vector<void*>&, void*)
{
  return new G4VisExtent(((const ::G4Box*)o)->GetExtent());
}

void* __G4Box_dict::method_6987( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Box*)o)->CreatePolyhedron();
}

void* __G4Box_dict::method_6988( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Box*)o)->CreateNURBS();
}

void* __G4Box_dict::method_x28( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4CSGSolid >(), seal::reflex::baseOffset< ::G4Box,::G4CSGSolid >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Box,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4PVParameterised -------------------------------
class __G4PVParameterised_dict { 
  public:
  __G4PVParameterised_dict();
  static void * constructor_6992(void*, const std::vector<void*>&, void*);
  static void * constructor_6993(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4PVParameterised*)o)->~G4PVParameterised(); return 0;}
  static void * method_6995(void*, const std::vector<void*>&, void*);
  static void * method_6996(void*, const std::vector<void*>&, void*);
  static void * method_6997(void*, const std::vector<void*>&, void*);
  static void* method_x29( void*, const std::vector<void*>&, void* ); 
};


__G4PVParameterised_dict::__G4PVParameterised_dict() {
  ClassBuilder< ::G4PVParameterised >("G4PVParameterised", PUBLIC | VIRTUAL)
  .addBase< ::G4PVReplica >(PUBLIC)
  .addDataMember(type_12364, "fparam", OffsetOf(::G4PVParameterised, fparam), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_10645, type_10645, type_534c, type_565c, type_12364), "G4PVParameterised", constructor_6992, 0, "pName;pLogical;pMotherLogical;pAxis;nReplicas;pParam", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_10645, type_10743, type_534c, type_565c, type_12364), "G4PVParameterised", constructor_6993, 0, "pName;pLogical;pMother;pAxis;nReplicas;pParam", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4PVParameterised", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsParameterised", method_6995, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12364), "GetParameterisation", method_6996, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12365, type_3399, type_3903, type_3903, type_11500), "GetReplicationData", method_6997, 0, "axis;nReplicas;width;offset;consuming", PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x29);
}

//------Stub functions for class G4PVParameterised -------------------------------
void* __G4PVParameterised_dict::constructor_6992( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVParameterised(*(const ::G4String*)arg[0],
                                        (::G4LogicalVolume*)arg[1],
                                        (::G4LogicalVolume*)arg[2],
                                        *(const ::EAxis*)arg[3],
                                        *(const int*)arg[4],
                                        (::G4VPVParameterisation*)arg[5]);
}

void* __G4PVParameterised_dict::constructor_6993( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4PVParameterised(*(const ::G4String*)arg[0],
                                        (::G4LogicalVolume*)arg[1],
                                        (::G4VPhysicalVolume*)arg[2],
                                        *(const ::EAxis*)arg[3],
                                        *(const int*)arg[4],
                                        (::G4VPVParameterisation*)arg[5]);
}

void* __G4PVParameterised_dict::method_6995( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVParameterised*)o)->IsParameterised();
  return &ret;
}

void* __G4PVParameterised_dict::method_6996( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4PVParameterised*)o)->GetParameterisation();
}

void* __G4PVParameterised_dict::method_6997( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4PVParameterised*)o)->GetReplicationData(*(::EAxis*)arg[0],
                                                      *(int*)arg[1],
                                                      *(double*)arg[2],
                                                      *(double*)arg[3],
                                                      *(bool*)arg[4]);
  return 0;
}

void* __G4PVParameterised_dict::method_x29( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4PVReplica >(), seal::reflex::baseOffset< ::G4PVParameterised,::G4PVReplica >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VPhysicalVolume >(), seal::reflex::baseOffset< ::G4PVParameterised,::G4VPhysicalVolume >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4PVReplica -------------------------------
class __G4PVReplica_dict { 
  public:
  __G4PVReplica_dict();
  static void * constructor_7003(void*, const std::vector<void*>&, void*);
  static void * constructor_7004(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4PVReplica*)o)->~G4PVReplica(); return 0;}
  static void * method_7006(void*, const std::vector<void*>&, void*);
  static void * method_7007(void*, const std::vector<void*>&, void*);
  static void * method_7008(void*, const std::vector<void*>&, void*);
  static void * method_7009(void*, const std::vector<void*>&, void*);
  static void * method_7010(void*, const std::vector<void*>&, void*);
  static void * method_7011(void*, const std::vector<void*>&, void*);
  static void * method_7012(void*, const std::vector<void*>&, void*);
  static void * method_7013(void*, const std::vector<void*>&, void*);
  static void* method_x30( void*, const std::vector<void*>&, void* ); 
};


__G4PVReplica_dict::__G4PVReplica_dict() {
  ClassBuilder< ::G4PVReplica >("G4PVReplica", PUBLIC | VIRTUAL)
  .addBase< ::G4VPhysicalVolume >(PUBLIC)
  .addDataMember(type_534, "faxis", OffsetOf(::G4PVReplica, faxis), PROTECTED)
  .addDataMember(type_565, "fnReplicas", OffsetOf(::G4PVReplica, fnReplicas), PROTECTED)
  .addDataMember(type_567, "fwidth", OffsetOf(::G4PVReplica, fwidth), PROTECTED)
  .addDataMember(type_567, "foffset", OffsetOf(::G4PVReplica, foffset), PROTECTED)
  .addDataMember(type_565, "fcopyNo", OffsetOf(::G4PVReplica, fcopyNo), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_10645, type_10645, type_534c, type_565c, type_567c, type_567c), "G4PVReplica", constructor_7003, 0, "pName;pLogical;pMother;pAxis;nReplicas;width;offset=0", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_10645, type_10743, type_534c, type_565c, type_567c, type_567c), "G4PVReplica", constructor_7004, 0, "pName;pLogical;pMother;pAxis;nReplicas;width;offset=0", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4PVReplica", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsMany", method_7006, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsReplicated", method_7007, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCopyNo", method_7008, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetCopyNo", method_7009, 0, "CopyNo", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsParameterised", method_7010, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12364), "GetParameterisation", method_7011, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetMultiplicity", method_7012, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12365, type_3399, type_3903, type_3903, type_11500), "GetReplicationData", method_7013, 0, "axis;nReplicas;width;offset;consuming", PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x30);
}

//------Stub functions for class G4PVReplica -------------------------------
void* __G4PVReplica_dict::constructor_7003( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 6 ) {
    return ::new(mem) ::G4PVReplica(*(const ::G4String*)arg[0],
                                  (::G4LogicalVolume*)arg[1],
                                  (::G4LogicalVolume*)arg[2],
                                  *(const ::EAxis*)arg[3],
                                  *(const int*)arg[4],
                                  *(const double*)arg[5]);
  }
  else if ( arg.size() == 7 ) { 
    return ::new(mem) ::G4PVReplica(*(const ::G4String*)arg[0],
                                  (::G4LogicalVolume*)arg[1],
                                  (::G4LogicalVolume*)arg[2],
                                  *(const ::EAxis*)arg[3],
                                  *(const int*)arg[4],
                                  *(const double*)arg[5],
                                  *(const double*)arg[6]);
  }
  return 0;
}

void* __G4PVReplica_dict::constructor_7004( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 6 ) {
    return ::new(mem) ::G4PVReplica(*(const ::G4String*)arg[0],
                                  (::G4LogicalVolume*)arg[1],
                                  (::G4VPhysicalVolume*)arg[2],
                                  *(const ::EAxis*)arg[3],
                                  *(const int*)arg[4],
                                  *(const double*)arg[5]);
  }
  else if ( arg.size() == 7 ) { 
    return ::new(mem) ::G4PVReplica(*(const ::G4String*)arg[0],
                                  (::G4LogicalVolume*)arg[1],
                                  (::G4VPhysicalVolume*)arg[2],
                                  *(const ::EAxis*)arg[3],
                                  *(const int*)arg[4],
                                  *(const double*)arg[5],
                                  *(const double*)arg[6]);
  }
  return 0;
}

void* __G4PVReplica_dict::method_7006( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVReplica*)o)->IsMany();
  return &ret;
}

void* __G4PVReplica_dict::method_7007( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVReplica*)o)->IsReplicated();
  return &ret;
}

void* __G4PVReplica_dict::method_7008( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4PVReplica*)o)->GetCopyNo();
  return &ret;
}

void* __G4PVReplica_dict::method_7009( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4PVReplica*)o)->SetCopyNo(*(int*)arg[0]);
  return 0;
}

void* __G4PVReplica_dict::method_7010( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4PVReplica*)o)->IsParameterised();
  return &ret;
}

void* __G4PVReplica_dict::method_7011( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4PVReplica*)o)->GetParameterisation();
}

void* __G4PVReplica_dict::method_7012( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4PVReplica*)o)->GetMultiplicity();
  return &ret;
}

void* __G4PVReplica_dict::method_7013( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4PVReplica*)o)->GetReplicationData(*(::EAxis*)arg[0],
                                                *(int*)arg[1],
                                                *(double*)arg[2],
                                                *(double*)arg[3],
                                                *(bool*)arg[4]);
  return 0;
}

void* __G4PVReplica_dict::method_x30( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VPhysicalVolume >(), seal::reflex::baseOffset< ::G4PVReplica,::G4VPhysicalVolume >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class BuildG4Polycone -------------------------------
class __BuildG4Polycone_dict { 
  public:
  __BuildG4Polycone_dict();
  static void * constructor_7020(void*, const std::vector<void*>&, void*);
  static void * constructor_7021(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::BuildG4Polycone*)o)->~BuildG4Polycone(); return 0;}
  static void * constructor_7023(void*, const std::vector<void*>&, void*);
  static void * method_7024(void*, const std::vector<void*>&, void*);
  static void * method_7025(void*, const std::vector<void*>&, void*);
};


__BuildG4Polycone_dict::__BuildG4Polycone_dict() {
  ClassBuilder< ::BuildG4Polycone >("BuildG4Polycone", PUBLIC | VIRTUAL)
  .addDataMember(type_7974, "zpl", OffsetOf(::BuildG4Polycone, zpl), PRIVATE)
  .addDataMember(type_7974, "zin", OffsetOf(::BuildG4Polycone, zin), PRIVATE)
  .addDataMember(type_7974, "zout", OffsetOf(::BuildG4Polycone, zout), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12528), "BuildG4Polycone", constructor_7020, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "BuildG4Polycone", constructor_7021, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~BuildG4Polycone", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_void, type_424), "BuildG4Polycone", constructor_7023, 0, "", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_424, type_426, type_426, type_426), "AddZPlane", method_7024, 0, ";;;", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12529, type_10687, type_426, type_426, type_424), "Build", method_7025, 0, ";;;", PUBLIC);
}

//------Stub functions for class BuildG4Polycone -------------------------------
void* __BuildG4Polycone_dict::constructor_7020( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::BuildG4Polycone(*(const ::BuildG4Polycone*)arg[0]);
}

void* __BuildG4Polycone_dict::constructor_7021( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::BuildG4Polycone();
}

void* __BuildG4Polycone_dict::constructor_7023( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::BuildG4Polycone(*(int*)arg[0]);
}

void* __BuildG4Polycone_dict::method_7024( void* o, const std::vector<void*>& arg, void*)
{
  ((::BuildG4Polycone*)o)->AddZPlane(*(int*)arg[0],
                                     *(double*)arg[1],
                                     *(double*)arg[2],
                                     *(double*)arg[3]);
  return 0;
}

void* __BuildG4Polycone_dict::method_7025( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::BuildG4Polycone*)o)->Build(*(::G4String*)arg[0],
                                               *(double*)arg[1],
                                               *(double*)arg[2],
                                               *(int*)arg[3]);
}

//------Dictionary for class G4Polycone -------------------------------
class __G4Polycone_dict { 
  public:
  __G4Polycone_dict();
  static void * constructor_7033(void*, const std::vector<void*>&, void*);
  static void * constructor_7034(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Polycone*)o)->~G4Polycone(); return 0;}
  static void * constructor_7036(void*, const std::vector<void*>&, void*);
  static void * operator_7037(void*, const std::vector<void*>&, void*);
  static void * method_7038(void*, const std::vector<void*>&, void*);
  static void * method_7039(void*, const std::vector<void*>&, void*);
  static void * method_7040(void*, const std::vector<void*>&, void*);
  static void * method_7041(void*, const std::vector<void*>&, void*);
  static void * method_7042(void*, const std::vector<void*>&, void*);
  static void * method_7043(void*, const std::vector<void*>&, void*);
  static void * method_7044(void*, const std::vector<void*>&, void*);
  static void * method_7045(void*, const std::vector<void*>&, void*);
  static void * method_7046(void*, const std::vector<void*>&, void*);
  static void * method_7047(void*, const std::vector<void*>&, void*);
  static void * method_7048(void*, const std::vector<void*>&, void*);
  static void * method_7049(void*, const std::vector<void*>&, void*);
  static void * method_7050(void*, const std::vector<void*>&, void*);
  static void * method_7051(void*, const std::vector<void*>&, void*);
  static void * method_7052(void*, const std::vector<void*>&, void*);
  static void * method_7053(void*, const std::vector<void*>&, void*);
  static void* method_x31( void*, const std::vector<void*>&, void* ); 
};


__G4Polycone_dict::__G4Polycone_dict() {
  ClassBuilder< ::G4Polycone >("G4Polycone", PUBLIC | VIRTUAL)
  .addBase< ::G4VCSGfaceted >(PUBLIC)
  .addDataMember(type_567, "startPhi", OffsetOf(::G4Polycone, startPhi), PROTECTED)
  .addDataMember(type_567, "endPhi", OffsetOf(::G4Polycone, endPhi), PROTECTED)
  .addDataMember(type_564, "phiIsOpen", OffsetOf(::G4Polycone, phiIsOpen), PROTECTED)
  .addDataMember(type_565, "numCorner", OffsetOf(::G4Polycone, numCorner), PROTECTED)
  .addDataMember(type_12530, "corners", OffsetOf(::G4Polycone, corners), PROTECTED)
  .addDataMember(type_12531, "original_parameters", OffsetOf(::G4Polycone, original_parameters), PROTECTED)
  .addDataMember(type_12511, "enclosingCylinder", OffsetOf(::G4Polycone, enclosingCylinder), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_565, type_3897, type_3897, type_3897), "G4Polycone", constructor_7033, 0, "name;phiStart;phiTotal;numZPlanes;zPlane;rInner;rOuter", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_565, type_3897, type_3897), "G4Polycone", constructor_7034, 0, "name;phiStart;phiTotal;numRZ;r;z", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Polycone", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12532), "G4Polycone", constructor_7036, 0, "source", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12532, type_12532), "operator=", operator_7037, 0, "source", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_7038, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_7039, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_7040, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_7041, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_7042, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_7043, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_7044, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_7045, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "Reset", method_7046, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetStartPhi", method_7047, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetEndPhi", method_7048, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsOpen", method_7049, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumRZCorner", method_7050, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_457, type_565), "GetCorner", method_7051, 0, "index", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12531), "GetOriginalParameters", method_7052, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12531), "SetOriginalParameters", method_7053, 0, "pars", PUBLIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x31);
}

//------Stub functions for class G4Polycone -------------------------------
void* __G4Polycone_dict::constructor_7033( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polycone(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(int*)arg[3],
                                 (const double*)arg[4],
                                 (const double*)arg[5],
                                 (const double*)arg[6]);
}

void* __G4Polycone_dict::constructor_7034( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polycone(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(int*)arg[3],
                                 (const double*)arg[4],
                                 (const double*)arg[5]);
}

void* __G4Polycone_dict::constructor_7036( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4Polycone(*(const ::G4Polycone*)arg[0]);
}

void* __G4Polycone_dict::operator_7037( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4Polycone*)o)->operator=(*(const ::G4Polycone*)arg[0]);
}

void* __G4Polycone_dict::method_7038( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Polycone*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Polycone_dict::method_7039( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Polycone*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                               *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4Polycone_dict::method_7040( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4Polycone*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4Polycone_dict::method_7041( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Polycone*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                        *(const int*)arg[1],
                                        (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4Polycone_dict::method_7042( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Polycone*)o)->GetEntityType());
}

void* __G4Polycone_dict::method_7043( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4Polycone*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4Polycone_dict::method_7044( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polycone*)o)->CreatePolyhedron();
}

void* __G4Polycone_dict::method_7045( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polycone*)o)->CreateNURBS();
}

void* __G4Polycone_dict::method_7046( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((::G4Polycone*)o)->Reset();
  return &ret;
}

void* __G4Polycone_dict::method_7047( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Polycone*)o)->GetStartPhi();
  return &ret;
}

void* __G4Polycone_dict::method_7048( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Polycone*)o)->GetEndPhi();
  return &ret;
}

void* __G4Polycone_dict::method_7049( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4Polycone*)o)->IsOpen();
  return &ret;
}

void* __G4Polycone_dict::method_7050( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Polycone*)o)->GetNumRZCorner();
  return &ret;
}

void* __G4Polycone_dict::method_7051( void* o, const std::vector<void*>& arg, void*)
{
  return new G4PolyconeSideRZ(((const ::G4Polycone*)o)->GetCorner(*(int*)arg[0]));
}

void* __G4Polycone_dict::method_7052( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Polycone*)o)->GetOriginalParameters();
}

void* __G4Polycone_dict::method_7053( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Polycone*)o)->SetOriginalParameters((::G4PolyconeHistorical*)arg[0]);
  return 0;
}

void* __G4Polycone_dict::method_x31( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VCSGfaceted >(), seal::reflex::baseOffset< ::G4Polycone,::G4VCSGfaceted >::get(),PUBLIC), 0));
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VSolid >(), seal::reflex::baseOffset< ::G4Polycone,::G4VSolid >::get(),PUBLIC), 1));
  return &s_bases;
}

//------Dictionary for class G4String -------------------------------
class __G4String_dict { 
  public:
  __G4String_dict();
  static void * constructor_7149(void*, const std::vector<void*>&, void*);
  static void * constructor_7150(void*, const std::vector<void*>&, void*);
  static void * constructor_7151(void*, const std::vector<void*>&, void*);
  static void * constructor_7152(void*, const std::vector<void*>&, void*);
  static void * constructor_7153(void*, const std::vector<void*>&, void*);
  static void * constructor_7154(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4String*)o)->~G4String(); return 0;}
  static void * operator_7156(void*, const std::vector<void*>&, void*);
  static void * operator_7157(void*, const std::vector<void*>&, void*);
  static void * operator_7158(void*, const std::vector<void*>&, void*);
  static void * operator_7159(void*, const std::vector<void*>&, void*);
  static void * operator_7160(void*, const std::vector<void*>&, void*);
  static void * operator_7161(void*, const std::vector<void*>&, void*);
  static void * operator_7162(void*, const std::vector<void*>&, void*);
  static void * operator_7163(void*, const std::vector<void*>&, void*);
  static void * operator_7164(void*, const std::vector<void*>&, void*);
  static void * operator_7165(void*, const std::vector<void*>&, void*);
  static void * operator_7166(void*, const std::vector<void*>&, void*);
  static void * operator_7167(void*, const std::vector<void*>&, void*);
  static void * operator_7168(void*, const std::vector<void*>&, void*);
  static void * converter_7169(void*, const std::vector<void*>&, void*);
  static void * operator_7170(void*, const std::vector<void*>&, void*);
  static void * method_7171(void*, const std::vector<void*>&, void*);
  static void * method_7172(void*, const std::vector<void*>&, void*);
  static void * method_7173(void*, const std::vector<void*>&, void*);
  static void * method_7174(void*, const std::vector<void*>&, void*);
  static void * method_7175(void*, const std::vector<void*>&, void*);
  static void * method_7176(void*, const std::vector<void*>&, void*);
  static void * method_7177(void*, const std::vector<void*>&, void*);
  static void * method_7178(void*, const std::vector<void*>&, void*);
  static void * method_7179(void*, const std::vector<void*>&, void*);
  static void * method_7180(void*, const std::vector<void*>&, void*);
  static void * method_7181(void*, const std::vector<void*>&, void*);
  static void * method_7182(void*, const std::vector<void*>&, void*);
  static void * method_7183(void*, const std::vector<void*>&, void*);
  static void * method_7184(void*, const std::vector<void*>&, void*);
  static void * method_7185(void*, const std::vector<void*>&, void*);
  static void * method_7186(void*, const std::vector<void*>&, void*);
  static void * method_7187(void*, const std::vector<void*>&, void*);
  static void * method_7188(void*, const std::vector<void*>&, void*);
  static void * method_7189(void*, const std::vector<void*>&, void*);
  static void * method_7190(void*, const std::vector<void*>&, void*);
  static void * method_7191(void*, const std::vector<void*>&, void*);
  static void * method_7192(void*, const std::vector<void*>&, void*);
  static void * method_7193(void*, const std::vector<void*>&, void*);
  static void * method_7194(void*, const std::vector<void*>&, void*);
  static void * method_7195(void*, const std::vector<void*>&, void*);
  static void* method_x32( void*, const std::vector<void*>&, void* ); 
};


__G4String_dict::__G4String_dict() {
  ClassBuilder< ::G4String >("G4String", PUBLIC | VIRTUAL)
  .addBase< ::std::basic_string<char> >(PUBLIC)
  .addTypedef(type_2807, "G4String::std_string")
  .addEnum< G4String::caseCompare >("exact=0;ignoreCase=1")
  .addEnum< G4String::stripType >("leading=0;trailing=1;both=2")
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4String", constructor_7149, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_8017), "G4String", constructor_7150, 0, "c", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_7707), "G4String", constructor_7151, 0, "astring", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169), "G4String", constructor_7152, 0, "s", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12543), "G4String", constructor_7153, 0, "s", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12544), "G4String", constructor_7154, 0, "s", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4String", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_9169), "operator=", operator_7156, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_12544), "operator=", operator_7157, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_7707), "operator=", operator_7158, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_8017, type_554), "operator()", operator_7159, 0, "i", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_8987, type_554), "operator()", operator_7160, 0, "i", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_12543), "operator+=", operator_7161, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_7707), "operator+=", operator_7162, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_12544), "operator+=", operator_7163, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_9217), "operator+=", operator_7164, 0, "c", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_9169), "operator==", operator_7165, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_7707), "operator==", operator_7166, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_9169), "operator!=", operator_7167, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_7707), "operator!=", operator_7168, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_7707), "operator char*", converter_7169, 0, 0, PUBLIC | CONVERTER)
  .addFunctionMember(FunctionTypeBuilder(type_552, type_554, type_554), "operator()", operator_7170, 0, "start;extent", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_7707, type_7147), "compareTo", method_7171, 0, "s;mode=exact", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_9169, type_7147), "compareTo", method_7172, 0, "s;mode=exact", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_7707), "prepend", method_7173, 0, "str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_9169), "append", method_7174, 0, "s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12545, type_12545, type_564), "readLine", method_7175, 0, "s;skipWhite=true", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_553, type_553, type_7707, type_553), "replace", method_7176, 0, "start;nbytes;buff;n2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_554, type_554, type_7707), "replace", method_7177, 0, "pos;n;s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_554), "remove", method_7178, 0, "n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10687, type_554, type_554), "remove", method_7179, 0, "pos;N", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_8017), "first", method_7180, 0, "c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_8017), "last", method_7181, 0, "c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_2807), "contains", method_7182, 0, "s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_8017), "contains", method_7183, 0, "c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_565, type_8017), "strip", method_7184, 0, "stripType=trailing;c=' '", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "toLower", method_7185, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "toUpper", method_7186, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "isNull", method_7187, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_554, type_7707, type_565), "index", method_7188, 0, "str;pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_554, type_8017, type_565), "index", method_7189, 0, "c;pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_554, type_9169, type_554, type_554, type_7147), "index", method_7190, 0, "s;ln;st;", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_7707), "data", method_7191, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_7707, type_7707), "strcasecompare", method_7192, 0, "s1;s2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_553, type_7147), "hash", method_7193, 0, "", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_553), "stlhash", method_7194, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_553, type_9169), "hash", method_7195, 0, "s", PUBLIC | STATIC)
  .addFunctionMember<void*(void)>("getBasesTable", method_x32);
}

//------Stub functions for class G4String -------------------------------
void* __G4String_dict::constructor_7149( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4String();
}

void* __G4String_dict::constructor_7150( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4String(*(char*)arg[0]);
}

void* __G4String_dict::constructor_7151( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4String((const char*)arg[0]);
}

void* __G4String_dict::constructor_7152( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4String(*(const ::G4String*)arg[0]);
}

void* __G4String_dict::constructor_7153( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4String(*(const ::G4SubString*)arg[0]);
}

void* __G4String_dict::constructor_7154( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4String(*(const ::std::basic_string<char>*)arg[0]);
}

void* __G4String_dict::operator_7156( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator=(*(const ::G4String*)arg[0]);
}

void* __G4String_dict::operator_7157( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator=(*(const ::std::basic_string<char>*)arg[0]);
}

void* __G4String_dict::operator_7158( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator=((const char*)arg[0]);
}

void* __G4String_dict::operator_7159( void* o, const std::vector<void*>& arg, void*)
{
  static char ret;
  ret = ((const ::G4String*)o)->operator()(*(unsigned int*)arg[0]);
  return &ret;
}

void* __G4String_dict::operator_7160( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator()(*(unsigned int*)arg[0]);
}

void* __G4String_dict::operator_7161( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator+=(*(const ::G4SubString*)arg[0]);
}

void* __G4String_dict::operator_7162( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator+=((const char*)arg[0]);
}

void* __G4String_dict::operator_7163( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator+=(*(const ::std::basic_string<char>*)arg[0]);
}

void* __G4String_dict::operator_7164( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->operator+=(*(const char*)arg[0]);
}

void* __G4String_dict::operator_7165( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->operator==(*(const ::G4String*)arg[0]);
  return &ret;
}

void* __G4String_dict::operator_7166( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->operator==((const char*)arg[0]);
  return &ret;
}

void* __G4String_dict::operator_7167( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->operator!=(*(const ::G4String*)arg[0]);
  return &ret;
}

void* __G4String_dict::operator_7168( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->operator!=((const char*)arg[0]);
  return &ret;
}

void* __G4String_dict::converter_7169( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4String*)o)->operator const char*();
}

void* __G4String_dict::operator_7170( void* o, const std::vector<void*>& arg, void*)
{
  return new G4SubString(((::G4String*)o)->operator()(*(unsigned int*)arg[0],
                                                      *(unsigned int*)arg[1]));
}

void* __G4String_dict::method_7171( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  if ( arg.size() == 1 ) {
    ret = ((::G4String*)o)->compareTo((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4String*)o)->compareTo((const char*)arg[0],
                                      *(::G4String::caseCompare*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4String_dict::method_7172( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  if ( arg.size() == 1 ) {
    ret = ((::G4String*)o)->compareTo(*(const ::G4String*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4String*)o)->compareTo(*(const ::G4String*)arg[0],
                                      *(::G4String::caseCompare*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4String_dict::method_7173( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->prepend((const char*)arg[0]);
}

void* __G4String_dict::method_7174( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->append(*(const ::G4String*)arg[0]);
}

void* __G4String_dict::method_7175( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    return (void*)&((::G4String*)o)->readLine(*(::std::basic_istream<char,std::char_traits<char> >*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return (void*)&((::G4String*)o)->readLine(*(::std::basic_istream<char,std::char_traits<char> >*)arg[0],
                                              *(bool*)arg[1]);
  }
  return 0;
}

void* __G4String_dict::method_7176( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->replace(*(unsigned int*)arg[0],
                                           *(unsigned int*)arg[1],
                                           (const char*)arg[2],
                                           *(unsigned int*)arg[3]);
}

void* __G4String_dict::method_7177( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->replace(*(unsigned int*)arg[0],
                                           *(unsigned int*)arg[1],
                                           (const char*)arg[2]);
}

void* __G4String_dict::method_7178( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->remove(*(unsigned int*)arg[0]);
}

void* __G4String_dict::method_7179( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4String*)o)->remove(*(unsigned int*)arg[0],
                                          *(unsigned int*)arg[1]);
}

void* __G4String_dict::method_7180( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4String*)o)->first(*(char*)arg[0]);
  return &ret;
}

void* __G4String_dict::method_7181( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4String*)o)->last(*(char*)arg[0]);
  return &ret;
}

void* __G4String_dict::method_7182( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->contains(*(::std::basic_string<char>*)arg[0]);
  return &ret;
}

void* __G4String_dict::method_7183( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->contains(*(char*)arg[0]);
  return &ret;
}

void* __G4String_dict::method_7184( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    return new G4String(((::G4String*)o)->strip());
  }
  else if ( arg.size() == 1 ) { 
    return new G4String(((::G4String*)o)->strip(*(int*)arg[0]));
  }
  else if ( arg.size() == 2 ) { 
    return new G4String(((::G4String*)o)->strip(*(int*)arg[0],
                                                *(char*)arg[1]));
  }
  return 0;
}

void* __G4String_dict::method_7185( void* o, const std::vector<void*>&, void*)
{
  ((::G4String*)o)->toLower();
  return 0;
}

void* __G4String_dict::method_7186( void* o, const std::vector<void*>&, void*)
{
  ((::G4String*)o)->toUpper();
  return 0;
}

void* __G4String_dict::method_7187( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4String*)o)->isNull();
  return &ret;
}

void* __G4String_dict::method_7188( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::G4String*)o)->index((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::G4String*)o)->index((const char*)arg[0],
                                        *(int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4String_dict::method_7189( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::G4String*)o)->index(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::G4String*)o)->index(*(char*)arg[0],
                                        *(int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4String_dict::method_7190( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::G4String*)o)->index(*(const ::G4String*)arg[0],
                                      *(unsigned int*)arg[1],
                                      *(unsigned int*)arg[2],
                                      *(::G4String::caseCompare*)arg[3]);
  return &ret;
}

void* __G4String_dict::method_7191( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4String*)o)->data();
}

void* __G4String_dict::method_7192( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4String*)o)->strcasecompare((const char*)arg[0],
                                               (const char*)arg[1]);
  return &ret;
}

void* __G4String_dict::method_7193( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 0 ) {
    ret = ((const ::G4String*)o)->hash();
    return &ret;
  }
  else if ( arg.size() == 1 ) { 
    ret = ((const ::G4String*)o)->hash(*(::G4String::caseCompare*)arg[0]);
    return &ret;
  }
  return 0;
}

void* __G4String_dict::method_7194( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4String*)o)->stlhash();
  return &ret;
}

void* __G4String_dict::method_7195( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((::G4String*)o)->hash(*(const ::G4String*)arg[0]);
  return &ret;
}

void* __G4String_dict::method_x32( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::std::basic_string<char> >(), seal::reflex::baseOffset< ::G4String,::std::basic_string<char> >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class DetConstruction -------------------------------
class __DetConstruction_dict { 
  public:
  __DetConstruction_dict();
  static void * constructor_7303(void*, const std::vector<void*>&, void*);
  static void * constructor_7304(void*, const std::vector<void*>&, void*);
  static void * constructor_7305(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::DetConstruction*)o)->~DetConstruction(); return 0;}
  static void * method_7307(void*, const std::vector<void*>&, void*);
  static void* method_x33( void*, const std::vector<void*>&, void* ); 
};


__DetConstruction_dict::__DetConstruction_dict() {
  ClassBuilder< ::DetConstruction >("DetConstruction", PUBLIC | VIRTUAL)
  .addBase< ::G4VUserDetectorConstruction >(PUBLIC)
  .addDataMember(type_10645, "world", OffsetOf(::DetConstruction, world), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12553), "DetConstruction", constructor_7303, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "DetConstruction", constructor_7304, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_10645), "DetConstruction", constructor_7305, 0, "vol", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~DetConstruction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_10743), "Construct", method_7307, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember<void*(void)>("getBasesTable", method_x33);
}

//------Stub functions for class DetConstruction -------------------------------
void* __DetConstruction_dict::constructor_7303( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::DetConstruction(*(const ::DetConstruction*)arg[0]);
}

void* __DetConstruction_dict::constructor_7304( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::DetConstruction();
}

void* __DetConstruction_dict::constructor_7305( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::DetConstruction((::G4LogicalVolume*)arg[0]);
}

void* __DetConstruction_dict::method_7307( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::DetConstruction*)o)->Construct();
}

void* __DetConstruction_dict::method_x33( void*, const std::vector<void*>&, void*)
{
  static std::vector<std::pair<seal::reflex::Base, int> > s_bases;
  s_bases.push_back(std::make_pair(seal::reflex::Base( seal::reflex::getType< ::G4VUserDetectorConstruction >(), seal::reflex::baseOffset< ::DetConstruction,::G4VUserDetectorConstruction >::get(),PUBLIC), 0));
  return &s_bases;
}

//------Dictionary for class G4UserLimits -------------------------------
class __G4UserLimits_dict { 
  public:
  __G4UserLimits_dict();
  static void * constructor_7347(void*, const std::vector<void*>&, void*);
  static void * constructor_7348(void*, const std::vector<void*>&, void*);
  static void * constructor_7349(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4UserLimits*)o)->~G4UserLimits(); return 0;}
  static void * method_7351(void*, const std::vector<void*>&, void*);
  static void * method_7352(void*, const std::vector<void*>&, void*);
  static void * method_7353(void*, const std::vector<void*>&, void*);
  static void * method_7354(void*, const std::vector<void*>&, void*);
  static void * method_7355(void*, const std::vector<void*>&, void*);
  static void * method_7356(void*, const std::vector<void*>&, void*);
  static void * method_7357(void*, const std::vector<void*>&, void*);
  static void * method_7358(void*, const std::vector<void*>&, void*);
  static void * method_7359(void*, const std::vector<void*>&, void*);
  static void * method_7360(void*, const std::vector<void*>&, void*);
  static void * method_7361(void*, const std::vector<void*>&, void*);
  static void * method_7362(void*, const std::vector<void*>&, void*);
  static void * constructor_x34(void*, const std::vector<void*>&, void*);
};


__G4UserLimits_dict::__G4UserLimits_dict() {
  ClassBuilder< ::G4UserLimits >("G4UserLimits", PUBLIC | VIRTUAL)
  .addDataMember(type_567, "fMaxStep", OffsetOf(::G4UserLimits, fMaxStep), PROTECTED)
  .addDataMember(type_567, "fMaxTrack", OffsetOf(::G4UserLimits, fMaxTrack), PROTECTED)
  .addDataMember(type_567, "fMaxTime", OffsetOf(::G4UserLimits, fMaxTime), PROTECTED)
  .addDataMember(type_567, "fMinEkine", OffsetOf(::G4UserLimits, fMinEkine), PROTECTED)
  .addDataMember(type_567, "fMinRange", OffsetOf(::G4UserLimits, fMinRange), PROTECTED)
  .addDataMember(type_466, "fType", OffsetOf(::G4UserLimits, fType), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12556), "G4UserLimits", constructor_7347, 0, "_ctor_arg", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_567, type_567, type_567, type_567, type_567), "G4UserLimits", constructor_7348, 0, "ustepMax=1.79769313486231570814527423731704356798070567526e+308;utrakMax=1.79769313486231570814527423731704356798070567526e+308;utimeMax=1.79769313486231570814527423731704356798070567526e+308;uekinMin=0.0;urangMin=0.0", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_567, type_567), "G4UserLimits", constructor_7349, 0, "type;ustepMax=1.79769313486231570814527423731704356798070567526e+308;utrakMax=1.79769313486231570814527423731704356798070567526e+308;utimeMax=1.79769313486231570814527423731704356798070567526e+308;uekinMin=0.0;urangMin=0.0", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4UserLimits", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11352), "GetMaxAllowedStep", method_7351, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11352), "GetUserMaxTrackLength", method_7352, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11352), "GetUserMaxTime", method_7353, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11352), "GetUserMinEkine", method_7354, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11352), "GetUserMinRange", method_7355, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetMaxAllowedStep", method_7356, 0, "ustepMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetUserMaxTrackLength", method_7357, 0, "utrakMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetUserMaxTime", method_7358, 0, "utimeMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetUserMinEkine", method_7359, 0, "uekinMin", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetUserMinRange", method_7360, 0, "urangMin", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_9169), "GetType", method_7361, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetType", method_7362, 0, "type", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "G4UserLimits", constructor_x34, 0, 0, PUBLIC | CONSTRUCTOR);
}

//------Stub functions for class G4UserLimits -------------------------------
void* __G4UserLimits_dict::constructor_7347( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::G4UserLimits(*(const ::G4UserLimits*)arg[0]);
}

void* __G4UserLimits_dict::constructor_7348( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 0 ) {
    return ::new(mem) ::G4UserLimits();
  }
  else if ( arg.size() == 1 ) { 
    return ::new(mem) ::G4UserLimits(*(double*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return ::new(mem) ::G4UserLimits(*(double*)arg[0],
                                   *(double*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::G4UserLimits(*(double*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2]);
  }
  else if ( arg.size() == 4 ) { 
    return ::new(mem) ::G4UserLimits(*(double*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3]);
  }
  else if ( arg.size() == 5 ) { 
    return ::new(mem) ::G4UserLimits(*(double*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3],
                                   *(double*)arg[4]);
  }
  return 0;
}

void* __G4UserLimits_dict::constructor_7349( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0],
                                   *(double*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2]);
  }
  else if ( arg.size() == 4 ) { 
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3]);
  }
  else if ( arg.size() == 5 ) { 
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3],
                                   *(double*)arg[4]);
  }
  else if ( arg.size() == 6 ) { 
    return ::new(mem) ::G4UserLimits(*(const ::G4String*)arg[0],
                                   *(double*)arg[1],
                                   *(double*)arg[2],
                                   *(double*)arg[3],
                                   *(double*)arg[4],
                                   *(double*)arg[5]);
  }
  return 0;
}

void* __G4UserLimits_dict::method_7351( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4UserLimits*)o)->GetMaxAllowedStep(*(const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserLimits_dict::method_7352( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4UserLimits*)o)->GetUserMaxTrackLength(*(const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserLimits_dict::method_7353( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4UserLimits*)o)->GetUserMaxTime(*(const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserLimits_dict::method_7354( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4UserLimits*)o)->GetUserMinEkine(*(const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserLimits_dict::method_7355( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::G4UserLimits*)o)->GetUserMinRange(*(const ::G4Track*)arg[0]);
  return &ret;
}

void* __G4UserLimits_dict::method_7356( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetMaxAllowedStep(*(double*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::method_7357( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetUserMaxTrackLength(*(double*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::method_7358( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetUserMaxTime(*(double*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::method_7359( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetUserMinEkine(*(double*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::method_7360( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetUserMinRange(*(double*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::method_7361( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4UserLimits*)o)->GetType();
}

void* __G4UserLimits_dict::method_7362( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4UserLimits*)o)->SetType(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4UserLimits_dict::constructor_x34( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::G4UserLimits();
}

//------Dictionary for class G4VSolid -------------------------------
class __G4VSolid_dict { 
  public:
  __G4VSolid_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VSolid*)o)->~G4VSolid(); return 0;}
  static void * operator_7367(void*, const std::vector<void*>&, void*);
  static void * method_7368(void*, const std::vector<void*>&, void*);
  static void * method_7369(void*, const std::vector<void*>&, void*);
  static void * method_7370(void*, const std::vector<void*>&, void*);
  static void * method_7371(void*, const std::vector<void*>&, void*);
  static void * method_7372(void*, const std::vector<void*>&, void*);
  static void * method_7373(void*, const std::vector<void*>&, void*);
  static void * method_7374(void*, const std::vector<void*>&, void*);
  static void * method_7375(void*, const std::vector<void*>&, void*);
  static void * method_7376(void*, const std::vector<void*>&, void*);
  static void * method_7377(void*, const std::vector<void*>&, void*);
  static void * method_7378(void*, const std::vector<void*>&, void*);
  static void * method_7379(void*, const std::vector<void*>&, void*);
  static void * method_7380(void*, const std::vector<void*>&, void*);
  static void * method_7381(void*, const std::vector<void*>&, void*);
  static void * method_7382(void*, const std::vector<void*>&, void*);
  static void * method_7383(void*, const std::vector<void*>&, void*);
  static void * method_7384(void*, const std::vector<void*>&, void*);
  static void * method_7385(void*, const std::vector<void*>&, void*);
  static void * method_7386(void*, const std::vector<void*>&, void*);
  static void * method_7387(void*, const std::vector<void*>&, void*);
  static void * method_7388(void*, const std::vector<void*>&, void*);
  static void * method_7389(void*, const std::vector<void*>&, void*);
  static void * method_7390(void*, const std::vector<void*>&, void*);
};


__G4VSolid_dict::__G4VSolid_dict() {
  ClassBuilder< ::G4VSolid >("G4VSolid", PUBLIC | ABSTRACT | VIRTUAL)
  .addDataMember(type_466, "fshapeName", OffsetOf(::G4VSolid, fshapeName), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VSolid", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_564, type_7145), "operator==", operator_7367, 0, "s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_7368, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetName", method_7369, 0, "name", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_534c, type_12370, type_11511, type_3903, type_3903), "CalculateExtent", method_7370, 0, "pAxis;pVoxelLimit;pTransform;pMin;pMax", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_533, type_11354), "Inside", method_7371, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_528, type_11354), "SurfaceNormal", method_7372, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354), "DistanceToIn", method_7373, 0, "p;v", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToIn", method_7374, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354, type_11354, type_564c, type_11510, type_12371), "DistanceToOut", method_7375, 0, "p;v;calcNorm=false;validNorm=0;n=0", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_11354), "DistanceToOut", method_7376, 0, "p", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12364, type_565c, type_10751), "ComputeDimensions", method_7377, 0, "p;n;pRep", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetCubicVolume", method_7378, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_467), "GetEntityType", method_7379, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "StreamInfo", method_7380, 0, "os", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "DumpInfo", method_7381, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12372), "DescribeYourselfTo", method_7382, 0, "scene", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_471), "GetExtent", method_7383, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "CreatePolyhedron", method_7384, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12404), "CreateNURBS", method_7385, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12368), "GetPolyhedron", method_7386, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_11630, type_565), "GetConstituentSolid", method_7387, 0, "no", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_11631, type_565), "GetConstituentSolid", method_7388, 0, "no", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12547), "GetDisplacedSolidPtr", method_7389, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12548), "GetDisplacedSolidPtr", method_7390, 0, 0, PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VSolid -------------------------------
void* __G4VSolid_dict::operator_7367( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4VSolid*)o)->operator==(*(const ::G4VSolid*)arg[0]);
  return &ret;
}

void* __G4VSolid_dict::method_7368( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4VSolid*)o)->GetName());
}

void* __G4VSolid_dict::method_7369( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSolid*)o)->SetName(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4VSolid_dict::method_7370( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4VSolid*)o)->CalculateExtent(*(const ::EAxis*)arg[0],
                                                *(const ::G4VoxelLimits*)arg[1],
                                                *(const ::G4AffineTransform*)arg[2],
                                                *(double*)arg[3],
                                                *(double*)arg[4]);
  return &ret;
}

void* __G4VSolid_dict::method_7371( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4VSolid*)o)->Inside(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4VSolid_dict::method_7372( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4VSolid*)o)->SurfaceNormal(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __G4VSolid_dict::method_7373( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4VSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0],
                                             *(const ::CLHEP::Hep3Vector*)arg[1]);
  return &ret;
}

void* __G4VSolid_dict::method_7374( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4VSolid*)o)->DistanceToIn(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4VSolid_dict::method_7375( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::G4VSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::G4VSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2]);
    return &ret;
  }
  else if ( arg.size() == 4 ) { 
    ret = ((const ::G4VSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2],
                                                (bool*)arg[3]);
    return &ret;
  }
  else if ( arg.size() == 5 ) { 
    ret = ((const ::G4VSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                *(const ::CLHEP::Hep3Vector*)arg[1],
                                                *(const bool*)arg[2],
                                                (bool*)arg[3],
                                                (::CLHEP::Hep3Vector*)arg[4]);
    return &ret;
  }
  return 0;
}

void* __G4VSolid_dict::method_7376( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::G4VSolid*)o)->DistanceToOut(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return &ret;
}

void* __G4VSolid_dict::method_7377( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSolid*)o)->ComputeDimensions((::G4VPVParameterisation*)arg[0],
                                      *(const int*)arg[1],
                                      (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VSolid_dict::method_7378( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::G4VSolid*)o)->GetCubicVolume();
  return &ret;
}

void* __G4VSolid_dict::method_7379( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4VSolid*)o)->GetEntityType());
}

void* __G4VSolid_dict::method_7380( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::G4VSolid*)o)->StreamInfo(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __G4VSolid_dict::method_7381( void* o, const std::vector<void*>&, void*)
{
  ((const ::G4VSolid*)o)->DumpInfo();
  return 0;
}

void* __G4VSolid_dict::method_7382( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VSolid*)o)->DescribeYourselfTo(*(::G4VGraphicsScene*)arg[0]);
  return 0;
}

void* __G4VSolid_dict::method_7383( void* o, const std::vector<void*>&, void*)
{
  return new G4VisExtent(((const ::G4VSolid*)o)->GetExtent());
}

void* __G4VSolid_dict::method_7384( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VSolid*)o)->CreatePolyhedron();
}

void* __G4VSolid_dict::method_7385( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VSolid*)o)->CreateNURBS();
}

void* __G4VSolid_dict::method_7386( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VSolid*)o)->GetPolyhedron();
}

void* __G4VSolid_dict::method_7387( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4VSolid*)o)->GetConstituentSolid(*(int*)arg[0]);
}

void* __G4VSolid_dict::method_7388( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4VSolid*)o)->GetConstituentSolid(*(int*)arg[0]);
}

void* __G4VSolid_dict::method_7389( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VSolid*)o)->GetDisplacedSolidPtr();
}

void* __G4VSolid_dict::method_7390( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4VSolid*)o)->GetDisplacedSolidPtr();
}

//------Dictionary for class G4VSensitiveDetector -------------------------------
class __G4VSensitiveDetector_dict { 
  public:
  __G4VSensitiveDetector_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VSensitiveDetector*)o)->~G4VSensitiveDetector(); return 0;}
  static void * operator_7407(void*, const std::vector<void*>&, void*);
  static void * operator_7408(void*, const std::vector<void*>&, void*);
  static void * operator_7409(void*, const std::vector<void*>&, void*);
  static void * method_7410(void*, const std::vector<void*>&, void*);
  static void * method_7411(void*, const std::vector<void*>&, void*);
  static void * method_7412(void*, const std::vector<void*>&, void*);
  static void * method_7413(void*, const std::vector<void*>&, void*);
  static void * method_7414(void*, const std::vector<void*>&, void*);
  static void * method_7417(void*, const std::vector<void*>&, void*);
  static void * method_7418(void*, const std::vector<void*>&, void*);
  static void * method_7419(void*, const std::vector<void*>&, void*);
  static void * method_7420(void*, const std::vector<void*>&, void*);
  static void * method_7421(void*, const std::vector<void*>&, void*);
  static void * method_7422(void*, const std::vector<void*>&, void*);
  static void * method_7423(void*, const std::vector<void*>&, void*);
  static void * method_7424(void*, const std::vector<void*>&, void*);
  static void * method_7425(void*, const std::vector<void*>&, void*);
  static void * method_7426(void*, const std::vector<void*>&, void*);
  static void * method_7427(void*, const std::vector<void*>&, void*);
};


__G4VSensitiveDetector_dict::__G4VSensitiveDetector_dict() {
  ClassBuilder< ::G4VSensitiveDetector >("G4VSensitiveDetector", PUBLIC | ABSTRACT | VIRTUAL)
  .addDataMember(type_45, "collectionName", OffsetOf(::G4VSensitiveDetector, collectionName), PROTECTED)
  .addDataMember(type_466, "SensitiveDetectorName", OffsetOf(::G4VSensitiveDetector, SensitiveDetectorName), PROTECTED)
  .addDataMember(type_466, "thePathName", OffsetOf(::G4VSensitiveDetector, thePathName), PROTECTED)
  .addDataMember(type_466, "fullPathName", OffsetOf(::G4VSensitiveDetector, fullPathName), PROTECTED)
  .addDataMember(type_565, "verboseLevel", OffsetOf(::G4VSensitiveDetector, verboseLevel), PROTECTED)
  .addDataMember(type_564, "active", OffsetOf(::G4VSensitiveDetector, active), PROTECTED)
  .addDataMember(type_12558, "ROgeometry", OffsetOf(::G4VSensitiveDetector, ROgeometry), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VSensitiveDetector", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_12559, type_12559), "operator=", operator_7407, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12559), "operator==", operator_7408, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12559), "operator!=", operator_7409, 0, "right", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10671), "Initialize", method_7410, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10671), "EndOfEvent", method_7411, 0, "", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "clear", method_7412, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "DrawAll", method_7413, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PrintAll", method_7414, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_10747), "Hit", method_7417, 0, "aStep", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12558), "SetROgeometry", method_7418, 0, "value", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNumberOfCollections", method_7419, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466, type_565), "GetCollectionName", method_7420, 0, "id", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetVerboseLevel", method_7421, 0, "vl", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "Activate", method_7422, 0, "activeFlag", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "isActive", method_7423, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_7424, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetPathName", method_7425, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetFullPathName", method_7426, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12558), "GetROgeometry", method_7427, 0, 0, PUBLIC);
}

//------Stub functions for class G4VSensitiveDetector -------------------------------
void* __G4VSensitiveDetector_dict::operator_7407( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::G4VSensitiveDetector*)o)->operator=(*(const ::G4VSensitiveDetector*)arg[0]);
}

void* __G4VSensitiveDetector_dict::operator_7408( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4VSensitiveDetector*)o)->operator==(*(const ::G4VSensitiveDetector*)arg[0]);
  return &ret;
}

void* __G4VSensitiveDetector_dict::operator_7409( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4VSensitiveDetector*)o)->operator!=(*(const ::G4VSensitiveDetector*)arg[0]);
  return &ret;
}

void* __G4VSensitiveDetector_dict::method_7410( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSensitiveDetector*)o)->Initialize((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7411( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSensitiveDetector*)o)->EndOfEvent((::G4HCofThisEvent*)arg[0]);
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7412( void* o, const std::vector<void*>&, void*)
{
  ((::G4VSensitiveDetector*)o)->clear();
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7413( void* o, const std::vector<void*>&, void*)
{
  ((::G4VSensitiveDetector*)o)->DrawAll();
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7414( void* o, const std::vector<void*>&, void*)
{
  ((::G4VSensitiveDetector*)o)->PrintAll();
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7417( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((::G4VSensitiveDetector*)o)->Hit((::G4Step*)arg[0]);
  return &ret;
}

void* __G4VSensitiveDetector_dict::method_7418( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSensitiveDetector*)o)->SetROgeometry((::G4VReadOutGeometry*)arg[0]);
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7419( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((::G4VSensitiveDetector*)o)->GetNumberOfCollections();
  return &ret;
}

void* __G4VSensitiveDetector_dict::method_7420( void* o, const std::vector<void*>& arg, void*)
{
  return new G4String(((::G4VSensitiveDetector*)o)->GetCollectionName(*(int*)arg[0]));
}

void* __G4VSensitiveDetector_dict::method_7421( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSensitiveDetector*)o)->SetVerboseLevel(*(int*)arg[0]);
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7422( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VSensitiveDetector*)o)->Activate(*(bool*)arg[0]);
  return 0;
}

void* __G4VSensitiveDetector_dict::method_7423( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((::G4VSensitiveDetector*)o)->isActive();
  return &ret;
}

void* __G4VSensitiveDetector_dict::method_7424( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((::G4VSensitiveDetector*)o)->GetName());
}

void* __G4VSensitiveDetector_dict::method_7425( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((::G4VSensitiveDetector*)o)->GetPathName());
}

void* __G4VSensitiveDetector_dict::method_7426( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((::G4VSensitiveDetector*)o)->GetFullPathName());
}

void* __G4VSensitiveDetector_dict::method_7427( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4VSensitiveDetector*)o)->GetROgeometry();
}

//------Dictionary for class G4VPVParameterisation -------------------------------
class __G4VPVParameterisation_dict { 
  public:
  __G4VPVParameterisation_dict();
  static void * method_7466(void*, const std::vector<void*>&, void*);
  static void * method_7467(void*, const std::vector<void*>&, void*);
  static void * method_7468(void*, const std::vector<void*>&, void*);
  static void * method_7469(void*, const std::vector<void*>&, void*);
  static void * method_7470(void*, const std::vector<void*>&, void*);
  static void * method_7471(void*, const std::vector<void*>&, void*);
  static void * method_7472(void*, const std::vector<void*>&, void*);
  static void * method_7473(void*, const std::vector<void*>&, void*);
  static void * method_7474(void*, const std::vector<void*>&, void*);
  static void * method_7475(void*, const std::vector<void*>&, void*);
  static void * method_7476(void*, const std::vector<void*>&, void*);
  static void * method_7477(void*, const std::vector<void*>&, void*);
  static void * method_7478(void*, const std::vector<void*>&, void*);
  static void * method_7479(void*, const std::vector<void*>&, void*);
  static void * method_7480(void*, const std::vector<void*>&, void*);
};


__G4VPVParameterisation_dict::__G4VPVParameterisation_dict() {
  ClassBuilder< ::G4VPVParameterisation >("G4VPVParameterisation", PUBLIC | ABSTRACT | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565c, type_10743), "ComputeTransformation", method_7466, 0, ";", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_11631, type_565c, type_10743), "ComputeSolid", method_7467, 0, ";", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_4682, type_565c, type_10743), "ComputeMaterial", method_7468, 0, ";", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12568, type_565c, type_10751), "ComputeDimensions", method_7469, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12569, type_565c, type_10751), "ComputeDimensions", method_7470, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12570, type_565c, type_10751), "ComputeDimensions", method_7471, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12571, type_565c, type_10751), "ComputeDimensions", method_7472, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12572, type_565c, type_10751), "ComputeDimensions", method_7473, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12573, type_565c, type_10751), "ComputeDimensions", method_7474, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12574, type_565c, type_10751), "ComputeDimensions", method_7475, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12575, type_565c, type_10751), "ComputeDimensions", method_7476, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12576, type_565c, type_10751), "ComputeDimensions", method_7477, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12577, type_565c, type_10751), "ComputeDimensions", method_7478, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12578, type_565c, type_10751), "ComputeDimensions", method_7479, 0, ";;", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12579, type_565c, type_10751), "ComputeDimensions", method_7480, 0, ";;", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VPVParameterisation -------------------------------
void* __G4VPVParameterisation_dict::method_7466( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeTransformation(*(const int*)arg[0],
                                                             (::G4VPhysicalVolume*)arg[1]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7467( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4VPVParameterisation*)o)->ComputeSolid(*(const int*)arg[0],
                                                            (::G4VPhysicalVolume*)arg[1]);
}

void* __G4VPVParameterisation_dict::method_7468( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4VPVParameterisation*)o)->ComputeMaterial(*(const int*)arg[0],
                                                               (::G4VPhysicalVolume*)arg[1]);
}

void* __G4VPVParameterisation_dict::method_7469( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Box*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7470( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Tubs*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7471( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Trd*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7472( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Trap*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7473( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Cons*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7474( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Sphere*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7475( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Orb*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7476( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Torus*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7477( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Para*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7478( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Polycone*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7479( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Polyhedra*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

void* __G4VPVParameterisation_dict::method_7480( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPVParameterisation*)o)->ComputeDimensions(*(::G4Hype*)arg[0],
                                                         *(const int*)arg[1],
                                                         (const ::G4VPhysicalVolume*)arg[2]);
  return 0;
}

//------Dictionary for class HepRotation -------------------------------
class __CLHEP__HepRotation_dict { 
  public:
  __CLHEP__HepRotation_dict();
  static void * constructor_7492(void*, const std::vector<void*>&, void*);
  static void * constructor_7493(void*, const std::vector<void*>&, void*);
  static void * constructor_7494(void*, const std::vector<void*>&, void*);
  static void * constructor_7495(void*, const std::vector<void*>&, void*);
  static void * constructor_7496(void*, const std::vector<void*>&, void*);
  static void * method_7497(void*, const std::vector<void*>&, void*);
  static void * constructor_7498(void*, const std::vector<void*>&, void*);
  static void * method_7499(void*, const std::vector<void*>&, void*);
  static void * constructor_7500(void*, const std::vector<void*>&, void*);
  static void * method_7501(void*, const std::vector<void*>&, void*);
  static void * constructor_7502(void*, const std::vector<void*>&, void*);
  static void * method_7503(void*, const std::vector<void*>&, void*);
  static void * constructor_7504(void*, const std::vector<void*>&, void*);
  static void * constructor_7505(void*, const std::vector<void*>&, void*);
  static void * method_7506(void*, const std::vector<void*>&, void*);
  static void * method_7507(void*, const std::vector<void*>&, void*);
  static void * method_7508(void*, const std::vector<void*>&, void*);
  static void * method_7509(void*, const std::vector<void*>&, void*);
  static void * method_7510(void*, const std::vector<void*>&, void*);
  static void * operator_7511(void*, const std::vector<void*>&, void*);
  static void * operator_7512(void*, const std::vector<void*>&, void*);
  static void * operator_7513(void*, const std::vector<void*>&, void*);
  static void * operator_7514(void*, const std::vector<void*>&, void*);
  static void * method_7515(void*, const std::vector<void*>&, void*);
  static void * constructor_7516(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::CLHEP::HepRotation*)o)->~HepRotation(); return 0;}
  static void * method_7518(void*, const std::vector<void*>&, void*);
  static void * method_7519(void*, const std::vector<void*>&, void*);
  static void * method_7520(void*, const std::vector<void*>&, void*);
  static void * method_7521(void*, const std::vector<void*>&, void*);
  static void * method_7522(void*, const std::vector<void*>&, void*);
  static void * method_7523(void*, const std::vector<void*>&, void*);
  static void * method_7524(void*, const std::vector<void*>&, void*);
  static void * method_7525(void*, const std::vector<void*>&, void*);
  static void * method_7526(void*, const std::vector<void*>&, void*);
  static void * method_7527(void*, const std::vector<void*>&, void*);
  static void * method_7528(void*, const std::vector<void*>&, void*);
  static void * method_7529(void*, const std::vector<void*>&, void*);
  static void * method_7530(void*, const std::vector<void*>&, void*);
  static void * method_7531(void*, const std::vector<void*>&, void*);
  static void * method_7532(void*, const std::vector<void*>&, void*);
  static void * method_7533(void*, const std::vector<void*>&, void*);
  static void * operator_7534(void*, const std::vector<void*>&, void*);
  static void * operator_7535(void*, const std::vector<void*>&, void*);
  static void * method_7536(void*, const std::vector<void*>&, void*);
  static void * method_7537(void*, const std::vector<void*>&, void*);
  static void * method_7538(void*, const std::vector<void*>&, void*);
  static void * method_7539(void*, const std::vector<void*>&, void*);
  static void * method_7540(void*, const std::vector<void*>&, void*);
  static void * method_7541(void*, const std::vector<void*>&, void*);
  static void * method_7542(void*, const std::vector<void*>&, void*);
  static void * method_7543(void*, const std::vector<void*>&, void*);
  static void * method_7544(void*, const std::vector<void*>&, void*);
  static void * method_7545(void*, const std::vector<void*>&, void*);
  static void * method_7546(void*, const std::vector<void*>&, void*);
  static void * method_7547(void*, const std::vector<void*>&, void*);
  static void * method_7548(void*, const std::vector<void*>&, void*);
  static void * method_7549(void*, const std::vector<void*>&, void*);
  static void * method_7550(void*, const std::vector<void*>&, void*);
  static void * method_7551(void*, const std::vector<void*>&, void*);
  static void * method_7552(void*, const std::vector<void*>&, void*);
  static void * method_7553(void*, const std::vector<void*>&, void*);
  static void * method_7554(void*, const std::vector<void*>&, void*);
  static void * method_7555(void*, const std::vector<void*>&, void*);
  static void * method_7556(void*, const std::vector<void*>&, void*);
  static void * method_7557(void*, const std::vector<void*>&, void*);
  static void * method_7558(void*, const std::vector<void*>&, void*);
  static void * method_7559(void*, const std::vector<void*>&, void*);
  static void * method_7560(void*, const std::vector<void*>&, void*);
  static void * method_7561(void*, const std::vector<void*>&, void*);
  static void * method_7562(void*, const std::vector<void*>&, void*);
  static void * method_7563(void*, const std::vector<void*>&, void*);
  static void * method_7564(void*, const std::vector<void*>&, void*);
  static void * method_7565(void*, const std::vector<void*>&, void*);
  static void * method_7566(void*, const std::vector<void*>&, void*);
  static void * method_7567(void*, const std::vector<void*>&, void*);
  static void * method_7568(void*, const std::vector<void*>&, void*);
  static void * method_7569(void*, const std::vector<void*>&, void*);
  static void * method_7570(void*, const std::vector<void*>&, void*);
  static void * method_7571(void*, const std::vector<void*>&, void*);
  static void * method_7572(void*, const std::vector<void*>&, void*);
  static void * method_7573(void*, const std::vector<void*>&, void*);
  static void * method_7574(void*, const std::vector<void*>&, void*);
  static void * method_7575(void*, const std::vector<void*>&, void*);
  static void * method_7576(void*, const std::vector<void*>&, void*);
  static void * method_7577(void*, const std::vector<void*>&, void*);
  static void * method_7578(void*, const std::vector<void*>&, void*);
  static void * method_7579(void*, const std::vector<void*>&, void*);
  static void * operator_7580(void*, const std::vector<void*>&, void*);
  static void * operator_7581(void*, const std::vector<void*>&, void*);
  static void * operator_7582(void*, const std::vector<void*>&, void*);
  static void * operator_7583(void*, const std::vector<void*>&, void*);
  static void * operator_7584(void*, const std::vector<void*>&, void*);
  static void * operator_7585(void*, const std::vector<void*>&, void*);
  static void * method_7586(void*, const std::vector<void*>&, void*);
  static void * method_7587(void*, const std::vector<void*>&, void*);
  static void * method_7588(void*, const std::vector<void*>&, void*);
  static void * method_7589(void*, const std::vector<void*>&, void*);
  static void * method_7590(void*, const std::vector<void*>&, void*);
  static void * method_7591(void*, const std::vector<void*>&, void*);
  static void * method_7592(void*, const std::vector<void*>&, void*);
  static void * method_7593(void*, const std::vector<void*>&, void*);
  static void * method_7594(void*, const std::vector<void*>&, void*);
  static void * method_7595(void*, const std::vector<void*>&, void*);
  static void * method_7596(void*, const std::vector<void*>&, void*);
  static void * operator_7597(void*, const std::vector<void*>&, void*);
  static void * operator_7598(void*, const std::vector<void*>&, void*);
  static void * operator_7599(void*, const std::vector<void*>&, void*);
  static void * operator_7600(void*, const std::vector<void*>&, void*);
  static void * operator_7601(void*, const std::vector<void*>&, void*);
  static void * operator_7602(void*, const std::vector<void*>&, void*);
  static void * operator_7603(void*, const std::vector<void*>&, void*);
  static void * operator_7604(void*, const std::vector<void*>&, void*);
  static void * operator_7605(void*, const std::vector<void*>&, void*);
  static void * method_7606(void*, const std::vector<void*>&, void*);
  static void * operator_7607(void*, const std::vector<void*>&, void*);
  static void * operator_7608(void*, const std::vector<void*>&, void*);
  static void * operator_7609(void*, const std::vector<void*>&, void*);
  static void * method_7610(void*, const std::vector<void*>&, void*);
  static void * method_7611(void*, const std::vector<void*>&, void*);
  static void * method_7612(void*, const std::vector<void*>&, void*);
  static void * method_7613(void*, const std::vector<void*>&, void*);
  static void * method_7614(void*, const std::vector<void*>&, void*);
  static void * method_7615(void*, const std::vector<void*>&, void*);
  static void * method_7616(void*, const std::vector<void*>&, void*);
  static void * method_7617(void*, const std::vector<void*>&, void*);
  static void * method_7618(void*, const std::vector<void*>&, void*);
  static void * method_7619(void*, const std::vector<void*>&, void*);
  static void * method_7620(void*, const std::vector<void*>&, void*);
  static void * method_7621(void*, const std::vector<void*>&, void*);
  static void * method_7622(void*, const std::vector<void*>&, void*);
  static void * method_7623(void*, const std::vector<void*>&, void*);
};


__CLHEP__HepRotation_dict::__CLHEP__HepRotation_dict() {
  ClassBuilder< ::CLHEP::HepRotation >("CLHEP::HepRotation", PUBLIC)
  .addDataMember(type_426, "rxx", OffsetOf(::CLHEP::HepRotation, rxx), PROTECTED)
  .addDataMember(type_426, "rxy", OffsetOf(::CLHEP::HepRotation, rxy), PROTECTED)
  .addDataMember(type_426, "rxz", OffsetOf(::CLHEP::HepRotation, rxz), PROTECTED)
  .addDataMember(type_426, "ryx", OffsetOf(::CLHEP::HepRotation, ryx), PROTECTED)
  .addDataMember(type_426, "ryy", OffsetOf(::CLHEP::HepRotation, ryy), PROTECTED)
  .addDataMember(type_426, "ryz", OffsetOf(::CLHEP::HepRotation, ryz), PROTECTED)
  .addDataMember(type_426, "rzx", OffsetOf(::CLHEP::HepRotation, rzx), PROTECTED)
  .addDataMember(type_426, "rzy", OffsetOf(::CLHEP::HepRotation, rzy), PROTECTED)
  .addDataMember(type_426, "rzz", OffsetOf(::CLHEP::HepRotation, rzz), PROTECTED)
  .addFunctionMember(FunctionTypeBuilder(type_void), "HepRotation", constructor_7492, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12151), "HepRotation", constructor_7493, 0, "m", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12586), "HepRotation", constructor_7494, 0, "rx", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12587), "HepRotation", constructor_7495, 0, "ry", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12588), "HepRotation", constructor_7496, 0, "rz", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12149, type_426), "set", method_7497, 0, "axis;delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12149, type_426), "HepRotation", constructor_7498, 0, "axis;delta", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12152), "set", method_7499, 0, "ax", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12152), "HepRotation", constructor_7500, 0, "ax", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426, type_426, type_426), "set", method_7501, 0, "phi;theta;psi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_426, type_426, type_426), "HepRotation", constructor_7502, 0, "phi;theta;psi", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12153), "set", method_7503, 0, "e", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12153), "HepRotation", constructor_7504, 0, "e", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12149, type_12149, type_12149), "HepRotation", constructor_7505, 0, "colX;colY;colZ", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12149, type_12149, type_12149), "set", method_7506, 0, "colX;colY;colZ", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12149, type_12149, type_12149), "setRows", method_7507, 0, "rowX;rowY;rowZ", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12586), "set", method_7508, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12587), "set", method_7509, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12588), "set", method_7510, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12151), "operator=", operator_7511, 0, "m", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12586), "operator=", operator_7512, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12587), "operator=", operator_7513, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12588), "operator=", operator_7514, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12590), "set", method_7515, 0, "m", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_12590), "HepRotation", constructor_7516, 0, "m", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~HepRotation", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_295), "colX", method_7518, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "colY", method_7519, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "colZ", method_7520, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "rowX", method_7521, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "rowY", method_7522, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "rowZ", method_7523, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "xx", method_7524, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "xy", method_7525, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "xz", method_7526, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "yx", method_7527, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "yy", method_7528, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "yz", method_7529, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "zx", method_7530, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "zy", method_7531, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "zz", method_7532, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_8585), "rep3x3", method_7533, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_7491c, type_424), "operator[]", operator_7534, 0, "i", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_424, type_424), "operator()", operator_7535, 0, ";", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getPhi", method_7536, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getTheta", method_7537, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getPsi", method_7538, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "phi", method_7539, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "theta", method_7540, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "psi", method_7541, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_8501), "eulerAngles", method_7542, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getDelta", method_7543, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "getAxis", method_7544, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "delta", method_7545, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295), "axis", method_7546, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_8503), "axisAngle", method_7547, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9230, type_12150), "getAngleAxis", method_7548, 0, "delta;axis", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "phiX", method_7549, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "phiY", method_7550, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "phiZ", method_7551, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "thetaX", method_7552, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "thetaY", method_7553, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "thetaZ", method_7554, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "col1", method_7555, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "col2", method_7556, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "col3", method_7557, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "col4", method_7558, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "row1", method_7559, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "row2", method_7560, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "row3", method_7561, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_297), "row4", method_7562, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "xt", method_7563, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "yt", method_7564, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "zt", method_7565, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "tx", method_7566, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "ty", method_7567, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "tz", method_7568, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "tt", method_7569, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_8584), "rep4x4", method_7570, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setPhi", method_7571, 0, "phi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setTheta", method_7572, 0, "theta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setPsi", method_7573, 0, "psi", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12149), "setAxis", method_7574, 0, "axis", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_426), "setDelta", method_7575, 0, "delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12592, type_12150), "decompose", method_7576, 0, "rotation;boost", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12150, type_12592), "decompose", method_7577, 0, "boost;rotation", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420), "isIdentity", method_7578, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_12151), "compare", method_7579, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator==", operator_7580, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator!=", operator_7581, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator<", operator_7582, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator>", operator_7583, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator<=", operator_7584, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151), "operator>=", operator_7585, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12151), "distance2", method_7586, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12151), "howNear", method_7587, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12151, type_426), "isNear", method_7588, 0, "r;epsilon=CLHEP::Hep4RotationInterface::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12593), "distance2", method_7589, 0, "lt", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12156), "distance2", method_7590, 0, "lt", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12593), "howNear", method_7591, 0, "lt", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_12156), "howNear", method_7592, 0, "lt", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12593, type_426), "isNear", method_7593, 0, "lt;epsilon=CLHEP::Hep4RotationInterface::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420, type_12156, type_426), "isNear", method_7594, 0, "lt;epsilon=CLHEP::Hep4RotationInterface::tolerance", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "norm2", method_7595, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "rectify", method_7596, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_295, type_12149), "operator()", operator_7597, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_295, type_12149), "operator*", operator_7598, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_297, type_12154), "operator()", operator_7599, 0, "w", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_297, type_12154), "operator*", operator_7600, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_488, type_12151), "operator*", operator_7601, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_488, type_12586), "operator*", operator_7602, 0, "rx", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_488, type_12587), "operator*", operator_7603, 0, "ry", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_488, type_12588), "operator*", operator_7604, 0, "rz", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12151), "operator*=", operator_7605, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12151), "transform", method_7606, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12586), "operator*=", operator_7607, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12587), "operator*=", operator_7608, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12588), "operator*=", operator_7609, 0, "r", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12586), "transform", method_7610, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12587), "transform", method_7611, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12588), "transform", method_7612, 0, "r", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426), "rotateX", method_7613, 0, "delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426), "rotateY", method_7614, 0, "delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426), "rotateZ", method_7615, 0, "delta", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426, type_12149), "rotate", method_7616, 0, "delta;axis", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_426, type_12594), "rotate", method_7617, 0, "delta;p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589, type_12149, type_12149, type_12149), "rotateAxes", method_7618, 0, "newX;newY;newZ", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_488), "inverse", method_7619, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12589), "invert", method_7620, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3684, type_3684), "print", method_7621, 0, "os", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_426), "getTolerance", method_7622, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_426, type_426), "setTolerance", method_7623, 0, "tol", PUBLIC | STATIC);
}

//------Stub functions for class HepRotation -------------------------------
void* __CLHEP__HepRotation_dict::constructor_7492( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::CLHEP::HepRotation();
}

void* __CLHEP__HepRotation_dict::constructor_7493( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7494( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepRotationX*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7495( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepRotationY*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7496( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepRotationZ*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7497( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                 *(double*)arg[1]);
}

void* __CLHEP__HepRotation_dict::constructor_7498( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::Hep3Vector*)arg[0],
                                         *(double*)arg[1]);
}

void* __CLHEP__HepRotation_dict::method_7499( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepAxisAngle*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7500( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepAxisAngle*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7501( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(double*)arg[0],
                                                 *(double*)arg[1],
                                                 *(double*)arg[2]);
}

void* __CLHEP__HepRotation_dict::constructor_7502( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(double*)arg[0],
                                         *(double*)arg[1],
                                         *(double*)arg[2]);
}

void* __CLHEP__HepRotation_dict::method_7503( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepEulerAngles*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7504( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepEulerAngles*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7505( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::Hep3Vector*)arg[0],
                                         *(const ::CLHEP::Hep3Vector*)arg[1],
                                         *(const ::CLHEP::Hep3Vector*)arg[2]);
}

void* __CLHEP__HepRotation_dict::method_7506( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                 *(const ::CLHEP::Hep3Vector*)arg[1],
                                                 *(const ::CLHEP::Hep3Vector*)arg[2]);
}

void* __CLHEP__HepRotation_dict::method_7507( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->setRows(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                     *(const ::CLHEP::Hep3Vector*)arg[1],
                                                     *(const ::CLHEP::Hep3Vector*)arg[2]);
}

void* __CLHEP__HepRotation_dict::method_7508( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepRotationX*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7509( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepRotationY*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7510( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepRotationZ*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7511( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator=(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7512( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator=(*(const ::CLHEP::HepRotationX*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7513( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator=(*(const ::CLHEP::HepRotationY*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7514( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator=(*(const ::CLHEP::HepRotationZ*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7515( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->set(*(const ::CLHEP::HepRep3x3*)arg[0]);
}

void* __CLHEP__HepRotation_dict::constructor_7516( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::CLHEP::HepRotation(*(const ::CLHEP::HepRep3x3*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7518( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->colX());
}

void* __CLHEP__HepRotation_dict::method_7519( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->colY());
}

void* __CLHEP__HepRotation_dict::method_7520( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->colZ());
}

void* __CLHEP__HepRotation_dict::method_7521( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->rowX());
}

void* __CLHEP__HepRotation_dict::method_7522( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->rowY());
}

void* __CLHEP__HepRotation_dict::method_7523( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->rowZ());
}

void* __CLHEP__HepRotation_dict::method_7524( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->xx();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7525( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->xy();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7526( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->xz();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7527( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->yx();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7528( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->yy();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7529( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->yz();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7530( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->zx();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7531( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->zy();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7532( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->zz();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7533( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepRep3x3(((const ::CLHEP::HepRotation*)o)->rep3x3());
}

void* __CLHEP__HepRotation_dict::operator_7534( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepRotation::HepRotation_row(((const ::CLHEP::HepRotation*)o)->operator[](*(int*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7535( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator()(*(int*)arg[0],
                                                     *(int*)arg[1]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7536( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->getPhi();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7537( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->getTheta();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7538( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->getPsi();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7539( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->phi();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7540( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->theta();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7541( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->psi();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7542( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepEulerAngles(((const ::CLHEP::HepRotation*)o)->eulerAngles());
}

void* __CLHEP__HepRotation_dict::method_7543( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->getDelta();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7544( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->getAxis());
}

void* __CLHEP__HepRotation_dict::method_7545( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->delta();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7546( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->axis());
}

void* __CLHEP__HepRotation_dict::method_7547( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepAxisAngle(((const ::CLHEP::HepRotation*)o)->axisAngle());
}

void* __CLHEP__HepRotation_dict::method_7548( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::CLHEP::HepRotation*)o)->getAngleAxis(*(double*)arg[0],
                                                 *(::CLHEP::Hep3Vector*)arg[1]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7549( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->phiX();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7550( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->phiY();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7551( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->phiZ();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7552( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->thetaX();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7553( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->thetaY();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7554( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->thetaZ();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7555( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->col1());
}

void* __CLHEP__HepRotation_dict::method_7556( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->col2());
}

void* __CLHEP__HepRotation_dict::method_7557( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->col3());
}

void* __CLHEP__HepRotation_dict::method_7558( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->col4());
}

void* __CLHEP__HepRotation_dict::method_7559( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->row1());
}

void* __CLHEP__HepRotation_dict::method_7560( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->row2());
}

void* __CLHEP__HepRotation_dict::method_7561( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->row3());
}

void* __CLHEP__HepRotation_dict::method_7562( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->row4());
}

void* __CLHEP__HepRotation_dict::method_7563( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->xt();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7564( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->yt();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7565( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->zt();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7566( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->tx();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7567( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->ty();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7568( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->tz();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7569( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->tt();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7570( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepRep4x4(((const ::CLHEP::HepRotation*)o)->rep4x4());
}

void* __CLHEP__HepRotation_dict::method_7571( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::HepRotation*)o)->setPhi(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7572( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::HepRotation*)o)->setTheta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7573( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::HepRotation*)o)->setPsi(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7574( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::HepRotation*)o)->setAxis(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7575( void* o, const std::vector<void*>& arg, void*)
{
  ((::CLHEP::HepRotation*)o)->setDelta(*(double*)arg[0]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7576( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::CLHEP::HepRotation*)o)->decompose(*(::CLHEP::HepAxisAngle*)arg[0],
                                              *(::CLHEP::Hep3Vector*)arg[1]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7577( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::CLHEP::HepRotation*)o)->decompose(*(::CLHEP::Hep3Vector*)arg[0],
                                              *(::CLHEP::HepAxisAngle*)arg[1]);
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7578( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->isIdentity();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7579( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::CLHEP::HepRotation*)o)->compare(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7580( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator==(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7581( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator!=(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7582( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator<(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7583( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator>(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7584( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator<=(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::operator_7585( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::CLHEP::HepRotation*)o)->operator>=(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7586( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->distance2(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7587( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->howNear(*(const ::CLHEP::HepRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7588( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepRotation*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepRotation*)arg[0],
                                                   *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7589( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->distance2(*(const ::CLHEP::HepBoost*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7590( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->distance2(*(const ::CLHEP::HepLorentzRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7591( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->howNear(*(const ::CLHEP::HepBoost*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7592( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->howNear(*(const ::CLHEP::HepLorentzRotation*)arg[0]);
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7593( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepBoost*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepBoost*)arg[0],
                                                   *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7594( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepLorentzRotation*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::CLHEP::HepRotation*)o)->isNear(*(const ::CLHEP::HepLorentzRotation*)arg[0],
                                                   *(double*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __CLHEP__HepRotation_dict::method_7595( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::CLHEP::HepRotation*)o)->norm2();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7596( void* o, const std::vector<void*>&, void*)
{
  ((::CLHEP::HepRotation*)o)->rectify();
  return 0;
}

void* __CLHEP__HepRotation_dict::operator_7597( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->operator()(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7598( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::Hep3Vector(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::Hep3Vector*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7599( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->operator()(*(const ::CLHEP::HepLorentzVector*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7600( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepLorentzVector(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::HepLorentzVector*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7601( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepRotation(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::HepRotation*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7602( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepRotation(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::HepRotationX*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7603( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepRotation(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::HepRotationY*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7604( void* o, const std::vector<void*>& arg, void*)
{
  return new CLHEP::HepRotation(((const ::CLHEP::HepRotation*)o)->operator*(*(const ::CLHEP::HepRotationZ*)arg[0]));
}

void* __CLHEP__HepRotation_dict::operator_7605( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator*=(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7606( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->transform(*(const ::CLHEP::HepRotation*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7607( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator*=(*(const ::CLHEP::HepRotationX*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7608( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator*=(*(const ::CLHEP::HepRotationY*)arg[0]);
}

void* __CLHEP__HepRotation_dict::operator_7609( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->operator*=(*(const ::CLHEP::HepRotationZ*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7610( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->transform(*(const ::CLHEP::HepRotationX*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7611( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->transform(*(const ::CLHEP::HepRotationY*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7612( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->transform(*(const ::CLHEP::HepRotationZ*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7613( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotateX(*(double*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7614( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotateY(*(double*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7615( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotateZ(*(double*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7616( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotate(*(double*)arg[0],
                                                    *(const ::CLHEP::Hep3Vector*)arg[1]);
}

void* __CLHEP__HepRotation_dict::method_7617( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotate(*(double*)arg[0],
                                                    (const ::CLHEP::Hep3Vector*)arg[1]);
}

void* __CLHEP__HepRotation_dict::method_7618( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->rotateAxes(*(const ::CLHEP::Hep3Vector*)arg[0],
                                                        *(const ::CLHEP::Hep3Vector*)arg[1],
                                                        *(const ::CLHEP::Hep3Vector*)arg[2]);
}

void* __CLHEP__HepRotation_dict::method_7619( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepRotation(((const ::CLHEP::HepRotation*)o)->inverse());
}

void* __CLHEP__HepRotation_dict::method_7620( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((::CLHEP::HepRotation*)o)->invert();
}

void* __CLHEP__HepRotation_dict::method_7621( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::CLHEP::HepRotation*)o)->print(*(::std::basic_ostream<char,std::char_traits<char> >*)arg[0]);
}

void* __CLHEP__HepRotation_dict::method_7622( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((::CLHEP::HepRotation*)o)->getTolerance();
  return &ret;
}

void* __CLHEP__HepRotation_dict::method_7623( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  ret = ((::CLHEP::HepRotation*)o)->setTolerance(*(double*)arg[0]);
  return &ret;
}

//------Dictionary for class G4Material -------------------------------
class __G4Material_dict { 
  public:
  __G4Material_dict();
  static void * constructor_7812(void*, const std::vector<void*>&, void*);
  static void * constructor_7813(void*, const std::vector<void*>&, void*);
  static void * method_7814(void*, const std::vector<void*>&, void*);
  static void * method_7815(void*, const std::vector<void*>&, void*);
  static void * method_7816(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4Material*)o)->~G4Material(); return 0;}
  static void * method_7818(void*, const std::vector<void*>&, void*);
  static void * method_7819(void*, const std::vector<void*>&, void*);
  static void * method_7820(void*, const std::vector<void*>&, void*);
  static void * method_7821(void*, const std::vector<void*>&, void*);
  static void * method_7822(void*, const std::vector<void*>&, void*);
  static void * method_7823(void*, const std::vector<void*>&, void*);
  static void * method_7824(void*, const std::vector<void*>&, void*);
  static void * method_7825(void*, const std::vector<void*>&, void*);
  static void * method_7826(void*, const std::vector<void*>&, void*);
  static void * method_7827(void*, const std::vector<void*>&, void*);
  static void * method_7828(void*, const std::vector<void*>&, void*);
  static void * method_7829(void*, const std::vector<void*>&, void*);
  static void * method_7830(void*, const std::vector<void*>&, void*);
  static void * method_7831(void*, const std::vector<void*>&, void*);
  static void * method_7832(void*, const std::vector<void*>&, void*);
  static void * method_7833(void*, const std::vector<void*>&, void*);
  static void * method_7834(void*, const std::vector<void*>&, void*);
  static void * method_7835(void*, const std::vector<void*>&, void*);
  static void * method_7836(void*, const std::vector<void*>&, void*);
  static void * method_7837(void*, const std::vector<void*>&, void*);
  static void * method_7838(void*, const std::vector<void*>&, void*);
  static void * method_7839(void*, const std::vector<void*>&, void*);
  static void * method_7840(void*, const std::vector<void*>&, void*);
  static void * method_7841(void*, const std::vector<void*>&, void*);
  static void * method_7842(void*, const std::vector<void*>&, void*);
  static void * method_7843(void*, const std::vector<void*>&, void*);
  static void * method_7844(void*, const std::vector<void*>&, void*);
  static void * method_7845(void*, const std::vector<void*>&, void*);
  static void * method_7846(void*, const std::vector<void*>&, void*);
  static void * operator_7847(void*, const std::vector<void*>&, void*);
  static void * operator_7848(void*, const std::vector<void*>&, void*);
};


__G4Material_dict::__G4Material_dict() {
  ClassBuilder< ::G4Material >("G4Material", PUBLIC | VIRTUAL)
  .addDataMember(type_466, "fName", OffsetOf(::G4Material, fName), PRIVATE)
  .addDataMember(type_466, "fChemicalFormula", OffsetOf(::G4Material, fChemicalFormula), PRIVATE)
  .addDataMember(type_567, "fDensity", OffsetOf(::G4Material, fDensity), PRIVATE)
  .addDataMember(type_235, "fState", OffsetOf(::G4Material, fState), PRIVATE)
  .addDataMember(type_567, "fTemp", OffsetOf(::G4Material, fTemp), PRIVATE)
  .addDataMember(type_567, "fPressure", OffsetOf(::G4Material, fPressure), PRIVATE)
  .addDataMember(type_565, "maxNbComponents", OffsetOf(::G4Material, maxNbComponents), PRIVATE)
  .addDataMember(type_1555, "fNumberOfComponents", OffsetOf(::G4Material, fNumberOfComponents), PRIVATE)
  .addDataMember(type_1555, "fNumberOfElements", OffsetOf(::G4Material, fNumberOfElements), PRIVATE)
  .addDataMember(type_12761, "theElementVector", OffsetOf(::G4Material, theElementVector), PRIVATE)
  .addDataMember(type_564, "fImplicitElement", OffsetOf(::G4Material, fImplicitElement), PRIVATE)
  .addDataMember(type_3895, "fMassFractionVector", OffsetOf(::G4Material, fMassFractionVector), PRIVATE)
  .addDataMember(type_3391, "fAtomsVector", OffsetOf(::G4Material, fAtomsVector), PRIVATE)
  .addDataMember(type_12762, "fMaterialPropertiesTable", OffsetOf(::G4Material, fMaterialPropertiesTable), PRIVATE)
  .addDataMember(type_1555, "fIndexInTable", OffsetOf(::G4Material, fIndexInTable), PRIVATE)
  .addDataMember(type_3895, "VecNbOfAtomsPerVolume", OffsetOf(::G4Material, VecNbOfAtomsPerVolume), PRIVATE)
  .addDataMember(type_567, "TotNbOfAtomsPerVolume", OffsetOf(::G4Material, TotNbOfAtomsPerVolume), PRIVATE)
  .addDataMember(type_567, "TotNbOfElectPerVolume", OffsetOf(::G4Material, TotNbOfElectPerVolume), PRIVATE)
  .addDataMember(type_567, "fRadlen", OffsetOf(::G4Material, fRadlen), PRIVATE)
  .addDataMember(type_567, "fNuclInterLen", OffsetOf(::G4Material, fNuclInterLen), PRIVATE)
  .addDataMember(type_12763, "fIonisation", OffsetOf(::G4Material, fIonisation), PRIVATE)
  .addDataMember(type_12764, "fSandiaTable", OffsetOf(::G4Material, fSandiaTable), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_567, type_567, type_235, type_567, type_567), "G4Material", constructor_7812, 0, "name;z;a;density;state=kStateUndefined;temp=CLHEP::STP_Temperature;pressure=CLHEP::STP_Pressure", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9169, type_567, type_565, type_235, type_567, type_567), "G4Material", constructor_7813, 0, "name;density;nComponents;state=kStateUndefined;temp=CLHEP::STP_Temperature;pressure=CLHEP::STP_Pressure", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4753, type_565), "AddElement", method_7814, 0, "element;nAtoms", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4753, type_567), "AddElement", method_7815, 0, "element;fraction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4682, type_567), "AddMaterial", method_7816, 0, "material;fraction", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4Material", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetChemicalFormula", method_7818, 0, "chF", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_7819, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetChemicalFormula", method_7820, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetDensity", method_7821, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_235), "GetState", method_7822, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTemperature", method_7823, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetPressure", method_7824, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetNumberOfElements", method_7825, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12765), "GetElementVector", method_7826, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3897), "GetFractionVector", method_7827, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3393), "GetAtomsVector", method_7828, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12766, type_565), "GetElement", method_7829, 0, "iel", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3897), "GetVecNbOfAtomsPerVolume", method_7830, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTotNbOfAtomsPerVolume", method_7831, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetTotNbOfElectPerVolume", method_7832, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_3897), "GetAtomicNumDensityVector", method_7833, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetElectronDensity", method_7834, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetRadlen", method_7835, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetNuclearInterLength", method_7836, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12763), "GetIonisation", method_7837, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12764), "GetSandiaTable", method_7838, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetZ", method_7839, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetA", method_7840, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12762), "SetMaterialPropertiesTable", method_7841, 0, "anMPT", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12762), "GetMaterialPropertiesTable", method_7842, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12767), "GetMaterialTable", method_7843, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetNumberOfMaterials", method_7844, 0, 0, PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "GetIndex", method_7845, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4682, type_466), "GetMaterial", method_7846, 0, "name", PUBLIC | STATIC)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12768), "operator==", operator_7847, 0, "", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_565, type_12768), "operator!=", operator_7848, 0, "", PUBLIC | OPERATOR);
}

//------Stub functions for class G4Material -------------------------------
void* __G4Material_dict::constructor_7812( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 4 ) {
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(double*)arg[3]);
  }
  else if ( arg.size() == 5 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(double*)arg[3],
                                 *(::G4State*)arg[4]);
  }
  else if ( arg.size() == 6 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(double*)arg[3],
                                 *(::G4State*)arg[4],
                                 *(double*)arg[5]);
  }
  else if ( arg.size() == 7 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(double*)arg[2],
                                 *(double*)arg[3],
                                 *(::G4State*)arg[4],
                                 *(double*)arg[5],
                                 *(double*)arg[6]);
  }
  return 0;
}

void* __G4Material_dict::constructor_7813( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 3 ) {
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(int*)arg[2]);
  }
  else if ( arg.size() == 4 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(int*)arg[2],
                                 *(::G4State*)arg[3]);
  }
  else if ( arg.size() == 5 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(int*)arg[2],
                                 *(::G4State*)arg[3],
                                 *(double*)arg[4]);
  }
  else if ( arg.size() == 6 ) { 
    return ::new(mem) ::G4Material(*(const ::G4String*)arg[0],
                                 *(double*)arg[1],
                                 *(int*)arg[2],
                                 *(::G4State*)arg[3],
                                 *(double*)arg[4],
                                 *(double*)arg[5]);
  }
  return 0;
}

void* __G4Material_dict::method_7814( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Material*)o)->AddElement((::G4Element*)arg[0],
                                 *(int*)arg[1]);
  return 0;
}

void* __G4Material_dict::method_7815( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Material*)o)->AddElement((::G4Element*)arg[0],
                                 *(double*)arg[1]);
  return 0;
}

void* __G4Material_dict::method_7816( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Material*)o)->AddMaterial((::G4Material*)arg[0],
                                  *(double*)arg[1]);
  return 0;
}

void* __G4Material_dict::method_7818( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Material*)o)->SetChemicalFormula(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4Material_dict::method_7819( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Material*)o)->GetName());
}

void* __G4Material_dict::method_7820( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4Material*)o)->GetChemicalFormula());
}

void* __G4Material_dict::method_7821( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetDensity();
  return &ret;
}

void* __G4Material_dict::method_7822( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4Material*)o)->GetState();
  return &ret;
}

void* __G4Material_dict::method_7823( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetTemperature();
  return &ret;
}

void* __G4Material_dict::method_7824( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetPressure();
  return &ret;
}

void* __G4Material_dict::method_7825( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4Material*)o)->GetNumberOfElements();
  return &ret;
}

void* __G4Material_dict::method_7826( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetElementVector();
}

void* __G4Material_dict::method_7827( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetFractionVector();
}

void* __G4Material_dict::method_7828( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetAtomsVector();
}

void* __G4Material_dict::method_7829( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4Material*)o)->GetElement(*(int*)arg[0]);
}

void* __G4Material_dict::method_7830( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetVecNbOfAtomsPerVolume();
}

void* __G4Material_dict::method_7831( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetTotNbOfAtomsPerVolume();
  return &ret;
}

void* __G4Material_dict::method_7832( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetTotNbOfElectPerVolume();
  return &ret;
}

void* __G4Material_dict::method_7833( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetAtomicNumDensityVector();
}

void* __G4Material_dict::method_7834( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetElectronDensity();
  return &ret;
}

void* __G4Material_dict::method_7835( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetRadlen();
  return &ret;
}

void* __G4Material_dict::method_7836( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetNuclearInterLength();
  return &ret;
}

void* __G4Material_dict::method_7837( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetIonisation();
}

void* __G4Material_dict::method_7838( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetSandiaTable();
}

void* __G4Material_dict::method_7839( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetZ();
  return &ret;
}

void* __G4Material_dict::method_7840( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4Material*)o)->GetA();
  return &ret;
}

void* __G4Material_dict::method_7841( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4Material*)o)->SetMaterialPropertiesTable((::G4MaterialPropertiesTable*)arg[0]);
  return 0;
}

void* __G4Material_dict::method_7842( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4Material*)o)->GetMaterialPropertiesTable();
}

void* __G4Material_dict::method_7843( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4Material*)o)->GetMaterialTable();
}

void* __G4Material_dict::method_7844( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((::G4Material*)o)->GetNumberOfMaterials();
  return &ret;
}

void* __G4Material_dict::method_7845( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::G4Material*)o)->GetIndex();
  return &ret;
}

void* __G4Material_dict::method_7846( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((::G4Material*)o)->GetMaterial(*(::G4String*)arg[0]);
}

void* __G4Material_dict::operator_7847( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Material*)o)->operator==(*(const ::G4Material*)arg[0]);
  return &ret;
}

void* __G4Material_dict::operator_7848( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::G4Material*)o)->operator!=(*(const ::G4Material*)arg[0]);
  return &ret;
}

//------Dictionary for class G4LogicalVolume -------------------------------
class __G4LogicalVolume_dict { 
  public:
  __G4LogicalVolume_dict();
  static void * constructor_7875(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4LogicalVolume*)o)->~G4LogicalVolume(); return 0;}
  static void * method_7877(void*, const std::vector<void*>&, void*);
  static void * method_7878(void*, const std::vector<void*>&, void*);
  static void * method_7879(void*, const std::vector<void*>&, void*);
  static void * method_7880(void*, const std::vector<void*>&, void*);
  static void * method_7881(void*, const std::vector<void*>&, void*);
  static void * method_7882(void*, const std::vector<void*>&, void*);
  static void * method_7883(void*, const std::vector<void*>&, void*);
  static void * method_7884(void*, const std::vector<void*>&, void*);
  static void * method_7885(void*, const std::vector<void*>&, void*);
  static void * method_7886(void*, const std::vector<void*>&, void*);
  static void * method_7887(void*, const std::vector<void*>&, void*);
  static void * method_7888(void*, const std::vector<void*>&, void*);
  static void * method_7889(void*, const std::vector<void*>&, void*);
  static void * method_7890(void*, const std::vector<void*>&, void*);
  static void * method_7891(void*, const std::vector<void*>&, void*);
  static void * method_7892(void*, const std::vector<void*>&, void*);
  static void * method_7893(void*, const std::vector<void*>&, void*);
  static void * method_7894(void*, const std::vector<void*>&, void*);
  static void * method_7895(void*, const std::vector<void*>&, void*);
  static void * method_7896(void*, const std::vector<void*>&, void*);
  static void * method_7897(void*, const std::vector<void*>&, void*);
  static void * method_7898(void*, const std::vector<void*>&, void*);
  static void * method_7899(void*, const std::vector<void*>&, void*);
  static void * method_7900(void*, const std::vector<void*>&, void*);
  static void * method_7901(void*, const std::vector<void*>&, void*);
  static void * method_7902(void*, const std::vector<void*>&, void*);
  static void * method_7903(void*, const std::vector<void*>&, void*);
  static void * method_7904(void*, const std::vector<void*>&, void*);
  static void * method_7905(void*, const std::vector<void*>&, void*);
  static void * method_7906(void*, const std::vector<void*>&, void*);
  static void * method_7907(void*, const std::vector<void*>&, void*);
  static void * method_7908(void*, const std::vector<void*>&, void*);
  static void * method_7909(void*, const std::vector<void*>&, void*);
  static void * method_7910(void*, const std::vector<void*>&, void*);
  static void * method_7911(void*, const std::vector<void*>&, void*);
  static void * method_7912(void*, const std::vector<void*>&, void*);
  static void * operator_7913(void*, const std::vector<void*>&, void*);
  static void * method_7914(void*, const std::vector<void*>&, void*);
  static void * method_7915(void*, const std::vector<void*>&, void*);
  static void * method_7916(void*, const std::vector<void*>&, void*);
  static void * method_7917(void*, const std::vector<void*>&, void*);
  static void * method_7918(void*, const std::vector<void*>&, void*);
  static void * method_7919(void*, const std::vector<void*>&, void*);
  static void * method_7920(void*, const std::vector<void*>&, void*);
  static void * method_7921(void*, const std::vector<void*>&, void*);
};


__G4LogicalVolume_dict::__G4LogicalVolume_dict() {
  ClassBuilder< ::G4LogicalVolume >("G4LogicalVolume", PUBLIC)
  .addDataMember(type_7873, "fDaughters", OffsetOf(::G4LogicalVolume, fDaughters), PRIVATE)
  .addDataMember(type_10662, "fFieldManager", OffsetOf(::G4LogicalVolume, fFieldManager), PRIVATE)
  .addDataMember(type_4682, "fMaterial", OffsetOf(::G4LogicalVolume, fMaterial), PRIVATE)
  .addDataMember(type_466, "fName", OffsetOf(::G4LogicalVolume, fName), PRIVATE)
  .addDataMember(type_10667, "fSensitiveDetector", OffsetOf(::G4LogicalVolume, fSensitiveDetector), PRIVATE)
  .addDataMember(type_11631, "fSolid", OffsetOf(::G4LogicalVolume, fSolid), PRIVATE)
  .addDataMember(type_12769, "fUserLimits", OffsetOf(::G4LogicalVolume, fUserLimits), PRIVATE)
  .addDataMember(type_11518, "fVoxel", OffsetOf(::G4LogicalVolume, fVoxel), PRIVATE)
  .addDataMember(type_564, "fOptimise", OffsetOf(::G4LogicalVolume, fOptimise), PRIVATE)
  .addDataMember(type_564, "fRootRegion", OffsetOf(::G4LogicalVolume, fRootRegion), PRIVATE)
  .addDataMember(type_567, "fSmartless", OffsetOf(::G4LogicalVolume, fSmartless), PRIVATE)
  .addDataMember(type_567, "fMass", OffsetOf(::G4LogicalVolume, fMass), PRIVATE)
  .addDataMember(type_12770, "fVisAttributes", OffsetOf(::G4LogicalVolume, fVisAttributes), PRIVATE)
  .addDataMember(type_12771, "fFastSimulationManager", OffsetOf(::G4LogicalVolume, fFastSimulationManager), PRIVATE)
  .addDataMember(type_10646, "fRegion", OffsetOf(::G4LogicalVolume, fRegion), PRIVATE)
  .addDataMember(type_10484, "fCutsCouple", OffsetOf(::G4LogicalVolume, fCutsCouple), PRIVATE)
  .addDataMember(type_564, "fIsEnvelope", OffsetOf(::G4LogicalVolume, fIsEnvelope), PRIVATE)
  .addDataMember(type_567, "fBiasWeight", OffsetOf(::G4LogicalVolume, fBiasWeight), PRIVATE)
  .addTypedef(type_7873, "G4LogicalVolume::G4PhysicalVolumeList")
  .addFunctionMember(FunctionTypeBuilder(type_void, type_11631, type_4682, type_9169, type_10662, type_10667, type_12769, type_564), "G4LogicalVolume", constructor_7875, 0, "pSolid;pMaterial;name;pFieldMgr=0;pSDetector=0;pULimits=0;optimise=true", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4LogicalVolume", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_7877, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetName", method_7878, 0, "pName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetNoDaughters", method_7879, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10743, type_565c), "GetDaughter", method_7880, 0, "i", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10743), "AddDaughter", method_7881, 0, "pNewDaughter", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_10751), "IsDaughter", method_7882, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_10751), "IsAncestor", method_7883, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10751), "RemoveDaughter", method_7884, 0, "p", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "ClearDaughters", method_7885, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "TotalVolumeEntities", method_7886, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11631), "GetSolid", method_7887, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11631), "SetSolid", method_7888, 0, "pSolid", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_4682), "GetMaterial", method_7889, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4682), "SetMaterial", method_7890, 0, "pMaterial", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_4682), "UpdateMaterial", method_7891, 0, "pMaterial", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567, type_564, type_4682), "GetMass", method_7892, 0, "forced=false;parMaterial=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10662), "GetFieldManager", method_7893, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10662, type_564), "SetFieldManager", method_7894, 0, "pFieldMgr;forceToAllDaughters", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10667), "GetSensitiveDetector", method_7895, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10667), "SetSensitiveDetector", method_7896, 0, "pSDetector", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12769), "GetUserLimits", method_7897, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12769), "SetUserLimits", method_7898, 0, "pULimits", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11518), "GetVoxelHeader", method_7899, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11518), "SetVoxelHeader", method_7900, 0, "pVoxel", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetSmartless", method_7901, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetSmartless", method_7902, 0, "s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsToOptimise", method_7903, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetOptimisation", method_7904, 0, "optim", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsRootRegion", method_7905, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_564), "SetRegionRootFlag", method_7906, 0, "rreg", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsRegion", method_7907, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10646), "SetRegion", method_7908, 0, "reg", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10646), "GetRegion", method_7909, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "PropagateRegion", method_7910, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10642), "GetMaterialCutsCouple", method_7911, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10484), "SetMaterialCutsCouple", method_7912, 0, "cuts", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_564, type_12836), "operator==", operator_7913, 0, "lv", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_12770), "GetVisAttributes", method_7914, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12770), "SetVisAttributes", method_7915, 0, "pVA", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12837), "SetVisAttributes", method_7916, 0, "VA", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12771), "BecomeEnvelopeForFastSimulation", method_7917, 0, "pPA", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10645), "ClearEnvelopeForFastSimulation", method_7918, 0, "motherLV=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_12771), "GetFastSimulationManager", method_7919, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_567), "SetBiasWeight", method_7920, 0, "w", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_567), "GetBiasWeight", method_7921, 0, 0, PUBLIC);
}

//------Stub functions for class G4LogicalVolume -------------------------------
void* __G4LogicalVolume_dict::constructor_7875( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 3 ) {
    return ::new(mem) ::G4LogicalVolume((::G4VSolid*)arg[0],
                                      (::G4Material*)arg[1],
                                      *(const ::G4String*)arg[2]);
  }
  else if ( arg.size() == 4 ) { 
    return ::new(mem) ::G4LogicalVolume((::G4VSolid*)arg[0],
                                      (::G4Material*)arg[1],
                                      *(const ::G4String*)arg[2],
                                      (::G4FieldManager*)arg[3]);
  }
  else if ( arg.size() == 5 ) { 
    return ::new(mem) ::G4LogicalVolume((::G4VSolid*)arg[0],
                                      (::G4Material*)arg[1],
                                      *(const ::G4String*)arg[2],
                                      (::G4FieldManager*)arg[3],
                                      (::G4VSensitiveDetector*)arg[4]);
  }
  else if ( arg.size() == 6 ) { 
    return ::new(mem) ::G4LogicalVolume((::G4VSolid*)arg[0],
                                      (::G4Material*)arg[1],
                                      *(const ::G4String*)arg[2],
                                      (::G4FieldManager*)arg[3],
                                      (::G4VSensitiveDetector*)arg[4],
                                      (::G4UserLimits*)arg[5]);
  }
  else if ( arg.size() == 7 ) { 
    return ::new(mem) ::G4LogicalVolume((::G4VSolid*)arg[0],
                                      (::G4Material*)arg[1],
                                      *(const ::G4String*)arg[2],
                                      (::G4FieldManager*)arg[3],
                                      (::G4VSensitiveDetector*)arg[4],
                                      (::G4UserLimits*)arg[5],
                                      *(bool*)arg[6]);
  }
  return 0;
}

void* __G4LogicalVolume_dict::method_7877( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4LogicalVolume*)o)->GetName());
}

void* __G4LogicalVolume_dict::method_7878( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetName(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7879( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4LogicalVolume*)o)->GetNoDaughters();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7880( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetDaughter(*(const int*)arg[0]);
}

void* __G4LogicalVolume_dict::method_7881( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->AddDaughter((::G4VPhysicalVolume*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7882( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->IsDaughter((const ::G4VPhysicalVolume*)arg[0]);
  return &ret;
}

void* __G4LogicalVolume_dict::method_7883( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->IsAncestor((const ::G4VPhysicalVolume*)arg[0]);
  return &ret;
}

void* __G4LogicalVolume_dict::method_7884( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->RemoveDaughter((const ::G4VPhysicalVolume*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7885( void* o, const std::vector<void*>&, void*)
{
  ((::G4LogicalVolume*)o)->ClearDaughters();
  return 0;
}

void* __G4LogicalVolume_dict::method_7886( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4LogicalVolume*)o)->TotalVolumeEntities();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7887( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetSolid();
}

void* __G4LogicalVolume_dict::method_7888( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetSolid((::G4VSolid*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7889( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetMaterial();
}

void* __G4LogicalVolume_dict::method_7890( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetMaterial((::G4Material*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7891( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->UpdateMaterial((::G4Material*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7892( void* o, const std::vector<void*>& arg, void*)
{
  static double ret;
  if ( arg.size() == 0 ) {
    ret = ((::G4LogicalVolume*)o)->GetMass();
    return &ret;
  }
  else if ( arg.size() == 1 ) { 
    ret = ((::G4LogicalVolume*)o)->GetMass(*(bool*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((::G4LogicalVolume*)o)->GetMass(*(bool*)arg[0],
                                           (::G4Material*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __G4LogicalVolume_dict::method_7893( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetFieldManager();
}

void* __G4LogicalVolume_dict::method_7894( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetFieldManager((::G4FieldManager*)arg[0],
                                           *(bool*)arg[1]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7895( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetSensitiveDetector();
}

void* __G4LogicalVolume_dict::method_7896( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetSensitiveDetector((::G4VSensitiveDetector*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7897( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetUserLimits();
}

void* __G4LogicalVolume_dict::method_7898( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetUserLimits((::G4UserLimits*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7899( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetVoxelHeader();
}

void* __G4LogicalVolume_dict::method_7900( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetVoxelHeader((::G4SmartVoxelHeader*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7901( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4LogicalVolume*)o)->GetSmartless();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7902( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetSmartless(*(double*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7903( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->IsToOptimise();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7904( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetOptimisation(*(bool*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7905( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->IsRootRegion();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7906( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetRegionRootFlag(*(bool*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7907( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->IsRegion();
  return &ret;
}

void* __G4LogicalVolume_dict::method_7908( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetRegion((::G4Region*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7909( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetRegion();
}

void* __G4LogicalVolume_dict::method_7910( void* o, const std::vector<void*>&, void*)
{
  ((::G4LogicalVolume*)o)->PropagateRegion();
  return 0;
}

void* __G4LogicalVolume_dict::method_7911( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetMaterialCutsCouple();
}

void* __G4LogicalVolume_dict::method_7912( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetMaterialCutsCouple((::G4MaterialCutsCouple*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::operator_7913( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4LogicalVolume*)o)->operator==(*(const ::G4LogicalVolume*)arg[0]);
  return &ret;
}

void* __G4LogicalVolume_dict::method_7914( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetVisAttributes();
}

void* __G4LogicalVolume_dict::method_7915( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetVisAttributes((const ::G4VisAttributes*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7916( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetVisAttributes(*(const ::G4VisAttributes*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7917( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->BecomeEnvelopeForFastSimulation((::G4FastSimulationManager*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7918( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::G4LogicalVolume*)o)->ClearEnvelopeForFastSimulation();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::G4LogicalVolume*)o)->ClearEnvelopeForFastSimulation((::G4LogicalVolume*)arg[0]);
    return 0;
  }
  return 0;
}

void* __G4LogicalVolume_dict::method_7919( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4LogicalVolume*)o)->GetFastSimulationManager();
}

void* __G4LogicalVolume_dict::method_7920( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4LogicalVolume*)o)->SetBiasWeight(*(double*)arg[0]);
  return 0;
}

void* __G4LogicalVolume_dict::method_7921( void* o, const std::vector<void*>&, void*)
{
  static double ret;
  ret = ((const ::G4LogicalVolume*)o)->GetBiasWeight();
  return &ret;
}

//------Dictionary for class G4VUserDetectorConstruction -------------------------------
class __G4VUserDetectorConstruction_dict { 
  public:
  __G4VUserDetectorConstruction_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VUserDetectorConstruction*)o)->~G4VUserDetectorConstruction(); return 0;}
  static void * method_8381(void*, const std::vector<void*>&, void*);
};


__G4VUserDetectorConstruction_dict::__G4VUserDetectorConstruction_dict() {
  ClassBuilder< ::G4VUserDetectorConstruction >("G4VUserDetectorConstruction", PUBLIC | ABSTRACT | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VUserDetectorConstruction", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_10743), "Construct", method_8381, 0, 0, PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VUserDetectorConstruction -------------------------------
void* __G4VUserDetectorConstruction_dict::method_8381( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4VUserDetectorConstruction*)o)->Construct();
}

//------Dictionary for class G4VPhysicalVolume -------------------------------
class __G4VPhysicalVolume_dict { 
  public:
  __G4VPhysicalVolume_dict();
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::G4VPhysicalVolume*)o)->~G4VPhysicalVolume(); return 0;}
  static void * operator_8389(void*, const std::vector<void*>&, void*);
  static void * method_8390(void*, const std::vector<void*>&, void*);
  static void * method_8391(void*, const std::vector<void*>&, void*);
  static void * method_8392(void*, const std::vector<void*>&, void*);
  static void * method_8393(void*, const std::vector<void*>&, void*);
  static void * method_8394(void*, const std::vector<void*>&, void*);
  static void * method_8395(void*, const std::vector<void*>&, void*);
  static void * method_8396(void*, const std::vector<void*>&, void*);
  static void * method_8397(void*, const std::vector<void*>&, void*);
  static void * method_8398(void*, const std::vector<void*>&, void*);
  static void * method_8399(void*, const std::vector<void*>&, void*);
  static void * method_8400(void*, const std::vector<void*>&, void*);
  static void * method_8401(void*, const std::vector<void*>&, void*);
  static void * method_8402(void*, const std::vector<void*>&, void*);
  static void * method_8403(void*, const std::vector<void*>&, void*);
  static void * method_8404(void*, const std::vector<void*>&, void*);
  static void * method_8405(void*, const std::vector<void*>&, void*);
  static void * method_8406(void*, const std::vector<void*>&, void*);
  static void * method_8407(void*, const std::vector<void*>&, void*);
  static void * method_8408(void*, const std::vector<void*>&, void*);
  static void * method_8409(void*, const std::vector<void*>&, void*);
  static void * method_8410(void*, const std::vector<void*>&, void*);
  static void * method_8411(void*, const std::vector<void*>&, void*);
  static void * method_8412(void*, const std::vector<void*>&, void*);
  static void * method_8413(void*, const std::vector<void*>&, void*);
};


__G4VPhysicalVolume_dict::__G4VPhysicalVolume_dict() {
  ClassBuilder< ::G4VPhysicalVolume >("G4VPhysicalVolume", PUBLIC | ABSTRACT | VIRTUAL)
  .addDataMember(type_11685, "frot", OffsetOf(::G4VPhysicalVolume, frot), PROTECTED)
  .addDataMember(type_528, "ftrans", OffsetOf(::G4VPhysicalVolume, ftrans), PROTECTED)
  .addDataMember(type_10645, "flogical", OffsetOf(::G4VPhysicalVolume, flogical), PRIVATE)
  .addDataMember(type_466, "fname", OffsetOf(::G4VPhysicalVolume, fname), PRIVATE)
  .addDataMember(type_10645, "flmother", OffsetOf(::G4VPhysicalVolume, flmother), PRIVATE)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~G4VPhysicalVolume", destructor, 0, 0, PUBLIC | VIRTUAL | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_564, type_12967), "operator==", operator_8389, 0, "p", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_11685), "GetObjectRotation", method_8390, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_489), "GetObjectRotationValue", method_8391, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_528), "GetObjectTranslation", method_8392, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11632), "GetFrameRotation", method_8393, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_528), "GetFrameTranslation", method_8394, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11354), "GetTranslation", method_8395, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11632), "GetRotation", method_8396, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11354), "SetTranslation", method_8397, 0, "v", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_11685), "GetRotation", method_8398, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_11685), "SetRotation", method_8399, 0, "pRot", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10645), "GetLogicalVolume", method_8400, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10645), "SetLogicalVolume", method_8401, 0, "pLogical", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10645), "GetMotherLogical", method_8402, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_10645), "SetMotherLogical", method_8403, 0, "pMother", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_466), "GetName", method_8404, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9169), "SetName", method_8405, 0, "pName", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetMultiplicity", method_8406, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsMany", method_8407, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_565), "GetCopyNo", method_8408, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_565), "SetCopyNo", method_8409, 0, "CopyNo", PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsReplicated", method_8410, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_564), "IsParameterised", method_8411, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_12364), "GetParameterisation", method_8412, 0, 0, PUBLIC | VIRTUAL)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_12365, type_3399, type_3903, type_3903, type_11500), "GetReplicationData", method_8413, 0, "axis;nReplicas;width;offset;consuming", PUBLIC | VIRTUAL);
}

//------Stub functions for class G4VPhysicalVolume -------------------------------
void* __G4VPhysicalVolume_dict::operator_8389( void* o, const std::vector<void*>& arg, void*)
{
  static bool ret;
  ret = ((const ::G4VPhysicalVolume*)o)->operator==(*(const ::G4VPhysicalVolume*)arg[0]);
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8390( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetObjectRotation();
}

void* __G4VPhysicalVolume_dict::method_8391( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::HepRotation(((const ::G4VPhysicalVolume*)o)->GetObjectRotationValue());
}

void* __G4VPhysicalVolume_dict::method_8392( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4VPhysicalVolume*)o)->GetObjectTranslation());
}

void* __G4VPhysicalVolume_dict::method_8393( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetFrameRotation();
}

void* __G4VPhysicalVolume_dict::method_8394( void* o, const std::vector<void*>&, void*)
{
  return new CLHEP::Hep3Vector(((const ::G4VPhysicalVolume*)o)->GetFrameTranslation());
}

void* __G4VPhysicalVolume_dict::method_8395( void* o, const std::vector<void*>&, void*)
{
  return (void*)&((const ::G4VPhysicalVolume*)o)->GetTranslation();
}

void* __G4VPhysicalVolume_dict::method_8396( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetRotation();
}

void* __G4VPhysicalVolume_dict::method_8397( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetTranslation(*(const ::CLHEP::Hep3Vector*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8398( void* o, const std::vector<void*>&, void*)
{
  return (void*)((::G4VPhysicalVolume*)o)->GetRotation();
}

void* __G4VPhysicalVolume_dict::method_8399( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetRotation((::CLHEP::HepRotation*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8400( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetLogicalVolume();
}

void* __G4VPhysicalVolume_dict::method_8401( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetLogicalVolume((::G4LogicalVolume*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8402( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetMotherLogical();
}

void* __G4VPhysicalVolume_dict::method_8403( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetMotherLogical((::G4LogicalVolume*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8404( void* o, const std::vector<void*>&, void*)
{
  return new G4String(((const ::G4VPhysicalVolume*)o)->GetName());
}

void* __G4VPhysicalVolume_dict::method_8405( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetName(*(const ::G4String*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8406( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4VPhysicalVolume*)o)->GetMultiplicity();
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8407( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4VPhysicalVolume*)o)->IsMany();
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8408( void* o, const std::vector<void*>&, void*)
{
  static int ret;
  ret = ((const ::G4VPhysicalVolume*)o)->GetCopyNo();
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8409( void* o, const std::vector<void*>& arg, void*)
{
  ((::G4VPhysicalVolume*)o)->SetCopyNo(*(int*)arg[0]);
  return 0;
}

void* __G4VPhysicalVolume_dict::method_8410( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4VPhysicalVolume*)o)->IsReplicated();
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8411( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::G4VPhysicalVolume*)o)->IsParameterised();
  return &ret;
}

void* __G4VPhysicalVolume_dict::method_8412( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::G4VPhysicalVolume*)o)->GetParameterisation();
}

void* __G4VPhysicalVolume_dict::method_8413( void* o, const std::vector<void*>& arg, void*)
{
  ((const ::G4VPhysicalVolume*)o)->GetReplicationData(*(::EAxis*)arg[0],
                                                      *(int*)arg[1],
                                                      *(double*)arg[2],
                                                      *(double*)arg[3],
                                                      *(bool*)arg[4]);
  return 0;
}

//------Dictionary for class basic_string<char,std::char_traits<char>,std::allocator<char> > -------------------------------
class __std__basic_string_char__dict { 
  public:
  __std__basic_string_char__dict();
  static void * constructor_10354(void*, const std::vector<void*>&, void*);
  static void * constructor_10355(void*, const std::vector<void*>&, void*);
  static void * constructor_10356(void*, const std::vector<void*>&, void*);
  static void * constructor_10357(void*, const std::vector<void*>&, void*);
  static void * constructor_10358(void*, const std::vector<void*>&, void*);
  static void * constructor_10359(void*, const std::vector<void*>&, void*);
  static void * constructor_10360(void*, const std::vector<void*>&, void*);
  static void * constructor_10361(void*, const std::vector<void*>&, void*);
  static void * destructor(void * o, const std::vector<void*>&, void *) { ((::std::basic_string<char>*)o)->~basic_string(); return 0;}
  static void * operator_10363(void*, const std::vector<void*>&, void*);
  static void * operator_10364(void*, const std::vector<void*>&, void*);
  static void * operator_10365(void*, const std::vector<void*>&, void*);
  static void * method_10366(void*, const std::vector<void*>&, void*);
  static void * method_10367(void*, const std::vector<void*>&, void*);
  static void * method_10368(void*, const std::vector<void*>&, void*);
  static void * method_10369(void*, const std::vector<void*>&, void*);
  static void * method_10374(void*, const std::vector<void*>&, void*);
  static void * method_10375(void*, const std::vector<void*>&, void*);
  static void * method_10376(void*, const std::vector<void*>&, void*);
  static void * method_10377(void*, const std::vector<void*>&, void*);
  static void * method_10378(void*, const std::vector<void*>&, void*);
  static void * method_10379(void*, const std::vector<void*>&, void*);
  static void * method_10380(void*, const std::vector<void*>&, void*);
  static void * method_10381(void*, const std::vector<void*>&, void*);
  static void * method_10382(void*, const std::vector<void*>&, void*);
  static void * operator_10383(void*, const std::vector<void*>&, void*);
  static void * operator_10384(void*, const std::vector<void*>&, void*);
  static void * method_10385(void*, const std::vector<void*>&, void*);
  static void * method_10386(void*, const std::vector<void*>&, void*);
  static void * operator_10387(void*, const std::vector<void*>&, void*);
  static void * operator_10388(void*, const std::vector<void*>&, void*);
  static void * operator_10389(void*, const std::vector<void*>&, void*);
  static void * method_10390(void*, const std::vector<void*>&, void*);
  static void * method_10391(void*, const std::vector<void*>&, void*);
  static void * method_10392(void*, const std::vector<void*>&, void*);
  static void * method_10393(void*, const std::vector<void*>&, void*);
  static void * method_10394(void*, const std::vector<void*>&, void*);
  static void * method_10395(void*, const std::vector<void*>&, void*);
  static void * method_10396(void*, const std::vector<void*>&, void*);
  static void * method_10397(void*, const std::vector<void*>&, void*);
  static void * method_10398(void*, const std::vector<void*>&, void*);
  static void * method_10399(void*, const std::vector<void*>&, void*);
  static void * method_10400(void*, const std::vector<void*>&, void*);
  static void * method_10401(void*, const std::vector<void*>&, void*);
  static void * method_10402(void*, const std::vector<void*>&, void*);
  static void * method_10403(void*, const std::vector<void*>&, void*);
  static void * method_10404(void*, const std::vector<void*>&, void*);
  static void * method_10405(void*, const std::vector<void*>&, void*);
  static void * method_10406(void*, const std::vector<void*>&, void*);
  static void * method_10407(void*, const std::vector<void*>&, void*);
  static void * method_10408(void*, const std::vector<void*>&, void*);
  static void * method_10409(void*, const std::vector<void*>&, void*);
  static void * method_10410(void*, const std::vector<void*>&, void*);
  static void * method_10411(void*, const std::vector<void*>&, void*);
  static void * method_10412(void*, const std::vector<void*>&, void*);
  static void * method_10413(void*, const std::vector<void*>&, void*);
  static void * method_10414(void*, const std::vector<void*>&, void*);
  static void * method_10415(void*, const std::vector<void*>&, void*);
  static void * method_10416(void*, const std::vector<void*>&, void*);
  static void * method_10417(void*, const std::vector<void*>&, void*);
  static void * method_10418(void*, const std::vector<void*>&, void*);
  static void * method_10419(void*, const std::vector<void*>&, void*);
  static void * method_10420(void*, const std::vector<void*>&, void*);
  static void * method_10421(void*, const std::vector<void*>&, void*);
  static void * method_10422(void*, const std::vector<void*>&, void*);
  static void * method_10423(void*, const std::vector<void*>&, void*);
  static void * method_10425(void*, const std::vector<void*>&, void*);
  static void * method_10426(void*, const std::vector<void*>&, void*);
  static void * method_10427(void*, const std::vector<void*>&, void*);
  static void * method_10428(void*, const std::vector<void*>&, void*);
  static void * method_10429(void*, const std::vector<void*>&, void*);
  static void * method_10430(void*, const std::vector<void*>&, void*);
  static void * method_10431(void*, const std::vector<void*>&, void*);
  static void * method_10432(void*, const std::vector<void*>&, void*);
  static void * method_10433(void*, const std::vector<void*>&, void*);
  static void * method_10434(void*, const std::vector<void*>&, void*);
  static void * method_10435(void*, const std::vector<void*>&, void*);
  static void * method_10436(void*, const std::vector<void*>&, void*);
  static void * method_10437(void*, const std::vector<void*>&, void*);
  static void * method_10438(void*, const std::vector<void*>&, void*);
  static void * method_10439(void*, const std::vector<void*>&, void*);
  static void * method_10440(void*, const std::vector<void*>&, void*);
  static void * method_10441(void*, const std::vector<void*>&, void*);
  static void * method_10442(void*, const std::vector<void*>&, void*);
  static void * method_10443(void*, const std::vector<void*>&, void*);
  static void * method_10444(void*, const std::vector<void*>&, void*);
  static void * method_10445(void*, const std::vector<void*>&, void*);
  static void * method_10446(void*, const std::vector<void*>&, void*);
  static void * method_10447(void*, const std::vector<void*>&, void*);
  static void * method_10448(void*, const std::vector<void*>&, void*);
  static void * method_10449(void*, const std::vector<void*>&, void*);
  static void * method_10450(void*, const std::vector<void*>&, void*);
  static void * method_10451(void*, const std::vector<void*>&, void*);
  static void * method_10452(void*, const std::vector<void*>&, void*);
  static void * method_10453(void*, const std::vector<void*>&, void*);
  static void * method_10454(void*, const std::vector<void*>&, void*);
  static void * method_10455(void*, const std::vector<void*>&, void*);
  static void * method_10456(void*, const std::vector<void*>&, void*);
  static void * method_10457(void*, const std::vector<void*>&, void*);
  static void * method_10458(void*, const std::vector<void*>&, void*);
  static void * method_10459(void*, const std::vector<void*>&, void*);
  static void * method_10460(void*, const std::vector<void*>&, void*);
};


__std__basic_string_char__dict::__std__basic_string_char__dict() {
  ClassBuilder< ::std::basic_string<char> >("std::basic_string<char>", PUBLIC)
  .addDataMember(type_10338, "_M_dataplus", OffsetOf(::std::basic_string<char>, _M_dataplus), PRIVATE)
  .addTypedef(type_9659, "std::basic_string<char>::traits_type")
  .addTypedef(type_8017, "std::basic_string<char>::value_type")
  .addTypedef(type_9757, "std::basic_string<char>::allocator_type")
  .addTypedef(type_1555, "std::basic_string<char>::size_type")
  .addTypedef(type_1556, "std::basic_string<char>::difference_type")
  .addTypedef(type_8987, "std::basic_string<char>::reference")
  .addTypedef(type_9217, "std::basic_string<char>::const_reference")
  .addTypedef(type_828, "std::basic_string<char>::pointer")
  .addTypedef(type_7707, "std::basic_string<char>::const_pointer")
  .addTypedef(type_9234, "std::basic_string<char>::iterator")
  .addTypedef(type_10331, "std::basic_string<char>::const_iterator")
  .addTypedef(type_10333, "std::basic_string<char>::const_reverse_iterator")
  .addTypedef(type_10335, "std::basic_string<char>::reverse_iterator")
  .addFunctionMember(FunctionTypeBuilder(type_void), "basic_string", constructor_10354, 0, 0, PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9172), "basic_string", constructor_10355, 0, "__a", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9144), "basic_string", constructor_10356, 0, "__str", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9144, type_1555, type_1555), "basic_string", constructor_10357, 0, "__str;__pos;__n=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_9144, type_1555, type_1555, type_9172), "basic_string", constructor_10358, 0, "__str;__pos;__n;__a", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_7707, type_1555, type_9172), "basic_string", constructor_10359, 0, "__s;__n;__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_7707, type_9172), "basic_string", constructor_10360, 0, "__s;__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void, type_1555, type_8017, type_9172), "basic_string", constructor_10361, 0, "__n;__c;__a=<gccxml-cast-expr>", PUBLIC | CONSTRUCTOR)
  .addFunctionMember(FunctionTypeBuilder(type_void), "~basic_string", destructor, 0, 0, PUBLIC | DESTRUCTOR )
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144), "operator=", operator_10363, 0, "__str", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707), "operator=", operator_10364, 0, "__s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_8017), "operator=", operator_10365, 0, "__c", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9234), "begin", method_10366, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10331), "begin", method_10367, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9234), "end", method_10368, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_10331), "end", method_10369, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "size", method_10374, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "length", method_10375, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "max_size", method_10376, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555, type_8017), "resize", method_10377, 0, "__n;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "resize", method_10378, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555), "capacity", method_10379, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_1555), "reserve", method_10380, 0, "__res=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465), "clear", method_10381, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_420), "empty", method_10382, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9217, type_1555), "operator[]", operator_10383, 0, "__pos", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_8987, type_1555), "operator[]", operator_10384, 0, "__pos", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9217, type_1555), "at", method_10385, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_8987, type_1555), "at", method_10386, 0, "__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144), "operator+=", operator_10387, 0, "__str", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707), "operator+=", operator_10388, 0, "__s", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_8017), "operator+=", operator_10389, 0, "__c", PUBLIC | OPERATOR)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144), "append", method_10390, 0, "__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144, type_1555, type_1555), "append", method_10391, 0, "__str;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707, type_1555), "append", method_10392, 0, "__s;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707), "append", method_10393, 0, "__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_8017), "append", method_10394, 0, "__n;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_8017), "push_back", method_10395, 0, "__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144), "assign", method_10396, 0, "__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9144, type_1555, type_1555), "assign", method_10397, 0, "__str;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707, type_1555), "assign", method_10398, 0, "__s;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_7707), "assign", method_10399, 0, "__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_8017), "assign", method_10400, 0, "__n;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9234, type_1555, type_8017), "insert", method_10401, 0, "__p;__n;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_9144), "insert", method_10402, 0, "__pos1;__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_9144, type_1555, type_1555), "insert", method_10403, 0, "__pos1;__str;__pos2;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_7707, type_1555), "insert", method_10404, 0, "__pos;__s;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_7707), "insert", method_10405, 0, "__pos;__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_8017), "insert", method_10406, 0, "__pos;__n;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9234, type_9234, type_8017), "insert", method_10407, 0, "__p;__c=<gccxml-cast-expr>", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555), "erase", method_10408, 0, "__pos=0;__n=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9234, type_9234), "erase", method_10409, 0, "__position", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9234, type_9234, type_9234), "erase", method_10410, 0, "__first;__last", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_9144), "replace", method_10411, 0, "__pos;__n;__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_9144, type_1555, type_1555), "replace", method_10412, 0, "__pos1;__n1;__str;__pos2;__n2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_7707, type_1555), "replace", method_10413, 0, "__pos;__n1;__s;__n2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_7707), "replace", method_10414, 0, "__pos;__n1;__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_1555, type_1555, type_1555, type_8017), "replace", method_10415, 0, "__pos;__n1;__n2;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_9144), "replace", method_10416, 0, "__i1;__i2;__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_7707, type_1555), "replace", method_10417, 0, "__i1;__i2;__s;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_7707), "replace", method_10418, 0, "__i1;__i2;__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_1555, type_8017), "replace", method_10419, 0, "__i1;__i2;__n2;__c", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_828, type_828), "replace", method_10420, 0, "__i1;__i2;__k1;__k2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_7707, type_7707), "replace", method_10421, 0, "__i1;__i2;__k1;__k2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_9234, type_9234), "replace", method_10422, 0, "__i1;__i2;__k1;__k2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9142, type_9234, type_9234, type_10331, type_10331), "replace", method_10423, 0, "__i1;__i2;__k1;__k2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_828, type_1555, type_1555), "copy", method_10425, 0, "__s;__n;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1465, type_9142), "swap", method_10426, 0, "__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_7707), "c_str", method_10427, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_7707), "data", method_10428, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_9757), "get_allocator", method_10429, 0, 0, PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "find", method_10430, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "find", method_10431, 0, "__str;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "find", method_10432, 0, "__s;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "find", method_10433, 0, "__c;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "rfind", method_10434, 0, "__str;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "rfind", method_10435, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "rfind", method_10436, 0, "__s;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "rfind", method_10437, 0, "__c;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "find_first_of", method_10438, 0, "__str;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "find_first_of", method_10439, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "find_first_of", method_10440, 0, "__s;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "find_first_of", method_10441, 0, "__c;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "find_last_of", method_10442, 0, "__str;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "find_last_of", method_10443, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "find_last_of", method_10444, 0, "__s;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "find_last_of", method_10445, 0, "__c;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "find_first_not_of", method_10446, 0, "__str;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "find_first_not_of", method_10447, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "find_first_not_of", method_10448, 0, "__s;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "find_first_not_of", method_10449, 0, "__c;__pos=0", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_9144, type_1555), "find_last_not_of", method_10450, 0, "__str;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555, type_1555), "find_last_not_of", method_10451, 0, "__s;__pos;__n", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_7707, type_1555), "find_last_not_of", method_10452, 0, "__s;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_1555, type_8017, type_1555), "find_last_not_of", method_10453, 0, "__c;__pos=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_2806, type_1555, type_1555), "substr", method_10454, 0, "__pos=0;__n=std::basic_string<_CharT, _Traits, _Alloc>::npos", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_9144), "compare", method_10455, 0, "__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_1555, type_1555, type_9144), "compare", method_10456, 0, "__pos;__n;__str", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_1555, type_1555, type_9144, type_1555, type_1555), "compare", method_10457, 0, "__pos1;__n1;__str;__pos2;__n2", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_7707), "compare", method_10458, 0, "__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_1555, type_1555, type_7707), "compare", method_10459, 0, "__pos;__n1;__s", PUBLIC)
  .addFunctionMember(FunctionTypeBuilder(type_424, type_1555, type_1555, type_7707, type_1555), "compare", method_10460, 0, "__pos;__n1;__s;__n2", PUBLIC);
}

//------Stub functions for class basic_string<char,std::char_traits<char>,std::allocator<char> > -------------------------------
void* __std__basic_string_char__dict::constructor_10354( void* mem, const std::vector<void*>&, void*) {
  return ::new(mem) ::std::basic_string<char>();
}

void* __std__basic_string_char__dict::constructor_10355( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::basic_string<char>(*(const ::std::allocator<char>*)arg[0]);
}

void* __std__basic_string_char__dict::constructor_10356( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::basic_string<char>(*(const ::std::basic_string<char>*)arg[0]);
}

void* __std__basic_string_char__dict::constructor_10357( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 2 ) {
    return ::new(mem) ::std::basic_string<char>(*(const ::std::basic_string<char>*)arg[0],
                                              *(unsigned int*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::std::basic_string<char>(*(const ::std::basic_string<char>*)arg[0],
                                              *(unsigned int*)arg[1],
                                              *(unsigned int*)arg[2]);
  }
  return 0;
}

void* __std__basic_string_char__dict::constructor_10358( void* mem, const std::vector<void*>& arg, void*) {
  return ::new(mem) ::std::basic_string<char>(*(const ::std::basic_string<char>*)arg[0],
                                              *(unsigned int*)arg[1],
                                              *(unsigned int*)arg[2],
                                              *(const ::std::allocator<char>*)arg[3]);
}

void* __std__basic_string_char__dict::constructor_10359( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 2 ) {
    return ::new(mem) ::std::basic_string<char>((const char*)arg[0],
                                              *(unsigned int*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::std::basic_string<char>((const char*)arg[0],
                                              *(unsigned int*)arg[1],
                                              *(const ::std::allocator<char>*)arg[2]);
  }
  return 0;
}

void* __std__basic_string_char__dict::constructor_10360( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    return ::new(mem) ::std::basic_string<char>((const char*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return ::new(mem) ::std::basic_string<char>((const char*)arg[0],
                                              *(const ::std::allocator<char>*)arg[1]);
  }
  return 0;
}

void* __std__basic_string_char__dict::constructor_10361( void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 2 ) {
    return ::new(mem) ::std::basic_string<char>(*(unsigned int*)arg[0],
                                              *(char*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    return ::new(mem) ::std::basic_string<char>(*(unsigned int*)arg[0],
                                              *(char*)arg[1],
                                              *(const ::std::allocator<char>*)arg[2]);
  }
  return 0;
}

void* __std__basic_string_char__dict::operator_10363( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator=(*(const ::std::basic_string<char>*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10364( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator=((const char*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10365( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator=(*(char*)arg[0]);
}

void* __std__basic_string_char__dict::method_10366( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->begin());
}

void* __std__basic_string_char__dict::method_10367( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<const char*,std::basic_string<char> >(((const ::std::basic_string<char>*)o)->begin());
}

void* __std__basic_string_char__dict::method_10368( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->end());
}

void* __std__basic_string_char__dict::method_10369( void* o, const std::vector<void*>&, void*)
{
  return new __gnu_cxx::__normal_iterator<const char*,std::basic_string<char> >(((const ::std::basic_string<char>*)o)->end());
}

void* __std__basic_string_char__dict::method_10374( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->size();
  return &ret;
}

void* __std__basic_string_char__dict::method_10375( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->length();
  return &ret;
}

void* __std__basic_string_char__dict::method_10376( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->max_size();
  return &ret;
}

void* __std__basic_string_char__dict::method_10377( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::basic_string<char>*)o)->resize(*(unsigned int*)arg[0],
                                          *(char*)arg[1]);
  return 0;
}

void* __std__basic_string_char__dict::method_10378( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::basic_string<char>*)o)->resize(*(unsigned int*)arg[0]);
  return 0;
}

void* __std__basic_string_char__dict::method_10379( void* o, const std::vector<void*>&, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->capacity();
  return &ret;
}

void* __std__basic_string_char__dict::method_10380( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    ((::std::basic_string<char>*)o)->reserve();
    return 0;
  }
  else if ( arg.size() == 1 ) { 
    ((::std::basic_string<char>*)o)->reserve(*(unsigned int*)arg[0]);
    return 0;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10381( void* o, const std::vector<void*>&, void*)
{
  ((::std::basic_string<char>*)o)->clear();
  return 0;
}

void* __std__basic_string_char__dict::method_10382( void* o, const std::vector<void*>&, void*)
{
  static bool ret;
  ret = ((const ::std::basic_string<char>*)o)->empty();
  return &ret;
}

void* __std__basic_string_char__dict::operator_10383( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::basic_string<char>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10384( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator[](*(unsigned int*)arg[0]);
}

void* __std__basic_string_char__dict::method_10385( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((const ::std::basic_string<char>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__basic_string_char__dict::method_10386( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->at(*(unsigned int*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10387( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator+=(*(const ::std::basic_string<char>*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10388( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator+=((const char*)arg[0]);
}

void* __std__basic_string_char__dict::operator_10389( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->operator+=(*(char*)arg[0]);
}

void* __std__basic_string_char__dict::method_10390( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->append(*(const ::std::basic_string<char>*)arg[0]);
}

void* __std__basic_string_char__dict::method_10391( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->append(*(const ::std::basic_string<char>*)arg[0],
                                                         *(unsigned int*)arg[1],
                                                         *(unsigned int*)arg[2]);
}

void* __std__basic_string_char__dict::method_10392( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->append((const char*)arg[0],
                                                         *(unsigned int*)arg[1]);
}

void* __std__basic_string_char__dict::method_10393( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->append((const char*)arg[0]);
}

void* __std__basic_string_char__dict::method_10394( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->append(*(unsigned int*)arg[0],
                                                         *(char*)arg[1]);
}

void* __std__basic_string_char__dict::method_10395( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::basic_string<char>*)o)->push_back(*(char*)arg[0]);
  return 0;
}

void* __std__basic_string_char__dict::method_10396( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->assign(*(const ::std::basic_string<char>*)arg[0]);
}

void* __std__basic_string_char__dict::method_10397( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->assign(*(const ::std::basic_string<char>*)arg[0],
                                                         *(unsigned int*)arg[1],
                                                         *(unsigned int*)arg[2]);
}

void* __std__basic_string_char__dict::method_10398( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->assign((const char*)arg[0],
                                                         *(unsigned int*)arg[1]);
}

void* __std__basic_string_char__dict::method_10399( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->assign((const char*)arg[0]);
}

void* __std__basic_string_char__dict::method_10400( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->assign(*(unsigned int*)arg[0],
                                                         *(char*)arg[1]);
}

void* __std__basic_string_char__dict::method_10401( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::basic_string<char>*)o)->insert(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                          *(unsigned int*)arg[1],
                                          *(char*)arg[2]);
  return 0;
}

void* __std__basic_string_char__dict::method_10402( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->insert(*(unsigned int*)arg[0],
                                                         *(const ::std::basic_string<char>*)arg[1]);
}

void* __std__basic_string_char__dict::method_10403( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->insert(*(unsigned int*)arg[0],
                                                         *(const ::std::basic_string<char>*)arg[1],
                                                         *(unsigned int*)arg[2],
                                                         *(unsigned int*)arg[3]);
}

void* __std__basic_string_char__dict::method_10404( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->insert(*(unsigned int*)arg[0],
                                                         (const char*)arg[1],
                                                         *(unsigned int*)arg[2]);
}

void* __std__basic_string_char__dict::method_10405( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->insert(*(unsigned int*)arg[0],
                                                         (const char*)arg[1]);
}

void* __std__basic_string_char__dict::method_10406( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->insert(*(unsigned int*)arg[0],
                                                         *(unsigned int*)arg[1],
                                                         *(char*)arg[2]);
}

void* __std__basic_string_char__dict::method_10407( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->insert(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0]));
  }
  else if ( arg.size() == 2 ) { 
    return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->insert(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                                                                                    *(char*)arg[1]));
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10408( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    return (void*)&((::std::basic_string<char>*)o)->erase();
  }
  else if ( arg.size() == 1 ) { 
    return (void*)&((::std::basic_string<char>*)o)->erase(*(unsigned int*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    return (void*)&((::std::basic_string<char>*)o)->erase(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1]);
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10409( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->erase(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0]));
}

void* __std__basic_string_char__dict::method_10410( void* o, const std::vector<void*>& arg, void*)
{
  return new __gnu_cxx::__normal_iterator<char*,std::basic_string<char> >(((::std::basic_string<char>*)o)->erase(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                                                                                 *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1]));
}

void* __std__basic_string_char__dict::method_10411( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1],
                                                          *(const ::std::basic_string<char>*)arg[2]);
}

void* __std__basic_string_char__dict::method_10412( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1],
                                                          *(const ::std::basic_string<char>*)arg[2],
                                                          *(unsigned int*)arg[3],
                                                          *(unsigned int*)arg[4]);
}

void* __std__basic_string_char__dict::method_10413( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1],
                                                          (const char*)arg[2],
                                                          *(unsigned int*)arg[3]);
}

void* __std__basic_string_char__dict::method_10414( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1],
                                                          (const char*)arg[2]);
}

void* __std__basic_string_char__dict::method_10415( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(unsigned int*)arg[0],
                                                          *(unsigned int*)arg[1],
                                                          *(unsigned int*)arg[2],
                                                          *(char*)arg[3]);
}

void* __std__basic_string_char__dict::method_10416( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          *(const ::std::basic_string<char>*)arg[2]);
}

void* __std__basic_string_char__dict::method_10417( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          (const char*)arg[2],
                                                          *(unsigned int*)arg[3]);
}

void* __std__basic_string_char__dict::method_10418( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          (const char*)arg[2]);
}

void* __std__basic_string_char__dict::method_10419( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          *(unsigned int*)arg[2],
                                                          *(char*)arg[3]);
}

void* __std__basic_string_char__dict::method_10420( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          (char*)arg[2],
                                                          (char*)arg[3]);
}

void* __std__basic_string_char__dict::method_10421( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          (const char*)arg[2],
                                                          (const char*)arg[3]);
}

void* __std__basic_string_char__dict::method_10422( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[2],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[3]);
}

void* __std__basic_string_char__dict::method_10423( void* o, const std::vector<void*>& arg, void*)
{
  return (void*)&((::std::basic_string<char>*)o)->replace(*(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[0],
                                                          *(::__gnu_cxx::__normal_iterator<char*,std::basic_string<char> >*)arg[1],
                                                          *(::__gnu_cxx::__normal_iterator<const char*,std::basic_string<char> >*)arg[2],
                                                          *(::__gnu_cxx::__normal_iterator<const char*,std::basic_string<char> >*)arg[3]);
}

void* __std__basic_string_char__dict::method_10425( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 2 ) {
    ret = ((const ::std::basic_string<char>*)o)->copy((char*)arg[0],
                                                      *(unsigned int*)arg[1]);
    return &ret;
  }
  else if ( arg.size() == 3 ) { 
    ret = ((const ::std::basic_string<char>*)o)->copy((char*)arg[0],
                                                      *(unsigned int*)arg[1],
                                                      *(unsigned int*)arg[2]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10426( void* o, const std::vector<void*>& arg, void*)
{
  ((::std::basic_string<char>*)o)->swap(*(::std::basic_string<char>*)arg[0]);
  return 0;
}

void* __std__basic_string_char__dict::method_10427( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::std::basic_string<char>*)o)->c_str();
}

void* __std__basic_string_char__dict::method_10428( void* o, const std::vector<void*>&, void*)
{
  return (void*)((const ::std::basic_string<char>*)o)->data();
}

void* __std__basic_string_char__dict::method_10429( void* o, const std::vector<void*>&, void*)
{
  return new std::allocator<char>(((const ::std::basic_string<char>*)o)->get_allocator());
}

void* __std__basic_string_char__dict::method_10430( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->find((const char*)arg[0],
                                                    *(unsigned int*)arg[1],
                                                    *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10431( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find(*(const ::std::basic_string<char>*)arg[0],
                                                      *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10432( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find((const char*)arg[0],
                                                      *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10433( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find(*(char*)arg[0],
                                                      *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10434( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->rfind(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->rfind(*(const ::std::basic_string<char>*)arg[0],
                                                       *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10435( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->rfind((const char*)arg[0],
                                                     *(unsigned int*)arg[1],
                                                     *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10436( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->rfind((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->rfind((const char*)arg[0],
                                                       *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10437( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->rfind(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->rfind(*(char*)arg[0],
                                                       *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10438( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_of(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_of(*(const ::std::basic_string<char>*)arg[0],
                                                               *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10439( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->find_first_of((const char*)arg[0],
                                                             *(unsigned int*)arg[1],
                                                             *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10440( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_of((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_of((const char*)arg[0],
                                                               *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10441( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_of(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_of(*(char*)arg[0],
                                                               *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10442( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_of(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_of(*(const ::std::basic_string<char>*)arg[0],
                                                              *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10443( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->find_last_of((const char*)arg[0],
                                                            *(unsigned int*)arg[1],
                                                            *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10444( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_of((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_of((const char*)arg[0],
                                                              *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10445( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_of(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_of(*(char*)arg[0],
                                                              *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10446( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of(*(const ::std::basic_string<char>*)arg[0],
                                                                   *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10447( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->find_first_not_of((const char*)arg[0],
                                                                 *(unsigned int*)arg[1],
                                                                 *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10448( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of((const char*)arg[0],
                                                                   *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10449( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_first_not_of(*(char*)arg[0],
                                                                   *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10450( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of(*(const ::std::basic_string<char>*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of(*(const ::std::basic_string<char>*)arg[0],
                                                                  *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10451( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  ret = ((const ::std::basic_string<char>*)o)->find_last_not_of((const char*)arg[0],
                                                                *(unsigned int*)arg[1],
                                                                *(unsigned int*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10452( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of((const char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of((const char*)arg[0],
                                                                  *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10453( void* o, const std::vector<void*>& arg, void*)
{
  static unsigned int ret;
  if ( arg.size() == 1 ) {
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of(*(char*)arg[0]);
    return &ret;
  }
  else if ( arg.size() == 2 ) { 
    ret = ((const ::std::basic_string<char>*)o)->find_last_not_of(*(char*)arg[0],
                                                                  *(unsigned int*)arg[1]);
    return &ret;
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10454( void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 0 ) {
    return new std::basic_string<char>(((const ::std::basic_string<char>*)o)->substr());
  }
  else if ( arg.size() == 1 ) { 
    return new std::basic_string<char>(((const ::std::basic_string<char>*)o)->substr(*(unsigned int*)arg[0]));
  }
  else if ( arg.size() == 2 ) { 
    return new std::basic_string<char>(((const ::std::basic_string<char>*)o)->substr(*(unsigned int*)arg[0],
                                                                                     *(unsigned int*)arg[1]));
  }
  return 0;
}

void* __std__basic_string_char__dict::method_10455( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare(*(const ::std::basic_string<char>*)arg[0]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10456( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare(*(unsigned int*)arg[0],
                                                       *(unsigned int*)arg[1],
                                                       *(const ::std::basic_string<char>*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10457( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare(*(unsigned int*)arg[0],
                                                       *(unsigned int*)arg[1],
                                                       *(const ::std::basic_string<char>*)arg[2],
                                                       *(unsigned int*)arg[3],
                                                       *(unsigned int*)arg[4]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10458( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare((const char*)arg[0]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10459( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare(*(unsigned int*)arg[0],
                                                       *(unsigned int*)arg[1],
                                                       (const char*)arg[2]);
  return &ret;
}

void* __std__basic_string_char__dict::method_10460( void* o, const std::vector<void*>& arg, void*)
{
  static int ret;
  ret = ((const ::std::basic_string<char>*)o)->compare(*(unsigned int*)arg[0],
                                                       *(unsigned int*)arg[1],
                                                       (const char*)arg[2],
                                                       *(unsigned int*)arg[3]);
  return &ret;
}

namespace {
  struct Dictionaries {
    Dictionaries() {
    NamespaceBuilder( "std" );
    NamespaceBuilder( "CLHEP" );
      __G4UImanager_dict(); 
      __G4TransportationManager_dict(); 
      __G4RunManager_dict(); 
      __G4HCofThisEvent_dict(); 
      __G4VHitsCollection_dict(); 
      __G4VHit_dict(); 
      __G4EventManager_dict(); 
      __G4SDManager_dict(); 
      __G4Navigator_dict(); 
      __G4Event_dict(); 
      __std__vector_G4Materialp__dict(); 
      __std__vector_G4Elementp__dict(); 
      __G4Element_dict(); 
      __CLHEP__Hep3Vector_dict(); 
      __G4UserSteppingAction_dict(); 
      __G4UserTrackingAction_dict(); 
      __G4UserStackingAction_dict(); 
      __G4UserEventAction_dict(); 
      __G4VUserPrimaryGeneratorAction_dict(); 
      __G4UserRunAction_dict(); 
      __G4VUserPhysicsList_dict(); 
      __G4PVPlacement_dict(); 
      __G4EllipticalTube_dict(); 
      __G4UnionSolid_dict(); 
      __G4SubtractionSolid_dict(); 
      __G4IntersectionSolid_dict(); 
      __G4CSGSolid_dict(); 
      __G4Hype_dict(); 
      __G4Polyhedra_dict(); 
      __G4Para_dict(); 
      __G4Torus_dict(); 
      __G4Orb_dict(); 
      __G4Sphere_dict(); 
      __G4Cons_dict(); 
      __G4Trap_dict(); 
      __G4Trd_dict(); 
      __G4Tubs_dict(); 
      __G4Box_dict(); 
      __G4PVParameterised_dict(); 
      __G4PVReplica_dict(); 
      __BuildG4Polycone_dict(); 
      __G4Polycone_dict(); 
      __G4String_dict(); 
      __DetConstruction_dict(); 
      __G4UserLimits_dict(); 
      __G4VSolid_dict(); 
      __G4VSensitiveDetector_dict(); 
      __G4VPVParameterisation_dict(); 
      __CLHEP__HepRotation_dict(); 
      __G4Material_dict(); 
      __G4LogicalVolume_dict(); 
      __G4VUserDetectorConstruction_dict(); 
      __G4VPhysicalVolume_dict(); 
      __std__basic_string_char__dict(); 
    }
  };
  static Dictionaries instance;
}
