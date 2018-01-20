import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

import "qrc:/qml_com/"

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Login")

    Button{
        id:btn
        text:"Login"
        anchors.centerIn: parent
        onClicked: {
            console.debug("Login")
        }
    }


}
