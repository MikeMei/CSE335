/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVector.h
 * Author: bollavaram
 *
 * Created on February 4, 2016, 1:19 PM
 */

#ifndef STUDENTVECTOR_H
#define STUDENTVECTOR_H
#include <vector>
#include "Student.h"
using namespace std;

class StudentVector
{
protected:
    vector<Student*> m_StudentVector;
    
public:
    StudentVector()
    {
        
    }
    
    StudentVector(vector <Student*> studentVector)
    {
        m_StudentVector = studentVector;
    }
    
    void addStudent(Student* student)
    {
        m_StudentVector.push_back(student);
    }
    
    virtual void print() const
    {
        for(int i = 0; i < m_StudentVector.size(); i++)
        {
            m_StudentVector[i]->print();
        }
    }
    
    Student* getStudent(int i) const
    {
        return m_StudentVector[i];
    }
};


#endif /* STUDENTVECTOR_H */

