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
    /* Constructor for CDatabase
     */
    CDatabase(vector<CEmployee*> list)
    {
        emp_list = list;
    }
    /* Copy Constructor for CDatabase
     */
    CDatabase(const CDatabase &otherDB) {
        emp_list = otherDB.getEmployeeDatabase();
    }
    /* operator= for CDatabase
     */
    CDatabase operator=(const CDatabase &otherDB) {
        emp_list = otherDB.getEmployeeDatabase();
        return *this;
    }
    /* Setter method for CDatabase, adds a CEmployee pointer to the vector emp_list
     */
    void AddRecord(CEmployee* emp)
    {
        emp_list.push_back(emp);
    }
    /* Displays all employees in emp_list by calling the DisplayEmployee method in the CEmployee class
     */
    void DisplayRecords()
    {
        for(CEmployee* emp:emp_list)
        {
            emp->DisplayEmployee();
        }
    }
    /* Getter method, returns the list of CEmployee pointers in CDatabase
     */
    vector<CEmployee*> getEmployeeDatabase() const
    {
        return emp_list;
    }
    /* Setter method, sets the vector<CEmployee*> equal to another CDatabase*/
    void setEmployeeDatabase(CDatabase emp)
    {
        emp_list = emp.getEmployeeDatabase();
    }
    /* Getter method, returns a CEmployee pointer in emp_list using the index i
     */
    CEmployee* getEmployee(int i) const{
        cout <<"returning employee"<<endl;
        emp_list[i]->DisplayEmployee();
        return emp_list[i];
    }
};

#endif /* CDATABASE_H */

