/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Node.h
 * Author: laptop-pc
 *
 * Created on April 10, 2016, 1:52 PM
 */


#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
using namespace std;
class Node {
protected:
    string m_value;
    Node* m_leftChild;
    Node* m_rightChild;
public:
    Node(string value):m_value(value), m_leftChild(NULL), m_rightChild(NULL) {}
    virtual ~Node() {
        if(!m_leftChild) delete m_leftChild;
        if(!m_rightChild) delete m_rightChild;
    }
    string getValue() {
        return m_value;
    }
    void setLeftChild(Node* left) {
        m_leftChild = left;
    }
   
    void setRightChild(Node* right) {
        m_rightChild = right;
    }
    Node* getLeftChild() const {
        return m_leftChild;
    }
    Node* getRightChild() const {
        return m_rightChild;
    }
    void print() {
        if(m_leftChild) {
            cout << "(";
            m_leftChild->print();
        }
        cout<<m_value;
        if(m_rightChild) {
            m_rightChild->print();
            cout<<")";
        }
    }
};


#endif /* NODE_H */

