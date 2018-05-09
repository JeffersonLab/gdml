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

# seal variables
if !(${?SEALVER}) then
    setenv SEALVER SEAL_1_6_2
endif
if !(${?SEALBASE}) then
    setenv SEALBASE /afs/cern.ch/sw/lcg/app/releases/SEAL/${SEALVER}
endif
setenv SEALINCLUDES ${SEALBASE}/include

# gccxml
if !(${?GCCXMLPATH}) then
    setenv GCCXMLPATH /afs/cern.ch/sw/lcg/external/gccxml/0.6.0_patch1/${PLATFORM}/bin/
endif

# CLHEP variables
setenv CLHEPBASE /afs/cern.ch/sw/lcg/external/clhep/1.9.1.2
setenv CLHEPINC ${CLHEPBASE}/${PLATFORM}/include

# G4 variables
setenv G4VERSION geant4.7.0
setenv G4INSTALL /afs/cern.ch/sw/geant4/releases/share
setenv G4INCLUDES ${G4INSTALL}/${G4VERSION}/include
setenv G4LIBS /afs/cern.ch/sw/geant4/releases/specific/${PLATFORM}/${G4VERSION}/lib

#
if (${?PYTHONPATH}) then
    setenv PYTHONPATH ${PYTHONPATH}:${SEALBASE}/${PLATFORM}/python:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/G4Binding/${PLATFORM}:${PyGDMLBASE}/G4Binding/python
else
    setenv PYTHONPATH ${SEALBASE}/${PLATFORM}/python:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/G4Binding/${PLATFORM}:${PyGDMLBASE}/G4Binding/python
endif


if ( ${OSTYPE} == 'linux' ) then
    setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:${SEALBASE}/${PLATFORM}${DEBUG}/lib:${G4LIBS}:${CLHEPBASE}/${PLATFORM}/lib
else if ( ${OSTYPE} == 'darwin' ) then
    setenv DYLD_LIBRARY_PATH ${SEALBASE}/${PLATFORM}${DEBUG}/lib:${G4LIBS}:${CLHEPBASE}/${PLATFORM}/lib
endif

setenv PATH ${PATH}:${SEALBASE}/${PLATFORM}${DEBUG}/bin
