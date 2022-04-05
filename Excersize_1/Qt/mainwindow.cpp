#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dsLibrary.h"
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
    dsString *str1 = new dsString(L"Dassault");
    dsString *str2= new dsString(L"IsHacked_OrNot?");

    std::cout<<"string 1 size:"<<str1->getSize()<<std::endl;
    std::cout<<"string 2 size:"<<str2->getSize()<<std::endl;

    const dsString aFixedOne = L"Dassault";
    int isEqual=str1->Compare(aFixedOne);

    std::cout<<"String 1:"<<isEqual<<std::endl;

    isEqual=str2->Compare(aFixedOne);

    std::cout<<"String 2:"<<isEqual<<std::endl;
}
