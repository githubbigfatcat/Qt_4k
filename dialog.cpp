#include "dialog.h"
#include "ui_dialog.h"
#include "setting.h"
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{

    ui->setupUi(this);
    //初始化按钮
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
        button[i]->move(-2000,10+100*i);
    }
    for(int i =0;i<cnt;i++)
    {
        in>>num[i]>>name[i];
        button[i]->setText(name[i]);
        button[i]->move(20,10+100*i);
        button[i]->resize(311,100);
        button[i]->show();
    }

    //初始化start按钮，并移到屏幕外
    start_game = new QPushButton(this);
    start_game->move(-2000,10);
    start_game->resize(140,200);
    start_game->setText("Start!");
    start_game->show();

    //建立槽
    connect(button[0],SIGNAL(clicked()),this,SLOT(changeLabel0()));
    connect(button[1],SIGNAL(clicked()),this,SLOT(changeLabel1()));
    connect(button[2],SIGNAL(clicked()),this,SLOT(changeLabel2()));
    connect(button[3],SIGNAL(clicked()),this,SLOT(changeLabel3()));
    connect(button[4],SIGNAL(clicked()),this,SLOT(changeLabel4()));

    // 设定label
    //ui->label->move(600,20);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeLabel0(){
    start_game->move(191,540);
    int cnt;int num;
    char info[100];
        char name[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=0;i++)
    {
        in>>num>>info;
    }
    in.close();
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    in>>cnt;
    for(int i=0;i<=0;i++)
    {
        in>>num>>name;
    }
    //实现图片转换
    QPixmap img1("/Users/chenlingjun/Desktop/untitled3/1.bmp");
    QPixmap img2("/Users/chenlingjun/Desktop/untitled3/2.jpeg");
    QPixmap img3("/Users/chenlingjun/Desktop/untitled3/3.jpeg");
    QPixmap img4("/Users/chenlingjun/Desktop/untitled3/4.png");
    QPixmap img5("/Users/chenlingjun/Desktop/untitled3/5.jpg");
    ui->label_1->setPixmap(img1);
    ui->label_2->setPixmap(img2);
    ui->label_3->setPixmap(img3);
    ui->label_4->setPixmap(img4);
    ui->label_5->setPixmap(img5);
    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_1->setFrameShape(QFrame::Box);
    ui->label_2->setFrameShape(QFrame::Box);
    ui->label_3->setFrameShape(QFrame::Box);
    ui->label_4->setFrameShape(QFrame::Box);
    ui->label_5->setFrameShape(QFrame::Box);

    ui->label->setText(info);
    ui->label_songname->setText((name));
    ui->by->setText("by");
}
void Dialog::changeLabel1(){
    start_game->move(191,540);
    int cnt;int num;
    char info[100];
        char name[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=1;i++)
    {
        in>>num>>info;
    }
    in.close();
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    in>>cnt;
    for(int i=0;i<=1;i++)
    {
        in>>num>>name;
    }
    QPixmap img1("/Users/chenlingjun/Desktop/untitled3/1.bmp");
    QPixmap img2("/Users/chenlingjun/Desktop/untitled3/2.jpeg");
    QPixmap img3("/Users/chenlingjun/Desktop/untitled3/3.jpeg");
    QPixmap img4("/Users/chenlingjun/Desktop/untitled3/4.png");
    QPixmap img5("/Users/chenlingjun/Desktop/untitled3/5.jpg");
    ui->label_1->setPixmap(img2);
    ui->label_2->setPixmap(img3);
    ui->label_3->setPixmap(img4);
    ui->label_4->setPixmap(img5);
    ui->label_5->setPixmap(img1);
    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_1->setFrameShape(QFrame::Box);
    ui->label_2->setFrameShape(QFrame::Box);
    ui->label_3->setFrameShape(QFrame::Box);
    ui->label_4->setFrameShape(QFrame::Box);
    ui->label_5->setFrameShape(QFrame::Box);

    ui->label->setText(info);
    ui->label_songname->setText((name));
    ui->by->setText("by");
}
void Dialog::changeLabel2(){
    start_game->move(191,540);
    int cnt;int num;
    char info[100];
        char name[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=2;i++)
    {
        in>>num>>info;
    }
    in.close();
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    in>>cnt;
    for(int i=0;i<=2;i++)
    {
        in>>num>>name;
    }
    QPixmap img1("/Users/chenlingjun/Desktop/untitled3/1.bmp");
    QPixmap img2("/Users/chenlingjun/Desktop/untitled3/2.jpeg");
    QPixmap img3("/Users/chenlingjun/Desktop/untitled3/3.jpeg");
    QPixmap img4("/Users/chenlingjun/Desktop/untitled3/4.png");
    QPixmap img5("/Users/chenlingjun/Desktop/untitled3/5.jpg");
    ui->label_1->setPixmap(img3);
    ui->label_2->setPixmap(img4);
    ui->label_3->setPixmap(img5);
    ui->label_4->setPixmap(img1);
    ui->label_5->setPixmap(img2);
    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_1->setFrameShape(QFrame::Box);
    ui->label_2->setFrameShape(QFrame::Box);
    ui->label_3->setFrameShape(QFrame::Box);
    ui->label_4->setFrameShape(QFrame::Box);
    ui->label_5->setFrameShape(QFrame::Box);

    ui->label->setText(info);
    ui->label_songname->setText((name));
    ui->by->setText("by");
}
void Dialog::changeLabel3(){
    start_game->move(191,540);
    int cnt;int num;
    char info[100];
    char name[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=3;i++)
    {
        in>>num>>info;
    }
    in.close();
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    in>>cnt;
    for(int i=0;i<=3;i++)
    {
        in>>num>>name;
    }
    QPixmap img1("/Users/chenlingjun/Desktop/untitled3/1.bmp");
    QPixmap img2("/Users/chenlingjun/Desktop/untitled3/2.jpeg");
    QPixmap img3("/Users/chenlingjun/Desktop/untitled3/3.jpeg");
    QPixmap img4("/Users/chenlingjun/Desktop/untitled3/4.png");
    QPixmap img5("/Users/chenlingjun/Desktop/untitled3/5.jpg");
    ui->label_1->setPixmap(img4);
    ui->label_2->setPixmap(img5);
    ui->label_3->setPixmap(img1);
    ui->label_4->setPixmap(img2);
    ui->label_5->setPixmap(img3);
    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_1->setFrameShape(QFrame::Box);
    ui->label_2->setFrameShape(QFrame::Box);
    ui->label_3->setFrameShape(QFrame::Box);
    ui->label_4->setFrameShape(QFrame::Box);
    ui->label_5->setFrameShape(QFrame::Box);
    ui->label->setText(info);
    ui->label_songname->setText((name));
    ui->by->setText("by");
}
void Dialog::changeLabel4(){
    start_game->move(191,540);
    int cnt;int num;
    char info[100];
        char name[100];
    ifstream in;
    in.open("/Users/chenlingjun/Desktop/untitled1/info");
    in>>cnt;
    for(int i=0;i<=4;i++)
    {
        in>>num>>info;
    }
    in.close();
    in.open("/Users/chenlingjun/Desktop/untitled1/songs");
    in>>cnt;
    for(int i=0;i<=4;i++)
    {
        in>>num>>name;
    }
    QPixmap img1("/Users/chenlingjun/Desktop/untitled3/1.bmp");
    QPixmap img2("/Users/chenlingjun/Desktop/untitled3/2.jpeg");
    QPixmap img3("/Users/chenlingjun/Desktop/untitled3/3.jpeg");
    QPixmap img4("/Users/chenlingjun/Desktop/untitled3/4.png");
    QPixmap img5("/Users/chenlingjun/Desktop/untitled3/5.jpg");
    ui->label_1->setPixmap(img5);
    ui->label_2->setPixmap(img1);
    ui->label_3->setPixmap(img2);
    ui->label_4->setPixmap(img3);
    ui->label_5->setPixmap(img4);
    ui->label_1->setScaledContents(true);
    ui->label_2->setScaledContents(true);
    ui->label_3->setScaledContents(true);
    ui->label_4->setScaledContents(true);
    ui->label_5->setScaledContents(true);
    ui->label_1->setFrameShape(QFrame::Box);
    ui->label_2->setFrameShape(QFrame::Box);
    ui->label_3->setFrameShape(QFrame::Box);
    ui->label_4->setFrameShape(QFrame::Box);
    ui->label_5->setFrameShape(QFrame::Box);

    ui->label->setText(info);
    ui->label_songname->setText((name));
    ui->by->setText("by");
}

void Dialog::on_pushButton_clicked()
{
    setting *set =  new setting(this);
    set->show();
}

