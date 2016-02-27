/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentSortByFirstName.h
 * Author: laptop-pc
 *
 * Created on February 4, 2016, 1:59 PM
 */

#ifndef STUDENTSORTBYFIRSTNAME_H
#define STUDENTSORTBYFIRSTNAME_H

#include "StudentVectorSortable.h"
#include <iostream>
using namespace std;

class StudentVectorSortByFirstName: public StudentVectorSortable{
public:
    StudentVectorSortByFirstName(vector <Student*> &students):
    StudentVectorSortByFirstName(students){
    cout <<"hello"<<endl; 
    };
 
    
    virtual bool smaller(int i, int j) const {
        return getStudent(i)->getFirstName() < getStudent(j)->getFirstName();
    }
};


#endif /* STUDENTSORTBYFIRSTNAME_H */

