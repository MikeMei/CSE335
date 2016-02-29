/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableBySalary.h
 * Author: School
 *
 * Created on February 26, 2016, 1:13 PM
 */

#ifndef SORTABLEBYSALARY_H
#define SORTABLEBYSALARY_H

#include "SortableEmployeeDatabase.h"
using namespace std;

class SortableBySalary: public SortableEmployeeDatabase {
public:
    SortableBySalary(vector <CEmployee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return getEmployee(i)->getSalary() < getEmployee(j)->getSalary();
    }
};


#endif /* SORTABLEBYSALARY_H */

