#ifndef MAP_H
#define MAP_H

#include "MapRect.h"
#include<QVector>
#include<QGraphicsScene>

class Map : public QObject
{
public:
    Map(QString filename, QObject * parent = 0);

    void bind_scene(QGraphicsScene * scene);
private:
    QVector<QVector<MapRect *> > map;

    void load_map(QString filename);

    int height, width;
};
#endif // MAP_H
