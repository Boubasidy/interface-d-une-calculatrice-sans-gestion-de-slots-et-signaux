#include <iostream>
#include "calculatrice.hh"
#include <QApplication>

using namespace std;

int main(int argc , char *argv[])
{
    QApplication a(argc , argv);
    calculatrice app ;
    app.show();
    return a.exec();
}
