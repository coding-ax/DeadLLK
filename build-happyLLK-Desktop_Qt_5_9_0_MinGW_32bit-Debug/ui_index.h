/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_index
{
public:
    QPushButton *timeModern;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *frame;

    void setupUi(QWidget *index)
    {
        if (index->objectName().isEmpty())
            index->setObjectName(QStringLiteral("index"));
        index->resize(1080, 624);
        index->setStyleSheet(QStringLiteral(""));
        timeModern = new QPushButton(index);
        timeModern->setObjectName(QStringLiteral("timeModern"));
        timeModern->setGeometry(QRect(70, 140, 171, 51));
        timeModern->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png);"));
        pushButton_2 = new QPushButton(index);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 250, 171, 51));
        pushButton_2->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png);"));
        pushButton_3 = new QPushButton(index);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 370, 171, 51));
        pushButton_3->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png);"));
        pushButton_4 = new QPushButton(index);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(860, 530, 171, 51));
        pushButton_4->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png);"));
        pushButton_5 = new QPushButton(index);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(860, 440, 171, 51));
        pushButton_5->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png);"));
        frame = new QFrame(index);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, -1, 1091, 631));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/background.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        timeModern->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton_5->raise();
        pushButton_4->raise();

        retranslateUi(index);

        QMetaObject::connectSlotsByName(index);
    } // setupUi

    void retranslateUi(QWidget *index)
    {
        index->setWindowTitle(QApplication::translate("index", "Form", Q_NULLPTR));
        timeModern->setText(QApplication::translate("index", "\351\231\220\346\227\266\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("index", "\345\205\263\345\215\241\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("index", "\345\250\261\344\271\220\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("index", "\345\270\256\345\212\251", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("index", "\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class index: public Ui_index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
