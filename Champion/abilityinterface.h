#ifndef ABILITYINTERFACE_H
#define ABILITYINTERFACE_H

#include "championstat.h"
class AbilityAbstract : public ChampionStat
{
    Q_OBJECT
public:
    explicit AbilityAbstract(QObject *parent=0);
    explicit AbilityAbstract(
            float attackDamage,float attackSpeed,float armor, float health,float healthRegeneration,float mana,float manaRegeneration,float movementSpeed,
            float attackDamageGrowth,float attackSpeedGrowth,float armorGrowth,float healthGrowth,float healthRegenerationGrowth, float manaGrowth, float manaRegenerationGrowth,
            magicResist magicResistanceType,
            QObject *parent = 0);
    int getSeconds() const;
    void setSeconds(int value);

protected:
    float passivAbilityDps,firstAbilityDps,secondAbilityDps,thirdAbilityDps,fourthAbilityDps,autoAttackDps;
    int seconds;

    virtual float physicalDamage(float base,float pourcentTotalAd, float pourcentBonusAd);
    virtual float magicalDamage(float base,float pourcentAp);

private:
    virtual float damage(float base,float pourcentTotalAd, float pourcentBonusAd, float pourcentAp);

signals:
    void areaOfEffect();
    void spellEffect();
    void onHitEffect();
    void physicalDamageDealt(float damage);
    void magicalDamageDealt(float damage);


public slots:
    virtual void passivAbility();
    virtual void firstAbility(int abilityLevel);
    virtual void secondAbility(int abilityLevel);
    virtual void thirdAbility(int abilityLevel);
    virtual void fourthAbility(int abilityLevel);
};

#endif // ABILITYINTERFACE_H
