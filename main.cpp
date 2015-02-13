#include <QCoreApplication>
#include "championstat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ChampionStat Hecarim(100,100,100,100,100,100,100,100,100,100,100,100,100,100);
    Hecarim.setHealth(599.6);
    Hecarim.setHealthGrowth(95);
    Hecarim.increaseStat(3);

    return a.exec();
}
