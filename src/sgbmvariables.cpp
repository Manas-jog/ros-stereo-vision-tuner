#include "sgbmvariables.h"
#include <QString>

SGBMVariables::SGBMVariables()
{
}

void SGBMVariables::setFullScale2xPass(const QString value)
{
    QString trueValue("true");

    if( trueValue == value )
        fullScale2xPass = true;
    else
        fullScale2xPass = false;
}
