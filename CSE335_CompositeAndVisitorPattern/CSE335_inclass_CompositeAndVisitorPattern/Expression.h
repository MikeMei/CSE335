/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expression.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:13 PM
 */

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <iostream>
#include "Visitor.h"
using namespace std;
class Expression {
public:
    virtual double compute() = 0;
    virtual void Accept(Visitor*) = 0;
    
};


#endif /* EXPRESSION_H */

