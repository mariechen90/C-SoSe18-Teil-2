#include "myrect.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "enemy.h"
#include "game.h"
#include <QGraphicsPixmapItem>

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent) {
    setPixmap(QPixmap(":/images/square.png"));
}

void Player::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Left){
        if(pos().x()>150) // off-screen scrolling off
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right) {
        if(pos().x()+100<800) // siehe Kommentar oben
        setPos(x()+10,y());
    }

}

void Player::spawn() {
    // Gegenspieler erstellen
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);

}
