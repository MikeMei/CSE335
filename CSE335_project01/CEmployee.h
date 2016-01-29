/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CEmployee.h
 * Author: laptop-pc
 *
 * Created on January 27, 2016, 4:54 PM
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
    unsigned int m_hiringYear;
    unsigned int m_salary;
public:
    CEmployee() {
        m_firstName = "";
        m_lastName = "";
        m_hiringYear=0;
        m_salary = 0;
    }
    CEmployee(string firstName, 
             string lastName, 
             unsigned int salary,
             unsigned int hiringYear) {
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
    CEmployee operator=(const CEmployee& otherEmp) {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
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
    unsigned short getHiringYear() const {
        return m_hiringYear;
    }
    void setFirstName(string firstName) {
        m_firstName = firstName;
    }
    void gsetLastName(string lastName) {
        m_lastName = lastName;
    }
    void setHiringYear(unsigned int hiringYear) {
        m_hiringYear = hiringYear;
    }
    void setSalary(unsigned int salary)
    {
        m_salary = salary;
    }
    virtual void DisplayEmployee () {
        cout << m_firstName << " " << m_lastName << "   " << "Salary: " << m_salary
             << "   " <<"Hiring Year: "<< m_hiringYear << "     " << endl;
    }
};

#endif /* CEMPLOYEE_H */

