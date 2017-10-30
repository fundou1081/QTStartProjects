#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>

namespace Ui {
class Dialog;
}

class Dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;

private slots:
    void showFile();
};

#endif // DIALOG_H
