#include "index.h"
#include "ui_index.h"
#include "mainwindow.h"
index::index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::index)
{
    ui->setupUi(this);
}

index::~index()
{
    delete ui;
}

void index::on_timeModern_clicked()
{
    // 跳到限时模式
    hide();
    this->w = new MainWindow;
    this->w->show();
}
