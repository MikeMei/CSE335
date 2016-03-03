/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.h
 * Author: School
 *
 * Created on March 3, 2016, 12:00 AM
 */

#ifndef FILE_H
#define FILE_H

#include "Entity.h"
#include <iostream>
using namespace std;

class File: public Entity {
public:
    File(string name, unsigned int size):Entity(name, size) {};
    virtual void print() const {
        cout <<"File name: "<< m_name<< ", File size: " << m_size<< endl;
    }
    
    virtual void Accept(Visitor* v) {
        v->VisitFile(this);
    }
};

#endif /* FILE_H */

