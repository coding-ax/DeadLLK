#include "index.h"
#include "ui_index.h"
#include "mainwindow.h"
#include "QDebug"
index::index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);
    setWindowTitle("欢乐连连看");
    // 音乐test
    this->player = new QMediaPlayer(this);//设置背景音乐
    //    this->player->setMedia(QUrl::fromLocalFile(":/music/落空.mp3"));
    //修改为qrc路径
    this->player->setMedia(QUrl("qrc:/music/落空.mp3"));
    this->player->setVolume(99);//音量
   this-> player->play();
}

index::~index()
{
    delete ui;
}

void index::on_timeModern_clicked()
{
    // 跳到限时模式 并隐藏当前窗口
    hide();
    this->w = new MainWindow;
    // 设置限时模式难度
    this->w->setMode(16,10,4,100);
    this->w->show();


    // 设置返回监听
    connect(this->w,&MainWindow::exitToInit,[ = ]() mutable
    {
        show();
    });
}

// 处理dialog 显示帮助
void index::on_pushButton_4_clicked()
{
    this->dialog = new DialogBox;
    this->dialog->setContent("xgp开发的LLK");
    this->dialog->show();

}

void index::on_pushButton_5_clicked()
{
    this->settingBox = new Setting;
    this->settingBox->show();
    // 监听设置开关
    connect(this->settingBox,&Setting::isPlayed,[=](bool isplay)
    {
        qDebug()<<"test";
        if(isplay){
            qDebug()<<"点击了开启"<<endl;
//            delete player;
            player = new QMediaPlayer(this);//设置背景音乐
            player->setMedia(QUrl("qrc:/music/落空.mp3"));
            player->setVolume(100);//音量
            player->play();
        }
        else{
            qDebug()<<"点击了关闭"<<endl;
            // 释放
            delete player;
           player = NULL;
        }
    });
    // 监听音量调整
    connect(this->settingBox,&Setting::volumeSizeChange,[=](int val)
    {
        this->player->setVolume(val);
    });
}

void index::on_pushButton_3_clicked()
{
    // 跳到娱乐模式 并隐藏当前窗口
    hide();
    this->w = new MainWindow;
    // 设置限时模式难度
    this->w->setMode(16,10,4,0);
    this->w->show();


    // 设置返回监听
    connect(this->w,&MainWindow::exitToInit,[ = ]() mutable
    {
        show();
    });
}

void index::on_pushButton_2_clicked()
{
    // 跳到关卡式 并隐藏当前窗口
    hide();
    this->w = new MainWindow;
    // 设置关卡模式难度
    this->w->setMode(8,5,4,100);
    this->w->show();


    // 设置返回监听
    connect(this->w,&MainWindow::exitToInit,[ = ]() mutable
    {
        show();
    });
}
