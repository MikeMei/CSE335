#ifndef SORTABLEBYSALARY_H
#define SORTABLEBYSALARY_H

#include "sortableemployeedatabase.h"
using namespace std;

class SortableBySalary: public SortableEmployeeDatabase {
public:
    /* Default Constructor
     */
    SortableBySalary() {};
    /* Constructor
     */
    SortableBySalary(vector <Employee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return getEmployee(i)->getSalary() < getEmployee(j)->getSalary();
    }
};


#endif /* SORTABLEBYSALARY_H */
