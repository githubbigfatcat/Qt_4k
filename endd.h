#ifndef ENDD_H
#define ENDD_H
#include <Qlabel.h>
#include <QDialog>

namespace Ui {
class end;
}

class end : public QDialog
{    Q_OBJECT

public:
    explicit end(QWidget *parent = nullptr);
    ~end();
    int score;
    double accuracy;
    int combo;
    int perfect;
    int great;
    int good;
    int miss;
    QLabel* s;
    QLabel* a;
    QLabel* c;
    QLabel* p;

private slots:
    void on_pushButton_clicked();

private:
    Ui::end *ui;
};

#endif // ENDD_H
