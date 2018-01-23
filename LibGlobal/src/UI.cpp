#include "UI.h"

UI::UI()
{
//    QString UI::_backColor = "white";
//    QString UI::_winColor = "#F2F2F2";
//    //QString UI::_winColor = "#EBEBEB";
//    QString UI::_fontColor = "#333333";
//    QString UI::_fontLightColor = "#CCCCCC";
//    QString UI::_fontTipsColor = "#3955A3";
//    QString UI::_themeColor = "#F02E50";
}

QJsonObject UI::getJsonUI()
{
    QJsonObject json;
    json.insert("backColor",this->getBackColor());
    json.insert("winColor",this->getWinColor());
    json.insert("fontColor",this->getFontColor());
    json.insert("fontLigthColor",this->getFontLightColor());
    json.insert("fontTipsColor",this->getFontTipsColor());
    json.insert("themeColor",this->getThemeColor());
    return json;
}

void UI::reSetJsonUI(QJsonObject ui) throw(QString)
{
    if(ui.keys().contains("backColor")){
        QString backColor = ui.value("backColor").toString();
        if(QColor::isValidColor(backColor)){
                this->setBackColor(backColor);
        }
        else{
            throw new QString("JSON UI 中不存在【backColor】");
        }
    }
    if(ui.keys().contains("winColor")){
        QString winColor = ui.value("winColor").toString();
        if(QColor::isValidColor(winColor)){
            this->setWinColor(winColor);
        }
        else{
            throw new QString("JSON UI 中不存在【winColor】");
        }
    }
    if(ui.keys().contains("fontColor")){
        QString fontColor = ui.value("fontColor").toString();
        if(QColor::isValidColor(fontColor)){
            this->setFontColor(fontColor);
        }
        else{
            throw new QString("JSON UI 中不存在【fontColor】");
        }
    }
    if(ui.keys().contains("fontLigthColor")){
        QString fontLigthColor = ui.value("fontLigthColor").toString();
        if(QColor::isValidColor(fontLigthColor)){
            this->setFontLightColor(fontLigthColor);
        }
        else{
            throw new QString("JSON UI 中不存在【fontLigthColor】");
        }
    }
    if(ui.keys().contains("fontTipsColor")){
        QString fontTipsColor = ui.value("fontTipsColor").toString();
        if(QColor::isValidColor(fontTipsColor)){
            this->setFontTipsColor(fontTipsColor);
        }
        else{
            throw new QString("JSON UI 中不存在【fontTipsColor】");
        }
    }
    if(ui.keys().contains("themeColor")){
        QString themeColor = ui.value("themeColor").toString();
        if(QColor::isValidColor(themeColor)){
            this->setThemeColor(themeColor);
        }
        else{
            throw new QString("JSON UI 中不存在【themeColor】");
        }
    }
}

QString UI::getBackColor() const
{
    return _backColor;
}

void UI::setBackColor(const QString &backColor)
{
    _backColor = backColor;
}

QString UI::getWinColor() const
{
    return _winColor;
}

void UI::setWinColor(const QString &winColor)
{
    _winColor = winColor;
}

QString UI::getFontColor() const
{
    return _fontColor;
}

void UI::setFontColor(const QString &fontColor)
{
    _fontColor = fontColor;
}

QString UI::getFontLightColor() const
{
    return _fontLightColor;
}

void UI::setFontLightColor(const QString &fontLightColor)
{
    _fontLightColor = fontLightColor;
}

QString UI::getFontTipsColor() const
{
    return _fontTipsColor;
}

void UI::setFontTipsColor(const QString &fontTipsColor)
{
    _fontTipsColor = fontTipsColor;
}

QString UI::getThemeColor() const
{
    return _themeColor;
}

void UI::setThemeColor(const QString &themeColor)
{
    _themeColor = themeColor;
}
