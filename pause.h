#ifndef PAUSE_H
#define PAUSE_H
#include <QDialog>

namespace Ui {
class pause;
}

class pause : public QDialog
{
    Q_OBJECT

public:
    explicit pause(QWidget *parent = nullptr);
    ~pause();

private slots:
    void on_pushButton_clicked();


private:
    Ui::pause *ui;
};

#endif // PAUSE_H
