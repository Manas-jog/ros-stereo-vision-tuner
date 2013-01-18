/********************************************************************************
** Form generated from reading UI file 'myqslider.ui'
**
** Created: Tue Dec 25 17:18:14 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYQSLIDER_H
#define UI_MYQSLIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyQSlider
{
public:
    QLabel *valueLabel;
    QSlider *slider;

    void setupUi(QWidget *MyQSlider)
    {
        if (MyQSlider->objectName().isEmpty())
            MyQSlider->setObjectName(QString::fromUtf8("MyQSlider"));
        MyQSlider->resize(420, 26);
        valueLabel = new QLabel(MyQSlider);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(345, 2, 66, 22));
        slider = new QSlider(MyQSlider);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setGeometry(QRect(0, 2, 330, 22));
        slider->setOrientation(Qt::Horizontal);

        retranslateUi(MyQSlider);

        QMetaObject::connectSlotsByName(MyQSlider);
    } // setupUi

    void retranslateUi(QWidget *MyQSlider)
    {
        MyQSlider->setWindowTitle(QApplication::translate("MyQSlider", "Form", 0, QApplication::UnicodeUTF8));
        valueLabel->setText(QApplication::translate("MyQSlider", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyQSlider: public Ui_MyQSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYQSLIDER_H
