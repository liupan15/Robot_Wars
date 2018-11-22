#ifndef MAPRECT_H
#define MAPRECT_H

#include <QGraphicsPixmapItem>
//#include <QChar>

class MapRect: public QGraphicsPixmapItem
{

public:
    //QChar type;  // 风格ABCD 分别对应地球 地球雪山
    MapRect(int kind, QGraphicsItem * parent = 0);

    void set_pos(int x, int y);
private:
    int kind; //地图类型 from 0x00 - 0x4F

    int comsume[3]; // 消耗的移动力  海 陆 空


};
#endif // MAPRECT_H
