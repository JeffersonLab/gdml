#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
import sys
import xml.sax
import G4Binding
import GDMLContentHandler
import pyreflex

G4 = pyreflex.loadDictionary('G4classesDict')

gdmlhandler = GDMLContentHandler.GDMLContentHandler(G4Binding.G4Binding())

filename = 'test.gdml'
if sys.argv.__len__() > 1:
    filename = sys.argv[1]

xml.sax.parse(filename, gdmlhandler)

worldvol = gdmlhandler.WorldVolume()
detconstr = G4.DetConstruction(worldvol)
