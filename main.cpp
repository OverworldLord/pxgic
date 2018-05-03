#include "mainwindow.h"
#include <QApplication>
#include "advancedmaths.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainMenu;
    mainMenu.show();

    return a.exec();
}
