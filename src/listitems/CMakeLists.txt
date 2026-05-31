include(Qt5QMLPlugin)

qt_add_qml_module(listitems
    URI Material.ListItems
    VERSION 0.1
    QML_FILES
        BaseListItem.qml
        Divider.qml
        SectionHeader.qml
        SimpleMenu.qml
        Standard.qml
        Subheader.qml
        Subtitled.qml
)
