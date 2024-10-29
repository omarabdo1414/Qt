import QtQuick

Rectangle {
    id: navSearchBox
    color: "#e3e2e1"
    radius: 5

    Image {
        id: searchIcon
        source: "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/search.png"

        anchors {
            left: parent.left
            leftMargin: 20
            verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.45
        fillMode: Image.PreserveAspectFit
    }

    Text {
        id: navigationPlaceHolderText
        color: "#525252"
        font.pixelSize: 16
        visible: navigationTextInput.text === ""

        anchors {
            left: searchIcon.right
            leftMargin: 20
            verticalCenter: parent.verticalCenter
        }
        text: "Navigate"
    }

    TextInput {
        id: navigationTextInput
        clip: true

        anchors {
            top: parent.top
            right: parent.right
            bottom: parent.bottom
            left: searchIcon.right
            leftMargin: 20
            rightMargin: 10
        }

        verticalAlignment: Text.AlignVCenter
        font.pixelSize: 16
    }

}
