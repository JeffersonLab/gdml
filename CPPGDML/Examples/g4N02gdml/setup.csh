#!/bin/csh
##############################

# GDML top
setenv GDML_BASE ${PWD}/../../build/

# platform choice
setenv PLATFORM slc3_ia32_gcc323

# CLHEP location
setenv CLHEP_BASE /afs/cern.ch/sw/lcg/external/clhep/1.9.1.2/slc3_ia32_gcc323

# G4 installation on AFS
setenv G4VERSION geant4.7.0.p01
setenv G4BASE /afs/cern.ch/sw/geant4/releases/share/${G4VERSION}
setenv G4INSTALL ${G4BASE}
setenv G4INCLUDE ${G4BASE}/include
setenv G4BINBASE /afs/cern.ch/sw/geant4/releases/specific/${PLATFORM}/${G4VERSION}
setenv G4LIBDIR ${G4BINBASE}/lib

# Xerces-C setup
setenv XERCESCROOT /afs/cern.ch/sw/lcg/external/XercesC/2.3.0/slc3_ia32_gcc323

# RUN-TIME configuration
setenv LD_LIBRARY_PATH /lib:/usr/lib:${G4LIBDIR}:${XERCESCROOT}/lib:${CLHEP_BASE}/lib

setenv PATH ${PATH}:${GDML_BASE}/${PLATFORM}/bin:${GDML_BASE}/${PLATFORM}/tests/bin:/afs/cern.ch/sw/contrib/DAWN/bin/Linux
setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:${GDML_BASE}/${PLATFORM}/lib:${GDML_BASE}/${PLATFORM}/tests/lib

# Doxygen setup
#setenv PATH ${PATH}:/afs/cern.ch/sw/lcg/external/doxygen/1.3.3/${PLATFORM}/bin:/afs/cern.ch/sw/lcg/external/graphviz/1.9/rh73_gcc323/bin

setenv ROOTSYS /afs/cern.ch/sw/lcg/external/root/4.02.00/slc3_ia32_gcc323/root
setenv PYTHONPATH {$ROOTSYS}/lib
setenv PATH {$PATH}:{$ROOTSYS}/bin
setenv LD_LIBRARY_PATH {$LD_LIBRARY_PATH}:{$ROOTSYS}/lib

