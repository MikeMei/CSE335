#ifndef EMPLOYEEDB_H
#define EMPLOYEEDB_H

#include "employee.h"
#include <vector>
class EmployeeDB {
private:
    vector<Employee*> empDB;
public:

    //default constructor for employeeDB
    EmployeeDB () {
    }

    EmployeeDB (vector<Employee*> emp_list) {
        empDB = emp_list;
    }
    void setEmployeeDB(vector<Employee*> emp_list) {
        empDB = emp_list;
    }

    void addEmployee(Employee* emp) {
        empDB.push_back(emp);
    }
    Employee* getEmployee(int i) {
        return empDB[i];
    }
};

#endif // EMPLOYEEDB_H
