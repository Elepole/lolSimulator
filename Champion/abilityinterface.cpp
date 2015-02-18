#include "abilityinterface.h"

/*!
  * \class AbilityInterface
  * \brief AbilityInterface
  * \since 0.0.3
  *
  * Define the slot all champ must share
  */


int AbilityInterface::getSeconds() const
{
    return seconds;
}

void AbilityInterface::setSeconds(int value)
{
    seconds = value;
}

float AbilityInterface::damage(float base, float AdBonus, float AdTotal, float Ap)
{
    return
}

float AbilityInterface::baseAdBonusRatio()
{

}
