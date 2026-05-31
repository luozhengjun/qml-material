/*
 * QML Material - An application framework implementing Material Design.
 * Copyright (C) 2014 Michael Spencer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 2.1 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#include <QDirIterator>
#include <QDebug>
#include <QtPlugin>

void printResources() {
    // Start at the root of the Qt resource system
    QDirIterator it(":", QDirIterator::Subdirectories);

    while (it.hasNext()) {
        QString filePath = it.next();
        qDebug() << filePath;
    }
}

extern void qml_static_register_types_Material();

#include <QtQuickTest/QtQuickTest>
int main(int argc, char** argv)
{
	QTest::setMainSourcePath(__FILE__, QT_TESTCASE_BUILDDIR);

    //Q_INIT_RESOURCE(Material);
    qml_static_register_types_Material();

    Q_INIT_RESOURCE(QtQuick_Controls_Styles_Material);
    Q_INIT_RESOURCE(Material_ListItems);
    Q_INIT_RESOURCE(Material_Extras);

	return quick_test_main(argc, argv, "meterial", nullptr);
}
