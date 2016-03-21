/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Multiply.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:13 PM
 */

#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "BinaryExpression.h"
#include "Visitor.h"
class Multiply : public BinaryExpression{
public:
    Multiply(Expression* left, Expression* right): BinaryExpression(left, right) {};
    virtual double compute() {
        return(getLeftOperand()->compute() * getRightOperand()->compute());
    }      
    virtual void Accept(Visitor* v) {v->visitMultiply(this);};     
};


#endif /* MULTIPLY_H */

