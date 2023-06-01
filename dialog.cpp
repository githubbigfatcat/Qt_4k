#include "dialog.h"
#include "ui_dialog.h"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ifstream in;
    int num[20] , cnt;
    char name[20][100];
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    for(int i=0;i<20;i++)
    {
        button[i]=new QPushButton(this);
    }
    in>>cnt;
    for(int i=0;i<20;i++)
    {
        button[i]->move(-200,10+100*i);
    }
    for(int i =0;i<cnt;i++)
    {
        in>>num[i]>>name[i];
        button[i]->setText(name[i]);
        button[i]->move(20,10+100*i);
        button[i]->resize(311,100);
        button[i]->show();
    }

        connect(button[0],SIGNAL(click()),this,SLOT(changeLabel_first()));
        connect(button[1],SIGNAL(click()),this,SLOT(changeLabel_second()));
        connect(button[2],SIGNAL(click()),this,SLOT(changeLabel_third()));
        connect(button[3],SIGNAL(click()),this,SLOT(changeLabel_forth()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeLabel_first(){
    int cnt;int num;
    char info[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    in>>num>>info;
    ui->label->setText(info);
}
void Dialog::changeLabel_second(){
    int cnt;int num;
    char info[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=1;i++)
    {
        in>>num>>info;
    }
    ui->label->setText(info);
}
void Dialog::changeLabel_third(){
    int cnt;int num;
    char info[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=2;i++)
    {
        in>>num>>info;
    }
    ui->label->setText(info);
}
void Dialog::changeLabel_forth(){
    int cnt;int num;
    char info[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=3;i++)
    {
        in>>num>>info;
    }
    ui->label->setText(info);
}




