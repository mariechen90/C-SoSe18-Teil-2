#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "myrect.h"
#include "score.h"
#include "health.h"
#include "myrect.h"

class Game: public QGraphicsView {
Q_OBJECT
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Health * health;

};

#endif // GAME_H
