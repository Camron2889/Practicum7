#ifndef NAMEFIRSTVIEW_H
#define NAMEFIRSTVIEW_H

#include <QObject>
#include "nameview.h"

class NameFirstView : public NameView {
public:
    NameFirstView(NameModel* model, QObject* parent);
    void print();
};

#endif // NAMEFIRSTVIEW_H
