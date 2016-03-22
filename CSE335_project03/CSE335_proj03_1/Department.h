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
class Department: public Group {
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
    virtual void Accept(Visitor* v) {v->visitDepartment(this);};
};

#endif /* DEPARTMENT_H */

