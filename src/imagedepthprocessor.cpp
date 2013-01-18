#include "imagedepthprocessor.h"
#include <image_transport/image_transport.h>
#include <QThread>
#include <QString>
#include <QDebug>

using namespace cv;

ImageDepthProcessor::ImageDepthProcessor(QObject *parent) :
    QObject(parent), it_(nh_)
{
    valuesInitialized = false;
    imageLeftUpdated = false;
    imageStereoPublish = it_.advertise("disparity_output", 1);
    imageLeftSubscribe = it_.subscribe("left", 1, &ImageDepthProcessor::imageLeftGetData, this);
    imageRightSubscribe = it_.subscribe("right", 1, &ImageDepthProcessor::imageRightGetDataAndProcess, this);
    cv::namedWindow(WINDOW);
}

ImageDepthProcessor::~ImageDepthProcessor()
{
	cv::destroyWindow(WINDOW);
}

void ImageDepthProcessor::process()
{
    
}

void ImageDepthProcessor::updateValues(const BMVariables &bm, const SGBMVariables &sgbm, const VarVariables &var, const int algo)
{
    bmVariables = bm;
    sgbmVariables = sgbm;
    varVariables = var;
    algorithm = algo;
    valuesInitialized = true;
    ros::spinOnce();
}

void ImageDepthProcessor::deleteLater()
{
}

void ImageDepthProcessor::killProcess()
{
    emit finished();
}


void ImageDepthProcessor::imageLeftGetData(const sensor_msgs::ImageConstPtr& msg)
  {
      imageLeftUpdated = false;
      cv_bridge::CvImagePtr cv_ptr;
      try
      {
        cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
      }
      catch (cv_bridge::Exception& e)
      {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
      }
      imageLeft = cv_ptr->image;
      imageLeftUpdated = true;
  }

void ImageDepthProcessor::imageRightGetDataAndProcess(const sensor_msgs::ImageConstPtr& msg)
  {
      cv_bridge::CvImagePtr cv_ptr;
      try
      {
        cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
      }
      catch (cv_bridge::Exception& e)
      {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
      }
      imageRight = cv_ptr->image;

      if(imageLeft.data && imageLeftUpdated && valuesInitialized)       //now to verify if the left image has been successfully extracted and parameters are ready
      {
          enum { STEREO_BM=0, STEREO_SGBM=1, STEREO_VAR=2 };
          int alg = algorithm;
          int SADWindowSize = 0, numberOfDisparities = 0;

          StereoBM bm;
          StereoSGBM sgbm;
          StereoVar var;

          Size img_size = imageLeft.size();
          Rect roi1, roi2;
          numberOfDisparities = numberOfDisparities > 0 ? numberOfDisparities : ((img_size.width/8) + 15) & -16;

          bm.state->roi1 = roi1;
          bm.state->roi2 = roi2;
          bm.state->preFilterCap = bmVariables.preFilterCap;
          bm.state->SADWindowSize = bmVariables.SADWindowSize;
          bm.state->minDisparity = bmVariables.minimumDisparity;
          bm.state->numberOfDisparities = bmVariables.numberofDisparities;
          bm.state->textureThreshold = bmVariables.textureThreshold;
          bm.state->uniquenessRatio = bmVariables.uniquenessRatio;
          bm.state->speckleWindowSize = bmVariables.speckleWindowSize;
          bm.state->speckleRange = bmVariables.speckleRange;
          bm.state->disp12MaxDiff = bmVariables.maximumDisparityDifference;

          sgbm.preFilterCap = sgbmVariables.preFilterCap;
          sgbm.SADWindowSize = sgbmVariables.SADWindowSize;

          int cn = imageLeft.channels();

          sgbm.P1 = 8*cn*sgbm.SADWindowSize*sgbm.SADWindowSize;
          sgbm.P2 = 32*cn*sgbm.SADWindowSize*sgbm.SADWindowSize;
          sgbm.minDisparity = sgbmVariables.minimumDisparity;
          sgbm.numberOfDisparities = sgbmVariables.numberOfDisparities;
          sgbm.uniquenessRatio = sgbmVariables.uniquenessRatio;
          sgbm.speckleWindowSize = sgbmVariables.speckleWindowSize;
          sgbm.speckleRange = sgbmVariables.speckleRange;
          sgbm.disp12MaxDiff = sgbmVariables.maximumDisparityDifference;
          sgbm.fullDP = sgbmVariables.fullScale2xPass;

          var.levels = 3;                                 // ignored with USE_AUTO_PARAMS
          var.pyrScale = 0.5;                             // ignored with USE_AUTO_PARAMS
          var.nIt = varVariables.iterations;
          var.minDisp = -varVariables.maximumDisparity;
          var.maxDisp = varVariables.minimumDisparity;
          var.poly_n = varVariables.orderOfPolynomial;
          var.poly_sigma = varVariables.standardDeviation;
          var.fi = (float)varVariables.smoothness;
          var.lambda = (float)varVariables.threshold;
          var.penalization = var.PENALIZATION_TICHONOV;   // ignored with USE_AUTO_PARAMS
          var.cycle = var.CYCLE_V;                        // ignored with USE_AUTO_PARAMS
          var.flags = var.USE_SMART_ID | var.USE_AUTO_PARAMS | var.USE_INITIAL_DISPARITY | var.USE_MEDIAN_FILTERING ;

          Mat disp, disp8;

		  
          if( alg == STEREO_BM )
          {
			  Mat imgLeft, imgRight;
			  cvtColor(imageLeft, imgLeft, CV_BGR2GRAY);
			  cvtColor(imageRight, imgRight, CV_BGR2GRAY);
              bm(imgLeft, imgRight, disp);
              imgLeft.release();
              imgRight.release();
          }
          
          else if( alg == STEREO_VAR )
              var(imageLeft, imageRight, disp);
          else
              sgbm(imageLeft, imageRight, disp);
          
          if( alg != STEREO_VAR )
              disp.convertTo(disp8, CV_8U, 255/(numberOfDisparities*16.));
          else
              disp.convertTo(disp8, CV_8U);

		  imshow(WINDOW, disp8);
		  
          cv_ptr->image = disp;

          imageStereoPublish.publish(cv_ptr->toImageMsg());
      }
  }
