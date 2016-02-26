/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVectorSortable.h
 * Author: laptop-pc
 *
 * Created on February 4, 2016, 1:31 PM
 */

#ifndef STUDENTVECTORSORTABLE_H
#define STUDENTVECTORSORTABLE_H

#include "StudentVector.h"
#include "SortableVector.h"

#include <vector>

using std::vector;

class StudentVectorSortable: public StudentVector, public SortableVector{
public:
    StudentVectorSortable(vector <Student*> studentVector):
    StudentVector(studentVector){};
    virtual unsigned int getSize() const{
        return m_StudentVector.size();
    }
    virtual void swap(int i, int j){
        Student* temp = m_StudentVector[i];
        m_StudentVector[i] = m_StudentVector[j];
        m_StudentVector[i] = temp;
    }
    
};



#endif /* STUDENTVECTORSORTABLE_H */

