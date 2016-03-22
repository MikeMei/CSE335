/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unit.h
 * Author: laptop-pc
 *
 * Created on March 21, 2016, 5:00 PM
 */

#ifndef UNIT_H
#define UNIT_H
#include "Visitor.h"
using namespace std;
class Unit{
public:
    //default constructor, does nothing
    Unit() {
        
    }
    virtual void Accept(Visitor* v) = 0;
};

#endif /* UNIT_H */

