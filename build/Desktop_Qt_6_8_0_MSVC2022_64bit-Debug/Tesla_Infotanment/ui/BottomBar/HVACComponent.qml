import QtQuick 2.15

Item {
    property string fontColor: "#f0eded"
    property var hvacConroller

    Rectangle {
        id: decrementButton
        anchors {
            left: parent.left
            top: parent.top
            bottom: parent.bottom
        }
        width: height / 2
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
            onClicked: hvacConroller.icreamentTargetTemprature( -1 )
        }
    }

    Text {
        id: targetTempratureText
        anchors {
            left: decrementButton.right
            leftMargin: 15
            verticalCenter: parent.verticalCenter
        }
        color: fontColor
        font.pixelSize: 24
        text: hvacConroller.targetTemprature
    }

    Rectangle {
        id: incrementButton
        anchors {
            left: targetTempratureText.right
            leftMargin: 15
            top: parent.top
            bottom: parent.bottom
        }
        width: height / 2
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
            onClicked: hvacConroller.icreamentTargetTemprature( 1 )
        }
    }
}
