#ifndef PAINTEDWIDGET_H
#define PAINTEDWIDGET_H
#include <QWidget>


class PaintedWidget : public QWidget
{
    Q_OBJECT
public:
    PaintedWidget(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *);
};

#endif // PAINTEDWIDGET_H
