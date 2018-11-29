#include "options.h"
#include "ui_options.h"
#include "globals.h"
#include <QDesktopServices>
#include <QUrl>


Options::Options(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Options)
{
    this->setWindowTitle("OPTIONS");
    ui->setupUi(this);


    ui->heightValueLine->setText(QString::number(Values::height));
    ui->widthValueLine->setText((QString::number(Values::width)));
}

Options::~Options()
{
    delete ui;
}

void Options::on_CancelButton_clicked()
{
    this->close();
}

void Options::on_saveButton_clicked()
{
    QString heightValue = ui->heightValueLine->text();
    QString widthValue = ui->widthValueLine->text();
    Values::height=heightValue.toInt();
    Values::width=widthValue.toInt();
    this->close();

}
