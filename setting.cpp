#include "setting.h"
#include "dialog.h"
#include "ui_setting.h"
#include<iostream>
using namespace std;
setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
}

setting::~setting()
{
    delete ui;
}



