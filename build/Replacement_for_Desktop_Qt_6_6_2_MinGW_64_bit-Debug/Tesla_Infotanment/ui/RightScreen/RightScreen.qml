import QtQuick 2.15
import QtLocation
import QtPositioning
import QtQuick.Controls
import System 1.0



Rectangle {
    id: rightScreen
    anchors {
        right: parent.right
        bottom: bottomBar.top
        top: parent.top
    }

    Map {
        anchors.fill: parent

        plugin: Plugin {
                    name: "osm"
                    PluginParameter {
                        name: "osm.mapping.providersrepository.disabled"
                        value: "true"
                        }

                }
        PluginParameter {
                            name: "osm.mapping.providersrepository.address"
                            value: "http://maps-redirect.qt.io/osm/5.6/"
                        }
        zoomLevel: 10
        center: QtPositioning.coordinate(29.0754932, 31.1123168) // Beni-Swief, Egypt

        // activeMapType: mapView.supportedMapTypes[mapView.supportedMapTypes.length - 1]
    }

    System {
        id: systemHandler
    }

    Image {
        id: lockIcon

        anchors {
            left: parent.left
            top: parent.top
            topMargin: 10
            leftMargin: 15
        }
        width: parent.width / 40
        fillMode: Image.PreserveAspectFit
        source: ( systemHandler.carLocked ? "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/padlock.png" : "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/padlock-unlock.png" )
        MouseArea {
            anchors.fill: parent
            onClicked: {
                systemHandler.setCarLocked(!systemHandler.setCarLocked)
            }
        }
    }

    Text {
        id: dateTimeDisplay

        anchors {
            left: lockIcon.right
            leftMargin: 30
            bottom: lockIcon.bottom
        }
        font.pixelSize: 12
        font.bold: true
        color: "black"

        text: systemHandler.curruntTime
    }

    Text {
        id: outdoorTempratureDisplay

        anchors {
            left: dateTimeDisplay.right
            leftMargin: 30
            bottom: lockIcon.bottom
        }
        font.pixelSize: 12
        font.bold: true
        color: "black"

        text: systemHandler.outdoorTemperature + "°F"
    }

    Image {
        id: userIcon

        anchors {
            left: outdoorTempratureDisplay.right
            top: parent.top
            topMargin: 10
            leftMargin: 30
        }
        width: parent.width / 40
        fillMode: Image.PreserveAspectFit
        source: "file:///C:/Users/Maydoum/OneDrive/Documents/Tesla_Infotanment/ui/asstes/user.png"

    }

    Text {
        id: userNameDisplay

        anchors {
            left: userIcon.right
            leftMargin: 10
            bottom: lockIcon.bottom
        }
        font.pixelSize: 12
        font.bold: true
        color: "black"

        text: systemHandler.userName
    }

    NavigationSearchBar {
        id: navSearchBox

        width: parent.width * ( 1 / 3.2 )
        height: parent.height * (1 / 14)

        anchors {
            left: lockIcon.left
            top: lockIcon.bottom
            topMargin: 15
        }
    }

    width: parent.width * (2 / 3)
}
