/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Group.h
 * Author: School
 *
 * Created on March 21, 2016, 2:23 PM
 */

#ifndef GROUP_H
#define GROUP_H

#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include <string>
using namespace std;

class Group
{
protected:
    vector <Employee*>emp_list;
    string m_name;
    
public:
    /* Default constructor, does nothing 
     */
    Group() {
        
    }
    /* Constructor for Group
     */
    Group(string name)
    {
        m_name = name;
    }
    /* Copy Constructor for Group
     */
    Group(const Group &otherGroup) {
        emp_list = otherGroup.getEmployeeDatabase();
    }
    /* operator= for CDatabase
     */
    Group operator=(const Group &otherDB) {
        emp_list = otherDB.getEmployeeDatabase();
        return *this;
    }
    /* Setter method for Group, adds an Employee pointer to the vector emp_list
     */
    void AddGroupMember(Employee* emp)
    {
        emp_list.push_back(emp);
    }
    /* Getter method, returns the list of CEmployee pointers in CDatabase
     */
    vector<Employee*> getEmployeeDatabase() const
    {
        return emp_list;
    }
    /* Setter method, sets the vector<CEmployee*> equal to another CDatabase*/
    void setEmployeeDatabase(Group emp)
    {
        emp_list = emp.getEmployeeDatabase();
    }
    /* Getter method, returns a CEmployee pointer in emp_list using the index i
     */
    Employee* getEmployee(int i) const{
       
        return emp_list[i];
    }
    unsigned int getGroupSize() const{
        return emp_list.size(); 
    }
};


#endif /* GROUP_H */

