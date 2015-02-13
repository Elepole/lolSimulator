#include <QCoreApplication>
#include "hecarim.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Hecarim test;

    test.increaseStat(18);

    return a.exec();
}
