#include "databaseform.h"
#include <QApplication>
#include "employee.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DatabaseForm w;
    w.show();
    //Employee steve("steve", "smith", 20000, 1999);

    return a.exec();
}
