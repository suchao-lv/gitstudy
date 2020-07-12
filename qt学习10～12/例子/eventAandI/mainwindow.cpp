#include "mainwindow.h"
#include "custombutton.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    CustomButton *btn = new CustomButton;
    btn->setText("This is a Button!");
    btn->setAttribute(Qt::WA_DeleteOnClose);
    btn->show();
}

MainWindow::~MainWindow()
{

}
