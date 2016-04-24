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

    concreteBuilderTab(EmployeeDB emp)
    {
        empdb = emp.getEmployeeVector();
    }

    void printToFile()
    {
//        QFile outputTab("output_tab.txt");
//        outputTab.open(QIODevice::WriteOnly);

        ofstream outputTab;
        outputTab.open("output_tab.txt");

//        QTextStream streamTab(&outputTab);

//        streamTab << "FirstName\tLastName\tSalary\tHireYear\t\n";
        outputTab << "FirstName\tLastName\tSalary\tHireYear\t\n";

        for(int i = 0; i < empdb.size(); i++)
        {
            FN = empdb[i]->getFirstName();
            LN = empdb[i]->getLastName();
            S = to_string(empdb[i]->getSalary());
            HY = to_string(empdb[i]->getHiringYear());

//            streamTab << FN << "\t" << LN << "\t" << S << "\t" << HY << "\n";
            outputTab << FN << "\t" << LN << "\t" << S << "\t" << HY << "\n";
        }
        outputTab.close();
    }
};

#endif // CONCRETEBUILDERTAB_H
