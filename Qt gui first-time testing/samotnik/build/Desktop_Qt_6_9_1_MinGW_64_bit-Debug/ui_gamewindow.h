/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QLabel *logo;
    QPushButton *button_new_game;
    QLabel *up_A;
    QLabel *up_B;
    QLabel *up_C;
    QLabel *up_D;
    QLabel *up_E;
    QLabel *up_F;
    QLabel *up_G;
    QLabel *down_G;
    QLabel *down_A;
    QLabel *down_B;
    QLabel *down_F;
    QLabel *down_C;
    QLabel *down_E;
    QLabel *down_D;
    QLabel *left_1;
    QLabel *left_2;
    QLabel *left_3;
    QLabel *left_4;
    QLabel *left_5;
    QLabel *left_6;
    QLabel *left_7;
    QLabel *right_4;
    QLabel *right_1;
    QLabel *right_3;
    QLabel *right_7;
    QLabel *right_2;
    QLabel *right_6;
    QLabel *right_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *C1;
    QPushButton *D1;
    QPushButton *E1;
    QPushButton *C2;
    QPushButton *D2;
    QPushButton *E2;
    QPushButton *A3;
    QPushButton *B3;
    QPushButton *C3;
    QPushButton *D3;
    QPushButton *E3;
    QPushButton *F3;
    QPushButton *G3;
    QPushButton *A4;
    QPushButton *B4;
    QPushButton *C4;
    QPushButton *D4;
    QPushButton *E4;
    QPushButton *F4;
    QPushButton *G4;
    QPushButton *A5;
    QPushButton *B5;
    QPushButton *C5;
    QPushButton *D5;
    QPushButton *E5;
    QPushButton *F5;
    QPushButton *G5;
    QPushButton *C6;
    QPushButton *D6;
    QPushButton *E6;
    QPushButton *C7;
    QPushButton *D7;
    QPushButton *E7;
    QLabel *Moves_label;
    QLabel *Time_label;
    QLabel *movesValue;
    QLabel *timeValue;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->setEnabled(true);
        GameWindow->resize(800, 600);
        GameWindow->setMinimumSize(QSize(800, 600));
        GameWindow->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        GameWindow->setPalette(palette);
        GameWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName("centralwidget");
        logo = new QLabel(centralwidget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(520, 20, 261, 61));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/images/images/logo.png")));
        logo->setScaledContents(true);
        button_new_game = new QPushButton(centralwidget);
        button_new_game->setObjectName("button_new_game");
        button_new_game->setGeometry(QRect(10, 80, 121, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        button_new_game->setPalette(palette1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/new_game.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        button_new_game->setIcon(icon);
        button_new_game->setIconSize(QSize(90, 100));
        up_A = new QLabel(centralwidget);
        up_A->setObjectName("up_A");
        up_A->setGeometry(QRect(160, 80, 41, 51));
        up_A->setPixmap(QPixmap(QString::fromUtf8(":/images/images/A.png")));
        up_A->setScaledContents(true);
        up_B = new QLabel(centralwidget);
        up_B->setObjectName("up_B");
        up_B->setGeometry(QRect(230, 80, 41, 51));
        up_B->setPixmap(QPixmap(QString::fromUtf8(":/images/images/B.png")));
        up_B->setScaledContents(true);
        up_C = new QLabel(centralwidget);
        up_C->setObjectName("up_C");
        up_C->setGeometry(QRect(310, 80, 41, 51));
        up_C->setPixmap(QPixmap(QString::fromUtf8(":/images/images/C.png")));
        up_C->setScaledContents(true);
        up_D = new QLabel(centralwidget);
        up_D->setObjectName("up_D");
        up_D->setGeometry(QRect(380, 80, 41, 51));
        up_D->setPixmap(QPixmap(QString::fromUtf8(":/images/images/D.png")));
        up_D->setScaledContents(true);
        up_E = new QLabel(centralwidget);
        up_E->setObjectName("up_E");
        up_E->setGeometry(QRect(450, 80, 41, 51));
        up_E->setPixmap(QPixmap(QString::fromUtf8(":/images/images/E.png")));
        up_E->setScaledContents(true);
        up_F = new QLabel(centralwidget);
        up_F->setObjectName("up_F");
        up_F->setGeometry(QRect(520, 80, 41, 51));
        up_F->setPixmap(QPixmap(QString::fromUtf8(":/images/images/F.png")));
        up_F->setScaledContents(true);
        up_G = new QLabel(centralwidget);
        up_G->setObjectName("up_G");
        up_G->setGeometry(QRect(590, 80, 41, 51));
        up_G->setPixmap(QPixmap(QString::fromUtf8(":/images/images/G.png")));
        up_G->setScaledContents(true);
        down_G = new QLabel(centralwidget);
        down_G->setObjectName("down_G");
        down_G->setGeometry(QRect(580, 550, 41, 51));
        down_G->setPixmap(QPixmap(QString::fromUtf8(":/images/images/G.png")));
        down_G->setScaledContents(true);
        down_A = new QLabel(centralwidget);
        down_A->setObjectName("down_A");
        down_A->setGeometry(QRect(150, 550, 41, 51));
        down_A->setPixmap(QPixmap(QString::fromUtf8(":/images/images/A.png")));
        down_A->setScaledContents(true);
        down_B = new QLabel(centralwidget);
        down_B->setObjectName("down_B");
        down_B->setGeometry(QRect(220, 550, 41, 51));
        down_B->setPixmap(QPixmap(QString::fromUtf8(":/images/images/B.png")));
        down_B->setScaledContents(true);
        down_F = new QLabel(centralwidget);
        down_F->setObjectName("down_F");
        down_F->setGeometry(QRect(510, 550, 41, 51));
        down_F->setPixmap(QPixmap(QString::fromUtf8(":/images/images/F.png")));
        down_F->setScaledContents(true);
        down_C = new QLabel(centralwidget);
        down_C->setObjectName("down_C");
        down_C->setGeometry(QRect(300, 550, 41, 51));
        down_C->setPixmap(QPixmap(QString::fromUtf8(":/images/images/C.png")));
        down_C->setScaledContents(true);
        down_E = new QLabel(centralwidget);
        down_E->setObjectName("down_E");
        down_E->setGeometry(QRect(440, 550, 41, 51));
        down_E->setPixmap(QPixmap(QString::fromUtf8(":/images/images/E.png")));
        down_E->setScaledContents(true);
        down_D = new QLabel(centralwidget);
        down_D->setObjectName("down_D");
        down_D->setGeometry(QRect(370, 550, 41, 51));
        down_D->setPixmap(QPixmap(QString::fromUtf8(":/images/images/D.png")));
        down_D->setScaledContents(true);
        left_1 = new QLabel(centralwidget);
        left_1->setObjectName("left_1");
        left_1->setGeometry(QRect(100, 130, 41, 51));
        left_1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/1.png")));
        left_1->setScaledContents(true);
        left_2 = new QLabel(centralwidget);
        left_2->setObjectName("left_2");
        left_2->setGeometry(QRect(100, 190, 41, 51));
        left_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/2.png")));
        left_2->setScaledContents(true);
        left_3 = new QLabel(centralwidget);
        left_3->setObjectName("left_3");
        left_3->setGeometry(QRect(100, 250, 41, 51));
        left_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/3.png")));
        left_3->setScaledContents(true);
        left_4 = new QLabel(centralwidget);
        left_4->setObjectName("left_4");
        left_4->setGeometry(QRect(100, 320, 41, 51));
        left_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/4.png")));
        left_4->setScaledContents(true);
        left_5 = new QLabel(centralwidget);
        left_5->setObjectName("left_5");
        left_5->setGeometry(QRect(100, 370, 41, 51));
        left_5->setPixmap(QPixmap(QString::fromUtf8(":/images/images/5.png")));
        left_5->setScaledContents(true);
        left_6 = new QLabel(centralwidget);
        left_6->setObjectName("left_6");
        left_6->setGeometry(QRect(100, 440, 41, 51));
        left_6->setPixmap(QPixmap(QString::fromUtf8(":/images/images/6.png")));
        left_6->setScaledContents(true);
        left_7 = new QLabel(centralwidget);
        left_7->setObjectName("left_7");
        left_7->setGeometry(QRect(100, 500, 41, 51));
        left_7->setPixmap(QPixmap(QString::fromUtf8(":/images/images/7.png")));
        left_7->setScaledContents(true);
        right_4 = new QLabel(centralwidget);
        right_4->setObjectName("right_4");
        right_4->setGeometry(QRect(640, 310, 41, 51));
        right_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/4.png")));
        right_4->setScaledContents(true);
        right_1 = new QLabel(centralwidget);
        right_1->setObjectName("right_1");
        right_1->setGeometry(QRect(640, 130, 41, 51));
        right_1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/1.png")));
        right_1->setScaledContents(true);
        right_3 = new QLabel(centralwidget);
        right_3->setObjectName("right_3");
        right_3->setGeometry(QRect(640, 250, 41, 51));
        right_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/3.png")));
        right_3->setScaledContents(true);
        right_7 = new QLabel(centralwidget);
        right_7->setObjectName("right_7");
        right_7->setGeometry(QRect(650, 500, 41, 51));
        right_7->setPixmap(QPixmap(QString::fromUtf8(":/images/images/7.png")));
        right_7->setScaledContents(true);
        right_2 = new QLabel(centralwidget);
        right_2->setObjectName("right_2");
        right_2->setGeometry(QRect(640, 190, 41, 51));
        right_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/2.png")));
        right_2->setScaledContents(true);
        right_6 = new QLabel(centralwidget);
        right_6->setObjectName("right_6");
        right_6->setGeometry(QRect(650, 430, 41, 51));
        right_6->setPixmap(QPixmap(QString::fromUtf8(":/images/images/6.png")));
        right_6->setScaledContents(true);
        right_5 = new QLabel(centralwidget);
        right_5->setObjectName("right_5");
        right_5->setGeometry(QRect(650, 370, 41, 51));
        right_5->setPixmap(QPixmap(QString::fromUtf8(":/images/images/5.png")));
        right_5->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 130, 501, 423));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        C1 = new QPushButton(layoutWidget);
        C1->setObjectName("C1");
        C1->setMinimumSize(QSize(55, 55));
        C1->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C1->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/button-brown.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon1.addFile(QString::fromUtf8(":/images/images/button-selected.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        C1->setIcon(icon1);
        C1->setIconSize(QSize(55, 55));
        C1->setCheckable(true);
        C1->setFlat(true);

        gridLayout->addWidget(C1, 0, 2, 1, 1);

        D1 = new QPushButton(layoutWidget);
        D1->setObjectName("D1");
        D1->setMinimumSize(QSize(55, 55));
        D1->setStyleSheet(QString::fromUtf8("border:none; background:none;"));
        D1->setIcon(icon1);
        D1->setIconSize(QSize(55, 55));
        D1->setCheckable(true);
        D1->setFlat(true);

        gridLayout->addWidget(D1, 0, 3, 1, 1);

        E1 = new QPushButton(layoutWidget);
        E1->setObjectName("E1");
        E1->setMinimumSize(QSize(55, 55));
        E1->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E1->setText(QString::fromUtf8(""));
        E1->setIcon(icon1);
        E1->setIconSize(QSize(55, 55));
        E1->setCheckable(true);
        E1->setFlat(true);

        gridLayout->addWidget(E1, 0, 4, 1, 1);

        C2 = new QPushButton(layoutWidget);
        C2->setObjectName("C2");
        C2->setMinimumSize(QSize(55, 55));
        C2->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C2->setText(QString::fromUtf8(""));
        C2->setIcon(icon1);
        C2->setIconSize(QSize(55, 55));
        C2->setCheckable(true);
        C2->setFlat(true);

        gridLayout->addWidget(C2, 1, 2, 1, 1);

        D2 = new QPushButton(layoutWidget);
        D2->setObjectName("D2");
        D2->setMinimumSize(QSize(55, 55));
        D2->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D2->setText(QString::fromUtf8(""));
        D2->setIcon(icon1);
        D2->setIconSize(QSize(55, 55));
        D2->setCheckable(true);
        D2->setFlat(true);

        gridLayout->addWidget(D2, 1, 3, 1, 1);

        E2 = new QPushButton(layoutWidget);
        E2->setObjectName("E2");
        E2->setMinimumSize(QSize(55, 55));
        E2->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E2->setText(QString::fromUtf8(""));
        E2->setIcon(icon1);
        E2->setIconSize(QSize(55, 55));
        E2->setCheckable(true);
        E2->setFlat(true);

        gridLayout->addWidget(E2, 1, 4, 1, 1);

        A3 = new QPushButton(layoutWidget);
        A3->setObjectName("A3");
        A3->setMinimumSize(QSize(55, 55));
        A3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        A3->setText(QString::fromUtf8(""));
        A3->setIcon(icon1);
        A3->setIconSize(QSize(55, 55));
        A3->setCheckable(true);
        A3->setFlat(true);

        gridLayout->addWidget(A3, 2, 0, 1, 1);

        B3 = new QPushButton(layoutWidget);
        B3->setObjectName("B3");
        B3->setMinimumSize(QSize(55, 55));
        B3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        B3->setText(QString::fromUtf8(""));
        B3->setIcon(icon1);
        B3->setIconSize(QSize(55, 55));
        B3->setCheckable(true);
        B3->setFlat(true);

        gridLayout->addWidget(B3, 2, 1, 1, 1);

        C3 = new QPushButton(layoutWidget);
        C3->setObjectName("C3");
        C3->setMinimumSize(QSize(55, 55));
        C3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C3->setText(QString::fromUtf8(""));
        C3->setIcon(icon1);
        C3->setIconSize(QSize(55, 55));
        C3->setCheckable(true);
        C3->setFlat(true);

        gridLayout->addWidget(C3, 2, 2, 1, 1);

        D3 = new QPushButton(layoutWidget);
        D3->setObjectName("D3");
        D3->setMinimumSize(QSize(55, 55));
        D3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D3->setText(QString::fromUtf8(""));
        D3->setIcon(icon1);
        D3->setIconSize(QSize(55, 55));
        D3->setCheckable(true);
        D3->setFlat(true);

        gridLayout->addWidget(D3, 2, 3, 1, 1);

        E3 = new QPushButton(layoutWidget);
        E3->setObjectName("E3");
        E3->setMinimumSize(QSize(55, 55));
        E3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E3->setText(QString::fromUtf8(""));
        E3->setIcon(icon1);
        E3->setIconSize(QSize(55, 55));
        E3->setCheckable(true);
        E3->setFlat(true);

        gridLayout->addWidget(E3, 2, 4, 1, 1);

        F3 = new QPushButton(layoutWidget);
        F3->setObjectName("F3");
        F3->setMinimumSize(QSize(55, 55));
        F3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        F3->setText(QString::fromUtf8(""));
        F3->setIcon(icon1);
        F3->setIconSize(QSize(55, 55));
        F3->setCheckable(true);
        F3->setFlat(true);

        gridLayout->addWidget(F3, 2, 5, 1, 1);

        G3 = new QPushButton(layoutWidget);
        G3->setObjectName("G3");
        G3->setMinimumSize(QSize(55, 55));
        G3->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        G3->setText(QString::fromUtf8(""));
        G3->setIcon(icon1);
        G3->setIconSize(QSize(55, 55));
        G3->setCheckable(true);
        G3->setFlat(true);

        gridLayout->addWidget(G3, 2, 6, 1, 1);

        A4 = new QPushButton(layoutWidget);
        A4->setObjectName("A4");
        A4->setMinimumSize(QSize(55, 55));
        A4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        A4->setText(QString::fromUtf8(""));
        A4->setIcon(icon1);
        A4->setIconSize(QSize(55, 55));
        A4->setCheckable(true);
        A4->setFlat(true);

        gridLayout->addWidget(A4, 3, 0, 1, 1);

        B4 = new QPushButton(layoutWidget);
        B4->setObjectName("B4");
        B4->setMinimumSize(QSize(55, 55));
        B4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        B4->setText(QString::fromUtf8(""));
        B4->setIcon(icon1);
        B4->setIconSize(QSize(55, 55));
        B4->setCheckable(true);
        B4->setFlat(true);

        gridLayout->addWidget(B4, 3, 1, 1, 1);

        C4 = new QPushButton(layoutWidget);
        C4->setObjectName("C4");
        C4->setMinimumSize(QSize(55, 55));
        C4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C4->setText(QString::fromUtf8(""));
        C4->setIcon(icon1);
        C4->setIconSize(QSize(55, 55));
        C4->setCheckable(true);
        C4->setFlat(true);

        gridLayout->addWidget(C4, 3, 2, 1, 1);

        D4 = new QPushButton(layoutWidget);
        D4->setObjectName("D4");
        D4->setMinimumSize(QSize(55, 55));
        D4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D4->setText(QString::fromUtf8(""));
        D4->setIconSize(QSize(55, 55));
        D4->setCheckable(false);
        D4->setFlat(false);

        gridLayout->addWidget(D4, 3, 3, 1, 1);

        E4 = new QPushButton(layoutWidget);
        E4->setObjectName("E4");
        E4->setEnabled(true);
        E4->setMinimumSize(QSize(55, 55));
        E4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E4->setText(QString::fromUtf8(""));
        E4->setIcon(icon1);
        E4->setIconSize(QSize(55, 55));
        E4->setCheckable(true);
        E4->setFlat(true);

        gridLayout->addWidget(E4, 3, 4, 1, 1);

        F4 = new QPushButton(layoutWidget);
        F4->setObjectName("F4");
        F4->setMinimumSize(QSize(55, 55));
        F4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        F4->setText(QString::fromUtf8(""));
        F4->setIcon(icon1);
        F4->setIconSize(QSize(55, 55));
        F4->setCheckable(true);
        F4->setFlat(true);

        gridLayout->addWidget(F4, 3, 5, 1, 1);

        G4 = new QPushButton(layoutWidget);
        G4->setObjectName("G4");
        G4->setMinimumSize(QSize(55, 55));
        G4->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        G4->setText(QString::fromUtf8(""));
        G4->setIcon(icon1);
        G4->setIconSize(QSize(55, 55));
        G4->setCheckable(true);
        G4->setFlat(true);

        gridLayout->addWidget(G4, 3, 6, 1, 1);

        A5 = new QPushButton(layoutWidget);
        A5->setObjectName("A5");
        A5->setMinimumSize(QSize(55, 55));
        A5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        A5->setText(QString::fromUtf8(""));
        A5->setIcon(icon1);
        A5->setIconSize(QSize(55, 55));
        A5->setCheckable(true);
        A5->setFlat(true);

        gridLayout->addWidget(A5, 4, 0, 1, 1);

        B5 = new QPushButton(layoutWidget);
        B5->setObjectName("B5");
        B5->setMinimumSize(QSize(55, 55));
        B5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        B5->setText(QString::fromUtf8(""));
        B5->setIcon(icon1);
        B5->setIconSize(QSize(55, 55));
        B5->setCheckable(true);
        B5->setFlat(true);

        gridLayout->addWidget(B5, 4, 1, 1, 1);

        C5 = new QPushButton(layoutWidget);
        C5->setObjectName("C5");
        C5->setMinimumSize(QSize(55, 55));
        C5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C5->setText(QString::fromUtf8(""));
        C5->setIcon(icon1);
        C5->setIconSize(QSize(55, 55));
        C5->setCheckable(true);
        C5->setFlat(true);

        gridLayout->addWidget(C5, 4, 2, 1, 1);

        D5 = new QPushButton(layoutWidget);
        D5->setObjectName("D5");
        D5->setMinimumSize(QSize(55, 55));
        D5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D5->setText(QString::fromUtf8(""));
        D5->setIcon(icon1);
        D5->setIconSize(QSize(55, 55));
        D5->setCheckable(true);
        D5->setFlat(true);

        gridLayout->addWidget(D5, 4, 3, 1, 1);

        E5 = new QPushButton(layoutWidget);
        E5->setObjectName("E5");
        E5->setMinimumSize(QSize(55, 55));
        E5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E5->setText(QString::fromUtf8(""));
        E5->setIcon(icon1);
        E5->setIconSize(QSize(55, 55));
        E5->setCheckable(true);
        E5->setFlat(true);

        gridLayout->addWidget(E5, 4, 4, 1, 1);

        F5 = new QPushButton(layoutWidget);
        F5->setObjectName("F5");
        F5->setMinimumSize(QSize(55, 55));
        F5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        F5->setText(QString::fromUtf8(""));
        F5->setIcon(icon1);
        F5->setIconSize(QSize(55, 55));
        F5->setCheckable(true);
        F5->setFlat(true);

        gridLayout->addWidget(F5, 4, 5, 1, 1);

        G5 = new QPushButton(layoutWidget);
        G5->setObjectName("G5");
        G5->setMinimumSize(QSize(55, 55));
        G5->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        G5->setText(QString::fromUtf8(""));
        G5->setIcon(icon1);
        G5->setIconSize(QSize(55, 55));
        G5->setCheckable(true);
        G5->setFlat(true);

        gridLayout->addWidget(G5, 4, 6, 1, 1);

        C6 = new QPushButton(layoutWidget);
        C6->setObjectName("C6");
        C6->setMinimumSize(QSize(55, 55));
        C6->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C6->setText(QString::fromUtf8(""));
        C6->setIcon(icon1);
        C6->setIconSize(QSize(55, 55));
        C6->setCheckable(true);
        C6->setFlat(true);

        gridLayout->addWidget(C6, 5, 2, 1, 1);

        D6 = new QPushButton(layoutWidget);
        D6->setObjectName("D6");
        D6->setMinimumSize(QSize(55, 55));
        D6->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D6->setText(QString::fromUtf8(""));
        D6->setIcon(icon1);
        D6->setIconSize(QSize(55, 55));
        D6->setCheckable(true);
        D6->setFlat(true);

        gridLayout->addWidget(D6, 5, 3, 1, 1);

        E6 = new QPushButton(layoutWidget);
        E6->setObjectName("E6");
        E6->setMinimumSize(QSize(55, 55));
        E6->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E6->setText(QString::fromUtf8(""));
        E6->setIcon(icon1);
        E6->setIconSize(QSize(55, 55));
        E6->setCheckable(true);
        E6->setFlat(true);

        gridLayout->addWidget(E6, 5, 4, 1, 1);

        C7 = new QPushButton(layoutWidget);
        C7->setObjectName("C7");
        C7->setMinimumSize(QSize(55, 55));
        C7->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        C7->setText(QString::fromUtf8(""));
        C7->setIcon(icon1);
        C7->setIconSize(QSize(55, 55));
        C7->setCheckable(true);
        C7->setFlat(true);

        gridLayout->addWidget(C7, 6, 2, 1, 1);

        D7 = new QPushButton(layoutWidget);
        D7->setObjectName("D7");
        D7->setMinimumSize(QSize(55, 55));
        D7->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        D7->setText(QString::fromUtf8(""));
        D7->setIcon(icon1);
        D7->setIconSize(QSize(55, 55));
        D7->setCheckable(true);
        D7->setFlat(true);

        gridLayout->addWidget(D7, 6, 3, 1, 1);

        E7 = new QPushButton(layoutWidget);
        E7->setObjectName("E7");
        E7->setMinimumSize(QSize(55, 55));
        E7->setStyleSheet(QString::fromUtf8("border:none; background:transparent;"));
        E7->setText(QString::fromUtf8(""));
        E7->setIcon(icon1);
        E7->setIconSize(QSize(55, 55));
        E7->setCheckable(true);
        E7->setFlat(true);

        gridLayout->addWidget(E7, 6, 4, 1, 1);

        Moves_label = new QLabel(centralwidget);
        Moves_label->setObjectName("Moves_label");
        Moves_label->setGeometry(QRect(120, 30, 91, 31));
        Moves_label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/moves.png")));
        Moves_label->setScaledContents(true);
        Time_label = new QLabel(centralwidget);
        Time_label->setObjectName("Time_label");
        Time_label->setGeometry(QRect(320, 30, 91, 31));
        Time_label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/time.png")));
        Time_label->setScaledContents(true);
        movesValue = new QLabel(centralwidget);
        movesValue->setObjectName("movesValue");
        movesValue->setEnabled(false);
        movesValue->setGeometry(QRect(220, 10, 81, 81));
        movesValue->setMinimumSize(QSize(60, 60));
        QPalette palette2;
        QBrush brush1(QColor(0, 160, 215, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush1);
        QBrush brush2(QColor(0, 160, 215, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        movesValue->setPalette(palette2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font.setPointSize(26);
        movesValue->setFont(font);
        movesValue->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #00a0d7;\n"
"}"));
        movesValue->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeValue = new QLabel(centralwidget);
        timeValue->setObjectName("timeValue");
        timeValue->setEnabled(false);
        timeValue->setGeometry(QRect(420, 10, 91, 81));
        timeValue->setMinimumSize(QSize(60, 60));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush1);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush1);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush1);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        timeValue->setPalette(palette3);
        timeValue->setFont(font);
        timeValue->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #00a0d7;\n"
"}"));
        timeValue->setAlignment(Qt::AlignmentFlag::AlignCenter);
        GameWindow->setCentralWidget(centralwidget);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "MainWindow", nullptr));
        logo->setText(QString());
        button_new_game->setText(QString());
        up_A->setText(QString());
        up_B->setText(QString());
        up_C->setText(QString());
        up_D->setText(QString());
        up_E->setText(QString());
        up_F->setText(QString());
        up_G->setText(QString());
        down_G->setText(QString());
        down_A->setText(QString());
        down_B->setText(QString());
        down_F->setText(QString());
        down_C->setText(QString());
        down_E->setText(QString());
        down_D->setText(QString());
        left_1->setText(QString());
        left_2->setText(QString());
        left_3->setText(QString());
        left_4->setText(QString());
        left_5->setText(QString());
        left_6->setText(QString());
        left_7->setText(QString());
        right_4->setText(QString());
        right_1->setText(QString());
        right_3->setText(QString());
        right_7->setText(QString());
        right_2->setText(QString());
        right_6->setText(QString());
        right_5->setText(QString());
        D1->setText(QString());
        Moves_label->setText(QString());
        Time_label->setText(QString());
        movesValue->setText(QString());
        timeValue->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
