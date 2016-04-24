#ifndef EMPLOYEE_H
#define EMPLOYEE_H



#include<string>
#include<iostream>

using namespace std;

class Employee {
public:
    Employee() {
        m_firstName = "";
        m_lastName = "";
        m_salary = 0;
        m_hiringYear = 0;
    }

    Employee(string firstName, string lastName, int salary, int hiringYear) {
        m_firstName = firstName;
        m_lastName = lastName;
        m_salary = salary;
        m_hiringYear = hiringYear;

    }
    /* accessor methods
     */
    string getFirstName() const {
        return m_firstName;
    }

    string getLastName() const {
        return m_lastName;
    }
    int getSalary() const {
        return m_salary;
    }
    int getHiringYear() const {
        return m_hiringYear;
    }
    /* mutator methods
     */
    void setFirstName(string firstName) {
        m_firstName = firstName;
    }
    void setLastName(string lastName) {
        m_lastName = lastName;
    }
    void setsalary(int salary) {
        m_salary = salary;
    }
    void sethiringYear(int hiringYear) {
        m_hiringYear = hiringYear;
    }

private:
    string m_firstName;
    string m_lastName;
    int m_salary;
    int m_hiringYear;
};

#endif // EMPLOYEE_H
