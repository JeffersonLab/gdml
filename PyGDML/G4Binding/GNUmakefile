# makefile for building dictionary for G4 classes
dictionary = G4classesDict.so

all: $(dictionary)

%.h:
ifndef PLATFORM 
	$(error "Environment not set!")
else
	@echo "Generating dictionary"
endif

$(patsubst %Dict.so,%_rflx.cpp,$(dictionary)): %_rflx.cpp: %.h
	mkdir -p dict
	cd dict; ${SEALBASE}/${PLATFORM}/bin/lcgdict ../include/$< -s ../xml/G4selection.xml \
	--gccxmlpath ${GCCXMLPATH} \
	--reflex -I${CLHEPINC} -I${G4INCLUDES}

$(dictionary): %Dict.so: %_rflx.cpp
	mkdir -p ${PLATFORM}
	gcc -o ${PLATFORM}/$@ -fpic -shared dict/$< \
	src/BuildG4Polycone.cc src/BuildG4Polyhedra.cc $(wildcard src/*.cpp) \
        -I${SEALINCLUDES} -I${CLHEPINC} -I${G4INCLUDES} -Iinclude\
        -L${SEALBASE}/${PLATFORM}${DEBUG}/lib -llcg_Reflex -L${G4LIBS} -lG4digits_hits -lG4event -lG4geometry -lG4global -lG4graphics_reps \
        -lG4materials -lG4parameterisation -lG4run -lG4particles -lG4processes -lG4track -lG4tracking -lG4intercoms -lG4interfaces \
        -L${CLHEPBASE}/${PLATFORM}/lib -lCLHEP

clean:
ifndef PLATFORM 
		$(error "Environment not set!")
endif
	rm -f dict/*.*
	rm -f ${PLATFORM}/*.so
