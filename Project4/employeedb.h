#ifndef EMPLOYEEDB_H
#define EMPLOYEEDB_H

#include "employee.h"
#include <vector>

class employeeDB {
public:
    employeeDB (vector<Employee*> list) {
        empDB = list;
    }
    void AddEmployee(Employee* emp)
    {
        empDB.push_back(emp);
    }
private:
    vector<Employee*> empDB;

};
#endif // EMPLOYEEDB_H
