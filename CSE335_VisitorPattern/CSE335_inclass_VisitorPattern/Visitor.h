/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: School
 *
 * Created on March 3, 2016, 12:19 AM
 */

#ifndef VISITOR_H
#define VISITOR_H
/* Forward declaration must be in the visitor class
 * Compiler needs to know what File and Directory are
 */
class File;
class Directory;

class Visitor{
public:
    virtual void VisitFile(File*)=0;
    virtual void VisitDirectory(Directory*)=0;    
};


#endif /* VISITOR_H */

