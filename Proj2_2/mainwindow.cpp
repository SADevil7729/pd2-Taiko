#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDesktopWidget wid;
    screenW = 1280;
    screenH = 640;
    game_score_init=100;
    game_combo_bonus=7;
    game_time_init=30;

    srand(time(NULL));
    //this->setCentralWidget(ui->centralWidget);
    this->setGeometry(0,24, screenW , screenH);
    this->setWindowTitle("Azusa");
    this->setWindowIcon(QIcon("../image/icon.jpg"));
    this->setIconSize(QSize(500,568));
    this->setFixedHeight(screenH);
    this->setFixedWidth(screenW);


    ui->pushButton_2->setGeometry(5,200,365,139);
    ui->pushButton_2->setIcon(QIcon("../image/easy.jpg"));
    ui->pushButton_2->setIconSize(QSize(365,139));
    ui->pushButton_2->setText("");

    ui->pushButton_3->setGeometry(470,201,364,136);
    ui->pushButton_3->setIcon(QIcon("../image/normal.jpg"));
    ui->pushButton_3->setIconSize(QSize(364,136));
    ui->pushButton_3->setText("");

    ui->pushButton_4->setGeometry(913,200,367,139);
    ui->pushButton_4->setIcon(QIcon("../image/hard.jpg"));
    ui->pushButton_4->setIconSize(QSize(367,139));
    ui->pushButton_4->setText("");

    ui->pushButton_5->setGeometry(195,434,365,135);
    ui->pushButton_5->setIcon(QIcon("../image/expert.jpg"));
    ui->pushButton_5->setIconSize(QSize(365,135));
    ui->pushButton_5->setText("");

    ui->pushButton_6->setGeometry(680,434,371,134);
    ui->pushButton_6->setIcon(QIcon("../image/technical.jpg"));
    ui->pushButton_6->setIconSize(QSize(371,134));
    ui->pushButton_6->setText("");

    ui->pushButton_7->setGeometry(0,0,screenW,screenH);
    ui->pushButton_7->setIcon(QIcon("../image/black.jpg"));
    ui->pushButton_7->setIconSize(QSize(screenW,screenH));
    ui->pushButton_7->setText("");

    ui->pushButton_8->setGeometry(0,0,screenW,screenH);
    ui->pushButton_8->setIcon(QIcon("../image/mode.jpg"));
    ui->pushButton_8->setIconSize(QSize(screenW,screenH));
    ui->pushButton_8->setText("");


    ui->pushButton_9->setGeometry(0,163,280,245);
    ui->pushButton_9->setIcon(QIcon("../image/ko.jpg"));
    ui->pushButton_9->setIconSize(QSize(280,245));
    ui->pushButton_9->setText("");


    //ready_go_time
    ui->pushButton_20->setGeometry(1200,253,50,67);
    ui->pushButton_20->setIconSize(QSize(50,67));
    ui->pushButton_20->setText("");

    ui->pushButton_21->setGeometry(63,183,78,136);
    ui->pushButton_21->setIcon(QIcon("../image/ko_red_left.png"));
    ui->pushButton_21->setIconSize(QSize(78,136));
    ui->pushButton_21->setText("");

    ui->pushButton_22->setGeometry(141,183,78,136);
    ui->pushButton_22->setIcon(QIcon("../image/ko_red_right.png"));
    ui->pushButton_22->setIconSize(QSize(78,136));
    ui->pushButton_22->setText("");

    ui->pushButton_23->setGeometry(350,216,160,144);
    ui->pushButton_23->setIcon(QIcon("../image/judge.jpg"));
    ui->pushButton_23->setIconSize(QSize(160,144));
    ui->pushButton_23->setText("");

    //perfect,cool,miss
    ui->pushButton_24->setGeometry(385,160,100,60);
    ui->pushButton_24->setIconSize(QSize(100,60));
    ui->pushButton_24->setText("");

    ui->pushButton_25->setGeometry(0,0,screenW,screenH);
    ui->pushButton_25->setIcon(QIcon("../image/bg.jpg"));
    ui->pushButton_25->setIconSize(QSize(screenW,screenH));
    ui->pushButton_25->setText("");

    ui->pushButton_26->setGeometry(0,0,screenW,screenH);
    ui->pushButton_26->setIcon(QIcon("../image/result.jpg"));
    ui->pushButton_26->setIconSize(QSize(screenW,screenH));
    ui->pushButton_26->setText("");

    ui->pushButton_27->setGeometry(1000,208,50,68);
    ui->pushButton_27->setIconSize(QSize(50,68));
    ui->pushButton_27->setText("");

    ui->pushButton_28->setGeometry(930,208,50,68);
    ui->pushButton_28->setIconSize(QSize(50,68));
    ui->pushButton_28->setText("");

    ui->pushButton_29->setGeometry(860,208,50,68);
    ui->pushButton_29->setIconSize(QSize(50,68));
    ui->pushButton_29->setText("");

    ui->pushButton_30->setGeometry(790,208,50,68);
    ui->pushButton_30->setIconSize(QSize(50,68));
    ui->pushButton_30->setText("");

    ui->pushButton_31->setGeometry(720,208,50,68);
    ui->pushButton_31->setIconSize(QSize(50,68));
    ui->pushButton_31->setText("");

    ui->pushButton_32->setGeometry(650,208,50,68);
    ui->pushButton_32->setIconSize(QSize(50,68));
    ui->pushButton_32->setText("");

    ui->pushButton_33->setGeometry(580,208,50,68);
    ui->pushButton_33->setIconSize(QSize(50,68));
    ui->pushButton_33->setText("");

    ui->pushButton_34->setGeometry(510,208,50,68);
    ui->pushButton_34->setIconSize(QSize(50,68));
    ui->pushButton_34->setText("");

    ui->pushButton_35->setGeometry(440,208,50,68);
    ui->pushButton_35->setIconSize(QSize(50,68));
    ui->pushButton_35->setText("");

    //combo
    ui->pushButton_36->setGeometry(760,23,50,68);
    ui->pushButton_36->setIconSize(QSize(50,68));
    ui->pushButton_36->setText("");

    ui->pushButton_37->setGeometry(715,23,50,68);
    ui->pushButton_37->setIconSize(QSize(50,68));
    ui->pushButton_37->setText("");

    ui->pushButton_38->setGeometry(670,23,50,68);
    ui->pushButton_38->setIconSize(QSize(50,68));
    ui->pushButton_38->setText("");

    //p
    ui->pushButton_39->setGeometry(638,105,50,68);
    ui->pushButton_39->setIconSize(QSize(50,68));
    ui->pushButton_39->setText("");

    ui->pushButton_40->setGeometry(588,105,50,68);
    ui->pushButton_40->setIconSize(QSize(50,68));
    ui->pushButton_40->setText("");

    ui->pushButton_41->setGeometry(538,105,50,68);
    ui->pushButton_41->setIconSize(QSize(50,68));
    ui->pushButton_41->setText("");

    //c
    ui->pushButton_42->setGeometry(918,102,50,68);
    ui->pushButton_42->setIconSize(QSize(50,68));
    ui->pushButton_42->setText("");

    ui->pushButton_43->setGeometry(863,102,50,68);
    ui->pushButton_43->setIconSize(QSize(50,68));
    ui->pushButton_43->setText("");

    ui->pushButton_44->setGeometry(808,102,50,68);
    ui->pushButton_44->setIconSize(QSize(50,68));
    ui->pushButton_44->setText("");

    //miss
    ui->pushButton_45->setGeometry(1209,103,50,68);
    ui->pushButton_45->setIconSize(QSize(50,68));
    ui->pushButton_45->setText("");


    ui->pushButton_46->setGeometry(1154,103,50,68);
    ui->pushButton_46->setIconSize(QSize(50,68));
    ui->pushButton_46->setText("");

    ui->pushButton_47->setGeometry(1099,103,50,68);
    ui->pushButton_47->setIconSize(QSize(50,68));
    ui->pushButton_47->setText("");


    //%
    ui->pushButton_48->setGeometry(1150,24,50,68);
    ui->pushButton_48->setIconSize(QSize(50,68));
    ui->pushButton_48->setText("");

    ui->pushButton_49->setGeometry(1116,24,50,68);
    ui->pushButton_49->setIconSize(QSize(50,68));
    ui->pushButton_49->setText("");

    ui->pushButton_50->setGeometry(1070,24,50,68);
    ui->pushButton_50->setIconSize(QSize(50,68));
    ui->pushButton_50->setText("");

    ui->pushButton_51->setGeometry(1035,24,50,68);
    ui->pushButton_51->setIconSize(QSize(50,68));
    ui->pushButton_51->setText("");

    //%.
    ui->pushButton_52->setGeometry(1103,71,39,39);
    ui->pushButton_52->setIconSize(QSize(39,39));
    ui->pushButton_52->setText("");

    //%game_score
    ui->pushButton_53->setGeometry(1237,90,52,59);
    ui->pushButton_53->setIconSize(QSize(52,59));
    ui->pushButton_53->setText("");

    ui->pushButton_54->setGeometry(1182,90,52,59);
    ui->pushButton_54->setIconSize(QSize(52,59));
    ui->pushButton_54->setText("");

    ui->pushButton_55->setGeometry(1127,90,52,59);
    ui->pushButton_55->setIconSize(QSize(52,59));
    ui->pushButton_55->setText("");

    ui->pushButton_56->setGeometry(1072,90,52,59);
    ui->pushButton_56->setIconSize(QSize(52,59));
    ui->pushButton_56->setText("");

    ui->pushButton_57->setGeometry(1017,90,52,59);
    ui->pushButton_57->setIconSize(QSize(52,59));
    ui->pushButton_57->setText("");

    ui->pushButton_58->setGeometry(962,90,52,59);
    ui->pushButton_58->setIconSize(QSize(52,59));
    ui->pushButton_58->setText("");

    ui->pushButton_59->setGeometry(907,90,52,59);
    ui->pushButton_59->setIconSize(QSize(52,59));
    ui->pushButton_59->setText("");


    ui->pushButton_60->setGeometry(852,90,52,59);
    ui->pushButton_60->setIconSize(QSize(52,59));
    ui->pushButton_60->setText("");

    ui->pushButton_61->setGeometry(797,90,52,59);
    ui->pushButton_61->setIconSize(QSize(52,59));
    ui->pushButton_61->setText("");

    //game_score_plus
    ui->pushButton_62->setGeometry(1237,25,50,68);
    ui->pushButton_62->setIconSize(QSize(50,68));
    ui->pushButton_62->setText("");

    ui->pushButton_63->setGeometry(1182,25,50,68);
    ui->pushButton_63->setIconSize(QSize(50,68));
    ui->pushButton_63->setText("");

    ui->pushButton_64->setGeometry(1127,25,50,68);
    ui->pushButton_64->setIconSize(QSize(50,68));
    ui->pushButton_64->setText("");

    ui->pushButton_65->setGeometry(1072,25,50,68);
    ui->pushButton_65->setIconSize(QSize(50,68));
    ui->pushButton_65->setText("");

    //time
    ui->pushButton_66->setGeometry(191,92,52,59);
    ui->pushButton_66->setIconSize(QSize(52,59));
    ui->pushButton_66->setText("");

    ui->pushButton_67->setGeometry(136,92,52,59);
    ui->pushButton_67->setIconSize(QSize(52,59));
    ui->pushButton_67->setText("");

    ui->pushButton_68->setGeometry(81,92,52,59);
    ui->pushButton_68->setIconSize(QSize(52,59));
    ui->pushButton_68->setText("");

    //combo
    ui->pushButton_69->setGeometry(650,30,52,59);
    ui->pushButton_69->setIconSize(QSize(52,59));
    ui->pushButton_69->setText("");

    ui->pushButton_70->setGeometry(605,30,52,59);
    ui->pushButton_70->setIconSize(QSize(52,59));
    ui->pushButton_70->setText("");

    ui->pushButton_71->setGeometry(560,30,52,59);
    ui->pushButton_71->setIconSize(QSize(52,59));
    ui->pushButton_71->setText("");

    ui->pushButton_72->setGeometry(562,0,142,151);
    ui->pushButton_72->setIcon(QIcon("../image/combo.png"));
    ui->pushButton_72->setIconSize(QSize(142,151));
    ui->pushButton_72->setText("");




    QObject::connect(&timer,SIGNAL(timeout()),this,SLOT(OP_fade()));
    QObject::connect(&timer2,SIGNAL(timeout()),this,SLOT(OP_Move()));
    QObject::connect(&timer3,SIGNAL(timeout()),this,SLOT(OP_Vol()));
    QObject::connect(&timer4,SIGNAL(timeout()),this,SLOT(mode_fade()));
    QObject::connect(&timer5,SIGNAL(timeout()),this,SLOT(mode_fade2()));
    QObject::connect(&timer6,SIGNAL(timeout()),this,SLOT(game_fade()));
    QObject::connect(&timer7,SIGNAL(timeout()),this,SLOT(game_ready()));
    QObject::connect(&timer8,SIGNAL(timeout()),this,SLOT(game_shoot()));
    QObject::connect(&timer9,SIGNAL(timeout()),this,SLOT(game_shoot2()));
    QObject::connect(&timer10,SIGNAL(timeout()),this,SLOT(game_right()));
    QObject::connect(&timer11,SIGNAL(timeout()),this,SLOT(game_left()));
    QObject::connect(&timer12,SIGNAL(timeout()),this,SLOT(game_fade2()));
    QObject::connect(&timer13,SIGNAL(timeout()),this,SLOT(game_timer()));
    QObject::connect(&timer14,SIGNAL(timeout()),this,SLOT(game_end()));
    QObject::connect(&timer15,SIGNAL(timeout()),this,SLOT(game_end2()));
    QObject::connect(&timer16,SIGNAL(timeout()),this,SLOT(result_fade()));
    QObject::connect(&timer17,SIGNAL(timeout()),this,SLOT(result_fade2()));
    QObject::connect(&timer18,SIGNAL(timeout()),this,SLOT(result_jump()));
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    if(scene==1)
    {
    scene=2;
    QSound *sound;
    sound = new QSound("../sound/1.wav");
    sound->play();

    this->timer2.start(20);
    this->timer3.start(140);
    this->ui->pushButton_7->show();
    }
}
void MainWindow::OP_fade()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa);
    this->ui->pushButton->setGraphicsEffect(effect2);
    this->opa=this->opa+0.02;
    if(this->opa>=1)
    {
        this->timer.stop();
    }
}
void MainWindow::OP_Move()
{
    int x=this->ui->pushButton->x();
    int y=this->ui->pushButton->y();
    this->ui->pushButton->setGeometry(x+7,y,this->ui->pushButton->width(),this->ui->pushButton->height());
    if(x > this->ui->pushButton->width()+10)
    {
        this->timer2.stop();
        ui->pushButton_2->show();
        ui->pushButton_3->show();
        ui->pushButton_4->show();
        ui->pushButton_5->show();
        ui->pushButton_6->show();
        ui->pushButton_8->show();
        ui->pushButton->hide();
        ui->pushButton_7->hide();

        timer4.start(100);
    }
}
void MainWindow::OP_Vol()
{
    this->bgm->setVolume(this->bgm->volume()-1);
    if(this->bgm->volume()<=0)
    {
        this->timer3.stop();
        bgm->stop();
    }
}
void MainWindow::mode_fade()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_2->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_3->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_4->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_5->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_6->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_8->setGraphicsEffect(effect2);
    this->opa2=this->opa2+0.03;
    if(this->opa2>=1)
    {
        this->timer4.stop();
        scene=3;

    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/2.wav");
    sound->play();
    timer5.start(50);
    this->timer4.stop();
    opa3=opa2;
    shoot_interval=800;
    game_mode=2;
    shoot_speed=4;

    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_3_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/2.wav");
    sound->play();
    timer5.start(50);
    this->timer4.stop();
    opa3=opa2;
    shoot_interval=700;
    shoot_speed=5;
    game_mode=5;

    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_4_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/2.wav");
    sound->play();
    timer5.start(50);
    this->timer4.stop();
    opa3=opa2;
    shoot_interval=500;
    shoot_speed=6;
    game_mode=10;

    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_5_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/2.wav");
    sound->play();
    timer5.start(50);
    this->timer4.stop();
    opa3=opa2;
    shoot_interval=333;
    shoot_speed=7;
    game_mode=15;

    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
}

void MainWindow::on_pushButton_6_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/2.wav");
    sound->play();
    timer5.start(50);
    this->timer4.stop();
    opa3=opa2;
    shoot_interval=250;
    shoot_speed=8;
    game_mode=20;

    this->ui->pushButton_2->setEnabled(false);
    this->ui->pushButton_3->setEnabled(false);
    this->ui->pushButton_4->setEnabled(false);
    this->ui->pushButton_5->setEnabled(false);
    this->ui->pushButton_6->setEnabled(false);
}
void MainWindow::mode_fade2()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_2->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_3->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_4->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_5->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_6->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa3);
    this->ui->pushButton_8->setGraphicsEffect(effect2);

    this->opa3=this->opa3-0.03;
    if(this->opa3<=0)
    {
        scene=4;
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->pushButton_5->hide();
        ui->pushButton_6->hide();
        ui->pushButton_8->hide();
        ui->pushButton_9->show();
        ui->pushButton_23->show();
        ui->pushButton_25->show();
        ui->pushButton_72->show();

        this->timer5.stop();

        timer6.start(40);
    }
}
void MainWindow::game_fade()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa4);
    this->ui->pushButton_9->setGraphicsEffect(effect2);

    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa4);
    this->ui->pushButton_23->setGraphicsEffect(effect2);

    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa4);
    this->ui->pushButton_25->setGraphicsEffect(effect2);

    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa4);
    this->ui->pushButton_72->setGraphicsEffect(effect2);

    this->opa4=this->opa4+0.03;
    if(this->opa4>=1)
    {
        scene=5;
        this->timer6.stop();
        timer7.start(1100);
        game_ready_t=3;
    }
}
void MainWindow::game_ready()
{
    if(game_ready_t==3)
    {
        QSound *sound;
        sound = new QSound("../sound/B.wav");
        sound->play();

        ui->pushButton_20->setIcon(QIcon("../image/3.png"));
        ui->pushButton_20->show();

        char temp[100];

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,game_score%10);
        strcat(temp,"_.png");
        ui->pushButton_53->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%100-game_score%10)/10);
        strcat(temp,"_.png");
        ui->pushButton_54->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%1000-game_score%100)/100);
        strcat(temp,"_.png");
        ui->pushButton_55->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%10000-game_score%1000)/1000);
        strcat(temp,"_.png");
        ui->pushButton_56->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%100000-game_score%10000)/10000);
        strcat(temp,"_.png");
        ui->pushButton_57->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%1000000-game_score%100000)/100000);
        strcat(temp,"_.png");
        ui->pushButton_58->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%10000000-game_score%1000000)/1000000);
        strcat(temp,"_.png");
        ui->pushButton_59->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%100000000-game_score%10000000)/10000000);
        strcat(temp,"_.png");
        ui->pushButton_60->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_score%1000000000-game_score%100000000)/100000000);
        strcat(temp,"_.png");
        ui->pushButton_61->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,game_time%10);
        strcat(temp,".png");
        ui->pushButton_66->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_time%100-game_time%10)/10);
        strcat(temp,".png");
        ui->pushButton_67->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_time%1000-game_time%100)/100);
        strcat(temp,".png");

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,game_combo%10);
        strcat(temp,".png");
        ui->pushButton_69->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_combo%100-game_combo%10)/10);
        strcat(temp,".png");
        ui->pushButton_70->setIcon(QIcon(temp));

        strcpy(temp,"../image/");
        sprintf(temp,"%s%d",temp,(game_combo%1000-game_combo%100)/100);
        strcat(temp,".png");
        ui->pushButton_71->setIcon(QIcon(temp));

        ui->pushButton_53->show();
        ui->pushButton_54->show();
        ui->pushButton_55->show();
        ui->pushButton_56->show();
        ui->pushButton_57->show();
        ui->pushButton_58->show();
        ui->pushButton_59->show();
        ui->pushButton_60->show();
        ui->pushButton_61->show();

        ui->pushButton_66->show();
        ui->pushButton_67->show();
        ui->pushButton_68->show();

        ui->pushButton_69->show();
        ui->pushButton_70->show();
        ui->pushButton_71->show();


    }
    else if(game_ready_t==2)
    {
        QSound *sound;
        sound = new QSound("../sound/B.wav");
        sound->play();
        ui->pushButton_20->setGeometry(1200,253,50,67);
        ui->pushButton_20->setIcon(QIcon("../image/2.png"));
        ui->pushButton_20->setIconSize(QSize(50,67));
    }
    else if(game_ready_t==1)
    {
        QSound *sound;
        sound = new QSound("../sound/B.wav");
        sound->play();
        ui->pushButton_20->setGeometry(1200,253,50,67);
        ui->pushButton_20->setIcon(QIcon("../image/1.png"));
        ui->pushButton_20->setIconSize(QSize(50,67));
    }
    else if(game_ready_t==0)
    {
        QSound *sound;
        sound = new QSound("../sound/B2.wav");
        sound->play();
        ui->pushButton_20->hide();


        timer7.stop();

        timer8.start(shoot_interval);
        timer9.start(10);
        timer13.start(1000);

    }
    game_ready_t--;
}
void MainWindow::game_shoot()
{
    if(rand()%2==0)
    {
        if(rand()%(game_blue+game_red*game_red*2+2)<=game_mode)
        {
        pr=new QPushButton("",this);
        pr->setIcon(QIcon("../image/red.png"));
        pr->setGeometry(1200,243,100,90);
        pr->setIconSize(QSize(100,90));
        pr->setFlat(true);
        pr->show();
        lr.push_front(pr);
        game_red++;
        }
    }
    else
    {
        if(rand()%(game_blue*game_blue*2+game_red+2)<=game_mode)
        {
        pb=new QPushButton("",this);
        pb->setIcon(QIcon("../image/blue.png"));
        pb->setGeometry(1200,243,100,90);
        pb->setIconSize(QSize(100,90));
        pb->setFlat(true);
        pb->show();
        lb.push_front(pb);
        game_blue++;
        }
    }
}
void MainWindow::game_shoot2()
{
    bool lost=false;
    foreach(QPushButton *i,lr)
    {
        i->setGeometry(i->x()-shoot_speed,i->y(),i->width(),i->height());
        if(i->x()<250)
        {
            lost=true;
            lr.removeOne(i);
            delete i;
            game_red--;
        }
    }
    foreach(QPushButton *i,lb)
    {
        i->setGeometry(i->x()-shoot_speed,i->y(),i->width(),i->height());
        if(i->x()<250)
        {
            lost=true;
            lb.removeOne(i);
            delete i;
            game_blue--;
        }
    }


    if(lost==true)
    {
        game_combo=0;
        game_miss++;

        ui->pushButton_24->show();
        ui->pushButton_24->setIcon(QIcon("../image/miss.png"));
        timer12.start(400);
    }
}
void MainWindow::keyPressEvent(QKeyEvent *e)
{
    QSound *sound;
    if(scene==5&&e->key()==Qt::Key_Z)
    {
      sound = new QSound("../sound/do.wav");
      sound->play();
      game_match_red();
      ui->pushButton_21->show();
      timer10.start(200);
      return ;
    }
    if(scene==5&&e->key()==Qt::Key_X)
    {
        sound = new QSound("../sound/da.wav");
        sound->play();
        game_match_blue();
        ui->pushButton_22->show();
        timer11.start(200);
        return ;
    }
    if(scene==1&&e->key())
    {
    sound = new QSound("../sound/1.wav");
    sound->play();

    this->timer2.start(20);
    this->timer3.start(140);
    this->ui->pushButton_7->show();
    scene=2;
    return ;
    }


}
void MainWindow::game_right()
{
    timer10.stop();
    ui->pushButton_21->hide();
}
void MainWindow::game_left()
{
    timer11.stop();
    ui->pushButton_22->hide();
}
void MainWindow::game_match_red()
{
    int min=-1,index=-1,j=0;
    foreach(QPushButton *i,lr)
    {
        if(i->x()<=510&&i->x()>=250)
        {
            if(min==-1||abs(380-i->x())<min)
            {
                min=abs(380-i->x());
                index=j;
            }
        }
        j++;
    }

if(index!=-1)
{
    game_red--;
    QPushButton *rm=lr.at(index);
    lr.removeOne(lr.at(index));
    delete rm;
    if(min<13)
    {
        game_score_plus=(game_combo*game_combo_bonus+game_score_init)*1;
        game_combo++;
        if(game_combo>game_combo_max)
        {
            game_combo_max=game_combo;
        }
        game_perfect++;
        game_score=game_score+game_score_plus;

        ui->pushButton_24->show();
        ui->pushButton_62->show();
        ui->pushButton_63->show();
        ui->pushButton_64->show();
        ui->pushButton_65->show();
        ui->pushButton_24->setIcon(QIcon("../image/perfect.png"));
        timer12.start(400);
    }
    else if(min<29)
    {

        game_score_plus=(game_combo*game_combo_bonus+game_score_init)*0.8;
        game_combo++;
        if(game_combo>game_combo_max)
        {
            game_combo_max=game_combo;
        }
        game_cool++;
        game_score=game_score+game_score_plus;
        ui->pushButton_24->show();
        ui->pushButton_62->show();
        ui->pushButton_63->show();
        ui->pushButton_64->show();
        ui->pushButton_65->show();
        ui->pushButton_24->setIcon(QIcon("../image/cool.png"));
        timer12.start(400);
    }
    else
    {
        game_score_plus=(game_combo*game_combo_bonus+game_score_init)*0.6;
        game_combo=0;
        game_miss++;
        game_score=game_score+game_score_plus;
        ui->pushButton_24->show();
        ui->pushButton_62->show();
        ui->pushButton_63->show();
        ui->pushButton_64->show();
        ui->pushButton_65->show();
        ui->pushButton_24->setIcon(QIcon("../image/miss.png"));
        timer12.start(400);
    }

    game_new();
}


}
void MainWindow::game_match_blue()
{
    int min=-1,index=-1,j=0;
    foreach(QPushButton *i,lb)
    {
        if(i->x()<=510&&i->x()>=250)
        {
            if(min==-1||abs(380-i->x())<min)
            {
                min=abs(380-i->x());
                index=j;
            }
        }
        j++;
    }

        if(index!=-1)
        {
            game_blue--;
            QPushButton *rm=lb.at(index);
            lb.removeOne(lb.at(index));
            delete rm;
            if(min<13)
            {
                game_score_plus=(game_combo*game_combo_bonus+game_score_init)*1;
                game_combo++;
                if(game_combo>game_combo_max)
                {
                    game_combo_max=game_combo;
                }
                game_perfect++;
                game_score=game_score+game_score_plus;
                ui->pushButton_24->show();
                ui->pushButton_62->show();
                ui->pushButton_63->show();
                ui->pushButton_64->show();
                ui->pushButton_65->show();
                ui->pushButton_24->setIcon(QIcon("../image/perfect.png"));
                timer12.start(400);
            }
            else if(min<38)
            {
                game_score_plus=(game_combo*game_combo_bonus+game_score_init)*0.8;
                game_combo++;
                if(game_combo>game_combo_max)
                {
                    game_combo_max=game_combo;
                }
                game_cool++;
                game_score=game_score+game_score_plus;
                ui->pushButton_24->show();
                ui->pushButton_62->show();
                ui->pushButton_63->show();
                ui->pushButton_64->show();
                ui->pushButton_65->show();
                ui->pushButton_24->setIcon(QIcon("../image/cool.png"));
                timer12.start(400);
            }
            else
            {
                game_score_plus=(game_combo*game_combo_bonus+game_score_init)*0.6;
                game_combo=0;
                game_miss++;
                game_score=game_score+game_score_plus;
                ui->pushButton_24->show();
                ui->pushButton_62->show();
                ui->pushButton_63->show();
                ui->pushButton_64->show();
                ui->pushButton_65->show();
                ui->pushButton_24->setIcon(QIcon("../image/miss.png"));
                timer12.start(400);
            }

            game_new();
        }

}

void MainWindow::game_new()
{
    char temp[100];
    //game_score
    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,game_score%10);
    strcat(temp,"_.png");
    ui->pushButton_53->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%100-game_score%10)/10);
    strcat(temp,"_.png");
    ui->pushButton_54->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%1000-game_score%100)/100);
    strcat(temp,"_.png");
    ui->pushButton_55->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%10000-game_score%1000)/1000);
    strcat(temp,"_.png");
    ui->pushButton_56->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%100000-game_score%10000)/10000);
    strcat(temp,"_.png");
    ui->pushButton_57->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%1000000-game_score%100000)/100000);
    strcat(temp,"_.png");
    ui->pushButton_58->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%10000000-game_score%1000000)/1000000);
    strcat(temp,"_.png");
    ui->pushButton_59->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%100000000-game_score%10000000)/10000000);
    strcat(temp,"_.png");
    ui->pushButton_60->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score%1000000000-game_score%100000000)/100000000);
    strcat(temp,"_.png");
    ui->pushButton_61->setIcon(QIcon(temp));

    //game_score_plus
    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,game_score_plus%10);
    strcat(temp,".png");
    ui->pushButton_62->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score_plus%100-game_score_plus%10)/10);
    strcat(temp,".png");
    ui->pushButton_63->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score_plus%1000-game_score_plus%100)/100);
    strcat(temp,".png");
    ui->pushButton_64->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_score_plus%10000-game_score_plus%1000)/1000);
    strcat(temp,".png");
    ui->pushButton_65->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,game_combo%10);
    strcat(temp,".png");
    ui->pushButton_69->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_combo%100-game_combo%10)/10);
    strcat(temp,".png");
    ui->pushButton_70->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_combo%1000-game_combo%100)/100);
    strcat(temp,".png");
    ui->pushButton_71->setIcon(QIcon(temp));



}
void MainWindow::game_fade2()
{
    ui->pushButton_24->hide();
    ui->pushButton_62->hide();
    ui->pushButton_63->hide();
    ui->pushButton_64->hide();
    ui->pushButton_65->hide();
    timer12.stop();
}
void MainWindow::game_timer()
{
    if(game_time>0)
    {
    game_time--;
    char temp[100];
    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,game_time%10);
    strcat(temp,".png");
    ui->pushButton_66->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_time%100-game_time%10)/10);
    strcat(temp,".png");
    ui->pushButton_67->setIcon(QIcon(temp));

    strcpy(temp,"../image/");
    sprintf(temp,"%s%d",temp,(game_time%1000-game_time%100)/100);
    strcat(temp,".png");
    ui->pushButton_68->setIcon(QIcon(temp));

    }
    if(game_time<=0)
    {
        timer8.stop();
        if(lr.empty()&&lb.empty())
        {
            timer9.stop();
            timer13.stop();
            timer14.start(1700);
        }
    }
}
void MainWindow::game_end()
{
    timer14.stop();
    scene=6;
    timer15.start(40);
    ui->pushButton_53->hide();
    ui->pushButton_54->hide();
    ui->pushButton_55->hide();
    ui->pushButton_56->hide();
    ui->pushButton_57->hide();
    ui->pushButton_58->hide();
    ui->pushButton_59->hide();
    ui->pushButton_60->hide();
    ui->pushButton_61->hide();

    ui->pushButton_66->hide();
    ui->pushButton_67->hide();
    ui->pushButton_68->hide();
    ui->pushButton_69->hide();
    ui->pushButton_70->hide();
    ui->pushButton_71->hide();

}
void MainWindow::game_end2()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa5);
    this->ui->pushButton_9->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa5);
    this->ui->pushButton_23->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa5);
    this->ui->pushButton_25->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa5);
    this->ui->pushButton_72->setGraphicsEffect(effect2);
    opa5=opa5-0.04;
    if(opa5<=0)
    {
        ui->pushButton_9->hide();
        ui->pushButton_23->hide();
        ui->pushButton_25->hide();
        ui->pushButton_72->hide();
        timer15.stop();
        timer16.start(40);
        ui->pushButton_26->show();
        bgm=new QMediaPlayer;
        bgm->setMedia(QUrl::fromLocalFile("../sound/Serieux.wav"));
        bgm->setVolume(100);
        bgm->play();


    }
}
void MainWindow::result_fade()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa6);
    this->ui->pushButton_26->setGraphicsEffect(effect2);



    opa6=opa6+0.04;
    if(opa6>=1)
    {
        timer16.stop();
        result();
        timer18.start(10);
        ui->pushButton_27->show();
        ui->pushButton_28->show();
        ui->pushButton_29->show();
        ui->pushButton_30->show();
        ui->pushButton_31->show();
        ui->pushButton_32->show();
        ui->pushButton_33->show();
        ui->pushButton_34->show();
        ui->pushButton_35->show();
        ui->pushButton_36->show();
        ui->pushButton_37->show();
        ui->pushButton_38->show();
        ui->pushButton_39->show();
        ui->pushButton_40->show();
        ui->pushButton_41->show();
        ui->pushButton_42->show();
        ui->pushButton_43->show();
        ui->pushButton_44->show();
        ui->pushButton_45->show();
        ui->pushButton_46->show();
        ui->pushButton_47->show();
        ui->pushButton_48->show();
        ui->pushButton_49->show();
        ui->pushButton_50->show();
        ui->pushButton_51->show();
        ui->pushButton_52->show();
    }
}
void MainWindow::result()
{
    char temp[100];
    double temp2=0;
    unsigned int t_f=0;
    int j;
    temp2=double(game_perfect*2+game_cool*2)/double(game_perfect*2+game_cool*3+game_miss*2)*100;
    sprintf(temp,"%.2lf",temp2);
    unsigned int i;
    for(i=0;i<strlen(temp);i++)
    {
        if(temp[i]=='.')
        {
            t_f=i+1;
            break;
        }
    }
    j=0;
    for(i=t_f;i<t_f+2;i++)
    {
        temp[j]=temp[i];
        j++;
    }
    temp[2]='\0';

    game_con_pos=atoi(temp);
    game_con_pre=int(temp2);



strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_combo_max%10);
strcat(temp,".png");
ui->pushButton_36->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_combo_max%100-game_combo_max%10)/10);
strcat(temp,".png");
ui->pushButton_37->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_combo_max%1000-game_combo_max%100)/100);
strcat(temp,".png");
ui->pushButton_38->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_perfect%10);
strcat(temp,".png");
ui->pushButton_39->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_perfect%100-game_perfect%10)/10);
strcat(temp,".png");
ui->pushButton_40->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_perfect%1000-game_perfect%100)/100);
strcat(temp,".png");
ui->pushButton_41->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_cool%10);
strcat(temp,".png");
ui->pushButton_42->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_cool%100-game_cool%10)/10);
strcat(temp,".png");
ui->pushButton_43->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_cool%1000-game_cool%100)/100);
strcat(temp,".png");
ui->pushButton_44->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_miss%10);
strcat(temp,".png");
ui->pushButton_45->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_miss%100-game_miss%10)/10);
strcat(temp,".png");
ui->pushButton_46->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_miss%1000-game_miss%100)/100);
strcat(temp,".png");
ui->pushButton_47->setIcon(QIcon(temp));


if(game_miss!=0||game_cool!=0)
{
strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_con_pos%10);
strcat(temp,".png");
ui->pushButton_48->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_con_pos%100-game_con_pos%10)/10);
strcat(temp,".png");
ui->pushButton_49->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_con_pre%10);
strcat(temp,".png");
ui->pushButton_50->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_con_pre%100-game_con_pre%10)/10);
strcat(temp,".png");
ui->pushButton_51->setIcon(QIcon(temp));

ui->pushButton_52->setIcon(QIcon("../image/dot.png"));
}
else
{

    ui->pushButton_48->setIcon(QIcon("../image/0.png"));
    ui->pushButton_49->setIcon(QIcon("../image/0.png"));
    ui->pushButton_50->setIcon(QIcon("../image/1.png"));

    ui->pushButton_51->hide();
    ui->pushButton_52->hide();
}





}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MainWindow::result_jump()
{
    char temp[100];


if(game_score_temp<game_score)
{
    if(game_score-game_score_temp<3)
    {
        timer18.start(400);
    }
    else if(game_score-game_score_temp<10)
    {
        timer18.start(240);
    }
    else if(game_score_temp*100/game_score<50)
    {
     timer18.start(10);
    }
    else if(game_score_temp*100/game_score<33)
    {
     timer18.start(13);
    }
    else if (game_score_temp*100/game_score<25)
    {
     timer18.start(16);
    }
    else if(game_score_temp*100/game_score<9)
    {
     timer18.start(20);
    }
    else if(game_score_temp*100/game_score<2)
    {
     timer18.start(25);
    }
    else if(game_score_temp*100/game_score<1)
    {
     timer18.start(40);
    }
    else
    {
     timer18.start(70);
    }


game_score_temp=game_score_temp+(game_score-game_score_temp)/30+1;
if(game_score_temp>game_score)
{
    game_score_temp=game_score;
}

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,game_score_temp%10);
strcat(temp,".png");
ui->pushButton_27->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%100-game_score_temp%10)/10);
strcat(temp,".png");
ui->pushButton_28->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%1000-game_score_temp%100)/100);
strcat(temp,".png");
ui->pushButton_29->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%10000-game_score_temp%1000)/1000);
strcat(temp,".png");
ui->pushButton_30->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%100000-game_score_temp%10000)/10000);
strcat(temp,".png");
ui->pushButton_31->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%1000000-game_score_temp%100000)/100000);
strcat(temp,".png");
ui->pushButton_32->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%10000000-game_score_temp%1000000)/1000000);
strcat(temp,".png");
ui->pushButton_33->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%100000000-game_score_temp%10000000)/10000000);
strcat(temp,".png");
ui->pushButton_34->setIcon(QIcon(temp));

strcpy(temp,"../image/");
sprintf(temp,"%s%d",temp,(game_score_temp%1000000000-game_score_temp%100000000)/100000000);
strcat(temp,".png");
ui->pushButton_35->setIcon(QIcon(temp));
    }
else
{
    timer18.stop();

}
}


void MainWindow::on_pushButton_26_clicked()
{
    QSound *sound;
    sound = new QSound("../sound/1.wav");
    sound->play();
    timer17.start(170);
    ui->pushButton_27->hide();
    ui->pushButton_28->hide();
    ui->pushButton_29->hide();
    ui->pushButton_30->hide();
    ui->pushButton_31->hide();
    ui->pushButton_32->hide();
    ui->pushButton_33->hide();
    ui->pushButton_34->hide();
    ui->pushButton_35->hide();
    ui->pushButton_36->hide();
    ui->pushButton_37->hide();
    ui->pushButton_38->hide();
    ui->pushButton_39->hide();
    ui->pushButton_40->hide();
    ui->pushButton_41->hide();
    ui->pushButton_42->hide();
    ui->pushButton_43->hide();
    ui->pushButton_44->hide();
    ui->pushButton_45->hide();
    ui->pushButton_46->hide();
    ui->pushButton_47->hide();
    ui->pushButton_48->hide();
    ui->pushButton_49->hide();
    ui->pushButton_50->hide();
    ui->pushButton_51->hide();
    ui->pushButton_52->hide();
}
void MainWindow::result_fade2()
{
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa7);
    this->ui->pushButton_26->setGraphicsEffect(effect2);

    opa7=opa7-0.03;
    bgm->setVolume(int(opa7*100));
    if(opa7<=0)
    {
        timer17.stop();
        bgm->stop();
        init();

    }

}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void MainWindow::init()
{

    ui->pushButton_20->setFlat(true);
    ui->pushButton_21->setFlat(true);
    ui->pushButton_22->setFlat(true);
    ui->pushButton_24->setFlat(true);
    ui->pushButton_27->setFlat(true);
    ui->pushButton_28->setFlat(true);
    ui->pushButton_29->setFlat(true);
    ui->pushButton_30->setFlat(true);
    ui->pushButton_31->setFlat(true);
    ui->pushButton_32->setFlat(true);
    ui->pushButton_33->setFlat(true);
    ui->pushButton_34->setFlat(true);
    ui->pushButton_35->setFlat(true);
    ui->pushButton_36->setFlat(true);
    ui->pushButton_37->setFlat(true);
    ui->pushButton_38->setFlat(true);
    ui->pushButton_39->setFlat(true);
    ui->pushButton_40->setFlat(true);
    ui->pushButton_41->setFlat(true);
    ui->pushButton_42->setFlat(true);
    ui->pushButton_43->setFlat(true);
    ui->pushButton_44->setFlat(true);
    ui->pushButton_45->setFlat(true);
    ui->pushButton_46->setFlat(true);
    ui->pushButton_47->setFlat(true);
    ui->pushButton_48->setFlat(true);
    ui->pushButton_49->setFlat(true);
    ui->pushButton_50->setFlat(true);
    ui->pushButton_51->setFlat(true);
    ui->pushButton_52->setFlat(true);
    ui->pushButton_53->setFlat(true);
    ui->pushButton_54->setFlat(true);
    ui->pushButton_55->setFlat(true);
    ui->pushButton_56->setFlat(true);
    ui->pushButton_57->setFlat(true);
    ui->pushButton_58->setFlat(true);
    ui->pushButton_59->setFlat(true);
    ui->pushButton_60->setFlat(true);
    ui->pushButton_61->setFlat(true);
    ui->pushButton_62->setFlat(true);
    ui->pushButton_63->setFlat(true);
    ui->pushButton_64->setFlat(true);
    ui->pushButton_65->setFlat(true);
    ui->pushButton_66->setFlat(true);
    ui->pushButton_67->setFlat(true);
    ui->pushButton_68->setFlat(true);
    ui->pushButton_69->setFlat(true);
    ui->pushButton_70->setFlat(true);
    ui->pushButton_71->setFlat(true);
    ui->pushButton_72->setFlat(true);

    ui->pushButton->setGeometry(0,0,screenW,screenH);
    ui->pushButton->setIcon(QIcon("../image/OP.jpg"));
    ui->pushButton->setIconSize(QSize(screenW,screenH));
    ui->pushButton->setText("");




    opa=0.0;
    opa2=0.0;
    opa3=1.0;
    opa4=0.0;
    opa5=1.0;
    opa6=0.0;
    opa7=1.0;




    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_2->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_3->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_4->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_5->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_6->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_8->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_9->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_23->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_25->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_26->setGraphicsEffect(effect2);
    effect2=new QGraphicsOpacityEffect;
    effect2->setOpacity(this->opa2);
    this->ui->pushButton_72->setGraphicsEffect(effect2);


    this->ui->pushButton_2->setEnabled(true);
    this->ui->pushButton_3->setEnabled(true);
    this->ui->pushButton_4->setEnabled(true);
    this->ui->pushButton_5->setEnabled(true);
    this->ui->pushButton_6->setEnabled(true);

    ui->pushButton->show();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->pushButton_6->hide();
    ui->pushButton_7->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();

    ui->pushButton_20->hide();
    ui->pushButton_21->hide();
    ui->pushButton_22->hide();
    ui->pushButton_23->hide();
    ui->pushButton_24->hide();
    ui->pushButton_25->hide();
    ui->pushButton_26->hide();
    ui->pushButton_27->hide();
    ui->pushButton_28->hide();
    ui->pushButton_29->hide();
    ui->pushButton_30->hide();
    ui->pushButton_31->hide();
    ui->pushButton_32->hide();
    ui->pushButton_33->hide();
    ui->pushButton_34->hide();
    ui->pushButton_35->hide();
    ui->pushButton_36->hide();
    ui->pushButton_37->hide();
    ui->pushButton_38->hide();
    ui->pushButton_39->hide();
    ui->pushButton_40->hide();
    ui->pushButton_41->hide();
    ui->pushButton_42->hide();
    ui->pushButton_43->hide();
    ui->pushButton_44->hide();
    ui->pushButton_45->hide();
    ui->pushButton_46->hide();
    ui->pushButton_47->hide();
    ui->pushButton_48->hide();
    ui->pushButton_49->hide();
    ui->pushButton_50->hide();
    ui->pushButton_51->hide();
    ui->pushButton_52->hide();
    ui->pushButton_53->hide();
    ui->pushButton_54->hide();
    ui->pushButton_55->hide();
    ui->pushButton_56->hide();
    ui->pushButton_57->hide();
    ui->pushButton_58->hide();
    ui->pushButton_59->hide();
    ui->pushButton_60->hide();
    ui->pushButton_61->hide();
    ui->pushButton_62->hide();
    ui->pushButton_63->hide();
    ui->pushButton_64->hide();
    ui->pushButton_65->hide();
    ui->pushButton_66->hide();
    ui->pushButton_67->hide();
    ui->pushButton_68->hide();
    ui->pushButton_69->hide();
    ui->pushButton_70->hide();
    ui->pushButton_71->hide();
    ui->pushButton_72->hide();




    game_combo=0;
    game_combo_max=0;
    game_score=0;
    game_score_temp=0;
    game_perfect=0;
    game_cool=0;
    game_miss=0;
    game_red=0;
    game_blue=0;
    game_time=game_time_init;
    game_mode=0;
    this->timer.start(40);

    bgm=new QMediaPlayer;
    bgm->setMedia(QUrl::fromLocalFile("../sound/初恋！水雷戦隊.wav"));
    bgm->play();
    bgm->setVolume(75);

    scene=1;
}

