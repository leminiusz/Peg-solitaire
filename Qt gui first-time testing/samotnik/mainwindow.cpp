#include "mainwindow.h"
#include "gamewindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnRules_clicked()
{
    QMessageBox::information(this,"ZASADY",
        "Celem gry jest pozostawienie tylko jednego pionka na planszy.\n\n"
        "Można przeskakiwać pionki w pionie lub poziomie (nie można po skosie).\n"
        "Przeskoczony pionek zostaje usunięty.\n"
        "Ruch możliwy jest tylko na wolne pole za przeskakiwanym pionkiem.\n\n"
        "Przemyśl każdy ruch!\n\n"
        "Powodzenia!");
}


void MainWindow::on_btnExit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_btnNew_Game_clicked()
{
    auto *game = new GameWindow(this);
    connect(game, &GameWindow::closed, this, &MainWindow::show);
    game->setAttribute(Qt::WA_DeleteOnClose);
    game->show();
    this->hide();
}
