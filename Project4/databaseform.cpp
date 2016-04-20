#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
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

//    QString First = form->getFirstName();
//    QString Last = form->getLastName();
//    QString Salary = form->getSalary();
//    QString Hire = form->getHiringYear();

//    ui->DataTable->insertRow(ui->DataTable->rowCount());
//    int rowCounter = ui->DataTable->rowCount()-1;

//    ui->DataTable->setItem(rowCounter, 0, new QTableWidgetItem(First));
//    ui->DataTable->setItem(rowCounter, 1, new QTableWidgetItem(Last));
//    ui->DataTable->setItem(rowCounter, 2, new QTableWidgetItem(Salary));
//    ui->DataTable->setItem(rowCounter, 3, new QTableWidgetItem(Hire));

}