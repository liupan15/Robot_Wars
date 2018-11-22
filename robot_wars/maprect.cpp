#include "MapRect.h"
#include<QDebug>

MapRect::MapRect(int kind, QGraphicsItem *parent)
{
    if(kind >= 0x00 && kind <= 0x3F) // 0x00 - 0x3F
    {
        this->kind = kind;
    }
    else
    {
        this->kind = 0x00;
        qDebug() << "invalid kind number";
    }

    //this->kind = kind;

    int type = this->kind >> 4;
    /*qDebug() << "type: " << type;
    QChar tmp = 'A' + type;
    qDebug() << tmp;
    QString file_path = "map/" + tmp;
    file_path = file_path  + "_0";*/

    QString file_path;
    if(type == 0)
    {
        file_path = "map/A_0";
    }
    else if(type == 1)
    {
        file_path = "map/A_1";
    }
    else if(type == 2)
    {
        file_path = "map/A_2";
    }
    else if(type == 3)
    {
        file_path = "map/A_3";
    }
    else
    {
        qDebug() << "you won't see me";
    }

    int mod = this->kind % 16;  // & 16
    file_path = file_path + QString::number(mod, 16).toUpper();
    file_path = file_path  + ".png";
    qDebug() << file_path;

    setPixmap(file_path);
}

void MapRect::set_pos(int x, int y)
{
    setPos(32 * x, 32 * y);
}
