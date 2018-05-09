if [ ! $GDMLBASE ]; then
    export GDMLBASE=$PWD/../../../
fi

. $GDMLBASE/PyGDML/ROOTBinding/rootsetup.sh
. $GDMLBASE/PyGDML/G4Binding/g4setup.sh

export PYTHONPATH=$PYTHONPATH:$PWD/$PLATFORM
