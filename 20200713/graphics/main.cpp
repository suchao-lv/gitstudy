#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;  //首先创建一个场景
    //运行完我们会发现直线自动在视图居中显示，如果不想这么做，我们可以给scene设置一下sceneRect()属性：
    scene.setSceneRect(0, 0, 300, 300);
    scene.addLine(0, 0, 150, 150); //然后我们使用addLine()函数向场景中添加一个直线，坐标分别是（0,0）和（150,150）
//此时我们已经有了场景和元素，还差一个视图
    QGraphicsView view(&scene);//创建一个GraphicsView对象，绑定到一个场景上
    //QGraphicsScene不是QWidget的子类，因此该构造函数并不是调用QGrahicsView(QWidget *parent)
    view.setWindowTitle("Graphics View");
    //view.resize(500, 500);//去掉这一行的目的是为了让系统去决定视图的最小尺寸
    view.show();

    //MainWindow w;
    //w.show();

    return a.exec();
}
