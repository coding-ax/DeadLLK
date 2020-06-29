#ifndef UICONTROL_H
#define UICONTROL_H

#include <QVector>
#include <QWidget>
#include <QPushButton>
#include "mycell.h"
class UIControl : public QPushButton
{
    Q_OBJECT
private:
    QWidget *parent;
//    QVector<QVector<myCell*>>* currentUI;
    QVector<QVector<myCell*>> currentUI;
public:
    bool hasClick;
    int lastClickX;
    int lastClickY;
    explicit UIControl(QWidget *parent = nullptr);
    void initUI();
    QVector<QVector<myCell*>> initUI(QWidget *parent,QVector<QVector<int>> arr);
    void refreshUI(QVector<QVector<int>> arr);
    // 处理点击
    bool dealClick(int x,int y);
    // 设置好边框
    void setColor(int x,int y,bool flag);

signals:
    void changeArr(int x,int y);
public slots:
};

#endif // UICONTROL_H
