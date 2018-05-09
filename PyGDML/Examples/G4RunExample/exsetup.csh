if !(${?GDMLBASE}) then
    setenv GDMLBASE ${PWD}/../../../
endif

source $GDMLBASE/PyGDML/ROOTBinding/rootsetup.csh
source $GDMLBASE/PyGDML/G4Binding/g4setup.csh

setenv PYTHONPATH ${PYTHONPATH}:${PWD}/${PLATFORM}
setenv LD_LIBRARY_PATH ${LD_LIBRARY_PATH}:${PWD}/${PLATFORM}
