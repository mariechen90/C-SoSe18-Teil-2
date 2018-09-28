#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class Player: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);

public slots:
    void spawn();
};

#endif // MYRECT_H
