#include "databaseform.h"
#include "ui_databaseform.h"
#include "addrecordform.h"
#include <QFile>
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
    QString First = form->getFirstName();
    QString Last = form->getLastName();
    QString Salary = form->getSalary();
    QString Hire = form->getHiringYear();

    ui->DataTable->insertRow(ui->DataTable->rowCount());
    int rowCounter = ui->DataTable->rowCount()-1;

    ui->DataTable->setItem(rowCounter, 0, new QTableWidgetItem(First));
    ui->DataTable->setItem(rowCounter, 1, new QTableWidgetItem(Last));
    ui->DataTable->setItem(rowCounter, 2, new QTableWidgetItem(Salary));
    ui->DataTable->setItem(rowCounter, 3, new QTableWidgetItem(Hire));
}

void DatabaseForm::on_DataTable_clicked(const QModelIndex &index)
{

}

void DatabaseForm::on_actionSave_triggered()
{
    QFile file("C:/Users/bollavaram/Desktop/someFile.txt");

     if (file.open(QIODevice::WriteOnly))
     {
         QDataStream stream(&file);
         qint32 n = ui->DataTable->rowCount();
         qint32 m = ui->DataTable->columnCount();
         stream << n << m;

         for (int i=0; i<n; ++i)
         {
          for (int j=0; j<m; j++)
            {
              ui->DataTable->item(i,j)->write(stream);
            }
          }
        file.close();
      }
}
