#
if !(${?GDMLBASE}) then
    setenv GDMLBASE ${PWD}/../../
endif
#
if !(${?PLATFORM}) then
    if ( ${OSTYPE} == 'linux' ) then
	setenv PLATFORM slc3_ia32_gcc323
    else if ( ${OSTYPE} == 'darwin' ) then
	setenv PLATFORM osx103_gcc33
    else 
	echo "Cannot recognize OSTYPE"
    endif
endif
#

if (${?DBG}) then
    setenv DEBUG _dbg
else
    setenv DEBUG
endif

setenv PyGDMLBASE ${GDMLBASE}/PyGDML 

# root variables
setenv ROOTSYS /afs/cern.ch/sw/lcg/external/root/5.10.00/${PLATFORM}/root

# gccxml
if !(${?GCCXMLPATH}) then
    setenv GCCXMLPATH /afs/cern.ch/sw/lcg/external/gccxml/0.6.0_patch1/${PLATFORM}/bin/
endif

# CLHEP variables
setenv CLHEPBASE /afs/cern.ch/sw/lcg/external/clhep/1.9.2.2
setenv CLHEPINC ${CLHEPBASE}/${PLATFORM}/include

# G4 variables
setenv G4VERSION 8.0.p01
setenv G4INSTALL /afs/cern.ch/sw/lcg/external/geant4
setenv G4INCLUDES ${G4INSTALL}/${G4VERSION}/share/include
setenv G4LIBS ${G4INSTALL}/${G4VERSION}/${PLATFORM}/lib
 
#
if (${?PYTHONPATH}) then
    setenv PYTHONPATH ${PYTHONPATH}:{$ROOTSYS}/lib:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/G4Binding/${PLATFORM}:${PyGDMLBASE}/G4Binding/python
else
    setenv PYTHONPATH {$ROOTSYS}/lib:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/G4Binding/${PLATFORM}:${PyGDMLBASE}/G4Binding/python
endif


if ( ${OSTYPE} == 'linux' ) then
    setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:{$ROOTSYS}/lib:${G4LIBS}:${CLHEPBASE}/${PLATFORM}/lib:${PyGDMLBASE}/G4Binding/${PLATFORM}
else if ( ${OSTYPE} == 'darwin' ) then
    setenv DYLD_LIBRARY_PATH {$ROOTSYS}/lib:${G4LIBS}:${CLHEPBASE}/${PLATFORM}/lib:${PyGDMLBASE}/G4Binding/${PLATFORM}
endif

setenv PATH ${PATH}:{$ROOTSYS}/bin
