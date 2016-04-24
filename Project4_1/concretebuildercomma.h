#ifndef CONCRETEBUILDERCOMMA_H
#define CONCRETEBUILDERCOMMA_H
#include <QFile>
#include <QTextStream>
#include <string>
#include <fstream>
#include "abstractbuilder.h"
#include "databaseform.h"
#include "employeedb.h"

using namespace std;

class concreteBuilderComma
{
protected:
    abstractBuilder* Builder;
    string FN, LN, S, HY;
    vector<Employee*> empdb;
public:
//    concreteBuilderComma(QString First, QString Last, QString Sal, QString Hire)
//    {
//        FN = First;
//        LN = Last;
//        S = Sal;
//        HY = Hire;
//    }

    concreteBuilderComma(EmployeeDB emp)
    {
        empdb = emp.getEmployeeVector();
    }

    void printToFile()
    {
//        QFile outputComma("output_comma.txt");
//        outputComma.open(QIODevice::WriteOnly);

        ofstream outputComma;
        outputComma.open("output_comma.txt");

//        QTextStream streamComma(&outputComma);

//        streamComma << "FirstName, LastName, Salary, HireYear\r\n";
        outputComma << "FirstName, LastName, Salary, HireYear\n";

        for(int i = 0; i < empdb.size(); i++)
        {
            FN = empdb[i]->getFirstName();
            LN = empdb[i]->getLastName();
            S = to_string(empdb[i]->getSalary());
            HY = to_string(empdb[i]->getHiringYear());

//            streamComma << FN << ", " << LN << ", " << S << ", " << HY << "\n";
            outputComma << FN << ", " << LN << ", " << S << ", " << HY << "\n";
        }
        outputComma.close();
    }
};


#endif // CONCRETEBUILDERCOMMA_H
