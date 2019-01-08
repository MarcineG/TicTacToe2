#include "winner.h"
#include "ui_winner.h"
#include "game.h"

Winner::Winner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winner)
{

    ui->setupUi(this);
    this->setWindowTitle("VICTORY!");
    ui->winText->setFontPointSize(14);
    if(Values::currentPlayer==1)
    {
        ui->winText->setPlainText("THE WINNER IS X");
        ui->winText->setAlignment(Qt::AlignCenter);
    }
    else
    {
        ui->winText->setPlainText("THE WINNER IS O");
        ui->winText->setAlignment(Qt::AlignCenter);
    }




}

Winner::~Winner()
{
    delete ui;
}

void Winner::on_quit_clicked()
{
   close();


}

void Winner::on_newGameButton_clicked()
{

}
