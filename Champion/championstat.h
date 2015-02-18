#ifndef CHAMPIONSTAT_H
#define CHAMPIONSTAT_H

#include <QObject>
#include <QDebug>
#include "magicresit.h"




class ChampionStat : public QObject
{
    Q_OBJECT
public:
    explicit ChampionStat(QObject *parent = 0);
    explicit ChampionStat(
            float attackDamage,float attackSpeed,float armor, float health,float healthRegeneration,float mana,float manaRegeneration,float movementSpeed,
            float attackDamageGrowth,float attackSpeedGrowth,float armorGrowth,float healthGrowth,float healthRegenerationGrowth, float manaGrowth, float manaRegenerationGrowth,
            magicResist magicResistanceType,
            QObject *parent = 0);
    virtual ~ChampionStat();

    void increaseStat();




    int getLevel() const;
    void setLevel(int value);

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

    int percentage,level;

    void calculatePercentage();
    void calculateFinalStat(float &statFinal, float &statBase, float &statGrowth);
    void magicResistanceInit(magicResist type);


signals:

public slots:

};

#endif // CHAMPIONSTAT_H
