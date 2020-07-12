#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>

#include "newspaper.h"
#include "reader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Newspaper newspaper("Newspaper ABC");
    Reader reader;
    QObject::connect(&newspaper, &Newspaper::newPaper,
                     &reader, &Reader::receiveNewspaper);

    newspaper.send();
//     MainWindow w;
//     w.show();


    return a.exec();
}
