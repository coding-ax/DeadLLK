#ifndef DIALOGBOX_H
#define DIALOGBOX_H

#include <QDialog>

namespace Ui {
class DialogBox;
}

class DialogBox : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBox(QWidget *parent = 0);
    ~DialogBox();

private:
    Ui::DialogBox *ui;
};

#endif // DIALOGBOX_H
