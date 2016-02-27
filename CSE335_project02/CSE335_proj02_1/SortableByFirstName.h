/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableByFirstName.h
 * Author: School
 *
 * Created on February 26, 2016, 1:13 PM
 */

#ifndef SORTABLEBYFIRSTNAME_H
#define SORTABLEBYFIRSTNAME_H

#include "SortableEmployeeDatabase.h"
using namespace std;

class SortableByFirstName: public SortableEmployeeDatabase {
public:
    SortableByFirstName(vector <CEmployee*> employeeVector): SortableByFirstName(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return getEmployee(i)->getFirstName() < getEmployee(j)->getFirstName();
    }
}; 


#endif /* SORTABLEBYFIRSTNAME_H */

