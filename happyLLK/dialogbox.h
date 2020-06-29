#ifndef DIALOGBOX_H
#define DIALOGBOX_H

#include <QDialog>
#include <QString>
namespace Ui {
class DialogBox;
}

class DialogBox : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBox(QWidget *parent = 0);
    ~DialogBox();
    void setContent(QString);
private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogBox *ui;
};

#endif // DIALOGBOX_H
