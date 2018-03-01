import QtQuick 2.6
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Simple Image Provider")

    Image {
        anchors.centerIn: parent
        source: "image://imageProvider/Image/feather.png"
    }
}
