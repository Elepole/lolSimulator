#ifndef HECARIM_H
#define HECARIM_H

#include <QObject>
#include "championstat.h""
#include "abilityinterface.h"

class Hecarim : public ChampionStat, public AbilityInterface
{
    Q_OBJECT
public:
    explicit Hecarim(QObject *parent = 0);
    virtual ~Hecarim();

protected:


signals:

public slots:
    void passivAbility();
    void firstAbility(int abilityLevel);
    void secondAbility(int abilityLevel);
    void thirdAbility(int abilityLevel);
    void fourthAbility(int abilityLevel):



};

#endif // HECARIM_H
