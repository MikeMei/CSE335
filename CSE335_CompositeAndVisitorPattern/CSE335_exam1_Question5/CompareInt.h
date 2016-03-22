/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompareInt.h
 * Author: laptop-pc
 *
 * Created on March 22, 2016, 1:25 PM
 */

#ifndef COMPAREINT_H
#define COMPAREINT_H
#include "SubstringInterface.h"
#include <vector>
using namespace std;
class CompareInt: public SubstringInterface {
protected:
    vector<int> SetA;
    vector<int> SetB;
public:
    virtual unsigned int getSizeA() {
        return SetA.size();
    }
    virtual unsigned int getSizeB() {
        return SetB.size();
    }
    virtual bool isEqual(int i, int j) {
        return (i == j);
    }
};

#endif /* COMPAREINT_H */

