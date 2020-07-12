#ifndef EVENTLABEL_H
#define EVENTLABEL_H
#include <QLabel>


class EventLabel : public QLabel
{
protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public:
    EventLabel();
};

#endif // EVENTLABEL_H
