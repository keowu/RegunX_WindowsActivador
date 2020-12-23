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
#include "mainwindow.h"

#include <QApplication>

/*
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*｣ Method: main                                                                                     			            ｣
*｣ Function:                                                                                               					｣
*｣ THE MAIN                                                                                                					｣
*｣ Internal Rev: 1.0                                                                                       					｣
*｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣｣
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
