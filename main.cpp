#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //HOLAAAAAA
    qDebug() << "Cambio 1 de la mañana.";
    qDebug() << "Cambio 2 de la mañana.";
    qDebug() << "Cambio 3 de la mañana";
    qDebug() << "Cambio 4 de la mañana.";

    return a.exec();
}
