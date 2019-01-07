#include "winner.h"
#include "ui_winner.h"
#include "game.h"

Winner::Winner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Winner)
{
    this->setWindowTitle("VICTORY!");
    ui->setupUi(this);

    ui->winText->setFontPointSize(14);
    if(Values::currentPlayer==1)
    {
        ui->winText->setPlainText("THE WINNER IS X");
    }
    else
    {
        ui->winText->setPlainText("THE WINNER IS O");
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
