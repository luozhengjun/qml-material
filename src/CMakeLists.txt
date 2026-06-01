add_subdirectory(extras)
add_subdirectory(listitems)
add_subdirectory(styles)

find_package(Qt5 REQUIRED COMPONENTS Core Qml Quick Gui)

include(Qt5QMLPlugin)

set_source_files_properties(
    core/MaterialAnimation.qml
    core/Palette.qml
    core/Theme.qml
    PROPERTIES QT_QML_SINGLETON_TYPE TRUE
)

qt_add_qml_module(material
    URI Material
    VERSION 0.3
    QML_FILES
        components/ActionButton.qml
        components/Card.qml
        components/DatePicker.qml
        components/IconButton.qml
        components/OverlayLayer.qml
        components/OverlayView.qml
        components/ProgressCircle.qml
        components/Scrollbar.qml
        components/Snackbar.qml
        components/ThinDivider.qml
        components/TimePicker.qml
        components/Tooltip.qml
        components/Wave.qml

        controls/Action.qml
        controls/Button.qml
        controls/CheckBox.qml
        controls/Label.qml
        controls/ProgressBar.qml
        controls/RadioButton.qml
        controls/Slider.qml
        controls/Switch.qml
        controls/Tab.qml
        controls/TextField.qml

        core/AwesomeIcon.qml
        core/Icon.qml
        core/Ink.qml
        core/MaterialAnimation.qml
        core/Object.qml
        core/Palette.qml
        core/PlatformExtensions.qml
        core/Theme.qml
        core/ThemePalette.qml
        core/UnitsHelper.qml
        core/View.qml
        core/awesome.js
        core/utils.js

        popups/BottomActionSheet.qml
        popups/BottomSheet.qml
        popups/Dialog.qml
        popups/Dropdown.qml
        popups/InputDialog.qml
        popups/MenuField.qml
        popups/Popover.qml
        popups/PopupBase.qml
        popups/TimePickerDialog.qml

        window/ActionBar.qml
        window/AppTheme.qml
        window/ApplicationWindow.qml
        window/MainView.qml
        window/NavigationDrawer.qml
        window/NavigationDrawerPage.qml
        window/Page.qml
        window/PageSidebar.qml
        window/PageStack.qml
        window/Sidebar.qml
        window/TabBar.qml
        window/TabbedPage.qml
        window/Toolbar.qml
        window/Window.qml

    SOURCES
        core/device.cpp
        core/device.h
        core/units.cpp
        core/units.h

    RESOURCES
        core/FontAwesome.otf
)

target_include_directories(material
    PRIVATE core
)

target_link_libraries(material
    PRIVATE Qt5::Core
    PRIVATE Qt5::Qml
    PRIVATE Qt5::Quick
    PRIVATE Qt5::Gui
)
