#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include <QPainter>
#include <QRect>
#include <QBrush>
#include "globals.h"
#include "winner.h"

namespace Ui {
class Game;
}

class Game : public QDialog
{
    Q_OBJECT

public:

    explicit Game(QWidget *parent = nullptr);
    ~Game();

private:
    Ui::Game *ui;
    QPainter *painter;
    QRect boardRects[200][200];
    int displayBoard[200][200];
    Winner *win;

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void checkIfVictory(int posX,int posY);
    void showWin();
};
#endif // GAME_H
