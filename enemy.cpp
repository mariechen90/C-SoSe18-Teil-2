#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() int
#include "game.h"
#include <QBrush>
#include "myrect.h"
#include <typeinfo>

#include <QDebug>

extern Game * game;

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsRectItem() {
    // set random position
    int random_number = rand() % 700;
    setPos(random_number,0);

    setRect(150,0,100,100);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkRed);
    setBrush(brush);

    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Enemy::move() {
    // wenn Spieler mit Block kollidiert,
    //soll der Block aus dem Spiel entfernt
    //und dem Spieler Lebenspunkte (LP) abgezogen werden
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Player)){
            game->health->decrease();
            scene()->removeItem(this);

            return;

        }
    }

    // Gegner positionieren
    setPos(x(),y()+5);

    // entfernt Gegner aus dem Spiel, die den Spieler nicht treffen
    if(pos().y()>600){

        // Gegner werden aus dem Spiel genommen --> Punktestand erhöht sich
        game->score->increase();

        scene()->removeItem(this);
        delete this;

    }

}
