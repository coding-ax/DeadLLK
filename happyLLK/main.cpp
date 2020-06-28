#include "mainwindow.h"
#include "index.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    index w;
    w.show();

    return a.exec();
}
