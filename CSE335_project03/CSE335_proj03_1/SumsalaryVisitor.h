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
    unsigned int totalSalary;
public:
    virtual void visitEmployee(Employee* emp) {
        totalSalary += emp->getSalary();
    }
    virtual void visitManager(Manager* man) {
        totalSalary += man->getSalary();
    }
    virtual void visitGroup(Group* group) {
        
    }
    virtual void visitDepartment(Department* depart) {
        
    }
    unsigned int getTotalSalary() const {
        return totalSalary;
    }
};

#endif /* SUMSALARYVISITOR_H */

