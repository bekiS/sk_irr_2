#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <irrlicht.h>
//#include "../irrlicht-zdroje/synthetic_util_irrptr.hpp"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->irrlichtWidget->setVisible(true);
//    ui->irrlichtWidget->paintingActive();

}


MainWindow::~MainWindow()
{

    delete ui;

}


