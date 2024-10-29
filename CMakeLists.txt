cmake_minimum_required(VERSION 3.16)

project(Tesla_Infotanment VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appTesla_Infotanment
    main.cpp
)

qt_add_qml_module(appTesla_Infotanment
    URI Tesla_Infotanment
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES ui/BottomBar/BottomBar.qml
        QML_FILES ui/RightScreen/RightScreen.qml
        QML_FILES ui/LeftScreen/LeftScreen.qml
        RESOURCES ui/asstes/CarRender.png
        RESOURCES ui/asstes/CarRender.png
        RESOURCES ui/asstes/carIcon.png
        SOURCES Controllers/system.h
        Controllers/system.cpp
        SOURCES Controllers/system.h
        RESOURCES ui/asstes/padlock.png ui/asstes/padlock-unlock.png
        RESOURCES ui/asstes/user.png
        QML_FILES
        QML_FILES ui/RightScreen/NavigationSearchBar.qml
        RESOURCES ui/asstes/searchBox.png
        RESOURCES ui/asstes/search.png
        SOURCES Controllers/hvachandler.h Controllers/hvachandler.cpp
        QML_FILES ui/BottomBar/HVACComponent.qml
        RESOURCES ui/asstes/Tesla_logo.png
        RESOURCES ui/asstes/high-volume.png
        ui/asstes/mute.png
        ui/asstes/volume-down.png
        ui/asstes/volume-up.png
        RESOURCES ui/asstes/low-volume.png
        SOURCES Controllers/audiocontroller.h Controllers/audiocontroller.cpp
        QML_FILES BottomBar/VolumController.qml
        QML_FILES ui/BottomBar/VolumController.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appTesla_Infotanment PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appTesla_Infotanment
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appTesla_Infotanment
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appTesla_Infotanment
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
