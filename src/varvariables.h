#ifndef VARVARIABLES_H
#define VARVARIABLES_H

#include <QString>

class VarVariables
{
public:
    VarVariables();

    int iterations;
    int minimumDisparity;
    int maximumDisparity;
    int orderOfPolynomial;
    int standardDeviation;
    int smoothness;
    float threshold;

    void setThreshold(QString value);
};

#endif // VARVARIABLES_H
