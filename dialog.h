#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <setting.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    QPushButton* button[20];
    QPushButton* start_game;

    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void changeLabel0();
    void changeLabel1();
    void changeLabel2();
    void changeLabel3();
    void changeLabel4();
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
