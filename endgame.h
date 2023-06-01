#ifndef ENDGAME_H
#define ENDGAME_H
#include <QLabel>
#include <QDialog>

namespace Ui {
class endgame;
}

class endgame : public QDialog
{
    Q_OBJECT

public:
    explicit endgame(QWidget *parent = nullptr);
    ~endgame();
    void work();
    int score;
    double accuracy;
    int combo;
    int perfect;
    int great;
    int good;
    int miss;
    QLabel* s;
    QLabel* a;

private:
    Ui::endgame *ui;
};

#endif // ENDGAME_H
