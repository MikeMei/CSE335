/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:14 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H
#include "Visitor.h"
#include "Literal.h"
#include "Negate.h"
#include "BinaryExpression.h"
class PrintVisitor : public Visitor {
    virtual void visitLiteral(Literal* lit) {
        if(lit->getValue() >=0) {
            cout <<" " << lit->getValue() << " ";
        }
        else {
            cout << "("<< lit->getValue() << ")";
        }
    }
    virtual void visitNegate(Negate* neg) {
        cout << "(-";
        neg->getOperand()->Accept(this);
        cout << ")";
    }
    virtual void visitAdd(Add* a) {
        cout << "(";
        a->getLeftOperand()->Accept(this);
        cout << "+";
        a->getRightOperand()->Accept(this);
        cout<< ")";
    }
    virtual void visitSubtract(Subtract* sub) {
        cout << "(";
        sub->getLeftOperand()->Accept(this);
        cout << "-";
        sub->getRightOperand()->Accept(this);
        cout<< ")";
    }
    virtual void visitMultiply(Multiply* mul) {
        cout << "(";
        mul->getLeftOperand()->Accept(this);
        cout << "*";
        mul->getRightOperand()->Accept(this);
        cout<< ")";
    }
    virtual void visitDivide(Divide *div) {
        cout << "(";
        div->getLeftOperand()->Accept(this);
        cout << "/";
        div->getRightOperand()->Accept(this);
        cout<< ")";
    }
};


#endif /* PRINTVISITOR_H */

