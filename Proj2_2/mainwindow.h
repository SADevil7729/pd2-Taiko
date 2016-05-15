#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>
#include <QSoundEffect>
#include <QMediaPlayer>
#include <QTimer>
#include <QObject>
#include <QDesktopWidget>
#include <QGraphicsOpacityEffect>
#include <QGraphicsScene>
#include <QUrl>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <QWidget>
#include <QKeyEvent>
#include <Qt>
#include <QPushButton>
#include <QList>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void OP(void);
    double opa,opa2,opa3,opa4,opa5,opa6,opa7;
    QTimer timer,timer2,timer3,timer4,timer5,timer6,timer7,timer8,timer9,timer10;
    QTimer timer11,timer12,timer13,timer14,timer15,timer16,timer17,timer18,timer19;
    QMediaPlayer *bgm;
    QGraphicsOpacityEffect *effect2;

    int screenW;
    int screenH;
    int game_ready_t;
    int shoot_interval;
    int shoot_speed;
    void keyPressEvent(QKeyEvent *e);
    void game_match_red();
    void game_match_blue();
    int game_con_pre;
    int game_con_pos;
    int game_combo_max;
    int game_combo;
    int game_perfect;
    int game_cool;
    int game_miss;
    int game_score;
    int game_red;
    int game_blue;
    int game_mode;
    int game_score_temp;
    int game_score_init;
    int game_score_plus;
    int game_combo_bonus;
    int game_time_init;
    int game_time;
    void game_new();
    void result();
    void init();
    int scene;
    QPushButton *pr;
    QList<QPushButton*> lr;
    QPushButton *pb;
    QList<QPushButton*> lb;


signals:

public slots:
    void OP_Move();
    void OP_fade();
    void OP_Vol();
    void mode_fade();
    void mode_fade2();
    void game_fade();
    void game_ready();
    void game_shoot();
    void game_shoot2();
    void game_right();
    void game_left();
    void game_fade2();
    void game_timer();
    void game_end();
    void game_end2();
    void result_fade();
    void result_fade2();
    void result_jump();
private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

    void on_pushButton_26_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
