#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent) {
    score = 0;

    // Text formatieren
    setPlainText(QString("Score: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Calibri", 32));
}

void Score::increase() {
    score++;
    setPlainText(QString("Score: ") + QString::number(score));

}

int Score::getScore() {
    return score;

}
