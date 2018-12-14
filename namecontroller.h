#ifndef NAMECONTROLLER_H
#define NAMECONTROLLER_H

#include <QObject>
#include "namemodel.h"

class NameController
{
public:
    NameController(NameModel* model, QObject* parent);

signals:
    void quit();

public slots:
    void getName();
};

#endif // NAMECONTROLLER_H
