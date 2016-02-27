/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableEmployeeDatabase.h
 * Author: School
 *
 * Created on February 26, 2016, 1:13 PM
 */

#ifndef SORTABLEEMPLOYEEDATABASE_H
#define SORTABLEEMPLOYEEDATABASE_H

#include "SortableVector.h"

#include "CDatabase.h"
#include <vector>
using namespace std;


class SortableEmployeeDatabase: public SortableVector, public CDatabase {
public:
    SortableEmployeeDatabase(vector <CEmployee*> EmployeeVector): CDatabase(EmployeeVector) {};
    virtual unsigned int getSize() const {
        return getEmployeeDatabase().size();
    }
    virtual void swap(int i, int j){
        CEmployee* temp = emp_list[i];
        emp_list[i] = emp_list[j];
        emp_list[j] = temp;
    }
};

#endif /* SORTABLEEMPLOYEEDATABASE_H */

