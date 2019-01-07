#include "menu.h"
#include <QApplication>
#include "globals.h"

int Values::height = 10;
int Values::width = 10;
int Values::size = Values::height*Values::width;
int Values::currentPlayer = 1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu w;

    w.show();

    return a.exec();
}
