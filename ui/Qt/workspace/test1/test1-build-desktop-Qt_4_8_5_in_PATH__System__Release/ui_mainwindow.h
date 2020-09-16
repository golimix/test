/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionNew_File;
    QAction *actionOpen_Proj;
    QAction *actionOpen_File;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionCopy;
    QAction *actionDelete;
    QWidget *centralWidget;
    QTimeEdit *timeEdit;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuBuild;
    QMenu *menuDebug;
    QMenu *menuAnalyze;
    QMenu *menuTools;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(633, 467);
        MainWindow->setMinimumSize(QSize(10, 10));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/myspace-squared-outlined.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        QFont font;
        actionNew->setFont(font);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QString::fromUtf8("actionNew_File"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon2);
        actionOpen_Proj = new QAction(MainWindow);
        actionOpen_Proj->setObjectName(QString::fromUtf8("actionOpen_Proj"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/folder-invoices.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Proj->setIcon(icon3);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/opened-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon4);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../icon/Arrows Icon Pack (PNG, vector)_files/circled-chevron-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../icon/Arrows Icon Pack (PNG, vector)_files/circled-chevron-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/external-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/check-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon8);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../icon/Popular Icon Pack (PNG, vector)_files/delete-sign-filled.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon9);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(350, 390, 118, 24));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(470, 390, 160, 23));
        horizontalSlider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 633, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuBuild = new QMenu(menuBar);
        menuBuild->setObjectName(QString::fromUtf8("menuBuild"));
        menuDebug = new QMenu(menuBar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        menuAnalyze = new QMenu(menuBar);
        menuAnalyze->setObjectName(QString::fromUtf8("menuAnalyze"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuBuild->menuAction());
        menuBar->addAction(menuDebug->menuAction());
        menuBar->addAction(menuAnalyze->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionNew_File);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Proj);
        menuFile->addAction(actionOpen_File);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionDelete);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SYLINCOM-JT_SRAN Automated testing tools", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New Proj", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "New Proj", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionNew->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0, QApplication::UnicodeUTF8));
        actionNew_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionOpen_Proj->setText(QApplication::translate("MainWindow", "Open Proj", 0, QApplication::UnicodeUTF8));
        actionOpen_Proj->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuBuild->setTitle(QApplication::translate("MainWindow", "Build", 0, QApplication::UnicodeUTF8));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
        menuAnalyze->setTitle(QApplication::translate("MainWindow", "Analyze", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("MainWindow", "Window", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
