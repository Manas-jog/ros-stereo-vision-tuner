#include <QtGui/QApplication>
#include <QThread>
#include <QObject>
#include <QMetaType>
#include <QDebug>

#include <ros/ros.h>

#include "imagedepth.h"
#include "imagedepthprocessor.h"
#include "bmvariables.h"
#include "sgbmvariables.h"
#include "varvariables.h"


int main(int argc, char *argv[])
{  
    QApplication a(argc, argv);
    ImageDepth *w = new ImageDepth();
    w->show();

    ros::init(argc, argv, "image_3D_stereo");

    QThread *thread = new QThread;
    ImageDepthProcessor *imgDepth = new ImageDepthProcessor();
    imgDepth->moveToThread(thread);

    QObject::connect(thread, SIGNAL(started()), imgDepth, SLOT(process()));
    QObject::connect(imgDepth, SIGNAL(finished()), thread, SLOT(quit()));
    QObject::connect(imgDepth, SIGNAL(finished()), imgDepth, SLOT(deleteLater()));
    QObject::connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));

    qRegisterMetaType<BMVariables>("BMVariables");
    qRegisterMetaType<SGBMVariables>("SGBMVariables");
    qRegisterMetaType<VarVariables>("VarVariables");

    QObject::connect(w, SIGNAL(valuesChanged(BMVariables,SGBMVariables,VarVariables, int)), imgDepth, SLOT(updateValues(BMVariables,SGBMVariables,VarVariables, int)));

    thread->start();

    a.exec();

    imgDepth->killProcess();
}


