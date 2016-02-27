/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVectorSortable.h
 * Author: bollavaram
 *
 * Created on February 4, 2016, 1:34 PM
 */

#ifndef STUDENTVECTORSORTABLE_H
#define STUDENTVECTORSORTABLE_H
#include <vector>
#include "SortableVector.h"
#include "StudentVector.h"

class StudentVectorSortable: public StudentVector, public SortableVector
{
public:
    StudentVectorSortable(vector<Student*>& studentVector):StudentVector(studentVector) {}
    
    virtual unsigned int getSize() const
    {
        return m_StudentVector.size();
    }
    
    virtual void swap(int i, int j)
    {
        Student* temp = m_StudentVector[i];
        m_StudentVector[i] = m_StudentVector[j];
        m_StudentVector[j] = temp;
    }
};


#endif /* STUDENTVECTORSORTABLE_H */

