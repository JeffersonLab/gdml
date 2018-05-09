#
if !(${?GDMLROOT}) then
    setenv GDMLROOT ${PWD}/../../
endif
#

if !(${?PLATFORM}) then
    if ( ${OSTYPE} == 'linux' ) then
	setenv PLATFORM slc3_ia32_gcc323
    else if ( ${OSTYPE} == 'darwin' ) then
	setenv PLATFORM osx103_gcc33
    else 
	echo "Cannot recognize OSTYPE"
    endif
endif
#

setenv PyGDMLBASE ${GDMLROOT}/PyGDML 

setenv ROOTSYS /afs/cern.ch/sw/lcg/external/root/4.03.04a/${PLATFORM}/root

if (${?PYTHONPATH}) then
    setenv PYTHONPATH ${PYTHONPATH}:{$ROOTSYS}/lib:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/ROOTBinding/python
else
    setenv PYTHONPATH {$ROOTSYS}/lib:${PyGDMLBASE}/Common/python:${PyGDMLBASE}/ROOTBinding/python
endif

setenv PATH {$PATH}:{$ROOTSYS}/bin


if ( ${OSTYPE} == 'linux' ) then
	if (${?LD_LIBRARY_PATH}) then
	    setenv LD_LIBRARY_PATH {$LD_LIBRARY_PATH}:{$ROOTSYS}/lib
	else
		setenv LD_LIBRARY_PATH {$ROOTSYS}/lib
	endif
else if ( ${OSTYPE} == 'darwin' ) then
    setenv DYLD_LIBRARY_PATH {$ROOTSYS}/lib
endif


