find_package(Qt5 REQUIRED COMPONENTS Quick QuickTest)

include(Qt5QMLPlugin)

add_executable(test tests.cpp)

qt_add_qml_module(test
    URI Main
    VERSION 1.0
    QML_FILES
        tst_actionbar.qml
        tst_card.qml
        tst_pagestack.qml
    RESOURCES
        icons/action_alarm.svg
        icons/action_search.svg
        icons/action_settings.svg
        icons/content_add.svg
)

target_link_libraries(test
    PRIVATE Qt5::Quick
    PRIVATE Qt5::QuickTest
    PRIVATE Materialplugin #extras fonts icons listitems styles
)
