/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CompareStr.h
 * Author: laptop-pc
 *
 * Created on March 22, 2016, 1:25 PM
 */

#ifndef COMPARESTR_H
#define COMPARESTR_H
#include "SubstringInterface.h"
#include <vector>
using namespace std;

class CompareStr:public SubstringInterface {
protected:
    vector<char> StringSetA;
    vector<char> StringSetB;
public:
    virtual unsigned int getSizeA() {
        return StringSetA.size();
    }
    virtual unsigned int getSizeB() {
        return StringSetB.size();
    }
    bool isEqual(int i, int j) {
        return(i==j);
    }
};


#endif /* COMPARESTR_H */

