#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QGridLayout>
#include "inputdlg.h"
#include "progressdlg.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QPushButton *fileBtn, *inBtn ,*proBtn;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;
    InputDlg *inputDlg;
    ProgressDlg *progressDlg;

private slots:
    void showFile();
    void showInputDlg();
    void showProgressBar();

};

#endif // DIALOG_H
