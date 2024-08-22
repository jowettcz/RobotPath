// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QtMath>

#include "functionwindow.h"

//! [2]
int main(int argc, char **argv)
{
    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    FunctionWindow window;
    window.resize(800, 600);
    window.show();

    window.setAnimating(true);

    return app.exec();
}
//! [2]

//! [5]
