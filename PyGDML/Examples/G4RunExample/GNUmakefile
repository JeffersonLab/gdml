# makefile for building dictionary for G4 classes
dictionary = G4RunExampleDict.so

all: $(dictionary)

%.h:
ifndef PLATFORM 
	$(error "Environment not set!")
else
	@echo "Generating dictionary"
endif

$(patsubst %Dict.so,%_rflx.cpp,$(dictionary)): %_rflx.cpp: %.h
	mkdir -p dict
	cd dict; genreflex ../include/$< --debug=1 -s ../xml/selection.xml \
	--gccxmlpath ${GCCXMLPATH} -I${CLHEPINC} -I${G4INCLUDES}

$(dictionary): %Dict.so: %_rflx.cpp
	mkdir -p ${PLATFORM}
	gcc -o ${PLATFORM}/$@ -fpic -shared dict/$< $(wildcard src/*.cpp) \
        -Iinclude -I${ROOTSYS}/include -I${CLHEPINC} -I${G4INCLUDES} \
        -L${ROOTSYS}/lib -lReflex -L${G4LIBS} -lG4digits_hits -lG4event -lG4geometry -lG4global -lG4graphics_reps \
        -lG4materials -lG4parameterisation -lG4run -lG4particles -lG4processes -lG4track -lG4tracking -lG4intercoms -lG4interfaces \
	-lG4modeling -lG4vis_management -lG4FR -lG4visHepRep -lG4RayTracer -lG4VRML -lG4Tree -lG4visXXX -lG4OpenGL \
        -L${CLHEPBASE}/${PLATFORM}/lib -lCLHEP

clean:
ifndef PLATFORM 
		$(error "Environment not set!")
endif
	rm -f dict/*.*
	rm -f ${PLATFORM}/*.so
