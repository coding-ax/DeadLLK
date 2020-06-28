#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class index;
}

class index : public QWidget
{
    Q_OBJECT

public:
    explicit index(QWidget *parent = 0);
    ~index();

private slots:
    void on_timeModern_clicked();

private:
    Ui::index *ui;
    MainWindow *w;
};

#endif // INDEX_H
