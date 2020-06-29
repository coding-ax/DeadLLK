/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *open;
    QRadioButton *close;
    QSlider *settingVolume;
    QLabel *label_3;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(400, 300);
        label = new QLabel(Setting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 90, 81, 16));
        label_2 = new QLabel(Setting);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 140, 72, 15));
        open = new QRadioButton(Setting);
        open->setObjectName(QStringLiteral("open"));
        open->setGeometry(QRect(150, 90, 111, 19));
        open->setChecked(true);
        close = new QRadioButton(Setting);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(230, 90, 111, 19));
        settingVolume = new QSlider(Setting);
        settingVolume->setObjectName(QStringLiteral("settingVolume"));
        settingVolume->setGeometry(QRect(140, 130, 160, 22));
        settingVolume->setValue(99);
        settingVolume->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(Setting);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 30, 72, 15));

        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Setting", "\350\203\214\346\231\257\351\237\263\344\271\220\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Setting", "\351\237\263\351\207\217\357\274\232", Q_NULLPTR));
        open->setText(QApplication::translate("Setting", "\345\274\200\345\220\257", Q_NULLPTR));
        close->setText(QApplication::translate("Setting", "\345\205\263\351\227\255", Q_NULLPTR));
        label_3->setText(QApplication::translate("Setting", "\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
