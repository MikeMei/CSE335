#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include "employee.h"
#include "employeedb.h"
#include <QMainWindow>
#include <QTableWidget>

namespace Ui {
class DatabaseForm;
}

class DatabaseForm : public QMainWindow
{
    Q_OBJECT


public:
    EmployeeDB employeeDB;
    explicit DatabaseForm(QWidget *parent = 0);
    ~DatabaseForm();

private:
    Ui::DatabaseForm *ui;

private slots:
    void on_AddRecordButton_clicked();
    void on_DataTable_clicked(const QModelIndex &index);
    void on_actionSave_triggered();
};

#endif // DATABASEFORM_H
