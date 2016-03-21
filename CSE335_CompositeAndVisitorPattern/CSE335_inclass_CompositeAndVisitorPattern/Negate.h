/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Negate.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:14 PM
 */

#ifndef NEGATE_H
#define NEGATE_H
#include "Expression.h"
class Negate : public Expression {
private:
    Expression* _opPtr;
public:
    Negate(Expression* opr): _opPtr(opr) {};
    virtual ~Negate() {delete _opPtr;};
    Expression* getOperand() {return _opPtr;};
    
    virtual double compute() {return -(_opPtr->compute());}; //- in front of return to negate compute
    virtual void Accept(Visitor* v) {v->visitNegate(this);};     
};


#endif /* NEGATE_H */

