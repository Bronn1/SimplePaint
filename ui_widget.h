/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QPushButton *LineButton;
    QPushButton *squareButton;
    QPushButton *rombPushButton;
    QPushButton *pushButton;
    QPushButton *screenshotButton;
    QSlider *imageScale;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QComboBox *comboBox;
    QRadioButton *sPenButton;
    QSpinBox *spinBox;
    QCheckBox *fullScreen;
    QSlider *grahicsViewSize;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(868, 469);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setCursor(QCursor(Qt::ArrowCursor));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        LineButton = new QPushButton(Widget);
        LineButton->setObjectName(QStringLiteral("LineButton"));

        gridLayout->addWidget(LineButton, 0, 0, 1, 1);

        squareButton = new QPushButton(Widget);
        squareButton->setObjectName(QStringLiteral("squareButton"));

        gridLayout->addWidget(squareButton, 0, 1, 1, 1);

        rombPushButton = new QPushButton(Widget);
        rombPushButton->setObjectName(QStringLiteral("rombPushButton"));

        gridLayout->addWidget(rombPushButton, 0, 2, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        screenshotButton = new QPushButton(Widget);
        screenshotButton->setObjectName(QStringLiteral("screenshotButton"));

        gridLayout->addWidget(screenshotButton, 0, 4, 1, 1);

        imageScale = new QSlider(Widget);
        imageScale->setObjectName(QStringLiteral("imageScale"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageScale->sizePolicy().hasHeightForWidth());
        imageScale->setSizePolicy(sizePolicy1);
        imageScale->setMinimum(5);
        imageScale->setMaximum(15);
        imageScale->setPageStep(1);
        imageScale->setSliderPosition(10);
        imageScale->setTracking(true);
        imageScale->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(imageScale, 0, 5, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 6, 2, 1);

        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMinimum(3);
        horizontalSlider->setMaximum(60);
        horizontalSlider->setPageStep(0);
        horizontalSlider->setSliderPosition(10);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        sPenButton = new QRadioButton(Widget);
        sPenButton->setObjectName(QStringLiteral("sPenButton"));

        gridLayout->addWidget(sPenButton, 1, 2, 1, 1);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(99);

        gridLayout->addWidget(spinBox, 1, 3, 1, 1);

        fullScreen = new QCheckBox(Widget);
        fullScreen->setObjectName(QStringLiteral("fullScreen"));

        gridLayout->addWidget(fullScreen, 1, 4, 1, 1);

        grahicsViewSize = new QSlider(Widget);
        grahicsViewSize->setObjectName(QStringLiteral("grahicsViewSize"));
        grahicsViewSize->setAutoFillBackground(false);
        grahicsViewSize->setMinimum(25);
        grahicsViewSize->setMaximum(100);
        grahicsViewSize->setSingleStep(25);
        grahicsViewSize->setPageStep(25);
        grahicsViewSize->setSliderPosition(100);
        grahicsViewSize->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(grahicsViewSize, 2, 4, 1, 3);

        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout->addWidget(graphicsView, 3, 0, 1, 7);

        grahicsViewSize->raise();
        pushButton->raise();
        LineButton->raise();
        graphicsView->raise();
        comboBox->raise();
        sPenButton->raise();
        squareButton->raise();
        horizontalSlider->raise();
        rombPushButton->raise();
        screenshotButton->raise();
        spinBox->raise();
        fullScreen->raise();
        imageScale->raise();
        pushButton_2->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        LineButton->setText(QApplication::translate("Widget", "Line", Q_NULLPTR));
        squareButton->setText(QApplication::translate("Widget", "square", Q_NULLPTR));
        rombPushButton->setText(QApplication::translate("Widget", "Romb", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "not working yet", Q_NULLPTR));
        screenshotButton->setText(QApplication::translate("Widget", "Screenshot", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "PushButton", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "black", Q_NULLPTR)
         << QApplication::translate("Widget", "blue", Q_NULLPTR)
         << QApplication::translate("Widget", "red", Q_NULLPTR)
        );
        sPenButton->setText(QApplication::translate("Widget", "Pen", Q_NULLPTR));
        fullScreen->setText(QApplication::translate("Widget", "full screen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
