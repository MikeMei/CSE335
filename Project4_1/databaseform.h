#ifndef DATABASEFORM_H
#define DATABASEFORM_H

#include "employee.h"
#include "employeedb.h"
#include <QMainWindow>
#include <QTableWidget>
//sorting stuff
#include "bubblesorttemplate.h"
#include "bubblesortincreasing.h"
#include "bubblesortdecreasing.h"
#include "sortablevector.h"
#include "sortableemployeedatabase.h"
#include "sortablebyfirstname.h"
#include "sortablebylastname.h"
#include "sortablebysalary.h"
#include "sortablebyhiringyear.h"

namespace Ui {
class DatabaseForm;
}

class DatabaseForm : public QMainWindow
{
    Q_OBJECT


public:
    EmployeeDB employeeDB;
    bool sortOtherDirection;
    explicit DatabaseForm(QWidget *parent = 0);
    ~DatabaseForm();

private:
    Ui::DatabaseForm *ui;

private slots:
    void on_AddRecordButton_clicked();

    void on_actionSave_triggered();
    void on_SectionClick(int col);
};

#endif // DATABASEFORM_H
