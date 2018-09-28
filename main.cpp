#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>
#include <iostream>
#include <QTimer>
#include "enemy.h"
#include "score.h"
#include "health.h"
#include "game.h"

using namespace std;

Game * game;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();

}

// delete objects
//part 4 bullet, generate bullet part 3
//if(pos().y() < 0) {
    //scene()->removeItem(this);
    //delete this;
//}

// colliding part 5
