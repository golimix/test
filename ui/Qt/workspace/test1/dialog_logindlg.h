#ifndef DIALOG_LOGINDLG_H
#define DIALOG_LOGINDLG_H

#include <QDialog>
#include <QAbstractButton>
namespace Ui {
class Dialog_loginDlg;
}

class Dialog_loginDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog_loginDlg(QWidget *parent = 0);
    ~Dialog_loginDlg();
    
private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Dialog_loginDlg *ui;
};

#endif // DIALOG_LOGINDLG_H
