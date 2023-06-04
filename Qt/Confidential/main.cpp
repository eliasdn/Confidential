#include "confidential.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Confidential w;
    w.show();
    return a.exec();
}
