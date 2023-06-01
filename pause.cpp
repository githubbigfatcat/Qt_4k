#include "pause.h"
#include "ui_pause.h"
#include "dialog.h"

pause::pause(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pause)
{
    ui->setupUi(this);
}

pause::~pause()
{
    delete ui;
}

void pause::on_pushButton_clicked()
{
    Dialog* d=new Dialog();
    pause::close();
    d->show();
}

