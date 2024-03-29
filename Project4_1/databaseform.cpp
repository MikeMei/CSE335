#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include "concretebuildercomma.h"
#include "concretebuildertab.h"

#include <QFile>
#include <QTextStream>
using namespace std;

DatabaseForm::DatabaseForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseForm)
{
    ui->setupUi(this);
    ui->DataTable->setSortingEnabled(false);
    connect(ui->DataTable->horizontalHeader(), SIGNAL(sectionClicked(int)),this,SLOT(on_SectionClick(int)));
    setWindowTitle("Databse Form");
}

DatabaseForm::~DatabaseForm()
{
    delete ui;
}

void DatabaseForm::on_AddRecordButton_clicked()
{
    AddRecordForm* form = new AddRecordForm(this);
    form->show();
    form->setWindowTitle("Add Record Form");
    int res = form->exec();
    if(res == QDialog::Rejected)
    {
        return;
    }
    //set values in table
    QString First = form->getFirstName();
    QString Last = form->getLastName();
    QString Salary = form->getSalary();
    QString Hire = form->getHiringYear();
    //update employee
    form->setEmployeeFirstName();
    form->setEmployeeLastName();
    form->setEmployeeSalary();
    form->setEmployeeHiringYear();
    employeeDB.addEmployee(form->getEmployee());

    ui->DataTable->insertRow(ui->DataTable->rowCount());
    int rowCounter = ui->DataTable->rowCount()-1;

    ui->DataTable->setItem(rowCounter, 0, new QTableWidgetItem(First));
    ui->DataTable->setItem(rowCounter, 1, new QTableWidgetItem(Last));
    ui->DataTable->setItem(rowCounter, 2, new QTableWidgetItem(Salary));
    ui->DataTable->setItem(rowCounter, 3, new QTableWidgetItem(Hire));
}

void DatabaseForm::on_SectionClick(int col) {
    //unable to create sortable object


    BubbleSortIncreasing bsi;
    BubbleSortDecreasing bsd;
    vector<Employee*> temp = employeeDB.getEmployeeVector();
    vector<Employee*> sorted;


    if(col == 0 && sortOtherDirection == false) {

        SortableByFirstName sbfn(temp);
        bsi.sort(&sbfn);
        sorted = sbfn.getEmployeeVector();

        sortOtherDirection = true;
    }
    else if(col == 1 && sortOtherDirection == false) {

        SortableByLastName sbln(temp);
        bsi.sort(&sbln);
        sorted = sbln.getEmployeeVector();

        sortOtherDirection = true;
    }
    else if(col == 2 && sortOtherDirection == false) {

        SortableBySalary sbs(temp);
        bsi.sort(&sbs);
        sorted = sbs.getEmployeeVector();

        sortOtherDirection = true;
    }
    else if(col == 3 && sortOtherDirection == false) {

        SortableByHiringYear sbh(temp);
        bsi.sort(&sbh);
        sorted = sbh.getEmployeeVector();

        sortOtherDirection = true;
    }
    else if(col == 0 && sortOtherDirection == true) {

        SortableByFirstName sbfn(temp);
        bsd.sort(&sbfn);
        sorted = sbfn.getEmployeeVector();

        sortOtherDirection = false;
    }
    else if(col == 1 && sortOtherDirection == true) {

        SortableByLastName sbln(temp);
        bsd.sort(&sbln);
        sorted = sbln.getEmployeeVector();
        sortOtherDirection = false;

    }
    else if(col == 2 && sortOtherDirection == true) {

        SortableBySalary sbs(temp);
        bsd.sort(&sbs);
        sorted = sbs.getEmployeeVector();
        sortOtherDirection = false;

    }
    else if(col == 3 && sortOtherDirection == true) {

        SortableByHiringYear sbh(temp);
        bsd.sort(&sbh);
        sorted = sbh.getEmployeeVector();
        sortOtherDirection = false;

    }


    // Goes through the employeeDB and sets each value in the table
    for(int i = 0; i < ui->DataTable->rowCount(); i++) {
        Employee* temp2 = sorted[i];
        //Employee* temp3 = employeeDB.getEmployee(i);
        QString FN = QString::fromStdString(temp2->getFirstName());
        QString LN = QString::fromStdString(temp2->getLastName());
        QString S = QString::number(temp2->getSalary());
        QString H = QString::number(temp2->getHiringYear());
        ui->DataTable->setItem(i, 0, new QTableWidgetItem(FN));
        ui->DataTable->setItem(i, 1, new QTableWidgetItem(LN));
        ui->DataTable->setItem(i, 2, new QTableWidgetItem(S));
        ui->DataTable->setItem(i, 3, new QTableWidgetItem(H));

    }

}

void DatabaseForm::on_actionSave_triggered()
{
    //    QFile outputComma("output_comma.txt");
    //    QFile outputTab("output_tab.txt");
    //    outputComma.open(QIODevice::WriteOnly);
    //    outputTab.open(QIODevice::WriteOnly);

    //    QTextStream streamComma(&outputComma);
    //    QTextStream streamTab(&outputTab);

    //    streamComma << "FirstName, LastName, Salary, HireYear\r\n";
    //    streamTab << "FirstName\tLastName\tSalary\tHireYear\t\r\n";

    //    for(int i = 0; i <  ui->DataTable->rowCount(); i++)
    //    {
    //        for(int j = 0; j < ui->DataTable->columnCount(); j++)
    //        {
    //            streamComma << ui->DataTable->item(i,j)->text() << ", ";
    //            streamTab << ui->DataTable->item(i,j)->text() << "\t";
    //        }
    //        streamComma << "\r\n";
    //        streamTab << "\r\n";
    //    }

    //    outputComma.close();
    //    outputTab.close();


        concreteBuilderComma comma(employeeDB);
        concreteBuilderTab tab(employeeDB);

        comma.printToFile();
        tab.printToFile();
}
