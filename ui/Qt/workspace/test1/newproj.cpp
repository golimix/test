#include "newproj.h"
#include "ui_newproj.h"

NewProj::NewProj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProj)
{
    ui->setupUi(this);
}

NewProj::~NewProj()
{
    delete ui;
}
