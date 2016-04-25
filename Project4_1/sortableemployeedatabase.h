#ifndef SORTABLEEMPLOYEEDATABASE_H
#define SORTABLEEMPLOYEEDATABASE_H

#include "sortablevector.h"
#include "employeedb.h"
#include <vector>
using namespace std;


class SortableEmployeeDatabase: public SortableVector, public EmployeeDB {
public:
    /* Default Constructor
     */
    SortableEmployeeDatabase() {

    };
    /* Constructor
     */
    SortableEmployeeDatabase(vector <Employee*> &EmployeeVector): EmployeeDB(EmployeeVector) {};
    /* Copy Constructor
     */

    virtual void swap(int i, int j  ){
        Employee* temp = empDB[i];
        empDB[i] = empDB[j];
        empDB[j] = temp;
    }
};

#endif /* SORTABLEEMPLOYEEDATABASE_H */
