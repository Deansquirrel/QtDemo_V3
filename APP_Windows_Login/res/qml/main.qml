import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

//import QtGraphicalEffects 1.0

import "qrc:/qml_com/"

ApplicationWindow {
    id:applicationWindow
    visible: true
    width: 300
    height: 441
    title: qsTr("Login")

    flags:Qt.ToolTip

    background: Rectangle{
        anchors.fill: parent
        color:"gray"
        radius:3
//        border.width: 1
//        border.color: ui.fontTipsColor
    }

    Button{
        id:btn
        text:"Login"
        anchors.centerIn: parent
        onClicked: {
            console.debug("Login")
            Qt.quit()
        }
    }

//    Rectangle{
//        id:back
//        anchors.fill: parent
//        color:"white"
//        radius: 3

//        border.width: 1
//        border.color: ui.fontTipsColor


////        DropShadow {
////              anchors.fill: back
////              horizontalOffset: 3
////              verticalOffset: 3
////              radius: 8.0
////              samples: 17
////              color: "#80000000"
////              smooth: true
////              source: btn
////          }
//    }


//    background: Rectangle{
//        id:back
//        anchors.fill: parent
//        color:"white"
//        radius: 3
//        border.width: 1
//        border.color: ui.fontTipsColor
//    }

//    Column{
//        id:column
//        anchors.fill: parent
//        Item{
//            width: parent.width
//            height: 50

//            Rectangle{
//                anchors.fill: parent
//                radius: 3
//                color: ui.fontTipsColor
//            }
//            Rectangle{
//                width: parent.width
//                height: 3
//                color: ui.fontTipsColor
//                anchors.bottom: parent.bottom
//            }

//            Row{
//                id:rowTitle
//                width: parent.width * 0.9
//                height: parent.height
//                anchors.centerIn: parent

//                Text{
//                    width: parent.width - parent.height
//                    height: parent.height
//                    elide: Text.ElideRight
//                    text:"测试XXXX"
//                    verticalAlignment: Text.AlignVCenter
//                }
//            }
//        }
//        Item{
//            width: parent.width
//            height: 241
//            Button{
//                id:btn
//                text:"Login"
//                width: parent.width * 0.8
//                anchors.centerIn: parent
//                onClicked: {
//                    console.debug("Login")
//                    Qt.quit()
//                }
//            }
//        }
//    }

//    Column{
//        anchors.fill: parent
//        Item{
//            width: parent.width
//            height: 100

//            Row{
//                id:rowTitle
//                width: parent.width * 0.9
//                height: parent.height
//                anchors.centerIn: parent

//                Text{
//                    width: parent.width - parent.height
//                    height: parent.height
//                    elide: Text.ElideRight
//                    text:"测试XXXX"
//                    verticalAlignment: Text.AlignVCenter
//                }
//                Item{
//                    width: parent.height
//                    height: parent.height
//                    Image{
//                        width: parent.width * 0.8
//                        height: parent.height * 0.8
//                        anchors.centerIn: parent
//                        source: (mouserAreaClose.mouseX >= 0 || mouserAreaClose.mouseY >= 0)
//                                ?"qrc:/image/close_red.png":"qrc:/image/close_black.png"
//                    }
//                    MouseArea{
//                        id:mouserAreaClose
//                        anchors.fill: parent
//                        onClicked: {
//                            Qt.quit()
//                        }
//                    }
//                }
//            }
//        }
//        Rectangle{
//            width: parent.width
//            height: 120
//            color:"white"
//            Button{
//                id:btn
//                text:"Login"
//                width: parent.width * 0.8
//                anchors.centerIn: parent
//                onClicked: {
//                    console.debug("Login")
//                    Qt.quit()
//                }
//            }
//        }
//    }

//    DropShadow {//绘制阴影
//    id: rectShadow;
//    anchors.fill: source
//    cached: true;
//    horizontalOffset: 0;
//    verticalOffset: 3;
//    radius: 8.0;
//    samples: 16;
//    color: "#80000000";
//    smooth: true;
//    source: container;
//    }
}
