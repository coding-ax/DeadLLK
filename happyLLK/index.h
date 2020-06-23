#ifndef INDEX_H
#define INDEX_H

#include <QWidget>

namespace Ui {
class index;
}

class index : public QWidget
{
    Q_OBJECT

public:
    explicit index(QWidget *parent = 0);
    ~index();

private:
    Ui::index *ui;
};

#endif // INDEX_H
