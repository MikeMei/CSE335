/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: School
 *
 * Created on March 2, 2016, 11:58 PM
 */

#include <cstdlib>
#include "File.h"
#include "Entity.h"
#include "Directory.h"
#include "Visitor.h"
#include "PrintVisitor.h"
#include "NameCountingVisitor.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    File f1("f1.txt", 100);
    File f2("f2.txt", 80);
    Directory d1("d1");
    d1.addEntity(&f1);
    d1.addEntity(&f2);
    
    File f3("f3.txt", 20);
    File f4("f4.txt", 30);
    File f5("f5.txt", 40);
    Directory d2("d2");
    d2.addEntity(&f3);
    d2.addEntity(&f4);
    d2.addEntity(&f5);
    
    Directory d3("d3");
    d3.addEntity(&d1);
    d3.addEntity(&d2);
    
    d3.print();
    cout << endl << "**********************************************" << endl;
    PrintVisitor pv;
    d3.Accept(&pv);
    cout << endl << "**********************************************" << endl;
    NameCountingVisitor nv;
    d3.Accept(&nv);
    cout << nv.getValue() << endl;
    
    return 0;
}

