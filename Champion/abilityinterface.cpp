#include "abilityinterface.h"

/*!
  * \class AbilityInterface
  * \brief AbilityInterface
  * \since 0.0.3
  *
  * Define the slot all champ must share
  */


AbilityAbstract::AbilityAbstract(QObject *parent) : ChampionStat(parent)
{

}

AbilityAbstract::AbilityAbstract(float attackDamage, float attackSpeed, float armor, float health, float healthRegeneration, float mana, float manaRegeneration, float movementSpeed, float attackDamageGrowth, float attackSpeedGrowth, float armorGrowth, float healthGrowth, float healthRegenerationGrowth, float manaGrowth, float manaRegenerationGrowth, magicResist magicResistanceType, QObject *parent) :
    ChampionStat(attackDamage,attackSpeed,armor,health,healthRegeneration,mana,manaRegeneration,movementSpeed,attackDamageGrowth,attackSpeedGrowth,armorGrowth,healthGrowth,healthRegenerationGrowth,manaGrowth,manaRegenerationGrowth,magicResistanceType,parent)
{

}

int AbilityAbstract::getSeconds() const
{
    return seconds;
}

void AbilityAbstract::setSeconds(int value)
{
    seconds = value;
}

float AbilityAbstract::physicalDamage(float base, float pourcentTotalAd, float pourcentBonusAd)
{
    emit physicalDamageDealt(this->damage(base,pourcentTotalAd,pourcentBonusAd,0));
}

float AbilityAbstract::magicalDamage(float base, float pourcentAp)
{
    emit magicalDamageDealt(this->damage(base,0,0,pourcentAp));
}


float AbilityAbstract::damage(float base, float pourcentTotalAd, float pourcentBonusAd, float pourcentAp)
{
    return base + ((attackDamageFinal / 100) * pourcentTotalAd) + (((attackDamageFinal - attackDamage) /100 ) * pourcentBonusAd) + ((abilityPower / 100) * pourcentAp);
}



float AbilityAbstract::baseAdBonusRatio()
{

}
