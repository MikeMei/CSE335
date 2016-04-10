/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: laptop-pc
 *
 * Created on April 10, 2016, 1:48 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Node.h"
#include "Builder.h"
#include "ExpBuilder.h"
#include "ExpParser.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ExpBuilder builder;
    ExpParser parser;
    parser.setBuilder(&builder);
    parser.parse("(((3+5)*7)-(6/5))");
    Node* root = builder.getExpression();
    root->print();
    return 0;
}

