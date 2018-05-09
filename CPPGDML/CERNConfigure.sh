#!/bin/sh

#
# CERN example.
#
# -- Witek Pokorski 
#

export LCGEXT=/afs/cern.ch/sw/lcg/external

# set the platform
if [ ! $PLATFORM ]; then
    export PLATFORM=slc3_ia32_gcc323
fi


# rebuild configure from current configure.in (optional)
./ac.sh

# run configure with options
./configure --with-platform=${PLATFORM} \
	    --with-xercesc=${LCGEXT}/XercesC/2.7.0/${PLATFORM} \
            --with-clhep=${LCGEXT}/clhep/1.9.2.3/${PLATFORM} \
            --with-geant4=${LCGEXT}/geant4/8.1.p01/${PLATFORM} \
            --with-geant4-include=${LCGEXT}/geant4/8.1.p01/share/include \
            --with-geant4-libdir=${LCGEXT}/geant4/8.1.p01/${PLATFORM}/lib \
            --enable-shared-libs=yes \
	    --enable-static-libs=no \
	    --enable-geant4-granular-libs=no \
 	    --enable-gdml-verbose=yes \
	    --enable-compile-verbose=no 

# print results
echo
echo
echo "****************** Local Settings from Autoconf ******************"
cat ./config/make/local_settings.gmk
