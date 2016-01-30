/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CManager.h
 * Author: laptop-pc
 *
 * Created on January 27, 2016, 5:12 PM
 */

#ifndef CMANAGER_H
#define CMANAGER_H

#include "CEmployee.h"
#include <vector>

using std::vector;

class CManager:public CEmployee {
protected:
    vector<CEmployee*> m_group;
    string m_departmentName;
public:
    CManager() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear.tm_year = 1900;
        m_departmentName = "";
        
    }
    CManager(string firstName, 
             string lastName, 
             unsigned int salary,
             tm hiringYear,
             string departmentName,
             vector<CEmployee*> emp) {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_departmentName = departmentName;
        m_group = emp;
    }
    CManager(CManager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_departmentName = man.getDepartmentName();
        m_group = man.getGroup();
    }
    
    string getDepartmentName() const
    {
        return m_departmentName;
    }
    vector<CEmployee*> getGroup()
    {
        return m_group;
    }
    virtual void DisplayEmployee () {
        cout << m_firstName << " " << m_lastName << "   " << "Salary: " << m_salary
        << "   " <<"Hiring Year: "<< m_hiringYear.tm_year << "     " 
        << "Department: "<< m_departmentName << "Subordinates:" << m_group.size() <<endl;
    }
};
#endif /* CMANAGER_H */

