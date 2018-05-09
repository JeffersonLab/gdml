#
if [ ! $GDMLROOT ]; then
    export GDMLROOT=$PWD/../../
fi
#
if [ ! $PLATFORM ]; then
    if [ $OSTYPE = 'linux' ]; then
	export PLATFORM=slc3_ia32_gcc323
    elif [ $OSTYPE = 'darwin']; then
	export PLATFORM=osx103_gcc33
    else 
	echo "Cannot recognize OSTYPE"
    fi
fi
#

export PyGDMLBASE=$GDMLROOT/PyGDML 

export ROOTSYS=/afs/cern.ch/sw/lcg/external/root/4.03.04a/$PLATFORM/root

export PYTHONPATH=$PYTHONPATH:$ROOTSYS/lib:$PyGDMLBASE/Common/python:$PyGDMLBASE/ROOTBinding/python

export PATH=$PATH:$ROOTSYS/bin


if [ $OSTYPE = 'darwin' ]; then
    export DYLD_LIBRARY_PATH=$ROOTSYS/lib
else
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib
fi
