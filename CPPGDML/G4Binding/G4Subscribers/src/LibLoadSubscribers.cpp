#include "Saxana/SAXComponentFactory.h"

//extern "C" {

  void GDMLSubscriberLibLoad() {
    LOAD_COMPONENT(defineSubscriber)
    LOAD_COMPONENT(isotopeSubscriber)
    LOAD_COMPONENT(elementSubscriber)
    LOAD_COMPONENT(materialSubscriber)
    LOAD_COMPONENT(unionSubscriber)
    LOAD_COMPONENT(subtractionSubscriber)
    LOAD_COMPONENT(intersectionSubscriber)
    LOAD_COMPONENT(reflectedSolidSubscriber)
    LOAD_COMPONENT(boxSubscriber)
    LOAD_COMPONENT(sphereSubscriber)
    LOAD_COMPONENT(tubeSubscriber)
    LOAD_COMPONENT(paraSubscriber)
    LOAD_COMPONENT(coneSubscriber)
    LOAD_COMPONENT(polyconeSubscriber)
    LOAD_COMPONENT(trdSubscriber)
    LOAD_COMPONENT(trapSubscriber)
    LOAD_COMPONENT(torusSubscriber)
    LOAD_COMPONENT(orbSubscriber)
    LOAD_COMPONENT(hypeSubscriber)
    LOAD_COMPONENT(eltubeSubscriber)
    LOAD_COMPONENT(ellipsoidSubscriber)
    LOAD_COMPONENT(polyhedraSubscriber)
    LOAD_COMPONENT(volumeSubscriber)
    LOAD_COMPONENT(assemblySubscriber)
    LOAD_COMPONENT(setupSubscriber)
      //  }

};
