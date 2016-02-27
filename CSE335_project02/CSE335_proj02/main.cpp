/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: School
 *
 * Created on February 26, 2016, 1:09 PM
 */

#include <cstdlib>
#include <string>
#include <ctime>
#include "CManager.h"
#include "CEmployee.h"
#include "CDatabase.h"
#include "SortableVector.h"
#include "SortableEmployeeDatabase.h"
#include "SortableByFirstName.h"
#include "SortableByHiringYear.h"
#include "SortableByLastName.h"
#include "SortableBySalary.h"
#include "BubbleSortDecreasing.h"
#include "BubbleSortIncreasing.h"
#include "BubbleSortTemplate.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    vector<CEmployee*> employees;
    tm hiringYear;
    hiringYear.tm_year = 2011;
    CEmployee e1("John", "Smith1", 10000, hiringYear);
    hiringYear.tm_year = 2012;
    CEmployee e2("John", "Smith2", 20000, hiringYear);
    hiringYear.tm_year = 2013;
    CEmployee e3("John", "Smith3", 30000, hiringYear);
    hiringYear.tm_year = 2000;
    CManager m1("Tom", "Cruise", 40000, hiringYear, "Sales");
    hiringYear.tm_year = 2010;
    CEmployee e4("John", "Doe1", 15000, hiringYear);
    hiringYear.tm_year = 2011;
    CEmployee e5("John", "Doe2", 25000, hiringYear);
    hiringYear.tm_year = 2012;
    CEmployee e6("John", "Doe3", 35000, hiringYear);
    hiringYear.tm_year = 2000;
    CManager m2("Alice", "Cooper", 45000, hiringYear, "Human Resources");
    
    employees.push_back(&e1);
    employees.push_back(&e2);
    employees.push_back(&e3);
    employees.push_back(&m1);
    employees.push_back(&e4);
    employees.push_back(&e5);
    employees.push_back(&e6);
    employees.push_back(&m2);
    
    CDatabase d1(employees);
    
    BubbleSortIncreasing bsi;
    BubbleSortDecreasing bsd;
      
    cout << "************************ Before Sorting" << endl;
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By FirstName Alphabetical" << endl;
    SortableByFirstName sbfn(employees);
    
    bsi.sort(&sbfn);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By FirstName Reverse Alphabetical" << endl;
    bsd.sort(&sbfn);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By LastName Alphabetical" << endl;
    SortableByLastName sbln(employees);
    bsi.sort(&sbln);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By LastName Reverse Alphabetical" << endl;
    bsd.sort(&sbln);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By Salary Increasing" << endl;
    SortableBySalary sbs(employees);
    bsi.sort(&sbs);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting By Salary Decreasing" << endl;
    bsd.sort(&sbs);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting by Hireyear Increasing" << endl;
    SortableByHiringYear sbh(employees);
    bsi.sort(&sbh);
    d1.DisplayRecords();
    
    cout << "************************ After Sorting by Hireyear Decreasing" << endl;
    bsd.sort(&sbh);
    d1.DisplayRecords();

    return 0;
}

