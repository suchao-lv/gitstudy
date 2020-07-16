#include "paintedwidget.h"
#include <QPainter>
#include <QBitmap>

PaintedWidget::PaintedWidget(QWidget *parent) :
    QWidget(parent)
{
    resize(800, 600);
    setWindowTitle(tr("Paint Demo"));
}

void PaintedWidget::paintEvent(QPaintEvent *)
{
//    QPainter painter(this);
//    painter.drawLine(80, 100, 650, 500);
//    painter.setPen(Qt::red);
//    painter.drawRect(10, 10, 100, 400);
//    painter.setPen(QPen(Qt::green, 5));
//    painter.setBrush(Qt::blue);
//    painter.drawEllipse(50, 150, 400, 200);
//    painter.drawArc(100, 100, 100, 100, 100, 100);
//    painter.setPen(Qt::yellow);

//    //走样与反走样
//    QPainter painter(this);
//    painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
//    painter.setBrush(Qt::yellow);
//    painter.drawEllipse(50, 150, 200, 150);

//    painter.setRenderHint(QPainter::Antialiasing, true);
//    painter.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
//    painter.setBrush(Qt::yellow);
//    painter.drawEllipse(300, 150, 200, 150);

    //渐变
//    QPainter painter(this);

//    painter.setRenderHint(QPainter::Antialiasing, true);
//    QLinearGradient linearGradient(60, 50, 200, 200);
//    linearGradient.setColorAt(0.2, Qt::white);
//    linearGradient.setColorAt(0.6, Qt::green);
//    linearGradient.setColorAt(1.0, Qt::black);
//    painter.setBrush(QBrush(linearGradient));
//    painter.drawEllipse(50, 50, 200, 150);

//    QPainter painter(this);
//    painter.setRenderHint(QPainter::Antialiasing);

//    const int r = 150;
//    QConicalGradient conicalGradient(0, 0, 0);

//    conicalGradient.setColorAt(0.0, Qt::red);
//    conicalGradient.setColorAt(60.0/360.0, Qt::yellow);
//    conicalGradient.setColorAt(120.0/360.0, Qt::green);
//    conicalGradient.setColorAt(180.0/360.0, Qt::cyan);
//    conicalGradient.setColorAt(240.0/360.0, Qt::magenta);
//    conicalGradient.setColorAt(1.0, Qt::red);

//    painter.translate(r, r);

//    QBrush brush(conicalGradient);
//    painter.setPen(Qt::NoPen);
//    painter.setBrush(brush);
//    painter.drawEllipse(QPoint(0, 0),r, r);

    //坐标系统：
//    QPainter painter(this);
//    painter.fillRect(10, 10, 50, 100, Qt::red);
//    painter.save();
//    painter.translate(100, 0); //向右平移100px
//    painter.fillRect(10, 10, 50, 100, Qt::yellow);
//    painter.restore();
//    painter.save();
//    painter.translate(300, 0); //向右平移300px
//    painter.rotate(30); //顺时针旋转30度
//    painter.fillRect(10, 10, 50, 100, Qt::green);
//    painter.restore();
//    painter.save();
//    painter.translate(400, 0);//向右平移400px
//    painter.scale(2, 3); //横坐标单位放大2倍，纵坐标放大3倍
//    painter.restore();
//    painter.save();
//    painter.translate(600, 0);
//    painter.shear(0, 1);
//    painter.fillRect(10, 10, 50, 100, Qt::cyan);
//    painter.restore();

    //绘制的设备
    QPainter painter(this);
    QPixmap pixmap("qt-logo.png");
    QBitmap bitmap("qt-logo.png");
    painter.drawPixmap(10, 10, 250, 125, pixmap);
    painter.drawPixmap(270, 10, 250, 125, bitmap);
    QPixmap whitePixmap("qt-logo-white.png");
    QBitmap whiteBitmap("qt-logo-white.png");
    painter.drawPixmap(10, 140, 250, 125, whitePixmap);
    painter.drawPixmap(270, 140, 250, 125, whiteBitmap);


















}
