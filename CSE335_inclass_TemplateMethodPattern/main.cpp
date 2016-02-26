/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: laptop-pc
 *
 * Created on February 2, 2016, 1:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

#include "StudentVectorSortable.h"
#include "StudentVectorSortByGPA.h"
#include "SortableVector.h"
#include "BubbleSortTemplate.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "IntegerVector.h"
#include "Student.h"
#include "StudentVector.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    IntegerVector iv;
    iv.addInteger(10);
    iv.addInteger(4);
    iv.addInteger(6);
    iv.addInteger(3);
    cout << "************** pre-sort" << endl;
    iv.print();
    cout << endl;
    cout << "************** post-sort" << endl;
    BubbleSortDecreasing bsd;
    bsd.sort(&iv);
    iv.print();
    
    Student s1("Henry", "Smith", 1996, 150, 3.5);
    Student s2("John", "Anderson", 1995, 160, 4.0);
    Student s3("Tom", "Cooper", 1997, 120, 3.0);
    
    StudentVector studentVector;
    /*
    studentVector.push_back(&s1);
    studentVector.push_back(&s2);
    studentVector.push_back(&s3);
    
    StudentVectorSortByGPA svSortedByGPA(studentVector);
    cout<<"***********Before(GPA)**************"<<endl;
    svSortedByGPA.print();
    cout<<"***********After(GPA)**************"<<endl;
    bsd.sort(&svSortedByGPA);
    svSortedByGPA.print();
    
    StudentVectorSortByFirstName svSortedByGPA(studentVector);
    cout<<"***********Before(FirstName)**************"<<endl;
    svSortedByFirstName.print();
    cout<<"***********After(FirstName)**************"<<endl;
    bsd.sort(&svSortedByFirstName);
    svSortedByFirstName.print();
    */
    
    
    return 0;
}

