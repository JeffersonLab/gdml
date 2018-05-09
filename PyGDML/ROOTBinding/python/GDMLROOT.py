#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
import xml.sax
import ROOT
import ROOTBinding
import GDMLContentHandler

gdmlhandler = GDMLContentHandler.GDMLContentHandler(ROOTBinding.ROOTBinding())
xml.sax.parse('test.gdml', gdmlhandler)
geomgr = ROOT.gGeoManager

geomgr.SetTopVolume(gdmlhandler.WorldVolume())
geomgr.CloseGeometry()

gdmlhandler.WorldVolume().Draw()



