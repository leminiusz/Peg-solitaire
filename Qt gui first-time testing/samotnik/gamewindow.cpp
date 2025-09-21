#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
    , moveCount(0)
    , elapsedSeconds(0)
{
    ui->setupUi(this);
    pieceIcon = ui->A3->icon();
    selected = {-1,-1};
    connectFields();
    setupCounters();
    initGuiFromModel();

}

GameWindow::~GameWindow()
{
    delete ui;
}
//test
void GameWindow::setupCounters()
{
    // Konfiguracja timera
    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &GameWindow::updateTimer);

    resetCounters();
}

void GameWindow::resetCounters()
{
    moveCount = 0;
    elapsedSeconds = 0;
    ui->movesValue->setText("0");
    ui->timeValue->setText("00:00");

    startTime = QTime::currentTime();
    gameTimer->start(1000);
}

void GameWindow::updateTimer()
{
    elapsedSeconds++;
    int minutes = elapsedSeconds / 60;
    int seconds = elapsedSeconds % 60;
    ui->timeValue->setText(QString("%1:%2")
                               .arg(minutes, 2, 10, QChar('0'))
                               .arg(seconds, 2, 10, QChar('0')));
}

void GameWindow::incrementMoveCount()
{
    moveCount++;
    ui->movesValue->setText(QString::number(moveCount));
}
//test
int GameWindow::colFromLetter(QChar ch)
{
    return ch.unicode() - 'A';
}

void GameWindow::connectFields()
{
    const auto buttons = findChildren<QPushButton*>();
    for (auto *b : buttons)
        if (b->objectName().length()==2){
            connect(b,&QPushButton::clicked,this,&GameWindow::handleFieldClick);
        }
}

void GameWindow::initGuiFromModel()
{
    for(int r=0;r<7;++r)
        for(int c=0;c<7;++c)
            updateField(r,c);
}

void GameWindow::updateField(int r,int c)
{
    const QString obj = QString("%1%2").arg(QChar('A'+c)).arg(r+1);
    auto *btn = findChild<QPushButton*>(obj);
    if(!btn) return;

    switch(model.getStanPola(r,c)){
    case StanPola::PIONEK:
        btn->show();
        btn->setEnabled(true);
        btn->setIcon(pieceIcon);
        btn->setCheckable(true);
        btn->setChecked(selected.first==r && selected.second==c);
        btn->setStyleSheet("border:none; background:transparent;");
        break;
    case StanPola::PUSTE:
        btn->show();
        btn->setEnabled(true);
        btn->setCheckable(false);
        btn->setChecked(false);
        btn->setIcon(QIcon());
        btn->setStyleSheet("border:none; background:transparent;");
        break;
    case StanPola::NIEDOSTEPNE:
        btn->hide();
        break;
    }
}


void GameWindow::handleFieldClick()
{
    auto *btn  = qobject_cast<QPushButton*>(sender());
    const QString id = btn->objectName();
    const int c = colFromLetter(id[0]);
    const int r = id[1].digitValue()-1;


    if(model.getStanPola(r,c)==StanPola::PIONEK && selected.first==-1){
        selected = {r,c};
        btn->setChecked(true);
        return;
    }


    if(selected.first!=-1){
        int r1=selected.first, c1=selected.second;
        int dr=r-r1, dc=c-c1;
        char dir=0;
        if(dr== 2 && dc==0) dir='D';
        if(dr==-2 && dc==0) dir='U';
        if(dc== 2 && dr==0) dir='R';
        if(dc==-2 && dr==0) dir='L';

        if(dir){
            try {
            model.wykonajRuch(r1,c1,dir);
            incrementMoveCount();
            }
            catch(const wyjatek_samotnika&) { }
        }
        selected={-1,-1};
        initGuiFromModel();
        checkEnd();
    }
}


void GameWindow::closeEvent(QCloseEvent *e)
{
    emit closed();
    QMainWindow::closeEvent(e);
}


void GameWindow::on_button_new_game_clicked()
{
    model = SamotnikModel();
    selected = {-1,-1};
    resetCounters();
    initGuiFromModel();
    checkEnd();
}

void GameWindow::checkEnd()
{
    if (model.czyWygranaIdealna()) {
        gameTimer->stop();
        QMessageBox::information(this,"Wygrana idealna",
        QString("Gratulacje! Idealna wygrana!\n"
        "Moves: %1\nTime: %2").arg(moveCount).arg(ui->timeValue->text()) );
    }
    else if (model.czyWygrana()) {
        gameTimer->stop();
        QMessageBox::information(this,"Wygrana",
        QString("Udało się!\nMoves: %1\nTime: %2").arg(moveCount).arg(ui->timeValue->text()));
    }
}




