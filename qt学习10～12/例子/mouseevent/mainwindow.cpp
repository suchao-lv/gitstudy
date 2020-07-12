#include "mainwindow.h"
#include "eventlabel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    EventLabel *label = new EventLabel;
    //label->setParent(this);
    label->setWindowTitle("MouseEvent Demo");
    label->resize(300, 200);
    label->setMouseTracking(true);
    label->show();

}

MainWindow::~MainWindow()
{

}
