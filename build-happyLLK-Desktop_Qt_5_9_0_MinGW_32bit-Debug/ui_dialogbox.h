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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogBox)
    {
        if (DialogBox->objectName().isEmpty())
            DialogBox->setObjectName(QStringLiteral("DialogBox"));
        DialogBox->resize(400, 300);
        DialogBox->setStyleSheet(QLatin1String("#DialogBox{ \n"
"\n"
"font: 11pt \"Arial Rounded MT Bold\";\n"
"}"));
        label = new QLabel(DialogBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 81, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(DialogBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 100, 281, 81));
        label_2->setStyleSheet(QLatin1String("text-align:center;\n"
"font-size:30px;"));
        pushButton = new QPushButton(DialogBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 220, 88, 23));

        retranslateUi(DialogBox);

        QMetaObject::connectSlotsByName(DialogBox);
    } // setupUi

    void retranslateUi(QDialog *DialogBox)
    {
        DialogBox->setWindowTitle(QApplication::translate("DialogBox", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("DialogBox", "\346\217\220\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("DialogBox", "content", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DialogBox", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogBox: public Ui_DialogBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOX_H
