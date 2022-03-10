/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *RLabel;
    QSpinBox *RSpinBox;
    QSlider *BSlider;
    QLabel *GLabel;
    QSpinBox *GSpinBox;
    QSlider *GSlider;
    QLabel *BLabel;
    QSpinBox *BSpinBox;
    QSlider *RSlider;
    QLabel *Text;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(495, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 471, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RLabel = new QLabel(verticalLayoutWidget);
        RLabel->setObjectName(QString::fromUtf8("RLabel"));
        QFont font;
        font.setPointSize(11);
        RLabel->setFont(font);

        verticalLayout->addWidget(RLabel);

        RSpinBox = new QSpinBox(verticalLayoutWidget);
        RSpinBox->setObjectName(QString::fromUtf8("RSpinBox"));
        RSpinBox->setMaximumSize(QSize(70, 16777215));
        RSpinBox->setMaximum(255);

        verticalLayout->addWidget(RSpinBox);

        BSlider = new QSlider(verticalLayoutWidget);
        BSlider->setObjectName(QString::fromUtf8("BSlider"));
        BSlider->setEnabled(true);
        BSlider->setMaximum(255);
        BSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(BSlider);

        GLabel = new QLabel(verticalLayoutWidget);
        GLabel->setObjectName(QString::fromUtf8("GLabel"));
        GLabel->setFont(font);

        verticalLayout->addWidget(GLabel);

        GSpinBox = new QSpinBox(verticalLayoutWidget);
        GSpinBox->setObjectName(QString::fromUtf8("GSpinBox"));
        GSpinBox->setMaximumSize(QSize(70, 16777215));
        GSpinBox->setMaximum(255);

        verticalLayout->addWidget(GSpinBox);

        GSlider = new QSlider(verticalLayoutWidget);
        GSlider->setObjectName(QString::fromUtf8("GSlider"));
        GSlider->setMaximum(255);
        GSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(GSlider);

        BLabel = new QLabel(verticalLayoutWidget);
        BLabel->setObjectName(QString::fromUtf8("BLabel"));
        BLabel->setFont(font);

        verticalLayout->addWidget(BLabel);

        BSpinBox = new QSpinBox(verticalLayoutWidget);
        BSpinBox->setObjectName(QString::fromUtf8("BSpinBox"));
        BSpinBox->setMaximumSize(QSize(70, 16777215));
        BSpinBox->setMaximum(255);

        verticalLayout->addWidget(BSpinBox);

        RSlider = new QSlider(verticalLayoutWidget);
        RSlider->setObjectName(QString::fromUtf8("RSlider"));
        RSlider->setMaximum(255);
        RSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(RSlider);

        Text = new QLabel(verticalLayoutWidget);
        Text->setObjectName(QString::fromUtf8("Text"));
        QFont font1;
        font1.setPointSize(12);
        Text->setFont(font1);

        verticalLayout->addWidget(Text);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(RSpinBox, &QSpinBox::valueChanged, BSlider, &QSlider::setValue);
        QObject::connect(BSlider, &QSlider::valueChanged, RSpinBox, &QSpinBox::setValue);
        QObject::connect(GSpinBox, &QSpinBox::valueChanged, GSlider, &QSlider::setValue);
        QObject::connect(GSlider, &QSlider::valueChanged, GSpinBox, &QSpinBox::setValue);
        QObject::connect(BSpinBox, &QSpinBox::valueChanged, RSlider, &QSlider::setValue);
        QObject::connect(RSlider, &QSlider::valueChanged, BSpinBox, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        RLabel->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        GLabel->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        BLabel->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        Text->setText(QCoreApplication::translate("MainWindow", "\320\255\321\202\320\276 \320\233\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260 \342\204\2261 - \320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \321\206\320\262\320\265\321\202\320\260 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
