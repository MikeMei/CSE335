#include "addrecordform.h"
#include "ui_addrecordform.h"

AddRecordForm::AddRecordForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecordForm)
{
    ui->setupUi(this);
}

AddRecordForm::~AddRecordForm()
{
    delete ui;
}

QString AddRecordForm::getFirstName() const
{   QString temp = ui->FirstNameBox->text();
    //emp.setFirstName(temp.toStdString());

    return temp;
}

QString AddRecordForm::getLastName() const
{
    return ui->LastNameBox->text();
}

QString AddRecordForm::getSalary() const
{
    return ui->SalaryBox->text();
}

QString AddRecordForm::getHiringYear() const
{
    return ui->HiringYearBox->text();
}

void AddRecordForm::setEmployeeFirstName() {
    QString temp = ui->FirstNameBox->text();
    emp.setFirstName(temp.toStdString());
}
void AddRecordForm::setEmployeeLastName() {
    QString temp = ui->LastNameBox->text();
    emp.setLastName(temp.toStdString());
}
void AddRecordForm::setEmployeeSalary() {
    QString temp = ui->SalaryBox->text();
    emp.setsalary(temp.toInt());
}
void AddRecordForm::setEmployeeHiringYear() {
    QString temp = ui->HiringYearBox->text();
    emp.sethiringYear(temp.toInt());
}
Employee* AddRecordForm::getEmployee(){
    return &emp;
}

void AddRecordForm::on_buttonBox_accepted()
{
    accept();
}

void AddRecordForm::on_buttonBox_rejected()
{
    reject();
}
