#ifndef IMAGEDEPTHPROCESSOR_H
#define IMAGEDEPTHPROCESSOR_H

#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/contrib/contrib.hpp>
#include <opencv2/calib3d/calib3d.hpp>
#include <QObject>

#include "bmvariables.h"
#include "sgbmvariables.h"
#include "varvariables.h"

namespace enc = sensor_msgs::image_encodings;
using namespace cv;

static const char WINDOW[] = "Stereo vision";

class ImageDepthProcessor : public QObject
{
    Q_OBJECT

public:
    explicit ImageDepthProcessor(QObject *parent = 0);
    void imageLeftGetData(const sensor_msgs::ImageConstPtr& msg);
    void imageRightGetDataAndProcess(const sensor_msgs::ImageConstPtr& msg);
    void killProcess();
    ~ImageDepthProcessor();

signals:
    void finished();
    void error(QString err);

public slots:
    void process();
    void deleteLater();
    void updateValues(const BMVariables &bm, const SGBMVariables &sgbm, const VarVariables &var, const int algorithm);

private:
    int algorithm;
    BMVariables bmVariables;
    SGBMVariables sgbmVariables;
    VarVariables varVariables;
	ros::NodeHandle nh_;
	image_transport::ImageTransport it_;
	image_transport::Subscriber imageLeftSubscribe;
	image_transport::Subscriber imageRightSubscribe;
	image_transport::Publisher imageStereoPublish;
	Mat imageLeft;
	Mat imageRight;
	bool imageLeftUpdated;
        bool valuesInitialized;

};

#endif // IMAGEDEPTHPROCESSOR_H
