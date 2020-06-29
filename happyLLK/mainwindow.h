#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "uicontrol.h"
#include"mycell.h"
#include"gamearrayshow.h"
#include<QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setMode(int width,int height,int level,int time);
private slots:
    void on_start_game_button_clicked();

    void on_stop_game_button_clicked();

    void on_restart_game_button_clicked();

    void on_setting_clicked();

    void on_help_clicked();
    // 为0则不添加进度条控件,其他则进行对应设置
    void setTime(int time);
    void on_message_button_clicked();

private:
    Ui::MainWindow *ui;
    UIControl *UICon;
    // 标记是否暂停
    bool stopTemp;
    // 剩余时间
    int lastTime=100;
    // 游戏数组维护类
     GameArrayShow *arr;

// 信号发送
signals:
     void exitToInit();
};

#endif // MAINWINDOW_H
