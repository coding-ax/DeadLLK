#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <cstdlib>
#include <ctime>
#include <QVector>
#include "mycell.h"
#include "uicontrol.h"
#include "gamearrayshow.h"
#include <QTimer>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    setWindowTitle("欢乐连连看");
    ui->setupUi(this);
    // 隐藏show-box
    ui->show_box->hide();

    // 设置默认UI
    QVector<QVector<int>> testArr1;
    // 分配地址
    this->arr = new GameArrayShow(16,10,4);
    testArr1 =  arr->getShowArr();

    this->UICon = new UIControl();
    UICon->initUI(ui->show_box,testArr1);
    connect(UICon,&UIControl::changeArr,[=](int x,int y) mutable
    {
        // 进行消去判断
        if(UICon->hasClick){
           int flag =  arr->clearPoint(x,y, UICon->lastClickX,UICon->lastClickY);
           // 如果可以消去
           if(flag){
//               UICon->setColor(x,y,true);
               UICon->refreshUI(arr->getShowArr());
               UICon->hasClick=false;
           }
           // 否则更新点
           else{
               // 去掉边框
              UICon->setColor(UICon->lastClickX,UICon->lastClickY,false);
              // 更新点
              UICon->lastClickX=x;
              UICon->lastClickY=y;
              // 设置 x y 位置的边框
              UICon->setColor(x,y,true);
              // 同时刷新点击标志
               UICon->hasClick=true;
           }

        }
        else{
            UICon->hasClick=true;
            // 取消上个边框
            UICon->lastClickX=x;
            UICon->lastClickY=y;
            // 设置 x y 位置的边框
            UICon->setColor(x,y,true);
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_game_button_clicked()
{
    ui->show_box->show();
    // 按钮禁用
    ui->start_game_button->setDisabled(true);
    //定时器设置
    ui->progressBar->setValue( lastTime);
    QTimer *progressSetting = new QTimer();
    progressSetting->start(1000);
    // 定时器标志
    this->stopTemp = false;
    connect(progressSetting,&QTimer::timeout,[=]()mutable{
        // 定时
        if(!this->stopTemp){
              ui->progressBar->setValue(--this->lastTime);
        }
        if(lastTime==0){
            progressSetting->stop();
        }
    });
}

void MainWindow::on_stop_game_button_clicked()
{
    if(!this->stopTemp){
        this->ui->show_box->hide();
        this->ui->stop_game_button->setText("继续游戏");
        this->stopTemp = true;
    }
    else{
        this->ui->show_box->show();
        this->ui->stop_game_button->setText("暂停游戏");
        this->stopTemp = false;
    }
}

void MainWindow::on_restart_game_button_clicked()
{

}

// 退出槽
void MainWindow::on_setting_clicked()
{
   close();
    // 分发事件打开主界面
  emit exitToInit();
}
