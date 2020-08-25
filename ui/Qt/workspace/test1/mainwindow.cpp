#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newproj.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    new_proj_Action = new QAction(tr("&Open"), this); 
//    new_proj_Action->setShortcut(QKeySequence::Open); 
//    new_proj_Action->setStatusTip(tr("Open a file."));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_Proj_activated()
{

}

void MainWindow::on_actionOpen_Proj_triggered()
{
    
}

void MainWindow::on_actionOpen_Proj_triggered(bool checked)
{
    
}

void MainWindow::on_actionNew_triggered()
{
    new_proj = new NewProj;
    new_proj->show();
}

void MainWindow::on_horizontalSlider_rangeChanged(int min, int max)
{
    std::cout<<"range: min"<<min<<" max "<< max<<std::endl;
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    std::cout<<"Changed value"<<value<<std::endl;
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    std::cout<<"Moved value"<<position<<std::endl;
}

void MainWindow::on_timeEdit_timeChanged(const QTime &date)
{
    std::cout<<"timeChanged value"<<date.currentTime().hour()<<std::endl;
}

void MainWindow::on_timeEdit_editingFinished()
{
     std::cout<<"timeChanged editingFinished"<<std::endl;
}
