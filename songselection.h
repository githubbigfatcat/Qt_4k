#ifndef SONGSELECTION_H
#define SONGSELECTION_H
#include "setting.h"
#include <QDialog>
#include "game.h"

namespace Ui {
class songselection;
}

class songselection : public QDialog
{
    Q_OBJECT

public:
    explicit songselection(QWidget *parent = nullptr);
    ~songselection();
    setting sett;
    game g;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::songselection *ui;
};

#endif // SONGSELECTION_H
