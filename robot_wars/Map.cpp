#include"Map.h"
#include<fstream>
#include<iostream>
using namespace std;


Map::Map(QString filename, QObject *parent)
{
    load_map(filename);
}


void Map::load_map(QString filename)
{
    string tmp1 = filename.toStdString();
    ifstream fin(tmp1);

    fin >> height >> width;

    cout << "height :" << height << endl;
    cout << "width  :" << width << endl;
    int tmp;
    for(int i = 0; i < height; ++i)
    {
        QVector<MapRect*> row;
        for(int j = 0; j < width; ++j)
        {
            fin >> tmp;

            MapRect * map_rect = new MapRect(tmp);

            row.push_back(map_rect);
            cout << tmp << " ";
        }
        map.push_back(row);
        cout << endl;
    }
    fin.close();
}

void Map::bind_scene(QGraphicsScene *scene)
{
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < width; ++j)
        {
            map[i][j]->set_pos(j, i);
            scene->addItem(map[i][j]);
        }
    }
}
