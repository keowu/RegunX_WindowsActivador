/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣                © João Ferreira                                                    				｣
*｣ Year: 2020                                                                         				｣
*｣ ISO: Google C++ Style | https://google.github.io/styleguide/cppguide.html          				｣
*｣ Copyright:                                                                         				｣
*｣       Under Section 107 of the 1976 Copyright Act, "fair use".                     				｣
*｣  No DMCA requests will be granted due to the student "fair use".                   				｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ShlObj_core.h"
#include "qdebug.h"
#include "qmessagebox.h"
#include <Windows.h>
#include "QProcess"
#include <QMediaPlaylist>
#include <QMediaPlayer>


/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: MainWindow                                                                                      					｣
*｣ Function:                                                                                               					｣
*｣ This method is the window constructor and will prepare the basic elements, loading the ui and sounds    					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setFixedSize(this->width(), this->height());
    ui->setupUi(this);
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/musicas/keygen.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: ~MainWindow                                                                                     					｣
*｣ Function:                                                                                              				    ｣
*｣ This method is the window destructor                                                                    					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
MainWindow::~MainWindow()
{
    delete ui;
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: decryptKEY PRIVATE                                                                              				 	｣
*｣ Function:                                                                                               					｣
*｣ This method performs an operation to decrypt a string using a hex key.                                  					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
QString MainWindow::decryptKEY(QByteArray KEY, uint XOR){
    QString z = "";
    for(char a: KEY){
        a ^= XOR;
        z.append(a&0xff);
    }
    return z;
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: anti_bot_detect PRIVATE                                                                                      				   ｣
*｣ Function:                                                                                                            				   ｣
*｣ This method will prepare the instance calling Struct and call the private class with the appropriate key and string. 				   ｣
*｣ Internal Rev: 1.0                                                                                                    				   ｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
QString MainWindow::anti_bot_detect(CMD_TO_ACTIVATE_WIN *instance){
    return this->decryptKEY(instance->choisedserial, 0x20);
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: on_chk_customkey_clicked slot private                                                           					｣
*｣ Function:                                                                                               					｣
*｣ This method will check a CHK.                                                                           					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
void MainWindow::on_chk_customkey_clicked()
{
    if(ui->chk_customkey->isChecked()){
        ui->chk_usekeyfromdb->setEnabled(false);
        ui->edt_key->setEnabled(true);
    }else{
        ui->chk_usekeyfromdb->setEnabled(true);
        ui->edt_key->setEnabled(false);
    }
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: on_chk_usekeyfromdb_clicked slot private                                                        					｣
*｣ Function:                                                                                               					｣
*｣ This method will check a CHK.                                                                           					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
void MainWindow::on_chk_usekeyfromdb_clicked()
{
    if(ui->chk_usekeyfromdb->isChecked())
        ui->chk_customkey->setEnabled(false);
    else
        ui->chk_customkey->setEnabled(true);
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: on_chk_customkms_clicked slot private                                                           					｣
*｣ Function:                                                                                               					｣
*｣ This method will check a CHK.                                                                           					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
void MainWindow::on_chk_customkms_clicked()
{
    if(ui->chk_customkms->isChecked()){
        ui->chk_usestandardkms->setEnabled(false);
        ui->edt_kms->setEnabled(true);
    }else{
        ui->chk_usestandardkms->setEnabled(true);
        ui->edt_kms->setEnabled(false);
    }
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: on_chk_usestandardkms_clicked slot private                                                     				  	｣
*｣ Function:                                                                                               					｣
*｣ This method will check a CHK.                                                                           					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
void MainWindow::on_chk_usestandardkms_clicked()
{
    if(ui->chk_usestandardkms->isChecked())
        ui->chk_customkms->setEnabled(false);
    else
        ui->chk_customkms->setEnabled(true);
}

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: on_btnactivate_clicked slot private                                                                             					   ｣
*｣ Function:                                                                                                               					   ｣
*｣ This method checks the data entered by the user prepares a hidden process with level 2 permissions                      					   ｣
*  after 3 hidden processes are created to modify the KMS state of the operating system based on the selected version      					   ｣
*  communication takes place through winapi and a standard or custom KMS server together with a key of the same validity.  					   ｣
*｣ Internal Rev: 1.0                                                                                                       					   ｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
void MainWindow::on_btnactivate_clicked()
{
    if(!ui->chk_accept->isChecked()){
        QMessageBox::warning(this, "Accept the use !", "Accept the use !");
        return;
    }else if(!IsUserAnAdmin()){
        QMessageBox::critical(this, "NOT ADMIN RIGHTS !", "NOT ADMIN RIGHTS !");
        return;
    }

    CMD_TO_ACTIVATE_WIN win;
    win.winversion = ui->cbo_winversion->currentText();

    if(win.winversion == ui->cbo_winversion->itemText(0)){
        QMessageBox::critical(this, "Select a version !", "Select a version !");
        return;
    }

    ui->btnactivate->setEnabled(false);

    switch (ui->cbo_winversion->currentIndex()){

        case 0:
            QMessageBox::critical(this, "why are you trying to reverse this? he is open his animal.",
                                  "why are you trying to reverse this? he is open his animal.");
        break;

        case 1:
            win.choisedserial = *win.HomeSingleLang;
        break;

        case 2:
            win.choisedserial = *win.HomeEDT;
        break;

        case 3:
            win.choisedserial = *win.PRO;
        break;

        case 4:
            win.choisedserial = win.Work;
        break;

        case 5:
            win.choisedserial = win.ProWorkN;
        break;

        case 6:
            win.choisedserial = win.EDU;
        break;

        case 7:
            win.choisedserial = win.EDUN;
        break;

        case 8:
            win.choisedserial = win.ENTERPRISE;
        break;

        case 9:
            win.choisedserial = win.ENTERPRISEG;
        break;

        case 10:
            win.choisedserial = win.ENTERPRISEGN;
        break;

        case 11:
            win.choisedserial = win.ENTERPRISEN;
        break;

        case 12:
            win.choisedserial = win.ENTERPRISES;
        break;

        case 13:
            win.choisedserial = win.ENTERPRISELTSC2019;
        break;

        case 14:
            win.choisedserial = win.ENTERPRISENLTSC2019;
        break;

        case 15:
            win.choisedserial = win.SERVER2019DATACENTER;
        break;

        case 16:
            win.choisedserial = win.SERVERSTANDARD;
        break;

        case 17:
            win.choisedserial = win.SERVERESSENTIALS;
        break;

        case 18:
            win.choisedserial = win.SERVERENTERPRISELTSB2016;
        break;

        default:
        break;
    }

    try {
        QStringList Key;
        Key << win.serial_add + (ui->chk_customkey->isChecked() ? ui->edt_key->text() : this->anti_bot_detect(&win));
        QProcess *processoHiddenSetKey = new QProcess();
        processoHiddenSetKey->start(win.prompt_path, Key);
    }  catch (...) {
        QMessageBox::critical(this, "Process inject error !", "Process inject error !");
        return;
    }

    try {
        QStringList SetKMS;
        SetKMS << win.setkms + (ui->chk_customkms->isChecked() ? ui->edt_kms->text() : "kms.lotro.cc");
        QProcess *processoHiddenChangeKMS = new QProcess();
        processoHiddenChangeKMS->start(win.prompt_path, SetKMS);
    }  catch (...) {
        QMessageBox::critical(this, "KMS CRACKING ERROR !", "KMS CRACKING ERROR !");
        return;
    }

    try{
        system(win.autoactive);
    } catch(...){
        QMessageBox::critical(this, "CALL /ATO ERROR", "CALL /ATO ERROR");
        return;
    }

}
