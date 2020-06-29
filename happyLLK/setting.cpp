#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting)
{
    ui->setupUi(this);
    setWindowTitle("设置");
    this->volumeSize = 99;
    this->isPlay = true;
}

Setting::~Setting()
{
    delete ui;
}

// 点击开启
void Setting::on_open_clicked()
{
     this->ui->open->setChecked(true);
    this->ui->close->setChecked(false);
    this->isPlay = true;
    emit isPlayed(true);
}

// 点击关闭
void Setting::on_close_clicked()
{
    this->ui->close->setChecked(true);
    this->ui->open->setChecked(false);
    this->isPlay = false;
    emit isPlayed(false);
}

void Setting::on_settingVolume_valueChanged(int value)
{
//    qDebug()<<value;
   emit volumeSizeChange(value);
}
