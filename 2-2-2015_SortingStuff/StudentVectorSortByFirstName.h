/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentVectorSortByFirstName.h
 * Author: bollavaram
 *
 * Created on February 4, 2016, 1:59 PM
 */

#ifndef STUDENTVECTORSORTBYFIRSTNAME_H
#define STUDENTVECTORSORTBYFIRSTNAME_H
#include "StudentVectorSortable.h"

class StudentVectorSortByFirstName: public StudentVectorSortable
{
public:
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

#endif /* STUDENTVECTORSORTBYFIRSTNAME_H */

