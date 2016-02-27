/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CEmployee.h
 * Author: meimicha
 *
 * Created on February 26, 2016, 1:11 PM
 */

#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

#include<string>
#include<iostream>
#include<ctime>

using namespace std;

class CEmployee {
protected:
    string m_firstName;
    string m_lastName;
    tm m_hiringYear;
    unsigned int m_salary;
public:
    CEmployee() {
        m_firstName = "";
        m_lastName = "";
        m_hiringYear.tm_year = 1900;
        m_salary = 0;
    }
    CEmployee(string firstName, string lastName, unsigned int salary, tm hiringYear)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
    }
    CEmployee(const CEmployee& otherEmp)
    {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
    }
    CEmployee& operator=(const CEmployee& otherEmp) {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
        return *this;
    }
    string getFirstName() const{
        return m_firstName;
    }
    string getLastName() const{
        return m_lastName;
    }
    unsigned short getSalary() const {
        return m_salary;
    }
    tm getHiringYear() const {
        return m_hiringYear;
    }
    void setFirstName(string firstName) {
        m_firstName = firstName;
    }
    void setLastName(string lastName) {
        m_lastName = lastName;
    }
    void setHiringYear(tm hiringYear) {
        m_hiringYear = hiringYear;
    }
    void setSalary(unsigned int salary)
    {
        m_salary = salary;
    }
    virtual void DisplayEmployee () {
        cout << m_firstName << " " << m_lastName << "; " << m_salary << "; " << m_hiringYear.tm_year << endl;
    }
};

#endif /* CEMPLOYEE_H */

