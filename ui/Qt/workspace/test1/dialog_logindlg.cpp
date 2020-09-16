#include <QMessageBox>

#include "dialog_logindlg.h"
#include "ui_dialog_logindlg.h"

Dialog_loginDlg::Dialog_loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_loginDlg)
{
    ui->setupUi(this);
	ui->lineEdit_loginPassword->setEchoMode(QLineEdit::Password);
}

Dialog_loginDlg::~Dialog_loginDlg()
{
    delete ui;
}

void Dialog_loginDlg::on_buttonBox_clicked(QAbstractButton *button)
{
    if(ui->lineEdit_loginUserName->text().trimmed()==tr("rongtao")&&
	   ui->lineEdit_loginPassword->text()==tr("123456"))
	{
		accept();
	}
	else
	{ 
        QMessageBox::warning(this,tr("Warning"),tr("user name or password error!"),QMessageBox::Yes);
		//如果不正确，弹出警告对话框 
		ui->lineEdit_loginUserName->clear();//清空用户名输入框 
		ui->lineEdit_loginPassword->clear();//清空密码输入框 
		ui->lineEdit_loginUserName->setFocus();//将光标转到用户名输入框
		//ui->setupUi(this);
		//ui->lineEdit_loginPassword->setEchoMode(QLineEdit::Password);
	}
}
