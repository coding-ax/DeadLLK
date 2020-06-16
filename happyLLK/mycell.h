#ifndef MYCELL_H
#define MYCELL_H

#include <QWidget>
#include <QPushButton>
class myCell : public QPushButton
{
    Q_OBJECT
private:
    // 坐标
    int x;
    int y;
public:
    explicit myCell(QWidget *parent = nullptr);
    // 设置坐标
    void setPlace(int x,int y);
    // 设置图片
    void setImage(int count);
    // 清除图片
    void delImage();

    // 坐标设置和获取
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();

signals:
    void isClicked(int x, int y);
public slots:
};

#endif // MYCELL_H
