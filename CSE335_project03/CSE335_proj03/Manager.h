/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Manager.h
 * Author: School
 *
 * Created on March 21, 2016, 2:23 PM
 */

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <vector>
#include <iostream>

using namespace std;

class Manager:public Employee {
protected:
    unsigned int m_rank;
public:
    /* Default Constructor for CManager
     */
    Manager() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear = 0;
        m_id = 0;
        m_rank = 0;
    }
    /* Constructor for CManager
     */
    Manager(string firstName, string lastName, unsigned int salary, unsigned int hiringYear, unsigned int id, unsigned int rank)
    {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear= hiringYear;
        m_id = id;
        m_rank = rank;
    }
    /* Copy Constructor for CManager, copy by reference
     */
    Manager(Manager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_id = man.getId();
        m_rank = man.getRank();
    }
    /* operator= Constructor for CManager
     */
    Manager& operator=(const Manager& man){
        m_firstName = man.getFirstName();
        m_lastName = man.getLastName();
        m_salary = man.getSalary();
        m_hiringYear = man.getHiringYear();
        m_id = man.getId();
        m_rank = man.getRank();
        return *this;
    }

    /* Getter for rank
     */
    unsigned int getRank() const{
        return m_rank;
    }

};


#endif /* MANAGER_H */

