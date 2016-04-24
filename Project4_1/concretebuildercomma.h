#ifndef CONCRETEBUILDERCOMMA_H
#define CONCRETEBUILDERCOMMA_H
#include <QFile>
#include <QTextStream>
#include "abstractbuilder.h"
#include "databaseform.h"
#include "employeedb.h"

using namespace std;

class concreteBuilderComma
{
protected:
    abstractBuilder* Builder;
    QString FN, LN, S, HY;
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
        empdb = emp.getEmloyeeVector();
    }

    void printToFile()
    {
        QFile outputComma("output_comma.txt");
        outputComma.open(QIODevice::WriteOnly);

        QTextStream streamComma(&outputComma);

        streamComma << "FirstName, LastName, Salary, HireYear\r\n";

        for(int i = 0; i < empdb.size(); i++)
        {

        }
        for(int i = 0; i <  ui->DataTable->rowCount(); i++)
        {
            for(int j = 0; j < ui->DataTable->columnCount(); j++)
            {
                streamComma << ui->DataTable->item(i,j)->text() << ", ";
            }
            streamComma << "\r\n";
        }

        outputComma.close();
    }

//    void addFirstName(QString FN)
//    {

//    }

//    void addLastName(QString LN)
//    {

//    }

//    void addSalary(QString S)
//    {

//    }

//    void addHireYear(QString HY)
//    {

//    }
};


#endif // CONCRETEBUILDERCOMMA_H
