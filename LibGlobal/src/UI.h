#ifndef UI_H
#define UI_H

#include <QJsonObject>
#include <QColor>
#include <QException>

class UI
{
public:
    UI();

    QJsonObject getJsonUI();

    void reSetJsonUI(QJsonObject ui)  throw(QString);

    QString getBackColor() const;
    void setBackColor(const QString &backColor);

    QString getWinColor() const;
    void setWinColor(const QString &winColor);

    QString getFontColor() const;
    void setFontColor(const QString &fontColor);

    QString getFontLightColor() const;
    void setFontLightColor(const QString &fontLightColor);

    QString getFontTipsColor() const;
    void setFontTipsColor(const QString &fontTipsColor);

    QString getThemeColor() const;
    void setThemeColor(const QString &themeColor);

private:
    QString _backColor;
    QString _winColor;
    QString _fontColor;
    QString _fontLightColor;
    QString _fontTipsColor;
    QString _themeColor;
};

#endif // UI_H
