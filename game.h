#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include <QPainter>

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
};

#endif // GAME_H
