#ifndef NAMEVIEW_H
#define NAMEVIEW_H

#include <QObject>
#include "namemodel.h"
#include <iostream>

class NameView : public QObject {
    Q_OBJECT
public:
    NameView(NameModel* model, QObject* parent = nullptr);
    virtual void print() = 0;

private:
    NameModel* m_name;

public slots:
    void updateView();
};

#endif // NAMEVIEW_H
