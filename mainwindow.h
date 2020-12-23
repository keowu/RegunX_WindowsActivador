/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣                © João Ferreira                                                     				｣
*｣ Year: 2020                                                                         				｣
*｣ ISO: Google C++ Style | https://google.github.io/styleguide/cppguide.html          				｣
*｣ Copyright:                                                                         				｣
*｣       Under Section 107 of the 1976 Copyright Act, "fair use".                     				｣
*｣  No DMCA requests will be granted due to the student "fair use".                   				｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_chk_customkey_clicked();

    void on_chk_usekeyfromdb_clicked();

    void on_chk_customkms_clicked();

    void on_chk_usestandardkms_clicked();

    void on_btnactivate_clicked();

private:
    Ui::MainWindow *ui;

    typedef struct ACTUAL_OS{
        QString winv;
        bool isadm;
    }ACTUAL_OS;

    typedef struct CMD_TO_ACTIVATE_WIN{
        QString serial_add = "slmgr.vbs /ipk + ";
        QString setkms = "slmgr.vbs /skms ";
        const char* autoactive = "slmgr.vbs /ato";
        QString prompt_path = "C:/Windows/system32/cmd.exe";
        QString winversion = "";
        QByteArray choisedserial = "";
        QByteArray HomeSingleLang[3] = {"ntrht\rxthtg\rgbwcg\r\u0014mtmp\rhh\u0016\u0014c",
                                      "\u0017hnrx\rd\u0017kgg\r\u0013k\u0014rq\r\u0014wpj\u0014\rytdfh",
                                      "bt\u0017\u0019q\rg\u0017n\u0016g\rpgbyw\r\u0014ywx\u0016\r\u0016f\u0014bt"};
        QByteArray HomeEDT[2] = {"tx\u0019xd\r\u0019\u0018n\u0017v\r\u0016wmq\u0016\rbx\u0017fg\rh\u0018q\u0019\u0019",
                                 "ytmg\u0013\rn\u0016dkc\rdkb\u0017\u0017\r\u0017m\u0019gh\r\u0018hvx\u0017"};
        QByteArray PRO[3] = {"vk\u0017jg\rnphtm\rc\u0019\u0017jm\r\u0019mpgt\r\u0013v\u0016\u0016t",
                             "w\u0012\u0016\u0019n\rwfgwx\ryvc\u0019b\r\u0014j\u0016c\u0019\rt\u0018\u0013gx",
                             "nrg\u0018b\rvkk\u0013q\rcxvcj\r\u0019g\u0012xf\r\u0016q\u0018\u0014j"};
        QByteArray Work = "nrg\u0018b\rvkk\u0013q\rcxvcj\r\u0019g\u0012xf\r\u0016q\u0018\u0014j";
        QByteArray ProWork = "nrg\u0018b\rvkk\u0013q\rcxvcj\r\u0019g\u0012xf\r\u0016q\u0018\u0014j";
        QByteArray ProWorkN = "\u0019fnhh\rk\u0013hbt\r\u0013w\u0014td\r\u0016\u0013\u0018\u0013h\r\u0016xywf";
        QByteArray EDU = "nw\u0016c\u0012\rqmpvw\rd\u0017kkk\r\u0013gkt\u0016\rvcfb\u0012";
        QByteArray EDUN = "\u0012wh\u0014n\r\u0018qgbv\rh\u0012\u0012jp\rct\u0014\u0013q\rmdwwj";
        QByteArray ENTERPRISE = "nppr\u0019\rfwdcx\rd\u0012c\u0018j\rh\u0018\u0017\u0012k\r\u0012yt\u0014\u0013";
        QByteArray ENTERPRISEG = "yyvx\u0019\rntfwv\r\u0016mdm\u0013\r\u0019pt\u0014t\r\u0014m\u0016\u0018b";
        QByteArray ENTERPRISEGN = "\u0014\u0014rpn\rfty\u0012\u0013\r\u0019vttb\rmp\u0019bx\rt\u0018\u0014fv";
        QByteArray ENTERPRISEN = "dph\u0012v\rttnvb\r\u0014x\u0019q\u0013\rtjr\u0014h\rkhjw\u0014";
        QByteArray ENTERPRISES = "fwn\u0017h\rpf\u0019\u0013q\r\u0014ggp\u0018\rm\u0018rf\u0013\rmdwww";
        QByteArray ENTERPRISELTSC2019 = "m\u0017xtq\rfn\u0018p\u0016\rttkyv\r\u0019d\u0014cc\rj\u0014\u0016\u0012d";
        QByteArray ENTERPRISENLTSC2019 = "\u0019\u0012nfx\r\u0018djqp\rp\u0016bbq\rthf\u0019c\r\u0017cg\u0012h";
        QByteArray SERVER2019DATACENTER = "wmdgn\rg\u0019pqg\rxvvxx\rr\u0013x\u0014\u0013\r\u0016\u0013dfg";
        QByteArray SERVERSTANDARD = "n\u0016\u0019g\u0014\rb\u0018\u0019j\u0012\r\u0014g\u0018f\u0014\rwwycc\rj\u0014\u0016\u0014c";
        QByteArray SERVERESSENTIALS = "wvdhn\r\u0018\u0016m\u0017x\r\u0014\u0016\u0016p\u0016\rvhxv\u0017\ryy\u0017\u0012\u0016";
        QByteArray SERVERENTERPRISELTSB2016 = "dcphk\rnfmtc\rh\u0018\u0018mj\rpfhpy\rqj\u0014bj";
     }CMD_TO_ACTIVATE_WIN;

     QString anti_bot_detect(CMD_TO_ACTIVATE_WIN *instance);
     QString decryptKEY(QByteArray KEY, uint XOR);
};
#endif // MAINWINDOW_H
