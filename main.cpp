#include "databasehandler.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dataBaseHandler w;
    w.show();
    return a.exec();
}
