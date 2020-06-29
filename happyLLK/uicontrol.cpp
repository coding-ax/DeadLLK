#include "uicontrol.h"
#include "mycell.h"
#include <QVector>
#include <QWidget>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <QDebug>
#include "mycell.h"


UIControl::UIControl(QWidget *parent) : QPushButton(parent)
{
        hasClick = false;
}
/*
@PARAMS: parent 要依附的父对象（frame） arr二维int数组（根据该数组进行生成)
@return: 二维myCell数组
@describtion: 根据传入的arr 初始化所有的小logo
*/
QVector<QVector<myCell*>> UIControl::initUI(QWidget *parent,QVector<QVector<int>> arr)
{
    //设置私有默认父对象
    this->parent = parent;
    //拿到长度
    int iLen = arr.length();
    // 初始化要返回的结果
    QVector<QVector<myCell*>> cellArr;
    // 二重循环进行初始化
    for(int i=0;i<iLen;i++){
            QVector<myCell*> tempCellArr;
           for(int j=0;j<arr[i].length();j++){
               myCell *temp = new myCell(parent);
               // 设置位置和坐标
                temp->setPlace(55*(j+1),55*(i+1));
                temp->setX(i);
                temp->setY(j);

                /*以下为test*/
                // listen the signals
                connect(temp,&myCell::isClicked,[=](int x,int y) mutable{
//                    qDebug()<<x<<y;
                    emit changeArr(x,y);
                });

                // 设置Logo
                temp->setImage(arr[i][j]);
                // 插入返回结果
               tempCellArr.push_back(temp);
               if(arr[i][j] ==0){
                   // 初始化本不应该有0 但是在这里还是选择加入一个
                   temp->delImage();
               }
           }
           cellArr.push_back(tempCellArr);
       }

    //设置默认cellArr为私有的currentUI（指针）
    this->currentUI = cellArr;
    return cellArr;
}

/*
@PARAMS:  arr二维int数组（根据该数组进行隐藏和设置)
@return: none
@describtion: 根据传入的arr修改原内存中的值
*/
void UIControl::refreshUI(QVector<QVector<int>> arr)
{
    //拿到长度0.0
    //vector 本身就是浅拷贝
//     qDebug()<< this->currentUI++;
//     qDebug()<<this->currentUI.length();

    int iLen = arr.length();
    // 二重循环进行初始化
    for(int i=0;i<iLen;i++){
           for(int j=0;j<arr[i].length();j++){
               if(arr[i][j] ==0){
                    this->currentUI.at(i).at(j)->delImage();
               }
               else{
                   if(this->currentUI.at(i).at(j)->isHidden())
                   {
                       this->currentUI.at(i).at(j)->showImage();
                   }
               }
               this->currentUI.at(i).at(j)->setImage(arr[i][j]);
              this->currentUI.at(i).at(j)->setX(i);
              this->currentUI.at(i).at(j)->setY(j);
           }
       }

}

/*
设置x,y的边框
*/
void UIControl::setColor(int x, int y, bool flag)
{
    // 调用接口进行设计
    this->currentUI.at(x).at(y)->setColor(flag);
}

