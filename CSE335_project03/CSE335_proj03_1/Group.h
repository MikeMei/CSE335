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

class Group: public Unit
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
        emp_list = otherGroup.getEmployeeGroup();
    }
    /* operator= for Group
     */
    Group operator=(const Group &otherGroup) {
        emp_list = otherGroup.getEmployeeGroup();
        return *this;
    }
    /* add an employee to group
     */
    void addGroupMember(Employee* emp)
    {
        emp_list.push_back(emp);
    }
    /* Getter method, 
     */
    vector<Employee*> getEmployeeGroup() const
    {
        return emp_list;
    }
    /* Setter method, sets the vector<Employee*> equal to another group*/
    void setEmployeeGroup(Group emp)
    {
        emp_list = emp.getEmployeeGroup();
    }
    /* Getter method, returns a Employee pointer in emp_list using the index i
     */
    Employee* getEmployee(int i) const{
       
        return emp_list[i];
    }
    // returns m_name
    string getGroupName() const{
        return m_name;
    }
    // returns emp_list.size()
    unsigned int getGroupSize() const {
        return emp_list.size();
    }

    virtual void Accept(Visitor* v) {v->visitGroup(this);};
};


#endif /* GROUP_H */

