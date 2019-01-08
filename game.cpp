#include "game.h"
#include "ui_game.h"
#include <QPainter>
#include <QMouseEvent>
#include <QMessageBox>
#include "globals.h"
#include <QSize>

Game::Game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Game)
{

    this->setFixedSize(50*Values::width, 50*Values::height);
    QSize size(50,50);
    for(int j=0;j<Values::height;j++)
    {
        for(int i=0;i<Values::width;i++)
        {
            boardRects[i][j] = QRect(QPoint(i*50,j*50),size);
        }
    }

    ui->setupUi(this);
    this->setWindowTitle("TIC TAC TOE");
}

Game::~Game()
{
    delete ui;
}

void Game:: paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QBrush brushO(Qt::red);
    QBrush brushX(Qt::blue);
    QPixmap pixmapX(":/img/x.png");
    QPixmap pixmapO(":/img/o.png");


    painter.setPen(Qt::black);
    for(int j=0;j<Values::height;j++)
    {
        for(int i=0;i<Values::width;i++)
        {
            painter.drawRect(boardRects[i][j]);
        }
    }
    for(int j=0;j<Values::height;j++)
    {
        for(int i=0;i<Values::width;i++)
        {
            QString path;
            switch(this->displayBoard[i][j])
            {
             case 1: painter.drawPixmap(boardRects[i][j].x(),boardRects[i][j].y(),50,50, pixmapX);break;

             case -1: painter.drawPixmap(boardRects[i][j].x(),boardRects[i][j].y(),50,50, pixmapO);break;
            }
        }
    }
}

void Game:: mousePressEvent(QMouseEvent *e)
{

    for(int j=0;j<Values::height;j++)
    {
        for(int i=0;i<Values::width;i++)
        {
            if(boardRects[i][j].contains(e->pos()) && this->displayBoard[i][j] == 0)
            {
                this->displayBoard[i][j] = Values::currentPlayer;
                checkIfVictory(i,j);
                Values::currentPlayer *= -1;
            }
        }

    }
    QWidget::update();
}

void Game:: checkIfVictory(int posX, int posY)
{
    int i,j,victory=0;
    //==========Checking first diag==========//
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(this->displayBoard[posX+j-i][posY+j-i] == Values::currentPlayer)
            {
                victory++;
            }
        }
        if(victory == 5)
        {
            showWin();
        }
        else victory = 0;
    }
    //==========Checking second diag==========//
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(this->displayBoard[posX-j+i][posY+j-i] == Values::currentPlayer)
            {
                victory++;
            }
        }
        if(victory == 5)
        {
            showWin();
        }
        else victory = 0;
    }
    //==========Checking horizontal==========//
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(this->displayBoard[posX-i+j][posY] == Values::currentPlayer)
            {
                victory++;
            }
        }
        if(victory == 5)
        {
            showWin();
        }
        else victory = 0;
    }
    //==========Checking vertical==========//
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(this->displayBoard[posX][posY+j-i] == Values::currentPlayer)
            {
                victory++;
            }
        }
        if(victory == 5)
        {
            showWin();
        }
        else victory = 0;
    }

}

void Game:: showWin()
{
    win = new Winner(this);
    win->show();
    this->close();
}

















