#include "game.h"
#include "ui_game.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>


Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{
    this->setWindowTitle("TIC TAC TOE");
    this->setFixedSize(600, 600);
    ui->setupUi(this);
}

Game::~Game()
{
    delete ui;
}
