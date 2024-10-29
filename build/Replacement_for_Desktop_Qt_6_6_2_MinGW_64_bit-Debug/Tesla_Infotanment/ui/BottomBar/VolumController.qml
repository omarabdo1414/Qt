import QtQuick 2.15

Item {
    property string fontColor: "#f0eded"

    // width: 115.875 * (parent.width * 1280)

    Rectangle {
        id: decrementButton
        anchors {
            right: volumIcon.left
            rightMargin: 15
            top: parent.top
            bottom: parent.bottom
        }
        color: "black"

        Text {
            id: decrementText
            color: fontColor
            anchors.centerIn: parent
            text: "<"
            font.pixelSize: 16
        }

        MouseArea {
            anchors.fill: parent
            // onClicked: hvacConroller.icreamentTargetTemprature( -1 )
        }
    }

    Image {
        id: volumIcon
        anchors {
            right: decrementButton.left
            rightMargin: 15
            verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.5
        fillMode: Image.PreserveAspectFit

        source: "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/volume-up.png"
    }

    Rectangle {
        id: incrementButton
        anchors {
            left: volumIcon.right
            leftMargin: 15
            top: parent.top
            bottom: parent.bottom
        }
        color: "black"

        Text {
            id: incrementText
            color: fontColor
            anchors.centerIn: parent
            text: ">"
            font.pixelSize: 16
        }

        MouseArea {
            anchors.fill: parent
            // onClicked: hvacConroller.icreamentTargetTemprature( +1 )
        }
    }
}
