#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP


#include <QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QOpenGLWindow, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

protected:
    void initializeGL();          //初始化设置
    void resizeGL(int w, int h);  //窗口尺寸变化响应函数
    void paintGL();               //重绘响应函数
};

#endif // MAINWINDOW_HPP
