#include "index.h"
#include "ui_index.h"
#include "mainwindow.h"
#include "QDebug"
index::index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);

    // 音乐test
    QMediaPlayer *player = new QMediaPlayer(this);//设置背景音乐
    player->setMedia(QUrl::fromLocalFile("F:/落空.mp3"));
    player->setVolume(100);//音量
    player->play();
//    connect(player,&QMediaPlayer::mediaStatusChanged)
    qDebug()<<"ddmusic"<<endl;

    //测试dialog
    this->dialog = new DialogBox;
    this->dialog->setContent("你失败了！");
    this->dialog->show();

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
    this->dialog->show();
}
