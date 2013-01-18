#include "varvariables.h"
#include <QString>

VarVariables::VarVariables()
{
}

void VarVariables::setThreshold(const QString value)
{
    threshold = value.toFloat();
}
