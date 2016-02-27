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

using namespace std;

class CManager:public CEmployee {
protected:
    string m_departmentName;
public:
    /* Default Constructor for CManager
     */
    CManager() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear.tm_year = 1900;
        m_departmentName = "";
    }
    /* Constructor for CManager
     */
    CManager(string firstName, string lastName, unsigned int salary, tm hiringYear, string departmentName)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_departmentName = departmentName;
    }
    /* Copy Constructor for CManager, copy by reference
     */
    CManager(CManager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_departmentName = man.getDepartmentName();
    }
    /* operator= Constructor for CManager
     */
    CManager& operator=(const CManager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_departmentName = man.getDepartmentName();
        return *this;
    }
    /* Getter method for CManager, returns the value of m_departmentName
     */
    string getDepartmentName() const
    {
        return m_departmentName;
    }
    /* Displays a CManager, overrides the version in CEmployee
     */
    virtual void DisplayEmployee() const
    {
        cout << m_firstName << " " << m_lastName << "; " << m_salary << "; " << m_hiringYear.tm_year << "; " << m_departmentName << endl;
    }
};
#endif /* CMANAGER_H */

