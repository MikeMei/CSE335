/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Database.h
 * Author: bollavaram
 *
 * Created on January 29, 2016, 6:11 PM
 */

#ifndef CDATABASE_H
#define CDATABASE_H
#include <iostream>
#include "CEmployee.h"
#include "CManager.h"
using namespace std;

class CDatabase
{
private:
    vector <CEmployee*>emp_list;
    
public:
    void AddRecord(CEmployee emp)
    {
        emp_list.push_back(emp);
    }
    
    void DisplayRecords()
    {
        for(CEmployee emp:emp_list)
        {
            emp.DisplayEmployee();
        }
    }
};

#endif /* CDATABASE_H */

