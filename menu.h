#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "options.h"
#include "game.h"

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_optionsButton_clicked();

    void on_quitButton_clicked();

    void on_newGameButton_clicked();

private:
    Ui::Menu *ui;
    Options *optionsWindow;
    Game *newGame;
};

#endif // MENU_H
