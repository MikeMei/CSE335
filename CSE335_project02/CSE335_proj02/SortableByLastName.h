/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableByLastName.h
 * Author: School
 *
 * Created on February 26, 2016, 1:14 PM
 */

#ifndef SORTABLEBYLASTNAME_H
#define SORTABLEBYLASTNAME_H

#include "SortableEmployeeDatabase.h"
using namespace std;

class SortableByLastName: public SortableEmployeeDatabase {
public:
    /* Default constructor
     */
    SortableByLastName() {};
    /* Constructor
     */
    SortableByLastName(vector <CEmployee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return getEmployee(i)->getLastName() < getEmployee(j)->getLastName();
    }
}; 

#endif /* SORTABLEBYLASTNAME_H */

