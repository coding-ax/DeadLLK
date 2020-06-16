#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "uicontrol.h"
#include"mycell.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_start_game_button_clicked();

    void on_stop_game_button_clicked();

private:
    Ui::MainWindow *ui;
    UIControl *UICon;

};

#endif // MAINWINDOW_H
