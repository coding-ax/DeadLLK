#include "gamearrayshow.h"
#include <iostream>
#include <QDebug>
#include <QVector>
#include <ctime>
/* 此文件用来进行 数据抽象 相关判断 */
// 默认构造
GameArrayShow::GameArrayShow()
{
    this->Height=0;
    this->Width=0;
}
GameArrayShow::GameArrayShow(QVector<QVector<int>> target)
{
    this->Height = target.length();
    this->Width = target.at(0).length();
    this->showArr = target;
}

// 根据weight和height进行构造
GameArrayShow::GameArrayShow(int width,int height,int level)
{
    this->Height=height;
    this->Width=width;
//    this->showArr = new QVector<QVector<int>>;
    this->initArray(level);
}
int GameArrayShow::randomInt(int min,int max){
    //获取种子
    srand(time(0));
    int ans = rand()%(max-min)+min;
    return ans;
}


// 根据level进行打乱 level为总重复数[2-7] 默认为7
void GameArrayShow::initArray(int level)
{
    srand(time(0));
    int iLen = this->Height;
    int jLen = this->Width;
    int count =1;
    for(int i=0;i<iLen;i++){
        QVector<int> temp;
        for(int j =0; j<jLen;j++){
            // 首先按顺序生成
            temp.push_back(count%(level+1));
            count++;
            if(count==level+1){
                count = 1;
            }
        }
        this->showArr.push_back(temp);
    }

   // 进行随机对换：
    for(int i = 0;i < iLen*jLen/2; i++){
        int x1 = rand()%iLen;
        int y1 = rand()%jLen;
        int x2 = rand()%iLen;
        int y2 = rand()%jLen;
        int temp = this->showArr[x1][y1];
        this->showArr[x1][y1] = this->showArr[x2][y2];
        this->showArr[x2][y2] = temp;
    }
}
// 获取showArr
QVector<QVector<int>> GameArrayShow::getShowArr(){
    return this->showArr;
}


// 能否消除判断：
// 单行判断
 bool  GameArrayShow::lineClear(int x1,int y1,int x2,int y2){
     int max_num,min_num;
     if(x1==x2&&y1==y2) return false;
     if(x1==x2)
     {
         min_num = y1>y2?y2:y1;
         max_num = y1>y2?y1:y2;
         // 直线判断
         for(int i=min_num+1;i<max_num;i++){
             if(this->showArr[x1][i]!=0){
                 return false;
             }
      }
      return true;
     }
     else if(y1==y2)
     {
         min_num = x1>x2?x2:x1;
         max_num = x1>x2?x1:x2;
         // 直线判断
         for(int i=min_num+1;i<max_num;i++){
             if(this->showArr[i][y1]!=0){
                 return false;
             }
      }
      return true;
     }
     else
     {
         return false;
     }

 }
 
 // 单拐角判断
 bool  GameArrayShow::conerClear(int x1,int y1,int x2,int y2){
    // 单拐角首先排除第一种
     if(x1==x2||y1==y2){
         return false;
     }
     // 定义中间点
     int tempX,tempY;
     tempX = x1;
     tempY = y2;
     if(lineClear(x1,y1,tempX,tempY)&&lineClear(tempX,tempY,x2,y2)&&this->showArr[tempX][tempY]==0){
         return true;
     }
     else{
         tempX = x2;
         tempY = y1;
         if(lineClear(x1,y1,tempX,tempY)&&lineClear(x2,y2,tempX,tempY)&&this->showArr[tempX][tempY]==0){
             return true;
         }
     }
     return false;
     
 }
 //两个拐角连通 和上面的类似，遍历其中一个棋子垂直方向的所有可到达坐标点，
 //让每个坐标点和另外一个棋子做一个拐角连通判断，
 //如果水平或者垂直方向上存在这样的坐标点，则两个棋子两个拐角连通
 bool  GameArrayShow::twoConerClear(int x1,int y1,int x2,int y2){
              // 首先垂直遍历
            int iLen = this->Height;
            int jLen = this->Width;
            for(int i =0;i<iLen;i++){
                if(i==y2){
                    continue;
                }
                int tempX=x2;
                int tempY=i;
                if(lineClear(tempX,tempY,x2,y2)&&conerClear(tempX,tempY,x1,y1)&&this->showArr[tempX][tempY]==0){
                    return true;
                }
            }
            for(int i=0;i<jLen;i++){
                if(i==x2){
                    continue;
                }
                int tempX=i;
                int tempY=y2;
                if(lineClear(tempX,tempY,x2,y2)&&conerClear(tempX,tempY,x1,y1)&&this->showArr[tempX][tempY]==0){
                    return true;
                }
            }
            return false;
 }
 bool  GameArrayShow::canClear(int x1,int y1,int x2,int y2){
           if(lineClear(x1,y1,x2,y2)){
               return true;
           }
           else if(conerClear(x1,y1,x2,y2)){
               return true;
           }
           else if(twoConerClear(x1,y1,x2,y2)){
               return true;
           }
           return false;
 }

 bool GameArrayShow::clearPoint(int x1, int y1, int x2, int y2){
     if(this->showArr[x1][y1]==this->showArr[x2][y2]&&canClear(x1,y1,x2,y2)){
         qDebug()<<x1<<y1<<x2<<y2<<this->showArr[x1][y1]<<this->showArr[x2][y2];
         this->showArr[x1][y1]=0;
         this->showArr[x2][y2]=0;
         return true;
     }
     return false;
 }
