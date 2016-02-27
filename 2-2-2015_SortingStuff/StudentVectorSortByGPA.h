/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVectorSortByGPA.h
 * Author: bollavaram
 *
 * Created on February 4, 2016, 1:49 PM
 */

#ifndef STUDENTVECTORSORTBYGPA_H
#define STUDENTVECTORSORTBYGPA_H
#include "StudentVectorSortable.h"

class StudentVectorSortByGPA: public StudentVectorSortable
{
public:
    StudentVectorSortByGPA(vector<Student*> students): StudentVectorSortable(students)
    {
        
    }
    bool smaller(int i, int j) const
    {
        if(getStudent(i)->getGPA() < getStudent(j)->getGPA())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


#endif /* STUDENTVECTORSORTBYGPA_H */

