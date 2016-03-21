/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Subtract.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:13 PM
 */

#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "BinaryExpression.h"
#include "Visitor.h"
class Subtract : public BinaryExpression {
public:
    Subtract(Expression* left, Expression* right): BinaryExpression(left, right) {};
    virtual double compute() {
        return(getLeftOperand()->compute() - getRightOperand()->compute());
    }    
    virtual void Accept(Visitor* v) {v->visitSubtract(this);}; 
};


#endif /* SUBTRACT_H */

