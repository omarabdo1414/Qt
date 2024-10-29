import QtQuick 2.15

Item {
    property string fontColor: "#f0eded"

    Rectangle {
        id: decrementButton
        anchors {
            right: volumIcon.left
            rightMargin: 15
            top: parent.top
            bottom: parent.bottom
        }
        width: height / 4
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
            onClicked: audioController.incrementVolumLevel( -10 )
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

        source: {
            if(audioController.volumLevel <= 1)
                return "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/mute.png"
            else if(audioController.volumLevel <= 50)
                return "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/low-volume.png"
            else
                return "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/volume-up.png"
        }
    }

    Rectangle {
        id: incrementButton
        anchors {
            left: volumIcon.right
            leftMargin: 15
            top: parent.top
            bottom: parent.bottom
        }
        width: height / 4
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
            onClicked: audioController.incrementVolumLevel( 10 )
        }
    }
}
