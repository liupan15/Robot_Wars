#include"Game.h"

Game::Game(QWidget *parent)
{
    //设置不显示滚动条
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //设置固定视图
    //setFixedSize(512, 384);

    scene = new QGraphicsScene(parent);
    //scene->setSceneRect(0, 0, 512, 384);
    setScene(scene);

    m = new Map("map/1.txt");
}


void Game::start()
{
    m->bind_scene(scene);
}
