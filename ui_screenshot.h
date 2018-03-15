/********************************************************************************
** Form generated from reading UI file 'screenshot.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOT_H
#define UI_SCREENSHOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Screenshot
{
public:

    void setupUi(QWidget *Screenshot)
    {
        if (Screenshot->objectName().isEmpty())
            Screenshot->setObjectName(QStringLiteral("Screenshot"));
        Screenshot->resize(646, 314);

        retranslateUi(Screenshot);

        QMetaObject::connectSlotsByName(Screenshot);
    } // setupUi

    void retranslateUi(QWidget *Screenshot)
    {
        Screenshot->setWindowTitle(QApplication::translate("Screenshot", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Screenshot: public Ui_Screenshot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOT_H
