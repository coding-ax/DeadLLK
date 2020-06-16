#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <cstdlib>
#include <ctime>
#include <QVector>
#include "mycell.h"
#include "uicontrol.h"
#include "gamearrayshow.h"
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
    // 以下仅为test数组
    QVector<QVector<int>> testArr1;
//    for(int i=0;i<16;i++)
//    {
//        QVector<int> temp;
//        for(int j =0 ; j<10 ; j++){
//           temp.push_back(1);
//        }
//        testArr1.push_back(temp);
//    }
    GameArrayShow arr(16,10,4);
    testArr1 =  arr.getShowArr();

    this->UICon = new UIControl();
    UICon->initUI(ui->show_box,testArr1);
    connect(UICon,&UIControl::changeArr,[=](int x,int y) mutable
    {
//        qDebug()<<"main"<<x<<y;
        if(UICon->hasClick){
            arr.clearPoint(x,y, UICon->lastClickX,UICon->lastClickY);
            UICon->refreshUI(arr.getShowArr());
            UICon->hasClick=false;
        }
        else{
            UICon->hasClick=true;
            UICon->lastClickX=x;
            UICon->lastClickY=y;
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
}

void MainWindow::on_stop_game_button_clicked()
{
    qDebug()<<"on_stop_game_button_clicked";
    QVector<QVector<int>> testArr2;
    // 依旧是测试数组 接下来我们做出抽离
    for(int i=0;i<10;i++)
    {
        QVector<int> temp;
        for(int j =0 ; j<5; j++){
           temp.push_back(1);
        }
        for(int j=5;j<10;j++){
            temp.push_back(0);
        }
        testArr2.push_back(temp);
    }
     qDebug()<<"on_stop_game_button_clicked after testARR2";
    this->UICon->refreshUI(testArr2);



}
