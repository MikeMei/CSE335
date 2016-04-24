#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include "bubblesorttemplate.h"
#include "sortablevector.h"
using namespace std;

class BubbleSortDecreasing: public BubbleSortTemplate {
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return sv->smaller(i,j);
    }
};

#endif /* BUBBLESORTDECREASING_H */
