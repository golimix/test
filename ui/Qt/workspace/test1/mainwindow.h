#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "newproj.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    NewProj *new_proj;
    
private slots:
    void on_actionOpen_Proj_activated();

    void on_actionOpen_Proj_triggered();

    void on_actionOpen_Proj_triggered(bool checked);

    void on_actionNew_triggered();

    void on_horizontalSlider_rangeChanged(int min, int max);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_sliderMoved(int position);

    void on_timeEdit_timeChanged(const QTime &date);

    void on_timeEdit_editingFinished();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
