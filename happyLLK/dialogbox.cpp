#include "dialogbox.h"
#include "ui_dialogbox.h"

DialogBox::DialogBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBox)
{
    ui->setupUi(this);
}

DialogBox::~DialogBox()
{
    delete ui;
}
// 用来设置显示内容
void DialogBox::setContent(QString target){
    this->ui->label_2->setText(target);
}
