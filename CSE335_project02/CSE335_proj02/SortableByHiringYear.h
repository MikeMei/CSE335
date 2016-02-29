/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SortableByHiringYear.h
 * Author: School
 *
 * Created on February 26, 2016, 1:13 PM
 */

#ifndef SORTABLEBYHIRINGYEAR_H
#define SORTABLEBYHIRINGYEAR_H

#include "SortableEmployeeDatabase.h"
#include <ctime>
using namespace std;

class SortableByHiringYear: public SortableEmployeeDatabase {
public:
    /* Default Constructor
     */
    SortableByHiringYear() {};
    /* Constructor
     */
    SortableByHiringYear(vector <CEmployee*> employeeVector): SortableEmployeeDatabase(employeeVector) {};
    virtual bool smaller(int i, int j) const {
        return  getEmployee(i)->getHiringYear().tm_year < getEmployee(j)->getHiringYear().tm_year;
        
    }
}; 


#endif /* SORTABLEBYHIRINGYEAR_H */

