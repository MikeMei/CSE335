

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H

#include "bubblesorttemplate.h"
#include "sortablevector.h"
using namespace std;

class BubbleSortIncreasing: public BubbleSortTemplate {
    virtual bool needSwap(SortableVector* sv, int i, int j) {
        return !sv->smaller(i,j);
    }
};


#endif /* BUBBLESORTINCREASING_H */
