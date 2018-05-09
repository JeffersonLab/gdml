class writer(object):

    def __init__(self, fname):

        self.gdmlfile = fname
        self.define = ['define',{},[]]
        self.materials = ['materials',{},[]]
        self.solids = ['solids',{},[]]
        self.structure = ['structure',{},[]]
        self.document = ['gdml',{'xmlns:gdml':"http://cern.ch/2001/Schemas/GDML",
                                 'xmlns:xsi':"http://www.w3.org/2001/XMLSchema-instance",
                                 'xsi:noNamespaceSchemaLocation':"gdml.xsd"},
                         [self.define, self.materials, self.solids, self.structure]]

    def addPosition(self, name, x, y, z):
        self.define[2].append(['position',{'name':name, 'x':x, 'y':y, 'z':z},[]])

    def addRotation(self, name, x, y, z):
        self.define[2].append(['rotation',{'name':name, 'x':x, 'y':y, 'z':z, 'unit':'deg'},[]])

    def addMaterial(self, name, a, z, rho):
        self.materials[2].append(['material', {'name':name, 'Z':z},
                                           [['D',{'value':rho},[]], ['atom',{'value':a},[]]] ] )

    def addMixture(self, name, rho, elems):
        subel = [ ['D',{'value':rho},[]] ]
        for el in elems.keys():
            subel.append(['fraction',{'n':elems[el],'ref':el}, []])
        
        self.materials[2].append(['material',{'name':name},
                                           subel])
        
    def addElement(self, symb, name, z, a):
        self.materials[2].append(['element', {'name':name, 'formula':symb, 'Z':z},
                                  [['atom', {'value':a},[]] ]])
        
    def addBox(self, name, dx, dy, dz):
        self.solids[2].append(['box',{'name':name, 'x':dx, 'y':dy, 'z':dz},[]])
            
    def addSphere(self, name, rmin, rmax, startphi, deltaphi, starttheta, deltatheta):
        self.solids[2].append(['sphere',{'name':name, 'rmin':rmin, 'rmax':rmax,
                                         'startphi':startphi, 'deltaphi':deltaphi,
                                         'starttheta':starttheta, 'deltatheta':deltatheta,
                                         'aunit':'deg', 'lunit':'mm'},[]])

    def addCone(self, name, z, rmin1, rmin2, rmax1, rmax2, sphi, dphi):
        self.solids[2].append(['cone',{'name':name, 'z':z, 'rmin1':rmin1, 'rmin2':rmin2,
                                       'rmax1':rmax1, 'rmax2':rmax2,
                                       'startphi':sphi, 'deltaphi':dphi}, []] )

    def addPara(self, name, x, y, z, alpha, theta, phi):
        self.solids[2].append(['para',{'name':name, 'x':x, 'y':y, 'z':z,
                                       'alpha':alpha, 'theta':theta, 'phi':phi}, []] )

    def addTrap(self, name, z, theta, phi, y1, x1, x2, alpha1, y2, x3, x4, alpha2):
        self.solids[2].append(['trap', {'name':name, 'z':z, 'theta':theta, 'phi':phi,
                                        'x1':x1, 'x2':x2, 'x3':x3, 'x4':x4,
                                        'y1':y1, 'y2':y2, 'alpha1':alpha1, 'alpha2':alpha2}, []])

    def addTrd(self, name, x1, x2, y1, y2, z):
        self.solids[2].append(['trd',{'name':name, 'x1':x1, 'x2':x2,
                                      'y1':y1, 'y2':y2, 'z':z}, []])

    def addTube(self, name, rmin, rmax, z, startphi, deltaphi):
        self.solids[2].append(['tube',{'name':name, 'rmin':rmin, 'rmax':rmax,
                                       'z':z, 'startphi':startphi, 'deltaphi':deltaphi},[]])

    def addPolycone(self, name, startphi, deltaphi, zplanes):
        zpls = []
        for zplane in zplanes:
            zpls.append( ['zplane',{'z':zplane[0], 'rmin':zplane[1], 'rmax':zplane[2]},[]] )
        self.solids[2].append(['polycone',{'name':name,
                                           'startphi':startphi, 'deltaphi':deltaphi}, zpls])
                                           
    def addTorus(self, name, r, rmin, rmax, startphi, deltaphi):
        self.solids[2].append( ['torus',{'name':name, 'rtor':r, 'rmin':rmin, 'rmax':rmax,
                                         'startphi':startphi, 'deltaphi':deltaphi},[]] )

    def addPolyhedra(self, name, startphi, totalphi, numsides, zplanes):
        zpls = []
        for zplane in zplanes:
            zpls.append( ['zplane',{'z':zplane[0], 'rmin':zplane[1], 'rmax':zplane[2]},[]] )
        self.solids[2].append(['polyhedra',{'name':name,
                                            'startphi':startphi, 'totalphi':totalphi,
                                            'numsides':numsides}, zpls])

    def addEltube(self, name, x, y, z):
        self.solids[2].append( ['eltube', {'name':name, 'x':x, 'y':y, 'z':z},[]] )

    def addHype(self, name, rmin, rmax, inst, outst, z):
        self.solids[2].append( ['hype', {'name':name, 'rmin':rmin, 'rmax':rmax,
                                         'inst':inst, 'outst':outst, 'z':z},[]] )

    def addPos(self, subels, type, name, v):
        if v[0]!=0.0 or v[1]!=0.0 or v[2]!=0.0:
            subels.append( [type,{'name':name, 'x':v[0], 'y':v[1], 'z':v[2]},[]] )

    def addRot(self, subels, type, name, v):
        if v[0]!=0.0 or v[1]!=0.0 or v[2]!=0.0:
            subels.append( [type,{'name':name, 'x':v[0], 'y':v[1], 'z':v[2], 'unit':'deg'},[]] )

    def addUnion(self, name, lname, ltr, lrot, rname, rtr, rrot):
        subels = [['first',{'ref':lname},[]],
                ['second',{'ref':rname},[]]]
        self.addPos(subels, 'position', rname+'pos', rtr)
        self.addRot(subels, 'rotation', rname+'rot', rrot)
        self.addPos(subels, 'firstposition', lname+'pos', ltr)
        self.addRot(subels, 'firstrotation', lname+'rot', lrot)
        self.solids[2].append( ['union',{'name':name}, subels])

    def addSubtraction(self, name, lname, ltr, lrot, rname, rtr, rrot):
        subels = [['first',{'ref':lname},[]],
                  ['second',{'ref':rname},[]]]
        self.addPos(subels, 'position', rname+'pos', rtr)
        self.addRot(subels, 'rotation', rname+'rot', rrot)
        self.addPos(subels, 'firstposition', lname+'pos', ltr)
        self.addRot(subels, 'firstrotation', lname+'rot', lrot)
        self.solids[2].append( ['subtraction',{'name':name}, subels])

    def addIntersection(self, name, lname, ltr, lrot, rname, rtr, rrot):
        subels = [['first',{'ref':lname},[]],
                  ['second',{'ref':rname},[]]]
        self.addPos(subels, 'position', rname+'pos', rtr)
        self.addRot(subels, 'rotation', rname+'rot', rrot)
        self.addPos(subels, 'firstposition', lname+'pos', ltr)
        self.addRot(subels, 'firstrotation', lname+'rot', lrot)                          
        self.solids[2].append( ['intersection',{'name':name}, subels])

    def addVolume(self, volume, solid, material, daughters):
        subels = [['materialref',{'ref':material},[]],
                  ['solidref',{'ref':solid},[]]]
        for child in daughters:
            subsubels = [['volumeref',{'ref':child[0]},[]],
                         ['positionref',{'ref':child[1]},[]]]
            if child[2]!='':
                subsubels.append( ['rotationref',{'ref':child[2]},[]] )

            subels.append( ['physvol',{}, subsubels])
        
        self.structure[2].append(['volume',{'name':volume}, subels])

    def addSetup(self, name, version, world):
        self.document[2].append( ['setup',{'name':name, 'version':version},
                                   [ ['world',{'ref':world},[]]] ] )

    def writeFile(self):
        file = open(self.gdmlfile,'w')
        offset = ''
        
        def writeElement(elem, offset):
            offset = offset + '  '
            file.write(offset+'<%s' %(elem[0]))
            for attr in elem[1].keys():
                file.write(' %s="%s"' %(attr,elem[1][attr]))
            if elem[2].__len__()>0:
                file.write('>\n')
                for subel in elem[2]:
                    writeElement(subel, offset)
                    
                file.write(offset+'</%s>\n' %(elem[0]))
            else:
                file.write('/>\n')

        file.write('<?xml version="1.0" encoding="UTF-8" ?>\n')        
        writeElement(self.document,'')
            
