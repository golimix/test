/********************************************************************************
** Form generated from reading UI file 'dialog_logindlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGINDLG_H
#define UI_DIALOG_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_loginDlg
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_loginUserName;
    QLineEdit *lineEdit_loginPassword;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *Dialog_loginDlg)
    {
        if (Dialog_loginDlg->objectName().isEmpty())
            Dialog_loginDlg->setObjectName(QString::fromUtf8("Dialog_loginDlg"));
        Dialog_loginDlg->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/external-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_loginDlg->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Dialog_loginDlg);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_loginUserName = new QLineEdit(Dialog_loginDlg);
        lineEdit_loginUserName->setObjectName(QString::fromUtf8("lineEdit_loginUserName"));
        lineEdit_loginUserName->setGeometry(QRect(172, 60, 141, 24));
        lineEdit_loginPassword = new QLineEdit(Dialog_loginDlg);
        lineEdit_loginPassword->setObjectName(QString::fromUtf8("lineEdit_loginPassword"));
        lineEdit_loginPassword->setGeometry(QRect(172, 110, 141, 24));
        label = new QLabel(Dialog_loginDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 71, 16));
        label_2 = new QLabel(Dialog_loginDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 110, 61, 16));
        commandLinkButton = new QCommandLinkButton(Dialog_loginDlg);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 250, 168, 31));

        retranslateUi(Dialog_loginDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_loginDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_loginDlg, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_loginDlg);
    } // setupUi

    void retranslateUi(QDialog *Dialog_loginDlg)
    {
        Dialog_loginDlg->setWindowTitle(QApplication::translate("Dialog_loginDlg", "LogIN Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("Dialog_loginDlg", "<html><head/><body><p>Login</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Dialog_loginDlg", "User Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog_loginDlg", "Password", 0, QApplication::UnicodeUTF8));
        commandLinkButton->setText(QApplication::translate("Dialog_loginDlg", "About Us", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog_loginDlg: public Ui_Dialog_loginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGINDLG_H
