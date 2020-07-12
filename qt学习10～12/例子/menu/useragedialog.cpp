#include "useragedialog.h"
#include <QDialog>

UserAgeDialog::UserAgeDialog(QObject *prent)
{
    newAge = 10;
}

void UserAgeDialog::accept()
{
    emit userAgeChanged(newAge);
    QDialog::accept();
}

