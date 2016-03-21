/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EvaluationVisitor.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:14 PM
 */

#ifndef EVALUATIONVISITOR_H
#define EVALUATIONVISITOR_H
#include <stack>
#include "Visitor.h"
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Negate.h"
#include "Literal.h"
using namespace std;
class EvaluationVisitor : public Visitor {
private:
    stack<double> _myStack;
public:
    double getValue() {double result = _myStack.top(); _myStack.pop(); return result;};
    
    virtual void visitLiteral(Literal* lit) {
       _myStack.push(lit->getValue());
    };
    virtual void visitNegate(Negate* neg) {
        neg->getOperand()->Accept(this);
        double val = _myStack.top();_myStack.pop();
        _myStack.push(-val);
    }
    virtual void visitMultiply(Multiply* mul) {
        mul->getLeftOperand()->Accept(this);
        mul->getRightOperand()->Accept(this);
        
        double rval = _myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval * rval);
    }
    virtual void visitDivide(Divide* div) {
        div->getLeftOperand()->Accept(this);
        div->getRightOperand()->Accept(this);
        
        double rval = _myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval / rval);
    }
    virtual void visitAdd(Add* a) {
        a->getLeftOperand()->Accept(this);
        a->getRightOperand()->Accept(this);
        
        double rval = _myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval + rval);
    }
    virtual void visitSubtract(Subtract* sub) {
        sub->getLeftOperand()->Accept(this);
        sub->getRightOperand()->Accept(this);
        
        double rval = _myStack.top();_myStack.pop();
        double lval = _myStack.top();_myStack.pop();
        _myStack.push(lval - rval);    
    }
};

#endif /* EVALUATIONVISITOR_H */

