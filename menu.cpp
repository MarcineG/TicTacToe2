#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setWindowTitle("TIC TAC TOE");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_optionsButton_clicked()
{
    optionsWindow = new Options(this);
    optionsWindow->show();
}

void Menu::on_quitButton_clicked()
{
    close();
}

void Menu::on_newGameButton_clicked()
{
    newGame = new Game(this);
    newGame->show();
}
