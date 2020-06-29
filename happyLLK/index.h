#ifndef INDEX_H
#define INDEX_H

#include <QWidget>
#include "mainwindow.h"
#include "dialogbox.h"
#include <QMediaPlayer>
#include "setting.h"
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

    void on_pushButton_5_clicked();

private:
    Ui::index *ui;
    MainWindow *w;
    DialogBox *dialog;
    Setting *settingBox;
    // music
    QMediaPlayer *player;
};

#endif // INDEX_H
