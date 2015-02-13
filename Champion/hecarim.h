#ifndef HECARIM_H
#define HECARIM_H

#include <QObject>

class Hecarim : public QObject
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
