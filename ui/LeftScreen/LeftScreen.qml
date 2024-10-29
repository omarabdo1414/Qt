import QtQuick 2.15

Rectangle {
    id: leftScreen
    anchors {
        right: rightScreen.left
        top: parent.top
        bottom: bottomBar.top
        left: parent.left
    }

    color: "white"

    Image {
        // id: CarRender
        anchors.centerIn: parent
        width: parent.width
        fillMode: Image.PreserveAspectFit
        source: "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/CarRender.png"
    }
}
