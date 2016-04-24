/********************************************************************************
** Form generated from reading UI file 'addrecordform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORDFORM_H
#define UI_ADDRECORDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRecordForm
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *FirstNameLabel;
    QLabel *LastNameLabel;
    QLabel *SalaryLabel;
    QLabel *HiringYearLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *FirstNameBox;
    QLineEdit *LastNameBox;
    QLineEdit *SalaryBox;
    QLineEdit *HiringYearBox;

    void setupUi(QDialog *AddRecordForm)
    {
        if (AddRecordForm->objectName().isEmpty())
            AddRecordForm->setObjectName(QStringLiteral("AddRecordForm"));
        AddRecordForm->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddRecordForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(AddRecordForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 65, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        FirstNameLabel = new QLabel(layoutWidget);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));

        verticalLayout_2->addWidget(FirstNameLabel);

        LastNameLabel = new QLabel(layoutWidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));

        verticalLayout_2->addWidget(LastNameLabel);

        SalaryLabel = new QLabel(layoutWidget);
        SalaryLabel->setObjectName(QStringLiteral("SalaryLabel"));

        verticalLayout_2->addWidget(SalaryLabel);

        HiringYearLabel = new QLabel(layoutWidget);
        HiringYearLabel->setObjectName(QStringLiteral("HiringYearLabel"));

        verticalLayout_2->addWidget(HiringYearLabel);

        layoutWidget1 = new QWidget(AddRecordForm);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 20, 139, 211));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FirstNameBox = new QLineEdit(layoutWidget1);
        FirstNameBox->setObjectName(QStringLiteral("FirstNameBox"));

        verticalLayout->addWidget(FirstNameBox);

        LastNameBox = new QLineEdit(layoutWidget1);
        LastNameBox->setObjectName(QStringLiteral("LastNameBox"));

        verticalLayout->addWidget(LastNameBox);

        SalaryBox = new QLineEdit(layoutWidget1);
        SalaryBox->setObjectName(QStringLiteral("SalaryBox"));

        verticalLayout->addWidget(SalaryBox);

        HiringYearBox = new QLineEdit(layoutWidget1);
        HiringYearBox->setObjectName(QStringLiteral("HiringYearBox"));

        verticalLayout->addWidget(HiringYearBox);


        retranslateUi(AddRecordForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddRecordForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddRecordForm, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), AddRecordForm, SLOT(close()));

        QMetaObject::connectSlotsByName(AddRecordForm);
    } // setupUi

    void retranslateUi(QDialog *AddRecordForm)
    {
        AddRecordForm->setWindowTitle(QApplication::translate("AddRecordForm", "Dialog", 0));
        FirstNameLabel->setText(QApplication::translate("AddRecordForm", "First Name", 0));
        LastNameLabel->setText(QApplication::translate("AddRecordForm", "Last Name", 0));
        SalaryLabel->setText(QApplication::translate("AddRecordForm", "Salary", 0));
        HiringYearLabel->setText(QApplication::translate("AddRecordForm", "Hiring Year", 0));
    } // retranslateUi

};

namespace Ui {
    class AddRecordForm: public Ui_AddRecordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORDFORM_H
