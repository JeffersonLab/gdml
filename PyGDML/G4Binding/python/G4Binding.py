#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
from units import *
import pyreflex

G4 = pyreflex.loadDictionary('G4classesDict')

# helper definitions to convert from unicode do G4String and back
def g4str(unistr):
    return G4.G4String(str(unistr))

def G4String__repr__(self) :
    return getattr(self, 'operator char*')()

G4.G4String.__repr__ = G4String__repr__

def _G4String( s = '') :
    return G4.G4String().__getattribute__('=')(s)
#

class G4Binding:

    def __init__(self):
	self.medid = 0
	self.volid = 0
	
    def position(self, x, y, z):
      return G4.CLHEP.Hep3Vector(x, y, z)

    def rotation(self, x, y, z):
	rot = G4.CLHEP.HepRotation()
	rot.rotateX(x/rad)
	rot.rotateY(y/rad)
	rot.rotateZ(z/rad)
	return rot

    def element(self, name, formula, z, a):
	return G4.G4Element(g4str(name),
                                  g4str(formula), z, a * avogadro)

    def material(self, name, a, z, rho):
	return G4.G4Material(g4str(name), z, a * avogadro, rho)

    def mixmat(self, name, ncomp, rho):
        return G4.G4Material(g4str(name), rho, ncomp)

    def mixture(self, name, ncompo, density):
	return G4.G4Material(g4str(name), density, ncompo)

    def mix_addele(self, mixture, element, id, fraction):
	mixture.AddElement(element, fraction)
	return

    def medium(self, name, material):
	return material

    def logvolume(self, name, solid, medium):
	return G4.G4LogicalVolume(solid, medium, g4str(name))

    def assembly(self, name):
	return G4.G4AssemblyVolume(name)

    def physvolume(self, name, lv, motherlv, rot, pos):
	return pyreflex.drop_ownership(G4.G4PVPlacement(rot, pos, lv, g4str(name), motherlv, False, 0))
    
    def box(self, name, x, y, z):
	return G4.G4Box(g4str(name), x, y, z)

    def tube(self, name, rmin, rmax, z, startphi, deltaphi):
	return G4.G4Tubs(g4str(name), rmin, rmax, z, startphi/rad, deltaphi/rad)

    def cone(self, name, rmin1, rmax1, rmin2, rmax2, z, 
	     startphi, deltaphi):
	return G4.G4Cons(g4str(name), rmin1, rmax1, rmin2, rmax2, z, 
				startphi/rad, deltaphi/rad)

    def polycone(self, name, startphi, deltaphi, zrs):
 	nb = 0
        nz = len(zrs)
        plc = G4.BuildG4Polycone(nz)
        
	for zpl in zrs:
            plc.AddZPlane(nb, zpl[0], zpl[1], zpl[2])
	    nb = nb + 1

	return plc.Build(g4str(name), startphi/rad, (startphi+deltaphi)/rad, nz)

    def trap(self, name, x1, x2, x3, x4, y1, y2, z, 
	     alpha1, alpha2, phi, theta):
	return G4.G4Trap(g4str(name), z, theta/rad, phi/rad, y1, x1, x2, 
			     alpha1/rad, y2, x3, x4, alpha2/rad)

    def trd(self, name, x1, x2, y1, y2, z):
	return G4.G4Trd(g4str(name), x1, x2, y1, y2, z)

    def sphere(self, name, rmin, rmax, 
	       startphi, deltaphi, 
	       starttheta, deltatheta):
	return G4.G4Sphere(g4str(name), rmin, rmax, 
                                 startphi/rad, deltaphi/rad,
                                 starttheta/rad, deltatheta/rad)

    def orb(self, name, r):
	return G4.G4Orb(g4str(name), r)

    def para(self, name, x, y, z, alpha, theta, phi):
	return G4.G4Para(g4str(name), x, y, z, alpha/rad, theta/rad, phi/rad)

    def torus(self, name, rmin, rmax, rtor, startphi, deltaphi):
	return G4.G4Torus(g4str(name), rmin, rmax, rtor, startphi/rad, deltaphi/rad) 
    
    def polyhedra(name, startphi, totalphi, numsides, zrs):        
	nb = 0
        nz = len(zrs)
        plh = G4.BuildG4Polyhedra(nz)
        
	for zpl in zrs:
	    polyh.AddZPlane(nb, zpl[0], zpl[1], zpl[2])
	    nb = nb + 1
            
        return plh.Build(g4str(name), startphi/rad, (startphi+deltaphi)/rad, numsides, nz)
    
    def eltube(name, dx, dy, dz):
	return G4.G4Eltu(g4str(name), dx, dy, dz)

    def subtraction(self, name, first, second, pos, rot):
	return G4.G4SubtractionSolid(g4str(name), first, second, rot, pos)

    def union(self, name, first, second, pos, rot):
	return G4.G4UnionSolid(g4str(name), first, second, rot, pos)

    def intersection(self, name, first, second, pos, rot):	
	return G4.G4IntersectionSolid(g4str(name), first, second, rot, pos)
