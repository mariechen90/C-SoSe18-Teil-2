#include "bullet.h"
#include <QTimer>

bullet::bullet() {
    setRect(0,0,10,50);

    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void bullet::move() {
    setPos(x(),y()-10);
}
