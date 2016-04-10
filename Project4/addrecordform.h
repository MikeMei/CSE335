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

private:
    Ui::AddRecordForm *ui;
};

#endif // ADDRECORDFORM_H
