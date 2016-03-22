/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Department.h
 * Author: School
 *
 * Created on March 21, 2016, 2:24 PM
 */

#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
#include <vector>
#include "Unit.h"
#include "Group.h"
#include "Employee.h"
#include "Manager.h"
using namespace std;
class Department: public Unit {
protected:
    string m_departmentName;
    vector<Group*> m_department;
    
public:
    //default constructor
    Department() {
    
    }
    // one arg constructor
    Department(string departmentName) {
        m_departmentName = departmentName;
    }
    //overloaded methods
    void addDepartmentMember(Group* aGroup) {
        m_department.push_back(aGroup);
    }
    void addDepartmentMember(Employee* emp) {
        Group temp_group;
        temp_group.addGroupMember(emp);
        m_department.push_back(&temp_group);
    }
    unsigned int getDepartmentSize() const{
        return m_department.size();
    }
    vector<Group*> getDepartment() {
        return m_department;
    }
    Group* getDepartmentAtIndex(unsigned int i) {
        return m_department[i];
    }
    string getDepartmentName() {
        return m_departmentName;
    }
    virtual void Accept(Visitor* v) {v->visitDepartment(this);};
};

#endif /* DEPARTMENT_H */

