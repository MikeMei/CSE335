/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CManager.h
 * Author: meimicha
 *
 * Created on February 26, 2016, 1:11 PM
 */

#ifndef CMANAGER_H
#define CMANAGER_H

#include "CEmployee.h"
#include <vector>
#include <iostream>

using std::vector;

class CManager:public CEmployee {
protected:
    string m_departmentName;
public:
    CManager() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear.tm_year = 1900;
        m_departmentName = "";
    }
    CManager(string firstName, string lastName, unsigned int salary, tm hiringYear, string departmentName)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_departmentName = departmentName;
    }
    CManager(CManager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_departmentName = man.getDepartmentName();
    }
    
    string getDepartmentName() const
    {
        return m_departmentName;
    }
    
    virtual void DisplayEmployee()
    {
        cout << m_firstName << " " << m_lastName << "; " << m_salary << "; " << m_hiringYear.tm_year << "; " << m_departmentName << endl;
    }
};
#endif /* CMANAGER_H */

