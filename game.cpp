#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include "enemy.h"
#include "myrect.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QImage>
#include <QGraphicsTextItem>
#include <QFont>

Game::Game(QWidget *parent) {

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setBackgroundBrush(QBrush(QImage(":/images/bg.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);


    // Avatar erstellen
    player = new Player();
    player->setPixmap(QPixmap(":/images/square.png"));
    player->setPos(400,500); // align center

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    scene->addItem(player);

    // Score/Lebensanzeige erstellen
    score = new Score();
    scene->addItem(score);

    health = new Health();
    health->setPos(health->x(),health->y()+45);
    scene->addItem(health);

    // Gegner erstellen
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(1500);

    // BGM
    QMediaPlaylist * playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/bg_music.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer * music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();

    show();

}
