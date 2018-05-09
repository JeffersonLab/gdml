#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
import GDMLROOT
import GDMLG4
import pyreflex

G4Ex = pyreflex.loadDictionary('G4RunExampleDict')

def setSD(logvol, sdname):
    logvol.SetSensitiveDetector(SensDetMgr.FindSensitiveDetector(GDMLG4.G4Binding.g4str(sdname)))

def setvis(logvol, visattr):
    pass

G4RunMgr = G4Ex.RunManager()

physlist = G4Ex.GeantinoPhysicsList()
veloSD = G4Ex.TrackerSD(GDMLG4.G4Binding.g4str('veloSD'))
ITSD = G4Ex.TrackerSD(GDMLG4.G4Binding.g4str('ITSD'))
OTSD = G4Ex.TrackerSD(GDMLG4.G4Binding.g4str('OTSD'))
muonSD = G4Ex.TrackerSD(GDMLG4.G4Binding.g4str('muonSD'))

SensDetMgr = G4Ex.G4SDManager.GetSDMpointer()
SensDetMgr.AddNewDetector(veloSD)
SensDetMgr.AddNewDetector(ITSD)
SensDetMgr.AddNewDetector(OTSD)
SensDetMgr.AddNewDetector(muonSD)

G4RunMgr.SetUserInitialization(GDMLG4.detconstr)
G4RunMgr.SetUserInitialization(physlist)
ggun = G4Ex.GeantinoGun()
G4RunMgr.SetUserAction(ggun)

auxil = GDMLG4.gdmlhandler.AuxiliaryData()

auxproc = {'sensdet':setSD, 'visattr':setvis}

for logvol in auxil.keys():
    for auxdata in auxil[logvol]:
        auxproc[auxdata[0]](logvol, auxdata[1])
        
vmgr = G4Ex.VisManager()
vmgr.Initialize()

G4RunMgr.Initialize()

uim = G4Ex.G4UImanager.GetUIpointer()
uim.ApplyCommand('/tracking/verbose 1')

#uim.ApplyCommand('/vis/open OGLIXm')
#uim.ApplyCommand('/vis/open DAWNFILE')
#
#uim.ApplyCommand('/vis/scene/create')
#uim.ApplyCommand('/vis/sceneHandler/attach')
#uim.ApplyCommand('/vis/viewer/set/viewpointThetaPhi 90 180 deg')
#uim.ApplyCommand('/vis/viewer/zoom 100')
#uim.ApplyCommand('/vis/viewer/flush')

ggun.SetDirection(0.12, 0.15, 1.0)

G4RunMgr.SetNumberOfEventsToBeStored(1)
G4RunMgr.BeamOn(1)

##
event = G4RunMgr.GetPreviousEvent(1)
hitscol = event.GetHCofThisEvent()

pm3d = []
for collection in range(0,hitscol.GetNumberOfCollections()):
    hits = hitscol.GetHC(collection)
    numberOfPoints = hits.GetSize()
    pm3d.append(GDMLROOT.ROOT.TPolyMarker3D( numberOfPoints ))

    for i in range(0,numberOfPoints):
        pos = hits.GetHit(i).GetPos()
        pm3d[collection].SetPoint( i, pos.x(), pos.y(), pos.z() )

        pm3d[collection].SetMarkerSize(1)
        pm3d[collection].SetMarkerColor(2 + collection)
        pm3d[collection].SetMarkerStyle(25)
        pm3d[collection].Draw()
