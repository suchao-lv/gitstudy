#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H
#include <QPushButton>
#include <QWidget>

class CustomButton : public QPushButton
{
    Q_OBJECT
public:
    CustomButton(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event);
private:
    void onButtonCliecked();
};

#endif // CUSTOMBUTTON_H
