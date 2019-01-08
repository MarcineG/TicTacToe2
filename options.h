#ifndef OPTIONS_H
#define OPTIONS_H

#include <QDialog>

namespace Ui {
class Options;
}

class Options : public QDialog
{
    Q_OBJECT

public:
    explicit Options(QWidget *parent = nullptr);
    ~Options();

private slots:
    void on_CancelButton_clicked();

    void on_saveButton_clicked();

  //  void on_xRadioButton_clicked();

private:
    Ui::Options *ui;
};

#endif // OPTIONS_H
