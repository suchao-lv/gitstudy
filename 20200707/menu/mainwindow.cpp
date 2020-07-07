#include "mainwindow.h"
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QMessageBox>
#include <QDialog>
#include <QDebug>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    openAction = new QAction(QIcon(":/images/doc-open"), tr("&Open..."), this);
    openAction->setShortcut(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an exiting file"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    QToolBar *toolBar2 = addToolBar(tr("Tool Bar 2"));
    toolBar2->addAction(openAction);

    m_dialog = new UserAgeDialog(nullptr);
    showUserAgeDialog();
    statusBar();
}

MainWindow::~MainWindow()
{

}

void MainWindow::open()
{
   //QMessageBox::information(this, tr("Information"), tr("Open"));
    //QDialog dialog;
    //QDialog dialog(this);
    //dialog.setWindowTitle(tr("Hello, dialog!"));
    //dialog.exec(); //模态对话框
    //dialog.show(); //非模态，这种写法对话框会一闪而退,因为局部变量函数结束会释放掉

    //下面的写法有个问题就是会有内存泄露
//    QDialog *dialog = new QDialog;
//    dialog->setWindowTitle(tr("Hello dialog!"));
//    dialog->show();

    //争对上面的泄露问题我们有两种方案
    //1.是用Qt的元对象系统：利用它的对象树原理一层层的释放掉子对象，缺点是传入的必须是QWidget的指针，也就是说必须要继承自QWidget，限制了不能将一个普通的C++类指针传给
    //Qt对话框；还有一个缺点就是主窗口不关闭对话框就不会被销毁，一直占用内存。
    //2.可以通过设置其属性利用Qt内部机制解决这个问题
//    QDialog *dialog = new QDialog;
//    dialog->setAttribute(Qt::WA_DeleteOnClose);//设置对话框关闭时，自动销毁对话框
//    dialog->setWindowTitle(tr("Hello, dialog!"));
//    dialog->show();

//对话框传递数据
//    QDialog dialog(this);
//    dialog.setWindowTitle(tr("Hello, dialog!"));
//    dialog.exec();
//    qDebug() << dialog.result();
//    m_dialog->accept();

   //标准对话框
    if(QMessageBox::Yes == QMessageBox::question(this,
                                                 tr("Question"),
                                                 tr("Are you OK?"),
                                                 QMessageBox::Yes | QMessageBox::No,
                                                 QMessageBox::Yes)){
        QMessageBox::information(this, tr("Hmmm..."), tr("I'm glad to hear that!"));
    } else {
        QMessageBox::information(this, tr("Hmmm..."), tr("I'm sorry!"));
    }
}

void MainWindow::showUserAgeDialog()
{
    connect(m_dialog, &UserAgeDialog::userAgeChanged, this, &MainWindow::setUserAge);
    m_dialog->show();
}

void MainWindow::setUserAge(int age)
{
    userAge = age;
    qDebug() << age;
}

