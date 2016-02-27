/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: meimicha
 *
 * Created on February 26, 2016, 1:12 PM
 */

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "BubbleSortTemplate.h"
#include "SortableVector.h"
using namespace std;

class BubbleSortIncreasing: public BubbleSortTemplate {
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return sv->smaller(i,j);
    }
};


#endif /* BUBBLESORTINCREASING_H */

