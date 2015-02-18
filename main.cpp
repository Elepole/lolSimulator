#include <QCoreApplication>
#include "hecarim.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Hecarim test;

    test.setLevel(5);
    test.increaseStat();

    return a.exec();
}
