#include "LibGlobal.h"


LibGlobal::LibGlobal()
{
}

QJsonObject LibGlobal::getJsonUI()
{
//    UI ui = new UI();
//    return ui.getJsonUI();
    QJsonObject json;
    json.insert("key","value");
    return json;
}
