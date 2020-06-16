#ifndef GAMEARRAYSHOW_H
#define GAMEARRAYSHOW_H
#include <QVector>

class GameArrayShow
{
private:
    // 以二维数组对其进行抽象,以width和height来决定多少
    int Width;
    int Height;
    QVector<QVector<int>> showArr;

public:
    // 默认构造一个 16*10大小的
    GameArrayShow();
    // 根据传入的int来决定
    GameArrayShow(int width,int height,int level);
    // 根据现有数组
    GameArrayShow(QVector<QVector<int>> target);
    // 拿到这个数组
     QVector<QVector<int>> getShowArr();
     // 通过打乱来生成数组  level用于设置难度等级
     void initArray(int level);
     // 可否行消去判断
     bool lineClear(int x1,int y1,int x2,int y2);
     // 可否转角消去
     bool conerClear(int x1,int y1,int x2,int y2);
     // 可否转角二次消去
     bool twoConerClear(int x1,int y1,int x2,int y2);
     // 总体判断
     bool canClear(int x1,int y1,int x2,int y2);
     // 返回随机数
     int randomInt(int min,int max);
     // 清除对应点
     bool clearPoint(int x1,int y1,int x2,int y2);
};

#endif // GAMEARRAYSHOW_H
