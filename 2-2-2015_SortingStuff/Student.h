/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: bollavaram
 *
 * Created on February 4, 2016, 1:08 PM
 */

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
protected:
    string m_FirstName;
    string m_LastName;
    unsigned short m_BirthYear;
    float m_Weight;
    float m_GPA;
    
public:
    Student(const string& firstName, const string& lastName, unsigned short birthYear, float weight, float gpa)
    {
        m_FirstName = firstName;
        m_LastName = lastName;
        m_BirthYear = birthYear;
        m_GPA = gpa;
    }
    
    string getFirstName() const
    {
        return m_FirstName;
    }
    
    string getLastName() const
    {
        return m_LastName;
    }
    
    unsigned short getBirthYear() const
    {
        return m_BirthYear;
    }
    
    float getWeight() const
    {
        return m_Weight;
    }
    
    float getGPA()const
    {
        return m_GPA;
    }
    
    void print()
    {
        cout << m_FirstName << " " << m_LastName << "; " << m_BirthYear << "; " << m_Weight << "; " << m_GPA << endl;
    }
};


#endif /* STUDENT_H */

