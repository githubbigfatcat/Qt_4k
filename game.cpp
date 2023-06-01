#include "game.h"
#include "ui_game.h"
#include "pause.h"
#include "endgame.h"
#include <iostream>
using namespace std;
game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
}

game::~game()
{
    delete ui;
}

void game::on_pushButton_clicked()
{
    pause* p=new pause(this);
    p->show();
}




void game::on_pushButton_2_clicked()
{
    endgame* en=new endgame(this);
    en->show();
    std::cout<<"show"<<endl;
    en->work();
    game::close();
}
