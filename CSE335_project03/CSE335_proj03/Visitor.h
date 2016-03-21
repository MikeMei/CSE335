/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: laptop-pc
 *
 * Created on March 21, 2016, 4:43 PM
 */

#ifndef VISITOR_H
#define VISITOR_H

#include "Employee.h"
#include "Manager.h"
#include "Group.h"
#include "Department.h"

class Employee;
class Manager;
class Group;
class Department;

class Visitor {
    virtual void visitEmployee(Employee*) = 0;
    virtual void visitManager(Manager*) = 0;
    virtual void visitGroup(Group*) = 0;
    virtual void visitDepartment(Department*) = 0;
    
};


#endif /* VISITOR_H */

