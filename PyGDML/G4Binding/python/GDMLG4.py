#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
import xml.sax
import G4Binding
import GDMLContentHandler
import pyreflex

G4 = pyreflex.loadDictionary('G4classesDict')

gdmlhandler = GDMLContentHandler.GDMLContentHandler(G4Binding.G4Binding())
xml.sax.parse('test.gdml', gdmlhandler)

worldvol = gdmlhandler.WorldVolume()
detconstr = G4.DetConstruction(worldvol)
