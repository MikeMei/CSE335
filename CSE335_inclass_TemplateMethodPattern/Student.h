/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: laptop-pc
 *
 * Created on February 4, 2016, 1:08 PM
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Student{
protected:
    string m_FirstName;
    string m_LastName;
    unsigned short m_BirthYear;
    float m_Weight;
    float m_GPA;
    
public:
    Student(const string& firstName, const string& lastName, const unsigned short& birthYear, 
            const float& weight, const float& gpa) {
        m_FirstName = firstName;
        m_LastName = lastName;
        m_BirthYear = birthYear;
        m_Weight = weight;
        m_GPA = gpa;
    }
    
    string getFirstName() const {
        return m_FirstName;
    }
    string getLastName() const {
        return m_LastName;
    }
    unsigned short getBirthYear() const {
        return m_BirthYear;
    }
    float getWeight() const {
        return m_Weight;
    }
    float getGPA() const {
        return m_GPA;
    }
    void setFirstName(string firstName) {
        m_FirstName = firstName;
    }
    void setLastName(string lastName) {
        m_LastName = lastName;
    }
    void setBirthYear(unsigned short birthYear) {
        m_BirthYear = birthYear;
    }
    void setWeight(float weight) {
        m_Weight = weight;
    }
    void setGPA(float gpa) {
        m_GPA = gpa;
    }
    void print() {
        cout<<m_FirstName<<" "<<m_LastName<<"; "<<m_BirthYear<<" ;"<<
                m_Weight<<"; "<<m_GPA<<endl;
    }
    
};


#endif /* STUDENT_H */

