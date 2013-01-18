#include <QString>

#ifndef SGBMVARIABLES_H
#define SGBMVARIABLES_H

class SGBMVariables
{
public:
    SGBMVariables();

    int preFilterCap;
    int SADWindowSize;
    int minimumDisparity;
    int numberOfDisparities;
    int uniquenessRatio;
    int speckleWindowSize;
    int speckleRange;
    int maximumDisparityDifference;
    bool fullScale2xPass;

    void setFullScale2xPass(const QString value);
};

#endif // SGBMVARIABLES_H
