/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: laptop-pc
 *
 * Created on March 3, 2016, 12:56 PM
 */
#include "Add.h"
#include "Subtract.h"
#include "Multiply.h"
#include "Divide.h"
#include "Negate.h"
#include "Literal.h"
#include "Expression.h"
#include "BinaryExpression.h"
#include "Visitor.h"
#include "PrintVisitor.h"
#include "EvaluationVisitor.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Subtract* exleft = new Subtract(new Negate
            (new Multiply(new Literal(6), new Literal(5))), new Literal(20));
    
    Expression* ex = new Add(exleft, new Divide(new Literal(100), new Subtract(new Literal(58), 
            new Literal(-2))));
    Expression* exleftright = exleft->getRightOperand();
    cout<<ex->compute() << endl;
    cout<<exleft->compute() << endl;
    cout<<exleftright->compute() << endl;
    
    EvaluationVisitor ev;
    PrintVisitor pv;
    ex->Accept(&ev);
    ex->Accept(&pv);
    
    //cout << endl;
    //cout << "New: " << ev.getValue() << endl;
    //exleft ->Accept(&ev);
    //cout << "New: " << ev.getValue() << endl;
    //exleftright ->Accept(&ev);
    //cout << "New: " << ev.getValue() << endl;
    
    
    return 0;
}

