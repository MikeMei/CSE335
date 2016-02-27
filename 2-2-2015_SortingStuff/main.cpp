/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bollavaram
 *
 * Created on February 2, 2016, 1:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "SortableVector.h"
#include "BubbleSort.h"
#include "IntegerVector.h"
#include "Student.h"
#include "StudentVector.h"
#include "StudentVectorSortable.h"
#include "StudentVectorSortByGPA.h"
#include "StudentVectorSortByFirstName.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
//    IntegerVector iv;
//    iv.addinteger(10);
//    iv.addinteger(4);
//    iv.addinteger(6);
//    iv.addinteger(3);
//    
//    cout<< "Before Sorting_____________________________________" << endl;
//    iv.print();
//    cout << "After Sorting_____________________________________" << endl;
//    
//    BubbleSort bs;
//    bs.sortDecreasing(&iv);
//    iv.print();
    
    Student s1("Henry", "Smith", 1996,150,3.5);
    Student s2("John", "Anderson", 1995,160,4.0);
    Student s3("Tom", "Cooper", 1997,120,3.0);
    
    vector<Student*> studentVector;
    studentVector.push_back(&s1);
    studentVector.push_back(&s2);
    studentVector.push_back(&s3);
    
    StudentVector sv(studentVector);
    
    cout << "-------------------Before Sorting Students by GPA" << endl;
    sv.print();
    
    BubbleSort bs;
    cout << "---------------------After Sorting Students by GPA" << endl;
    
    StudentVectorSortByGPA svSortedByGPA(studentVector);
    bs.sortDecreasing(&svSortedByGPA);
    svSortedByGPA.print();
    
    return 0;
}

