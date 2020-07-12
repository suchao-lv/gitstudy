#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tabar = new QTabBar(this);
    mylayout = new QHBoxLayout(this);
    mylayout->addWidget(tabar);
    tabar->setMovable(true);
    tabar->setTabsClosable(true);
    tabar->setFocusPolicy(Qt::NoFocus);
    tabar->setExpanding(true);
    tabar->addTab("1");
    //titlebar()->addWidget(m_tabbar);






}

MainWindow::~MainWindow()
{

}
