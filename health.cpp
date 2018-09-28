#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent) {
    health = 3;

    // Text formatieren
    setPlainText(QString("LP: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("Calibri", 32));
}

void Health::decrease() {
    health--;
    setPlainText(QString("LP: ") + QString::number(health));

}

int Health::getHealth() {
    return health;
}
