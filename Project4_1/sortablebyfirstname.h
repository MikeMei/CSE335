#ifndef SORTABLEBYFIRSTNAME_H
#define SORTABLEBYFIRSTNAME_H

#include "sortableemployeedatabase.h"
#include <iostream>
using namespace std;

class SortableByFirstName: public SortableEmployeeDatabase {
public:
    /* Default Constructor
     */
    SortableByFirstName()  {};
    /* Constructor
     */
    SortableByFirstName(vector<Employee*> employees): SortableEmployeeDatabase(employees) {

    }
    virtual bool smaller(int i, int j) const  {
        if(getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName() ) {
            return true;
        }
        else {
            return false;
        }

    }
};


#endif /* SORTABLEBYFIRSTNAME_H */
