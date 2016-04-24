#ifndef CONCRETEBUILDERTAB_H
#define CONCRETEBUILDERTAB_H
#include <QFile>
#include <QTextStream>
#include "abstractbuilder.h"

using namespace std;

class concreteBuilderTab
{
protected:
    abstractBuilder* Builder;
    QString FN, LN, S, HY;

public:
//    concreteBuilderComma(QString First, QString Last, QString Sal, QString Hire)
//    {
//        FN = First;
//        LN = Last;
//        S = Sal;
//        HY = Hire;
//    }

    concreteBuilderComma()
    {

    }

    void printToFile()
    {
            QFile outputTab("output_tab.txt");
            outputTab.open(QIODevice::WriteOnly);

            QTextStream streamTab(&outputTab);

            streamTab << "FirstName\tLastName\tSalary\tHireYear\t\r\n";

            for(int i = 0; i <  ui->DataTable->rowCount(); i++)
            {
                for(int j = 0; j < ui->DataTable->columnCount(); j++)
                {
                    streamTab << ui->DataTable->item(i,j)->text() << "\t";
                }
                streamTab << "\r\n";
            }

            outputTab.close();
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

#endif // CONCRETEBUILDERTAB_H
