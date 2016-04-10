/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExpParser.h
 * Author: laptop-pc
 *
 * Created on April 10, 2016, 1:53 PM
 */

#ifndef EXPPARSER_H
#define EXPPARSER_H

#include "Builder.h"

class ExpParser {
protected:
    Builder* m_expBuilder;
public:
    void setBuilder(ExpBuilder* builder) {
        m_expBuilder=builder;
    }
    void parse(string exp) {
        string literal;
        for(int i=0; i<exp.size(); i++) {
            /* Switch case statements are a substitute for long if statements 
             * that compare a variable to several "integral" values 
             * ("integral" values are simply values that can be expressed as an integer, 
             * such as the value of a char). 
             * The basic format for using switch case is outlined below. 
             * The value of the variable given into switch 
             * is compared to the value following each of the cases, 
             * and when one value matches the value of the variable, 
             * the computer continues executing the program from that point.
             */
            switch(exp[i]) {
                case '(':
                    if(literal.size() >0) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addLeftParenthesis();
                    break;
                case ')':
                    if(literal.size() > 0) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addRightParenthesis();
                    break;
               case '+':
                    if(literal.size() > 0 ) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("+");
                    break;
               case '-':
                    if(literal.size() > 0 ) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("-");
                    break;
               case '*':
                    if(literal.size() > 0 ) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("*");
                    break;
               case '/':
                    if(literal.size() > 0 ) {
                        m_expBuilder->addLiteral(literal);
                        literal.clear();
                    }
                    m_expBuilder->addOperand("/");
                    break;
               default:
                   literal.push_back(exp[i]);
                   break;
            }
        }
    }
};

#endif /* EXPPARSER_H */

