/********************************************************************************
** Form generated from reading UI file 'databaseform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEFORM_H
#define UI_DATABASEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseForm
{
public:
    QAction *actionSave;
    QWidget *centralWidget;
    QTableWidget *DataTable;
    QPushButton *AddRecordButton;
    QPushButton *OkButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DatabaseForm)
    {
        if (DatabaseForm->objectName().isEmpty())
            DatabaseForm->setObjectName(QStringLiteral("DatabaseForm"));
        DatabaseForm->resize(887, 348);
        actionSave = new QAction(DatabaseForm);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(DatabaseForm);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DataTable = new QTableWidget(centralWidget);
        if (DataTable->columnCount() < 4)
            DataTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        DataTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        DataTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        DataTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        DataTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        DataTable->setObjectName(QStringLiteral("DataTable"));
        DataTable->setGeometry(QRect(30, 20, 821, 211));
        DataTable->setSortingEnabled(true);
        DataTable->setColumnCount(4);
        AddRecordButton = new QPushButton(centralWidget);
        AddRecordButton->setObjectName(QStringLiteral("AddRecordButton"));
        AddRecordButton->setGeometry(QRect(50, 240, 93, 28));
        OkButton = new QPushButton(centralWidget);
        OkButton->setObjectName(QStringLiteral("OkButton"));
        OkButton->setGeometry(QRect(740, 240, 93, 28));
        DatabaseForm->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DatabaseForm);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 887, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        DatabaseForm->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DatabaseForm);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DatabaseForm->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DatabaseForm);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DatabaseForm->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);

        retranslateUi(DatabaseForm);
        QObject::connect(OkButton, SIGNAL(clicked()), DatabaseForm, SLOT(close()));

        QMetaObject::connectSlotsByName(DatabaseForm);
    } // setupUi

    void retranslateUi(QMainWindow *DatabaseForm)
    {
        DatabaseForm->setWindowTitle(QApplication::translate("DatabaseForm", "DatabaseForm", 0));
        actionSave->setText(QApplication::translate("DatabaseForm", "Save", 0));
        QTableWidgetItem *___qtablewidgetitem = DataTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DatabaseForm", "First Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = DataTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DatabaseForm", "Last Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = DataTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DatabaseForm", "Salary", 0));
        QTableWidgetItem *___qtablewidgetitem3 = DataTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DatabaseForm", "Hiring Year", 0));
        AddRecordButton->setText(QApplication::translate("DatabaseForm", "Add Record", 0));
        OkButton->setText(QApplication::translate("DatabaseForm", "OK", 0));
        menuFile->setTitle(QApplication::translate("DatabaseForm", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class DatabaseForm: public Ui_DatabaseForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEFORM_H
