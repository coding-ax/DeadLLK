#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include "mainwindow.h"
#include "dialogbox.h"
#include <QMediaPlayer>

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

    void on_pushButton_4_clicked();

private:
    Ui::index *ui;
    MainWindow *w;
    DialogBox *dialog;
};

#endif // INDEX_H
