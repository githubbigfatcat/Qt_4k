#ifndef GAME_H
#define GAME_H
#include "pause.h"
#include "endgame.h"
#include <QDialog>
namespace Ui {
class game;
}

class game : public QDialog
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr);
    ~game();
    endgame en;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::game *ui;
};

#endif // GAME_H
