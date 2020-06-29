#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <QDebug>
namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = 0);
    ~Setting();

private slots:
    void on_open_clicked();
    void on_close_clicked();
    void on_settingVolume_valueChanged(int value);

private:
    Ui::Setting *ui;
    bool isPlay;
    int volumeSize;
signals:
    void isPlayed(bool);
    void volumeSizeChange(int);
};

#endif // SETTING_H
