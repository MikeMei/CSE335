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
#include "Group.h"
using namespace std;

class Department
{
protected:
    string dept_name;
    vector <Unit> units;
    
public:
    Department()
    {
        //empty default constructor
    }
    
    Department(string name)
    {
        name = dept_name;
    }
    
    Department(const Department dept)
    {
        dept_name = dept.getName();
        units = dept.getUnits();
    }
    
    string getName() const
    {
        return dept_name;
    }
    
    vector<Unit> getUnits() const
    {
        return units;
    }
    
    void addDepartmentMember(Unit to_add)
    {
        units.push_back(to_add);
    }
    
    virtual void Accept(Visitor* v)
    {
        v->VisitDepartment(this);
    }
};

#endif /* DEPARTMENT_H */

