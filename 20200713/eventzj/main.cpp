#include "mainwindow.h"
#include <QApplication>
#include "label.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Label label;
    a.installEventFilter(new EventFilter(&label, &label));
    label.show();
   // MainWindow w;
   // w.show();

    return a.exec();
}
