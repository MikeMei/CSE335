/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: School
 *
 * Created on March 21, 2016, 2:23 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#include<string>
#include<iostream>
#include<ctime>

using namespace std;

class Employee {
protected:
    string m_firstName;
    string m_lastName;
    tm m_hiringYear;
    unsigned int m_salary;
public:
    /* Default constructor for the CEmployee class, assigns values to 0, hiring year at 1900
     */
    Employee() {
        m_firstName = "";
        m_lastName = "";
        m_hiringYear.tm_year = 1900;
        m_salary = 0;
    }
    /* Constructor for the CEmployee class, assigns values to data members
     */
    Employee(string firstName, string lastName, unsigned int salary, tm hiringYear)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
    }
    /* Copy Constructor for the CEmployee class, copies by reference
     */
    Employee(const Employee& otherEmp)
    {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
    }
    /* operator= for the CEmployee class, does assignment by reference
     */
    Employee& operator=(const Employee& otherEmp) {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
        return *this;
    }
    /* Getter method, returns m_firstName of a CEmployee
     */
    string getFirstName() const{
        return m_firstName;
    }
    /* Getter method, returns m_lastName of a CEmployee
     */
    string getLastName() const{
        return m_lastName;
    }
    /* Getter method, returns m_salary of a CEmployee
     */
    unsigned short getSalary() const {
        return m_salary;
    }
    /* Getter method, returns m_hiringYear of a CEmployee
     */
    tm getHiringYear() const {
        return m_hiringYear;
    }
    /* Setter method, sets m_firstName of a CEmployee
     */
    void setFirstName(string firstName) {
        m_firstName = firstName;
    }
    /* Setter method, sets m_lastName of a CEmployee
     */
    void setLastName(string lastName) {
        m_lastName = lastName;
    }
    /* Setter method, sets m_HiringYear of a CEmployee
     */
    void setHiringYear(tm hiringYear) {
        m_hiringYear = hiringYear;
    }
    /* Setter method, sets m_salary of a CEmployee
     */    
    void setSalary(unsigned int salary)
    {
        m_salary = salary;
    }
    /* Displays the data members of a CEmployee using cout
     */
    virtual void DisplayEmployee () const{
        cout << m_firstName << " " << m_lastName << "; " << m_salary << "; " << m_hiringYear.tm_year << endl;
    }
};

#endif /* EMPLOYEE_H */

