#ifndef WINNERSCREEN_H
#define WINNERSCREEN_H

#include <QWidget>

namespace Ui {
class WinnerScreen;
}

class WinnerScreen : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerScreen(QWidget *parent = nullptr);
    ~WinnerScreen();

private slots:
    void on_quit_clicked();

private:
    Ui::WinnerScreen *ui;
};

#endif // WINNERSCREEN_H
