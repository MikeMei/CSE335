/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVector.h
 * Author: bollavaram
 *
 * Created on February 2, 2016, 2:17 PM
 */

#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H
#include <vector>
#include "SortableVector.h"
#include <iostream>
using namespace std;

class IntegerVector: public SortableVector
{
protected:
    vector<int> m_IntegerVector;
    
public:
    void addinteger(int i)
    {
        m_IntegerVector.push_back(i);
    }
    
    unsigned int getSize() const
    {
        return m_IntegerVector.size();
    }
    
    void swap(int i, int j)
    {
        int temp = m_IntegerVector[i];
        m_IntegerVector[i] = m_IntegerVector[j];
        m_IntegerVector[i] = m_IntegerVector[i];
        m_IntegerVector[i] = temp;
    }
    
    bool smaller(int i, int j) const
    {
        if(m_IntegerVector[i] < m_IntegerVector[j])
        {
            return true;
        }
        
        else
        {
            return false;
        }
    }
    
    void print() const
    {
        for(int i = 0; i < getSize(); i++)
        {
            cout << m_IntegerVector[i];
        }
    }
};


#endif /* INTEGERVECTOR_H */

