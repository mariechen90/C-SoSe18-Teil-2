#ifndef BUTTONS_H
#define BUTTONS_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Button: public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    Button(QString name, QGraphicsItem * parent=NULL);

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

signals:
    void clicked();

private:
    QString text;

}

#endif // BUTTONS_H
