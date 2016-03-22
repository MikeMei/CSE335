/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrintVisitor.h
 * Author: School
 *
 * Created on March 21, 2016, 2:23 PM
 */

#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H
#include "Visitor.h"
#include "Employee.h"
#include "Manager.h"
#include "Group.h"
#include "Department.h"
#include <iostream>
using namespace std;

class PrintVisitor: public Visitor {
public: 
    virtual void visitEmployee(Employee* emp) {
        cout << "Employee: " << emp->getFirstName() <<" "<< emp->getLastName()
             <<", Salary: " << emp->getSalary() <<", Hiring Year: " << emp->getHiringYear()
             <<", ID: " << emp->getId() << endl;
    }
    virtual void visitManager(Manager* man) {
        cout << "Manager: " << man->getFirstName() <<" "<< man->getLastName()
             <<", Salary: " << man->getSalary() <<", Hiring Year: " << man->getHiringYear()
             <<", ID: " << man->getId() <<", Rank: "<< man->getRank() << endl;        
    }
    virtual void visitGroup(Group* grp) {
        
    }
    virtual void visitDepartment(Department* depart) {
        
    }
};




#endif /* PRINTVISITOR_H */

