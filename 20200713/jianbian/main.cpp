#include "mainwindow.h"
#include <QApplication>
#include <QRadialGradient>
#include <QBrush>
#include <QPen>
#include <QPainter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QRadialGradient gradient(50, 50, 50, 50, 50);
    gradient.setColorAt(0, QColor::fromRgbF(0, 1, 0, 1));
    gradient.setColorAt(1, QColor::fromRgbF(0, 0, 0, 0));
    QBrush brush(gradient);
    QPainter painter(&w);
    QPen pen(Qt::green, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin);
    painter.setPen(pen);

    w.show();

    return a.exec();
}
