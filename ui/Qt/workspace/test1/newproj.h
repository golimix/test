#ifndef NEWPROJ_H
#define NEWPROJ_H

#include <QDialog>

namespace Ui {
class NewProj;
}

class NewProj : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewProj(QWidget *parent = 0);
    ~NewProj();
    
private:
    Ui::NewProj *ui;
};

#endif // NEWPROJ_H
