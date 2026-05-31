include(Qt5QMLPlugin)

qt_add_qml_module(extras
    URI Material.Extras
    VERSION 0.1
    QML_FILES
        AutomaticGrid.qml
        CircleImage.qml
        CircleMask.qml
        ColumnFlow.qml
        Image.qml
)
