import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3


ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
//    flags:Qt.CustomizeWindowHint
//    flags:Qt.FramelessWindowHint
    flags:Qt.ToolTip
//    flags:Qt.SplashScreen | Qt.MSWindowsFixedSizeDialogHint

    minimumHeight: 480
    minimumWidth: 680

    Rectangle{
        anchors.fill: parent
        color:"gray"
        Button{
            text:"Quit"
            anchors.centerIn: parent
            onClicked: {
                Qt.quit()
            }
        }
    }
}
