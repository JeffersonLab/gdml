if [ ! $GDMLROOT ]; then
    export GDMLROOT=$PWD/../../../
fi

. $GDMLROOT/PyGDML/ROOTBinding/rootsetup.sh
. $GDMLROOT/PyGDML/G4Binding/g4setup.sh

export PYTHONPATH=$PYTHONPATH:$PWD/$PLATFORM
