/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryExpression.h
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 1:22 PM
 */

#ifndef BINARYEXPRESSION_H
#define BINARYEXPRESSION_H
#include "Expression.h"
/* Does not need to include visitor because this class does not know which type of operation
 * will be performed
 * BinaryExpression is not concrete
 */
class BinaryExpression : public Expression {
private:
    Expression* _leftPtr;
    Expression* _rightPtr;
protected:
    BinaryExpression(Expression* left, Expression* right): _leftPtr(left), _rightPtr(right) {};
    virtual ~BinaryExpression() {delete _leftPtr; delete _rightPtr;};
public:
    Expression* getLeftOperand() {return _leftPtr;};
    Expression* getRightOperand() {return _rightPtr;};
};



#endif /* BINARYEXPRESSION_H */

