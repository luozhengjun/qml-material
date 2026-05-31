include(Qt5QMLPlugin)

qt_add_qml_module(styles
    URI QtQuick.Controls.Styles.Material
    VERSION 0.1
    QML_FILES
        ApplicationWindowStyle.qml
        ButtonStyle.qml
        CheckBoxStyle.qml
        ProgressBarStyle.qml
        RadioButtonStyle.qml
        SliderStyle.qml
        SwitchStyle.qml
        TextFieldStyle.qml
        ToolBarStyle.qml
        ToolButtonStyle.qml
)
