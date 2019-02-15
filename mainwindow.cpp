#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <GL/glut.h>

MainWindow::MainWindow() : QOpenGLWindow()
{
}

MainWindow::~MainWindow()
{
}

void MainWindow::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0,0.0,0.0,0.0);
    glClearDepth(1.0);
}

void MainWindow::resizeGL(int w, int h)
{
    Q_UNUSED(w);
    Q_UNUSED(h);
}

void MainWindow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0,0.0,0.0);
        glVertex3f(0.0,0.8,0.0);
        glColor3f(0.0,0.0,1.0);
        glVertex3f(0.5,0.0,0.0);
        glColor3f(0.0,1.0,0.0);
        glVertex3f(-0.5,0.0,0.0);
    glEnd();
}
