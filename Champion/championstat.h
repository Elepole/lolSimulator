#ifndef CHAMPIONSTAT_H
#define CHAMPIONSTAT_H

#include <QObject>
#include <QDebug>

class ChampionStat : public QObject
{
    Q_OBJECT
public:
    explicit ChampionStat(QObject *parent = 0);
    explicit ChampionStat(
            float attackDamage,float attackSpeed,float armor, float health,float healthRegeneration, float magicResistance,float mana,float manaRegeneration,float movementSpeed,
            float attackDamageGrowth,float attackSpeedGrowth,float armorGrowth,float healthGrowth,float healthRegenerationGrowth, float magicResistanceGrowth, float manaGrowth, float manaRegenerationGrowth,
            QObject *parent = 0);
    ~ChampionStat();

    void increaseStat(int level);


protected:


    //Base offensive stat
    float attackDamage,attackSpeed,armorPenetration,criticalStrikeChance,criticalStrikeDamage,lifeSteal;

    //Base defensive stat
    float armor,health,healthRegeneration,magicResistance;

    //Base Ability stat
    float mana,manaRegeneration,abilityPower,cooldownReduction,magicPenetration,spellVamp;

    //Other base stat
    float movementSpeed;

    //Growth stat
    float attackDamageGrowth,attackSpeedGrowth,armorGrowth,healthGrowth,healthRegenerationGrowth,magicResistanceGrowth,manaGrowth,manaRegenerationGrowth;

    //Final stat
    float attackDamageFinal,attackSpeedFinal,armorFinal,healthFinal,healthRegenerationFinal,manaFinal,manaRegenerationFinal,magicResistanceFinal;

    int percentage;

    void calculatePercentage(int level);
    void calculateFinalStat(float &statFinal, float &statBase, float &statGrowth);


signals:

public slots:
};

#endif // CHAMPIONSTAT_H
