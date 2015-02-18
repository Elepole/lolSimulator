#include "hecarim.h"

Hecarim::Hecarim(QObject *parent) : ChampionStat(61.376,0.67,26.72,599.6,9.26,277.2,7.505,345,95,2.5,4,95,0.75,40,0.6,magicResist::HIGH,parent), level(0)
{

}

Hecarim::~Hecarim()
{

}

void Hecarim::firstAbility(int abilityLevel)
{
    int baseDamage =0;
    switch (abilityLevel) {
    case 1:
        baseDamage = 60;
        break;
    case 2:
        baseDamage = 95;
        break;
    case 3:
        baseDamage = 130;
        break;
    case 4:
        baseDamage = 165;
        break;
    case 5:
        baseDamage = 200;
        break;
    default:
        break;
    }

    firstAbilityDps = ((200 + ((attackDamageFinal / 100) *60)) / 2) * seconds

}

void Hecarim::passivAbility()
{
    float speedPercentage =0;
    switch (level) {
    case 1:
        speedPercentage = 15;
        break;
    case 2:
        speedPercentage = 15;
        break;
    case 3:
        speedPercentage = 17.5;
        break;
    case 4:
        speedPercentage = 17.5;
        break;
    case 5:
        speedPercentage = 17.5;
        break;
    case 6:
        speedPercentage = 20;
        break;
    case 7:
        speedPercentage = 20;
        break;
    case 8:
        speedPercentage = 20;
        break;
    case 9:
        speedPercentage = 22.5;
        break;
    case 10:
        speedPercentage = 22.5;
        break;
    case 11:
        speedPercentage = 22.5;
        break;
    case 12:
        speedPercentage = 25;
        break;
    case 13:
        speedPercentage = 25;
        break;
    case 14:
        speedPercentage = 25;
        break;
    case 15:
        speedPercentage = 27.5;
        break;
    case 16:
        speedPercentage = 27.5;
        break;
    case 17:
        speedPercentage = 27.5;
        break;
    case 18:
        speedPercentage = 30;
        break;
    default:
        break;
    }

    attackDamageFinal += ((movementSpeed / 100) * speedPercentage);
    passivAbilityDps = 0;
}
