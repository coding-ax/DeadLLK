#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "uicontrol.h"
#include"mycell.h"
#include"gamearrayshow.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_game_button_clicked();

    void on_stop_game_button_clicked();

    void on_restart_game_button_clicked();

private:
    Ui::MainWindow *ui;
    UIControl *UICon;
    // 标记是否暂停
    bool stopTemp;
    // 剩余时间
    int lastTime=100;
    // 游戏数组维护类
     GameArrayShow *arr;
};

#endif // MAINWINDOW_H
