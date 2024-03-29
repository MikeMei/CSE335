/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: laptop-pc
 *
 * Created on January 27, 2016, 4:46 PM
 */
#include "CEmployee.h"
#include "CManager.h"
#include "CDatabase.h"
#include <cstdlib>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //check default constructors

    tm hiringYear;
    hiringYear.tm_year=2012;
    vector<CEmployee*> emps;
    CManager mang("SubA_First","SubA_Second",20,hiringYear,"CSE",emps);
    mang.DisplayEmployee();
    cout<<"Default Constructor Check\n\n"; 

    
    //check copy constructors
    CManager mang1=mang;
    mang1.DisplayEmployee();
    cout<<"Copy Constructor Check\n\n";
    
    //check assignment operator
    hiringYear.tm_year=2015;
    CManager mang3("SubB_First","SubB_Second",10,hiringYear,"CSE",emps);
    mang3.DisplayEmployee();
    mang1=mang3;
    mang1.DisplayEmployee();
    cout<<"Assignment Operator Check\n\n";
    
    //Add subordinates
    emps.push_back(&mang);
    emps.push_back(&mang1);
    
    //Add records to database
    vector<CEmployee*> allEmp;
    CDatabase emp_data(allEmp);
    hiringYear.tm_year=1998;
    emp_data.AddRecord(new CManager("FirstA","LastA",30,hiringYear,"CSE",emps));
    hiringYear.tm_year=1999;
    emp_data.AddRecord(new CManager("FirstB","LastB",32,hiringYear,"CSE",emps));
    hiringYear.tm_year=2000;
    emp_data.AddRecord(new CManager("FirstC","LastC",35,hiringYear,"EGR",emps));
    hiringYear.tm_year=2001;
    emp_data.AddRecord(new CManager("FirstD","LastD",40,hiringYear,"CHE",emps));
    hiringYear.tm_year=2002;
    emp_data.AddRecord(new CManager("FirstE","LastE",50,hiringYear,"EGR",emps));
    //display all records
    emp_data.DisplayRecords();
    
    return 0;
}

