#ifndef NAMELASTVIEW_H
#define NAMELASTVIEW_H

#include <QObject>
#include "nameview.h"

class NameLastView : public NameView {
public:
    NameLastView(NameModel* model, QObject* parent);
};

#endif // NAMELASTVIEW_H
