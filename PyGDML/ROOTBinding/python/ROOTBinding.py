#!/usr/bin/env python2.3
# -*- Mode: Python -*-

import ROOT
import re

class ROOTBinding(object):

    def __init__(self):
	self.medid = 0
	self.volid = 0
	
    def position(self, x, y, z):
	return ROOT.TGeoTranslation(x,y,z)

    def rotation(self, x, y, z):
	rot = ROOT.TGeoRotation()
	rot.RotateZ(-z)
	rot.RotateY(-y)
	rot.RotateX(-x)
 	return rot

    def element(self, name, formula, z, a):
        # Z can be in general 'float' !!!!!!!!!!!!!
        # we have to convert it to 'int' for ROOT !!!!!!!!!!!!
	return ROOT.TGeoElement(re.sub('0x.......','',name), formula, int(z), a)

    def isotope(self, name, z, n, a, d):
	print 'Isotopes not supported by the GDML->TGeo converter, sorry!'
	return 0

    def material(self, name, a, z, rho):
	return ROOT.TGeoMaterial(re.sub('0x.......','',name), a, z, rho)

    def mixmat(self, name, ncompo, density):
	return ROOT.TGeoMixture(re.sub('0x.......','',name), ncompo, density)

    def mix_addele(self, mixture, element, id, fraction):
	mixture.DefineElement(id, element, fraction)
	return

    def mixele(self, name, ncompo, density):
	return ROOT.TGeoMixture(re.sub('0x.......','',name), ncompo, density)

    def mix_addiso(self, element, isotope, id, fraction):
	return 0

    def medium(self, name, material):
	self.medid = self.medid + 1
	return ROOT.TGeoMedium(re.sub('0x.......','',name), self.medid, material)

    def logvolume(self, name, solid, medium):
	return ROOT.TGeoVolume(re.sub('0x.......','',name), solid, medium)

    def assembly(self, name):
	return ROOT.TGeoVolumeAssembly(name)

    def physvolume(self, name, lv, motherlv, rot, pos):
	self.volid = self.volid + 1
	matr = ROOT.TGeoCombiTrans(pos, rot)
	motherlv.AddNode(lv, self.volid, matr)
	return

    def box(self, name, x, y, z):
	return ROOT.TGeoBBox(re.sub('0x.......','',name), x, y, z)

    def tube(self, name, rmin, rmax, z, startphi, deltaphi):
	return ROOT.TGeoTubeSeg(re.sub('0x.......','',name), rmin, rmax, z, startphi, 
				startphi+deltaphi)

    def cone(self, name, rmin1, rmax1, rmin2, rmax2, z, 
	     startphi, deltaphi):
	return ROOT.TGeoConeSeg(re.sub('0x.......','',name), z, rmin1, rmax1, rmin2, rmax2, 
				startphi, startphi+deltaphi)

    def polycone(self, name, startphi, deltaphi, zrs):
	poly = ROOT.TGeoPcon(re.sub('0x.......','',name), startphi, deltaphi, zrs.__len__())

	nb = 0
	for zpl in zrs:
	    poly.DefineSection(nb, zpl[0], zpl[1], zpl[2])
	    nb = nb + 1

	return poly

    def trap(self, name, x1, x2, x3, x4, y1, y2, z, 
	     alpha1, alpha2, phi, theta):
	return ROOT.TGeoTrap(re.sub('0x.......','',name), z, theta, phi, y1, x1, x2, 
			     alpha1, y2, x3, x4, alpha2)

    def trd(self, name, x1, x2, y1, y2, z):
	return ROOT.TGeoTrd2(name, x1, x2, y1, y2, z)

    def sphere(self, name, rmin, rmax, 
	       startphi, deltaphi, 
	       starttheta, deltatheta):
	return ROOT.TGeoSphere(re.sub('0x.......','',name), rmin, rmax, 
			       starttheta, starttheta+deltatheta,
			       startphi, startphi+deltaphi)

    def orb(self, name, r):
	return ROOT.TGeoSphere(re.sub('0x.......','',name), 0, r, 0, 180, 0, 360)

    def para(self, name, x, y, z, alpha, theta, phi):
	return ROOT.TGeoPara(re.sub('0x.......','',name), x, y, z, alpha, theta, phi)

    def torus(self, name, rmin, rmax, rtor, startphi, deltaphi):
	return ROOT.TGeoTorus(re.sub('0x.......','',name), rtor, rmin, rmax, startphi, startphi+deltaphi) 

    def polyhedra(self, name, startphi, totalphi, numsides, zrs):
	polyh = ROOT.TGeoPgon(re.sub('0x.......','',name), startphi, totalphi-startphi, 
			      numsides, zrs.__len__())

	nb = 0
	for zpl in zrs:
	    polyh.DefineSection(nb, zpl[0], zpl[1], zpl[2])
	    nb = nb + 1

	return polyh

    def eltube(self, name, dx, dy, dz):
	return ROOT.TGeoEltu(re.sub('0x.......','',name), dx, dy, dz)

    def subtraction(self, name, first, second, pos, rot):
	matr = ROOT.TGeoCombiTrans(pos, rot.Inverse())
	sub = ROOT.TGeoSubtraction(first, second, 0, matr)
	return ROOT.TGeoCompositeShape(re.sub('0x.......','',name), sub)


    def union(self, name, first, second, pos, rot):
	matr = ROOT.TGeoCombiTrans(pos, rot.Inverse())
	un = ROOT.TGeoUnion(first, second, 0, matr)
	return ROOT.TGeoCompositeShape(re.sub('0x.......','',name), un)

    def intersection(self, name, first, second, pos, rot):	
	matr = ROOT.TGeoCombiTrans(pos, rot.Inverse())
	int = ROOT.TGeoIntersection(first, second, 0, matr)
	return ROOT.TGeoCompositeShape(re.sub('0x.......','',name), int)
