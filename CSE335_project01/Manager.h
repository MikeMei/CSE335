/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.h
 * Author: laptop-pc
 *
 * Created on January 27, 2016, 5:12 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>

using std::vector;

class Manager:public Employee {
protected:
    vector<Employee*> m_group;
    string m_departmentName;
public:
    Manager() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear= 0;
        m_departmentName = "";
        
    }
    Manager(string firstName, 
             string lastName, 
             unsigned int salary,
             unsigned int hiringYear,
             string departmentName,
             vector<Employee*> emp) {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_departmentName = departmentName;
        m_group = emp;
        
    Manager(const Manager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_departmentName = man.getDepartmentName();
    }
    }
    virtual void DisplayEmployee () {
        cout << m_firstName << " " << m_lastName << "   " << "Salary: " << m_salary
        << "   " <<"Hiring Year: "<< m_hiringYear << "     " 
        << "Department: "<< m_departmentName << "Subordinates:" << m_group.size() <<endl;
    }
};
#endif /* MANAGER_H */

