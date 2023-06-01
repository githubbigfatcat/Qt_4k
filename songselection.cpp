#include "songselection.h"
#include "ui_songselection.h"
#include "setting.h"
songselection::songselection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::songselection)
{
    ui->setupUi(this);
}

songselection::~songselection()
{
    delete ui;
}

void songselection::on_pushButton_clicked()
{
    sett.show();
}


void songselection::on_pushButton_2_clicked()
{
    g.show();
    songselection::close();
}

