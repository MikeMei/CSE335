/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabase.h
 * Author: bollavaram
 *
 * Created on February 26, 2016, 1:11 PM
 */

#ifndef CDATABASE_H
#define CDATABASE_H
#include <iostream>
#include "CEmployee.h"
#include "CManager.h"
using namespace std;

class CDatabase
{
protected:
    vector <CEmployee*>emp_list;
    
public:
    CDatabase(vector<CEmployee*> list)
    {
        emp_list = list;
    }
    
    void AddRecord(CEmployee* emp)
    {
        emp_list.push_back(emp);
    }
    
    void DisplayRecords()
    {
        for(CEmployee* emp:emp_list)
        {
            emp->DisplayEmployee();
        }
    }
    
    vector<CEmployee*> getEmployeeDatabase() const
    {
        return emp_list;
    }
    
    void setEmployeeDatabase(CDatabase emp)
    {
        emp_list = emp.getEmployeeDatabase();
    }
    
    CEmployee* getEmployee(int i) const{
        cout <<"returning employee"<<endl;
        emp_list[i]->DisplayEmployee();
        return emp_list[i];
    }
};

#endif /* CDATABASE_H */

