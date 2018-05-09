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

# seal variables
if [ ! $SEALVER ]; then
    export SEALVER=SEAL_1_6_2
fi

if [ ! $SEALBASE ]; then
    export SEALBASE=/afs/cern.ch/sw/lcg/app/releases/SEAL/$SEALVER
fi
export SEALINCLUDES=$SEALBASE/include

# gccxml

if [ ! $GCCXMLPATH ]; then
    export GCCXMLPATH=/afs/cern.ch/sw/lcg/external/gccxml/0.6.0_patch1/${PLATFORM}/bin/
fi

# CLHEP variables
export CLHEPBASE=/afs/cern.ch/sw/lcg/external/clhep/1.9.1.2
export CLHEPINC=$CLHEPBASE/$PLATFORM/include

# G4 variables
export G4VERSION=geant4.7.0
export G4INSTALL=/afs/cern.ch/sw/geant4/releases/share
export G4INCLUDES=$G4INSTALL/$G4VERSION/include
export G4LIBS=/afs/cern.ch/sw/geant4/releases/specific/$PLATFORM/$G4VERSION/lib

#
export PYTHONPATH=$PYTHONPATH:$SEALBASE/$PLATFORM$DEBUG/python:$PyGDMLBASE/Common/python:$PyGDMLBASE/G4Binding/$PLATFORM:$PyGDMLBASE/G4Binding/python


if [ $OSTYPE = 'darwin' ]; then
    export DYLD_LIBRARY_PATH=$SEALBASE/$PLATFORM$DEBUG/lib:$G4LIBS:$CLHEPBASE/$PLATFORM/lib
else
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$SEALBASE/$PLATFORM$DEBUG/lib:$G4LIBS:$CLHEPBASE/$PLATFORM/lib
fi


export PATH=$PATH:$SEALBASE/$PLATFORM$DEBUG/bin
