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

void DatabaseForm::on_DataTable_clicked(const QModelIndex &index)
{
    //** not in clicked
    // use data-table_ section clicked
    //do sort in here
    //sort the employeeDB
    //re-assign values to table
    /*
    for(int i = 0; i < ui->DataTable->rowCount(); i++) {
        for(int j = 0; j < ui->DataTable->columnCount(); i++) {
            ui->DataTable->setItem(i, 0, new QTableWidgetItem("lol"));
            ui->DataTable->setItem(i, 1, new QTableWidgetItem("lol"));
            ui->DataTable->setItem(i, 2, new QTableWidgetItem("lol"));
            ui->DataTable->setItem(i, 3, new QTableWidgetItem("lol"));
        }
    }
    */
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
}
