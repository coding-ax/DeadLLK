/********************************************************************************
** Form generated from reading UI file 'dialogbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOX_H
#define UI_DIALOGBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogBox)
    {
        if (DialogBox->objectName().isEmpty())
            DialogBox->setObjectName(QStringLiteral("DialogBox"));
        DialogBox->resize(400, 300);
        DialogBox->setStyleSheet(QLatin1String("#DialogBox{ background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 11pt \"Arial Rounded MT Bold\";\n"
"}"));
        label = new QLabel(DialogBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 81, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(DialogBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 281, 81));
        label_2->setStyleSheet(QLatin1String("text-align:center;\n"
"font-size:30px;"));
        buttonBox = new QDialogButtonBox(DialogBox);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 230, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DialogBox);

        QMetaObject::connectSlotsByName(DialogBox);
    } // setupUi

    void retranslateUi(QDialog *DialogBox)
    {
        DialogBox->setWindowTitle(QApplication::translate("DialogBox", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogBox", "\346\217\220\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogBox", "content", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogBox: public Ui_DialogBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOX_H
