#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPair>
#include <QTime>
#include <QTimer>
#include <QLabel>
#include <QMessageBox>
#include "samotnik_model.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

signals:
    void closed();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void handleFieldClick();
    void on_button_new_game_clicked();
    void updateTimer();

private:
    Ui::GameWindow *ui;
    SamotnikModel model;
    QPair<int,int> selected{-1,-1};
    QTimer *gameTimer;
    QTime startTime;
    int moveCount;

    QIcon pieceIcon;


    int elapsedSeconds;
    void setupCounters();
    void resetCounters();
    void incrementMoveCount();
    void checkEnd();

    void initGuiFromModel();
    void updateField(int r,int c);
    void connectFields();
    static int colFromLetter(QChar);
};
#endif // GAMEWINDOW_H
