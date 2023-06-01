#include "endgame.h"
#include "ui_endgame.h"
#include <QLabel>
#include <fstream>
endgame::endgame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endgame)
{
    ui->setupUi(this);
};

void endgame::work()
{
    std::ifstream file;
    file.open("\result.txt",std::ios::in);
    file>>score>>accuracy>>combo>>perfect>>great>>good>>miss;
    QString qs;
    qs.setNum(score,10);
    s->setText(qs);
    s->show();
}
endgame::~endgame()
{
    delete ui;
}
