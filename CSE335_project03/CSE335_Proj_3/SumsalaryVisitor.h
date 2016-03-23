/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SumsalaryVisitor.h
 * Author: School
 *
 * Created on March 21, 2016, 2:24 PM
 */

#ifndef SUMSALARYVISITOR_H
#define SUMSALARYVISITOR_H

#include "Visitor.h"
#include "Employee.h"
#include "Manager.h"
#include "Group.h"
#include "Department.h"
class SumsalaryVisitor: public Visitor {
protected:
    unsigned int totalSalary=0;
public:
    virtual void visitEmployee(Employee* emp) {
        totalSalary += emp->getSalary();
    }
    virtual void visitManager(Manager* man) {
        totalSalary += man->getSalary();
    }
    virtual void visitGroup(Group* group) {
        for(int i = 0; i<group->getGroupSize(); i++) {
            group->getEmployee(i)->Accept(this);
        }
    }
    virtual void visitDepartment(Department* depart) {
        for(int i = 0; i<depart->getDepartmentSize(); i++) {
            depart->getDepartmentAtIndex(i)->Accept(this);
        }
    }
    unsigned int getTotalSalary() const {
        return totalSalary;
    }
    void restTotalSalary() {
        totalSalary = 0;
    }
};

#endif /* SUMSALARYVISITOR_H */

