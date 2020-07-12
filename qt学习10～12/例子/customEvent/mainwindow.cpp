#include "mainwindow.h"
#include "custombutton.h"
#include <QVBoxLayout>
#include <QMouseEvent>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CustomWidget *widget = new CustomWidget(this);
    CustomButton *cbex = new CustomButton(widget);
    cbex->setText(tr("CustomButton"));
    CustomButtonEx *cb = new CustomButtonEx(widget);
    cb->setText(tr("CustomButtonEx"));
    QVBoxLayout *widgetLayout = new QVBoxLayout(widget);
    widgetLayout->addWidget(cbex);
    widgetLayout->addWidget(cb);
    this->setCentralWidget(widget);

}

MainWindow::~MainWindow()
{

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "MainWindow";
}
