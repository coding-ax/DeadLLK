/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *stop_game_button;
    QPushButton *message_button;
    QPushButton *restart_game_button;
    QPushButton *start_game_button;
    QPushButton *setting;
    QPushButton *help;
    QFrame *show_box;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1264, 680);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/img/background.png);"));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stop_game_button = new QPushButton(centralWidget);
        stop_game_button->setObjectName(QStringLiteral("stop_game_button"));
        stop_game_button->setGeometry(QRect(1110, 120, 111, 51));
        stop_game_button->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        message_button = new QPushButton(centralWidget);
        message_button->setObjectName(QStringLiteral("message_button"));
        message_button->setGeometry(QRect(1110, 190, 111, 51));
        message_button->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        restart_game_button = new QPushButton(centralWidget);
        restart_game_button->setObjectName(QStringLiteral("restart_game_button"));
        restart_game_button->setGeometry(QRect(1110, 260, 111, 51));
        restart_game_button->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        start_game_button = new QPushButton(centralWidget);
        start_game_button->setObjectName(QStringLiteral("start_game_button"));
        start_game_button->setGeometry(QRect(1110, 50, 111, 51));
        start_game_button->setLayoutDirection(Qt::LeftToRight);
        start_game_button->setAutoFillBackground(false);
        start_game_button->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        start_game_button->setFlat(false);
        setting = new QPushButton(centralWidget);
        setting->setObjectName(QStringLiteral("setting"));
        setting->setGeometry(QRect(1190, 570, 61, 31));
        setting->setLayoutDirection(Qt::LeftToRight);
        setting->setAutoFillBackground(false);
        setting->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        setting->setFlat(false);
        help = new QPushButton(centralWidget);
        help->setObjectName(QStringLiteral("help"));
        help->setGeometry(QRect(1190, 610, 61, 31));
        help->setLayoutDirection(Qt::LeftToRight);
        help->setAutoFillBackground(false);
        help->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/img/white.png)"));
        help->setFlat(false);
        show_box = new QFrame(centralWidget);
        show_box->setObjectName(QStringLiteral("show_box"));
        show_box->setGeometry(QRect(0, 0, 1051, 671));
        show_box->setFrameShape(QFrame::StyledPanel);
        show_box->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        start_game_button->setDefault(false);
        setting->setDefault(false);
        help->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\254\242\344\271\220\350\277\236\350\277\236\347\234\213", Q_NULLPTR));
        stop_game_button->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\346\270\270\346\210\217", Q_NULLPTR));
        message_button->setText(QApplication::translate("MainWindow", "\346\217\220\347\244\272", Q_NULLPTR));
        restart_game_button->setText(QApplication::translate("MainWindow", "\351\207\215\345\274\200\344\270\200\345\261\200", Q_NULLPTR));
        start_game_button->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", Q_NULLPTR));
        setting->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
