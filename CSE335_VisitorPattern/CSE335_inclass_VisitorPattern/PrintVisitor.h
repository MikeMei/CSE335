/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: School
 *
 * Created on March 3, 2016, 12:24 AM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include "Visitor.h"
#include "Entity.h"
#include "Directory.h"

class PrintVisitor: public Visitor{
public:
    virtual void VisitFile(File* file) {
        cout <<"File name: " << file->getName() << " File size: " << file->getSize();
    }
    virtual void VisitDirectory(Directory* dir) {
        cout << "Directory: " << dir->getName() <<  " contains: ";
        for(int i=0; i<dir->getChildrenSize(); i++) {
            dir->getChild(i)->Accept(this);
        }
    }
};
#endif /* PRINTVISITOR_H */

