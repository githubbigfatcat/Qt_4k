#include "endd.h"
#include "ui_end.h"
#include "dialog.h"
#include <fstream>
#include <iostream>
#include <Qstring.h>

end::end(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);
    std::fstream file;
    file.open("./result.txt",std::ios::in);
    file>>score>>accuracy>>combo>>perfect>>great>>good>>miss;
    s=new QLabel(this);
    QString qs;
    qs.setNum(score,10);
    s->show();
    s->setText(qs);
}

end::~end()
{
    delete ui;
}

void end::on_pushButton_clicked()
{
    Dialog* d=new Dialog();
    d->show();
    end::close();
}

