/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: laptop-pc
 *
 * Created on February 9, 2016, 1:57 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "BubbleSortTemplate.h"
#include "SortableVector.h"
using namespace std;

class BubbleSortDecreasing: public BubbleSortTemplate {
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return !sv->smaller(i,j);
    }
};

#endif /* BUBBLESORTDECREASING_H */

