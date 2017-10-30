#include "dialog.h"
#include "ui_dialog.h"
#include <QGridLayout>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    fileBtn=new QPushButton(this);
    fileBtn->setText(tr("file dialog"));
    fileLineEdit=new QLineEdit(this);

    QGridLayout *mainLayout=new QGridLayout(this);
    mainLayout->addWidget(fileBtn,0,0);
    mainLayout->addWidget(fileLineEdit,0,1);

    connect(fileBtn,SIGNAL(clicked()),this,SLOT(showFile()));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::showFile(){
    QString s = QFileDialog::getOpenFileName(this,"OpenFileDialog","/",
                                         "C++files(*.cpp)::C files(*.c)::Head files(*.h)");
    fileLineEdit->setText(s);
}
