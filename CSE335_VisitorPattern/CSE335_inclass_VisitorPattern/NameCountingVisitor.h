/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NameCountingVisitor.h
 * Author: School
 *
 * Created on March 3, 2016, 12:31 AM
 */

#ifndef NAMECOUNTINGVISITOR_H
#define NAMECOUNTINGVISITOR_H
#include "Visitor.h"
#include "Entity.h"
#include "Directory.h"
#include <stack>
using namespace std;

class NameCountingVisitor: public Visitor{
protected:
    stack<unsigned int> m_stack;
public:
    virtual void VisitFile(File* file) {
        m_stack.push(file->getName().size());
    }
    
    virtual void VisitDirectory(Directory* dir) {
        unsigned int sum = dir->getName().size();
        for(int i=0; i<dir->getChildrenSize(); i++) {
            dir->getChild(i)->Accept(this);
        }
        
        for(int i=0; i<dir->getChildrenSize(); i++) {
            sum += m_stack.top();
            m_stack.pop();
        }
        
        m_stack.push(sum);
    }
    
    double getValue() {
        unsigned int result = m_stack.top();
        m_stack.pop();
        return result;
    }
};


#endif /* NAMECOUNTINGVISITOR_H */

