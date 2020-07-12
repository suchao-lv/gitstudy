#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include "useragedialog.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void open();
    void showUserAgeDialog();
    void setUserAge(int age);

private:
    QAction *openAction;
    int userAge;
    UserAgeDialog *m_dialog;
};

#endif // MAINWINDOW_H
