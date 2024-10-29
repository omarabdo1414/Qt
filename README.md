# Tesla Infotainment System UI

A user interface prototype for a Tesla infotainment system developed in QML and C++ with Qt. The UI design includes various screens and interactive elements such as a map display, lock status, temperature, and audio control. 

## Features

- **Main Window Layout**: Combines three main components—Bottom Bar, Right Screen (Map), and Left Screen (Car Render).
- **Map Integration**: Displays a map focused on Beni-Suef, Egypt, with zoom and display controls.
- **Status Display**:
  - Car lock/unlock indicator with clickable icon.
  - Current date and time display.
  - Outdoor temperature display.
  - User profile display with a user icon and name.
- **Temperature and Audio Control**: 
  - `HVACHandler`: Manages in-car temperature.
  - `AudioController`: Manages audio volume.

## Project Structure

- **QML Components**:
  - `BottomBar`, `RightScreen`, and `LeftScreen` are imported and structured within the `Window`.
  - `RightScreen` contains a map element, car lock icon, and a navigation search bar.
- **C++ Classes**:
  - `System`: Manages the car's lock status, temperature, and user information.
  - `HVACHandler`: Adjusts temperature settings.
  - `AudioController`: Controls volume levels.

## Getting Started

1. **Install Qt and Dependencies**:
   - [Download Qt](https://www.qt.io/download).
2. **Run the Project**:
   - Clone the repository:
     ```bash
     git clone https://github.com/omarabo1414/Qt-Projects.git
     ```
   - Open the project in Qt Creator.
   - Build and run.

## Code Overview

- **Main QML File**: Combines the UI elements and sets layout and anchor configurations.
- **System Class**: Provides QML bindings for car lock, temperature, and user information.
- **HVACHandler & AudioController Classes**: Provide temperature and audio controls, accessible from QML.

## Screenshots

![Tesla Infotainment UI](Tesla_Infotanment/End_UI/Screenshot 2024-10-29 224006)

## Contributing

If you’d like to contribute, feel free to fork the repository, make your changes, and submit a pull request.
