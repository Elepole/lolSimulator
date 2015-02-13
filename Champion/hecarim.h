#ifndef HECARIM_H
#define HECARIM_H

#include <QObject>
#include <championstat.h>

class Hecarim : public ChampionStat
{
    Q_OBJECT
public:
    explicit Hecarim(QObject *parent = 0);
    ~Hecarim();

protected:


signals:

public slots:
};

#endif // HECARIM_H
