#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "HackMeRE.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pressed()
{
    HackMe *h = new HackMe();
    h->setstring("set the password");

    std::cout<<"the string is :"<<h->getstring()<<std::endl;

}
