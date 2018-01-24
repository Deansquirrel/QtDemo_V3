#include "LibGlobal.h"


LibGlobal::LibGlobal()
{
}

QJsonObject LibGlobal::getJsonUI()
{
    UI ui;
    return ui.getJsonUI();
}
