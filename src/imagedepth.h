#ifndef IMAGEDEPTH_H
#define IMAGEDEPTH_H

#include <QMainWindow>
#include "bmvariables.h"
#include "sgbmvariables.h"
#include "varvariables.h"

namespace Ui {
class ImageDepth;
}

class ImageDepth : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ImageDepth(QWidget *parent = 0);
    BMVariables *bmVariables;
    SGBMVariables *sgbmVariables;
    VarVariables *varVariables;
    ~ImageDepth();

public slots:
    void recalculate();


signals:
    void valuesChanged(const BMVariables&, const SGBMVariables&, const VarVariables&, const int);

private:
    Ui::ImageDepth *ui;
    enum { ALG_BM=0, ALG_SGBM=1, ALG_VAR=2 };
    void mapValues();
};

#endif // IMAGEDEPTH_H
