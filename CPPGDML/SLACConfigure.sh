#!/bin/sh

#
# Example site-specific usage of the configure script
# for SLAC Linux on noric machines. 
#
# --Jeremy McCormick, SLAC/ILC 
#

# rebuild configure from current configure.in (optional)
./ac.sh

# run configure with options
./configure --with-xercesc=$PRJ_EXTERN/xerces-c/v2-6-0 \
            --with-clhep=$PRJ_EXTERN/clhep/v1-9-1-2 \
            --with-geant4=$PRJ_EXTERN/geant4/dev/geant4.7.0.p01 \
            --enable-shared-libs=no \
	    --enable-static-libs=yes \
            --enable-geant4-vis=yes \
            --enable-geant4-ui=yes \
	    --enable-geant4-granular-libs=yes \
 	    --enable-gdml-verbose=yes \
	    --enable-compile-verbose=yes 

# print results
#echo
#echo
#echo "****************** Local Settings from Autoconf ******************"
#cat ./config/make/local_settings.gmk
#echo
#cat ./config/make/geant4_settings.gmk
