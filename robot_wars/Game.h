#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include "Map.h"

class Game: public QGraphicsView
{
    Q_OBJECT
public:
    explicit Game(QWidget * parent = 0);

    void start();

private:
    QGraphicsScene * scene;
    Map * m;

};
#endif // GAME_H
