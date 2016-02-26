/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVector.h
 * Author: laptop-pc
 *
 * Created on February 2, 2016, 2:16 PM
 */

#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H
#include "SortableVector.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout; 
using std::endl;

class IntegerVector: public SortableVector{
protected:
    vector<int> m_IntegerVector;
public:
    void addInteger(int i) {
        m_IntegerVector.push_back(i);
    }
    unsigned int getSize() const{
        return m_IntegerVector.size();
    }
    void swap(int i, int j) {
        int temp = m_IntegerVector[i];
        m_IntegerVector[i] = m_IntegerVector[j];
        m_IntegerVector[j] = temp;
    }
    bool smaller(int i, int j) const {
        if(m_IntegerVector[i] > m_IntegerVector[j]) {
            return true;
        }
        else {
            return false;
        }
    }
    void print() const{
        for(int i : m_IntegerVector) {
            cout<< i << " ";
        }
    }
};


#endif /* INTEGERVECTOR_H */

