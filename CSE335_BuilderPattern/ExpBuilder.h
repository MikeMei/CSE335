/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpBuilder.h
 * Author: laptop-pc
 *
 * Created on April 10, 2016, 1:54 PM
 */

#ifndef EXPBUILDER_H
#define EXPBUILDER_H
#include "Builder.h"
#include "Node.h"
#include <iostream>
#include <stack>
class ExpBuilder: public Builder {
protected:
    stack<Node*> expStack;
public:
    virtual void addOperand(string operand) {
        Node* newOperand = new Node(operand);
        expStack.push(newOperand);
    }
    virtual void addLiteral(string literal) {
        Node* newOperand = new Node(literal);
        expStack.push(newOperand);
    }
    virtual void addLeftParenthesis() {}
    virtual void addRightParenthesis() {
        Node* rightChild = expStack.top();
        expStack.pop();
        Node* parent = expStack.top();
        expStack.pop();
        Node* leftChild = expStack.top();
        expStack.pop();
        parent->setLeftChild(leftChild);
        parent->setRightChild(rightChild);
        expStack.push(parent);
    }
    virtual Node* getExpression() {
        Node* root = expStack.top();
        expStack.pop();
        return root; 
    }
};


#endif /* EXPBUILDER_H */

