#
if [ ! $GDMLBASE ]; then
    export GDMLBASE=$PWD/../../
fi
#
if [ ! $PLATFORM ]; then
    if [ $OSTYPE = 'linux' ]; then
	export PLATFORM=slc3_ia32_gcc323
    elif [ $OSTYPE = 'darwin' ]; then
	export PLATFORM=osx103_gcc33
    else 
	echo "Cannot recognize OSTYPE"
    fi
fi
#

if [ $DBG ]; then
    export DEBUG=_dbg
else
    export DEBUG=
fi

export PyGDMLBASE=$GDMLBASE/PyGDML 

# root variables
export ROOTSYS=/afs/cern.ch/sw/lcg/external/root/5.10.00/$PLATFORM/root

# gccxml

if [ ! $GCCXMLPATH ]; then
    export GCCXMLPATH=/afs/cern.ch/sw/lcg/external/gccxml/0.6.0_patch1/${PLATFORM}/bin/
fi

# CLHEP variables
export CLHEPBASE=/afs/cern.ch/sw/lcg/external/clhep/1.9.2.2
export CLHEPINC=$CLHEPBASE/$PLATFORM/include

# G4 variables
export G4VERSION=8.0.p01
export G4INSTALL=/afs/cern.ch/sw/lcg/external/geant4
export G4INCLUDES=$G4INSTALL/$G4VERSION/share/include
export G4LIBS=${G4INSTALL}/${G4VERSION}/${PLATFORM}/lib

#
export PYTHONPATH=$PYTHONPATH:$ROOTSYS/lib:$PyGDMLBASE/Common/python:$PyGDMLBASE/G4Binding/$PLATFORM:$PyGDMLBASE/G4Binding/python


if [ $OSTYPE = 'darwin' ]; then
    export DYLD_LIBRARY_PATH=$ROOTSYS/lib:$G4LIBS:$CLHEPBASE/$PLATFORM/lib
else
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib:$G4LIBS:$CLHEPBASE/$PLATFORM/lib
fi


export PATH=$PATH:$SEALBASE/$PLATFORM$DEBUG/bin
