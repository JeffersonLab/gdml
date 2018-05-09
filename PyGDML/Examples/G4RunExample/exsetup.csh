if !(${?GDMLROOT}) then
    setenv GDMLROOT ${PWD}/../../../
endif

source $GDMLROOT/PyGDML/ROOTBinding/rootsetup.csh
source $GDMLROOT/PyGDML/G4Binding/g4setup.csh

setenv PYTHONPATH ${PYTHONPATH}:${PWD}/${PLATFORM}
