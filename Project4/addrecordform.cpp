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
{
    return ui->FirstNameBox->text();
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

void AddRecordForm::on_buttonBox_accepted()
{
    accept();
}

void AddRecordForm::on_buttonBox_rejected()
{
    reject();
}
