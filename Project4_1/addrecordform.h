#ifndef ADDRECORDFORM_H
#define ADDRECORDFORM_H

#include <QDialog>

namespace Ui {
class AddRecordForm;
}

class AddRecordForm : public QDialog
{
    Q_OBJECT

public:
    explicit AddRecordForm(QWidget *parent = 0);
    ~AddRecordForm();

    QString getFirstName() const;
    QString getLastName() const;
    QString getSalary() const;
    QString getHiringYear() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddRecordForm *ui;
};

#endif // ADDRECORDFORM_H
