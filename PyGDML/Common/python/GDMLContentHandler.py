#!/usr/bin/env python2.3
# -*- Mode: Python -*-
#
import processes
import xml.sax

class GDMLContentHandler(xml.sax.ContentHandler):
    def __init__(self, binding):
        self.stack = []
        self.proc = processes.processes(binding)
    
    def startElement(self,name,attrs):
        self.stack.append([name,attrs,[]])
    
    def endElement(self,name):
        elem = self.stack.pop()

        if len(self.stack):
            self.stack[-1][2].append(elem)

        if self.proc.gdmlel_dict.has_key(elem[0]):
            self.proc.gdmlel_dict[name](self.proc,elem)

    def WorldVolume(self):
        return self.proc.world
            
    def AuxiliaryData(self):
        return self.proc.auxmap
