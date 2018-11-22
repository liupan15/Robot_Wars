#include <QApplication>
#include <iostream>
#include <memory>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDebug>
#include "Game.h"
#include "Map.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    Game game;
    game.start();
    game.show();
    QString filename = "map/1.txt";
    //Map map(filename);

    qDebug() << QString::number(15, 16) ;
    qDebug() << (QChar)('A' + 1);
    qDebug() << (15 >> 4);
    //MapRect mr(15);
    return a.exec();
}
