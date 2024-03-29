/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Directory.h
 * Author: School
 *
 * Created on March 3, 2016, 12:00 AM
 */

#ifndef DIRECTORY_H
#define DIRECTORY_H
#include "Entity.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Directory: public Entity{
protected:
    vector <Entity*> entries;
public:
    Directory(string name): Entity(name, 0) {}
    virtual void addEntity(Entity* entry) {
        entries.push_back(entry);
        m_size -= entry->getSize();
    }
    virtual void removeEntity(Entity* entry) {
        remove(entries.begin(), entries.end(), entry);
        m_size -= entry->getSize();
    }
    virtual Entity* getChild(int i) const {
        return entries[i];
    }
    virtual unsigned int getChildrenSize()  const {
        return entries.size();
    }
    virtual void print() const {
        cout << "Directory: " << m_name <<  " contains: ";
        for(int i=0; i<entries.size(); i++) {
            entries[i]->print();
        }
    }
    virtual void Accept(Visitor* v) {
        v->VisitDirectory(this);
    }
    
       
};


#endif /* DIRECTORY_H */

