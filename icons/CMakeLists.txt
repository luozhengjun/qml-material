include(Qt5QMLPlugin)

qt_add_qml_module(icons
    URI Material.Icons
    VERSION 1.0
    RESOURCES
        navigation_arrow_back.svg
        navigation_chevron_left.svg
        navigation_chevron_right.svg
        navigation_close.svg
        navigation_menu.svg
        navigation_more_vert.svg
)
