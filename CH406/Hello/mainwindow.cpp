﻿#include "mainwindow.h"
#include <QTextEdit>
#include <Windows.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Splash Example");
    QTextEdit *edit=new QTextEdit;
    edit->setText("Splash Example text");
    setCentralWidget(edit);

    resize(600,450);
    Sleep(1000);
}

MainWindow::~MainWindow()
{

}
