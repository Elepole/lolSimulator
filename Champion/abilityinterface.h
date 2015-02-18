#ifndef ABILITYINTERFACE_H
#define ABILITYINTERFACE_H


class AbilityInterface
{

public:
    int getSeconds() const;
    void setSeconds(int value);

protected:
    float passivAbilityDps,firstAbilityDps,secondAbilityDps,thirdAbilityDps,fourthAbilityDps,autoAttackDps;
    int seconds;

    float damage(float base,float AdBonus, float AdTotal, float Ap);
signals:
    void areaOfEffect();
    void spellEffect();
    void onHitEffect();

public slots:
    virtual void passivAbility();
    virtual void firstAbility(int abilityLevel);
    virtual void secondAbility(int abilityLevel);
    virtual void thirdAbility(int abilityLevel);
    virtual void fourthAbility(int abilityLevel);
};

#endif // ABILITYINTERFACE_H
