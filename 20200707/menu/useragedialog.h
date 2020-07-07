#ifndef USERAGEDIALOG_H
#define USERAGEDIALOG_H
#include <QDialog>


class UserAgeDialog : public QDialog
{
    Q_OBJECT
public:
    UserAgeDialog(QObject *prent);
    void accept();
signals:
    void userAgeChanged(int newAge);
private:
    int newAge;

};

#endif // USERAGEDIALOG_H
