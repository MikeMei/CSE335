#ifndef SORTABLEBYLASTNAME_H
#define SORTABLEBYLASTNAME_H

#include "sortableemployeedatabase.h"
using namespace std;

class SortableByLastName: public SortableEmployeeDatabase {
public:
    /* Default constructor
     */
    SortableByLastName() {};
    /* Constructor
     */
    SortableByLastName(vector <Employee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return getEmployee(i)->getLastName() < getEmployee(j)->getLastName();
    }
};

#endif /* SORTABLEBYLASTNAME_H */
