#ifndef HECARIM_H
#define HECARIM_H

#include <QObject>
#include "abilityinterface.h"

class Hecarim : public AbilityAbstract
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
