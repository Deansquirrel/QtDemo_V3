#ifndef LIBGLOBAL_H
#define LIBGLOBAL_H

#include "libglobal_global.h"

#include <QJsonObject>
#include <src/UI.h>

class LIBGLOBALSHARED_EXPORT LibGlobal
{

public:
    LibGlobal();

    QJsonObject getJsonUI();

};

#endif // LIBGLOBAL_H
