#ifndef BMVARIABLES_H
#define BMVARIABLES_H

class BMVariables
{
public:
    BMVariables();

    int preFilterCap;
    int SADWindowSize;
    int minimumDisparity;
    int numberofDisparities;
    int textureThreshold;
    int uniquenessRatio;
    int speckleWindowSize;
    int speckleRange;
    int maximumDisparityDifference;

};

#endif // BMVARIABLES_H
