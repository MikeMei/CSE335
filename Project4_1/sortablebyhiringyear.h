#ifndef SORTABLEBYHIRINGYEAR_H
#define SORTABLEBYHIRINGYEAR_H

#include "sortableemployeedatabase.h"

using namespace std;

class SortableByHiringYear: public SortableEmployeeDatabase {
public:
    /* Default Constructor
     */
    SortableByHiringYear() : SortableEmployeeDatabase() {};
    /* Constructor
     */
    SortableByHiringYear(vector <Employee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return  getEmployee(i)->getHiringYear()< getEmployee(j)->getHiringYear();

    }
};


#endif /* SORTABLEBYHIRINGYEAR_H */
