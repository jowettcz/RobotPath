#ifndef FUNCTIONWINDOW_H
#define FUNCTIONWINDOW_H


#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>

#include "mainwindow.h"

class FunctionWindow : public MainWindow
{
public:
    using MainWindow::MainWindow;

    void initialize() override;
    void render() override;

private:
    GLint m_matrixUniform = 0;
    QOpenGLBuffer m_vbo;
    QOpenGLShaderProgram *m_program = nullptr;
    int m_frame = 0;
};

#endif // FUNCTIONWINDOW_H
