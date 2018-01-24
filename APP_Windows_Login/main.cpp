#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QTextCodec>
#include <QQmlContext>

#include <LibGlobal.h>


#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QQmlApplicationEngine engine;

    //--------------------------------------------------------------------------------
    //界面UI字符串
    LibGlobal libGlobal;
    QJsonObject ui = libGlobal.getJsonUI();
    engine.rootContext()->setContextProperty("ui",ui);
    //--------------------------------------------------------------------------------

    engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
