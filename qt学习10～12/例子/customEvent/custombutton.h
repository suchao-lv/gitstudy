#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H
#include <QPushButton>
#include <QMouseEvent>
#include <QDebug>
#include <QWidget>
#include <QKeyEvent>
#include <QEvent>


class CustomButton : public QPushButton
{
    Q_OBJECT
public:
    CustomButton(QWidget *parent) : QPushButton(parent)
    {
    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {
        qDebug() << "CustomButton";
    }
};

class CustomButtonEx : public CustomButton
{
    Q_OBJECT
public:
    CustomButtonEx(QWidget *parent) : CustomButton(parent)
    {
    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {
        event->ignore();
        qDebug() << "CustomButtonEx";
    }
};

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    CustomWidget(QWidget *parent) : QWidget(parent)
    {

    }
protected:
    void mousePressEvent(QMouseEvent *event)
    {
        qDebug() << "CustomWidget";
        QWidget::mousePressEvent(event);
    }

    bool event(QEvent *e)
    {
        if(e->type() == QEvent::KeyPress) {

            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(e);

            if(keyEvent->key() == Qt::Key_Q){
                qDebug() << "You press tab.";
                return true;
            }
        }
        return QWidget::event(e);
    }
};

#endif // CUSTOMBUTTON_H
