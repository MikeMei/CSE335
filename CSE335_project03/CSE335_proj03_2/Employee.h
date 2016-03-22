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

#include "Unit.h"
#include "Visitor.h"
#include<string>
#include<iostream>
#include<ctime>

using namespace std;

class Employee: public Unit {
protected:
    string m_firstName;
    string m_lastName;
    unsigned int m_hiringYear;
    unsigned int m_salary;
    unsigned int m_id;
public:
    /* Default constructor for the CEmployee class, assigns values to 0, hiring year at 1900
     */
    Employee() {
        m_firstName = "";
        m_lastName = "";
        m_hiringYear = 0;
        m_salary = 0;
        m_id = 0;
    }
    /* Constructor for the CEmployee class, assigns values to data members
     */
    Employee(string firstName, string lastName, unsigned int salary, unsigned int hiringYear, unsigned int id)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_id = id;
    }
    /* Copy Constructor for the CEmployee class, copies by reference
     */
    Employee(const Employee& otherEmp)
    {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
        m_id = otherEmp.getId();
    }
    /* operator= for the CEmployee class, does assignment by reference
     */
    Employee& operator=(const Employee& otherEmp) {
        m_firstName = otherEmp.getFirstName();
        m_lastName = otherEmp.getLastName();
        m_salary = otherEmp.getSalary();
        m_hiringYear = otherEmp.getHiringYear();
        m_id = otherEmp.getId();
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
    unsigned int getHiringYear() const {
        return m_hiringYear;
    }
    /* Getter for id
     */
    unsigned int getId() const {
        return m_id;
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
    void setHiringYear(unsigned int hiringYear) {
        m_hiringYear = hiringYear;
    }
    /* Setter method, sets m_salary of a CEmployee
     */    
    void setSalary(unsigned int salary)
    {
        m_salary = salary;
    }
    /* Set id
     */
    void setId(unsigned int id) {
        m_id = id;
    }
    
    
    /* Visitor pattern
     */
    virtual void Accept(Visitor* v) {v->visitEmployee(this);}; 
};

#endif /* EMPLOYEE_H */

