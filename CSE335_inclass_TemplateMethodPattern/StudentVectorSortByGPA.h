/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVectorSortByGPA.h
 * Author: laptop-pc
 *
 * Created on February 4, 2016, 1:48 PM
 */

#ifndef STUDENTVECTORSORTBYGPA_H
#define STUDENTVECTORSORTBYGPA_H

#include "StudentVectorSortable.h"

class StudentVectorSortByGPA: public StudentVectorSortable{
public:
    StudentVectorSortByGPA(vector <Student*> studentVector):
    StudentVectorSortByGPA(studentVector){};
    virtual bool smaller(int i, int j) const {
        return getStudent(i)->getGPA() < getStudent(j)->getGPA();
    }  
        
};

#endif /* STUDENTVECTORSORTBYGPA_H */

