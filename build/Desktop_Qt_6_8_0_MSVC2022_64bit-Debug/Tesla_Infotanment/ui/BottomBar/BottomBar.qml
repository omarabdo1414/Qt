import QtQuick 2.15

Rectangle{
    id: bottomBar

    anchors {
        bottom: parent.bottom
        left: parent.left
        right: parent.right
    }
    color: "black"
    height: parent.height / 12

    Image {
        id: carSettings

        anchors {
            left: parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        height: parent.height * 0.85
        fillMode: Image.PreserveAspectFit

        source: "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/carIcon.png"
    }

    HVACComponent {
        id: driverHVACControle

        anchors {
            top: parent.top
            bottom: parent.bottom
            left: carSettings.right
            leftMargin: 100
        }

        hvacConroller: driverHVAC
    }

    HVACComponent {
            id: passengerHVACControle

            anchors {
                top: parent.top
                bottom: parent.bottom
                right: parent.right  // Position it to the left of volumeControl
                rightMargin: 170            // Adjust margin to control spacing
            }
            hvacConroller: passengerHVAC
        }

    VolumController {
        id: volumeControl

        anchors {
            top: parent.top
            bottom: parent.bottom
            right: passengerHVACControle.left
            rightMargin: 100
        }
    }
}
