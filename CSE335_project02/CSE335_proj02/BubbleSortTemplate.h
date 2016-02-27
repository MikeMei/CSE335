/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortTemplate.h
 * Author: meimicha
 *
 * Created on February 26, 2016, 1:12 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H
#include "SortableVector.h"
#include <iostream>
using namespace std;
class BubbleSortTemplate {
public: 
    void sort(SortableVector* sortable) {
        cout << "SortableVectorTemplate sort called" << endl;
        bool sorted = false;
        int n=sortable->getSize();
        while(!sorted) {
            sorted=true;
            for(int i=1; i<n; i++) {
                if(needSwap(sortable, i-1, i)) {
                    sortable->swap(i-1, i);
                    sorted = false;
                }
            }
            n--;
        }
    }
    virtual bool needSwap(SortableVector* sortableVector, int i, int j)=0;
};


#endif /* BUBBLESORTTEMPLATE_H */

