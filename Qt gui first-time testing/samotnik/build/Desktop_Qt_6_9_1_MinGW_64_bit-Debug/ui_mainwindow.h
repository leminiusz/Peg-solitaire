/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnNew_Game;
    QPushButton *btnRules;
    QPushButton *btnExit;
    QLabel *LOGO;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnNew_Game = new QPushButton(centralwidget);
        btnNew_Game->setObjectName("btnNew_Game");
        btnNew_Game->setGeometry(QRect(310, 290, 171, 61));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        btnNew_Game->setPalette(palette1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/new_game.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnNew_Game->setIcon(icon);
        btnNew_Game->setIconSize(QSize(150, 230));
        btnRules = new QPushButton(centralwidget);
        btnRules->setObjectName("btnRules");
        btnRules->setGeometry(QRect(310, 370, 171, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        btnRules->setPalette(palette2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/rules.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnRules->setIcon(icon1);
        btnRules->setIconSize(QSize(130, 180));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(310, 450, 171, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        btnExit->setPalette(palette3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnExit->setIcon(icon2);
        btnExit->setIconSize(QSize(115, 180));
        LOGO = new QLabel(centralwidget);
        LOGO->setObjectName("LOGO");
        LOGO->setGeometry(QRect(140, 130, 511, 131));
        QFont font;
        font.setPointSize(58);
        LOGO->setFont(font);
        LOGO->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        LOGO->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnNew_Game->setText(QString());
        btnRules->setText(QString());
        btnExit->setText(QString());
        LOGO->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
