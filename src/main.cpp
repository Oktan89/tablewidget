#include <iostream>
#include <QApplication>
#include "wmain.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);


    WindowMain *window = new WindowMain;
    window->setWindowTitle("Table test");
    window->show();

    return app.exec();
}