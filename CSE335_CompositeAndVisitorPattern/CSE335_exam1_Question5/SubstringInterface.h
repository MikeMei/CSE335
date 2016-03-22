/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubstringInterface.h
 * Author: laptop-pc
 *
 * Created on March 22, 2016, 1:27 PM
 */

#ifndef SUBSTRINGINTERFACE_H
#define SUBSTRINGINTERFACE_H

class SubstringInterface{
public:
    virtual unsigned int getSizeA() =0;
    
    virtual unsigned int getSizeB() =0;
        
    virtual bool isEqual(int i, int j) = 0;
        
   
};
#endif /* SUBSTRINGINTERFACE_H */

