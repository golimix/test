#include <QApplication>
#include "mainwindow.h"
#include "dialog_logindlg.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	
#if 0//LogIN dialog
    Dialog_loginDlg login;
	if(login.exec()==QDialog::Accepted) 
	{ 
		w.show(); 
		return a.exec(); 
	}
	else return 0;
#endif

    w.show();
    
    return a.exec();
}
