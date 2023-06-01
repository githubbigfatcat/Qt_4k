#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    QPushButton* button[20];

    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void changeLabel_first();
    void changeLabel_second();
    void changeLabel_third();
    void changeLabel_forth();
private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
