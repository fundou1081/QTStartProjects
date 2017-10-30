#include "dialog.h"
#include "ui_dialog.h"
#include <QGridLayout>
#include <QFileDialog>
#include <QPushButton>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    fileBtn=new QPushButton;
    fileBtn->setText(tr("file dialog"));
    fileLineEdit=new QLineEdit;
    inBtn=new QPushButton;
    inBtn->setText(QString::fromLocal8Bit("打开窗口"));
    proBtn=new QPushButton;
    proBtn->setText("progressbar");

    mainLayout=new QGridLayout(this);
    mainLayout->addWidget(fileBtn,0,0);
    mainLayout->addWidget(fileLineEdit,0,1);
    mainLayout->addWidget(inBtn,1,0);
    mainLayout->addWidget(proBtn,2,0);

    connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFile()));
    connect(inBtn,SIGNAL(clicked()),this,SLOT(showInputDlg()));
    connect(proBtn,SIGNAL(clicked()),this,SLOT(showProgressBar()));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::showFile(){
    QString s = QFileDialog::getOpenFileName(this,"OpenFileDialog","/",
                                         "C++ files(*.cpp);;C files(*.c);;Head files(*.h)");
    fileLineEdit->setText(s);
}

void Dialog::showInputDlg()
{
    inputDlg =new InputDlg(this);
    inputDlg->show();
}
void Dialog::showProgressBar(){
    progressDlg=new ProgressDlg(this);
    progressDlg->show();
}
