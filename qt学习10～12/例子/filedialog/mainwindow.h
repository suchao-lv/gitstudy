#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>
#include <QTextEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QCloseEvent>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void openFile();
    void saveFile();
    void closeEvent(QCloseEvent *event);

private:
    QAction *openAction;
    QAction *saveAction;
    QTextEdit *textEdit;
};

#endif // MAINWINDOW_H
