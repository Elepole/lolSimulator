#include "championstat.h"


ChampionStat::ChampionStat(QObject *parent) : QObject(parent)
{

}

ChampionStat::ChampionStat(float attackDamage, float attackSpeed, float armor, float health, float healthRegeneration, float magicResistance, float mana, float manaRegeneration, float movementSpeed, float attackDamageGrowth, float attackSpeedGrowth, float armorGrowth, float healthGrowth, float healthRegenerationGrowth, float magicResistanceGrowth, float manaGrowth, float manaRegenerationGrowth, QObject *parent) :
    QObject(parent),
    attackDamage(attackDamage),attackSpeed(attackSpeed),armor(armor),health(health),healthRegeneration(healthRegeneration),magicResistance(magicResistance),mana(mana),manaRegeneration(manaRegeneration),movementSpeed(movementSpeed),
    attackDamageGrowth(attackDamageGrowth),attackSpeedGrowth(attackSpeedGrowth),armorGrowth(armorGrowth),
    healthGrowth(healthGrowth),healthRegenerationGrowth(healthRegenerationGrowth),magicResistanceGrowth(magicResistanceGrowth),manaGrowth(manaGrowth),manaRegenerationGrowth(manaRegenerationGrowth),
    attackDamageFinal(attackDamage),attackSpeedFinal(attackSpeed),armorFinal(armor),healthFinal(health),healthRegenerationFinal(healthRegeneration),magicResistanceFinal(magicResistance),manaFinal(mana),manaRegenerationFinal(manaRegeneration),percentage(0)
{

}

ChampionStat::~ChampionStat()
{

}

/*!
 * \brief ChampionStat::increaseStat
 * \param level
 */
void ChampionStat::increaseStat(int level)
{
    this->calculatePercentage(level);
    this->calculateFinalStat(attackDamageFinal,attackDamage,attackDamageGrowth);
    this->calculateFinalStat(attackSpeedFinal,attackSpeed,attackSpeedGrowth);
    this->calculateFinalStat(armorFinal,armor,armorGrowth);
    this->calculateFinalStat(healthFinal,health,healthGrowth);
    this->calculateFinalStat(healthRegenerationFinal,healthRegeneration,healthRegenerationGrowth);
    this->calculateFinalStat(manaFinal,mana,manaGrowth);
    this->calculateFinalStat(manaRegenerationFinal,manaRegeneration,manaGrowth);

}


/*!
 * \brief ChampionStat::calculatePercentage
 * \param level
 */
void ChampionStat::calculatePercentage(int level)
{
    //The % of Growth stat is determined by the following formula:
    // Percentage = [(NextLevel × 3.5) + 65]
    //Starting at level 2

    percentage = 0;

    //The percentage at level 18 is always 1700 regardless of the formula.
    if (level == 18) {
        percentage = 1700;

    }
    else
    {
        for(int i=2;i <= level; i +=1)
        {
         percentage += ((i * 3.5) + 65);

        }
    }
}
/*!
 * \brief ChampionStat::calculateFinalStat
 */
void ChampionStat::calculateFinalStat(float& statFinal, float& statBase, float& statGrowth)
{
    statFinal = statBase + ((statGrowth / 100) * percentage);
}


