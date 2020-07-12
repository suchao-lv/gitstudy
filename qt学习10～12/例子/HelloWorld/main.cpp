#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
#include <QTabBar>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Enter your age");

    QSpinBox *spinBox = new QSpinBox(&window);
    QSlider *slider = new QSlider(Qt::Horizontal, &window);
    spinBox->setRange(0, 130);
    slider->setRange(0, 130);
//    QTabBar *tabar = new QTabBar(&window);
//    tabar->setMovable(true);
//    tabar->setTabsClosable(true);
//    tabar->setFocusPolicy(Qt::NoFocus);
//    tabar->setExpanding(true);
//    tabar->addTab("1");
//    tabar->addTab("2");
//    tabar->addTab("3");
//    tabar->addTab("4");
//    tabar->addTab("5");
//    tabar->addTab("6");

    QObject::connect(slider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
    void (QSpinBox:: *spinBoxSignal)(int) = &QSpinBox::valueChanged;
    QObject::connect(spinBox, spinBoxSignal, slider, &QSlider::setValue);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    //layout->addWidget(tabar);


    window.setLayout(layout);

    window.show();

    return app.exec();
}

