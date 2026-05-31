include(Qt5QMLPlugin)

qt_add_qml_module(fonts
    URI Material.Fonts
    VERSION 1.0
    QML_FILES
        MaterialFontLoader.qml
    RESOURCES
        roboto/Roboto-Black.ttf
        roboto/Roboto-BlackItalic.ttf
        roboto/Roboto-Bold.ttf
        roboto/Roboto-BoldItalic.ttf
        roboto/Roboto-Italic.ttf
        roboto/Roboto-Light.ttf
        roboto/Roboto-LightItalic.ttf
        roboto/Roboto-Medium.ttf
        roboto/Roboto-MediumItalic.ttf
        roboto/Roboto-Regular.ttf
        roboto/Roboto-Thin.ttf
        roboto/Roboto-ThinItalic.ttf
        roboto/RobotoCondensed-Bold.ttf
        roboto/RobotoCondensed-BoldItalic.ttf
        roboto/RobotoCondensed-Italic.ttf
        roboto/RobotoCondensed-Light.ttf
        roboto/RobotoCondensed-LightItalic.ttf
        roboto/RobotoCondensed-Regular.ttf
)