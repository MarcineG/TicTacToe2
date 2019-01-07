#include "winnerscreen.h"
#include "ui_winnerscreen.h"

WinnerScreen::WinnerScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WinnerScreen)
{
    ui->setupUi(this);
}

WinnerScreen::~WinnerScreen()
{
    delete ui;
}

void WinnerScreen::on_quit_clicked()
{
    close();
}
