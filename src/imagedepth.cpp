#include "imagedepth.h"
#include "ui_imagedepth.h"
#include <QDebug>

ImageDepth::ImageDepth(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageDepth)
{
    ui->setupUi(this);

	//setting BM constraints
    ui->BMPreFilterCapSlider->setRange(0, 31);
    ui->BMSADWindowSizeSlider->setRange(9, 200);
    ui->BMMaximumDisparityDifferenceSlider->setRange(0, 320);
    ui->BMSpeckleWindowSizeSlider->setRange(0, 300);
    ui->BMMaximumDisparityDifferenceSlider->setStepSize(16);
    ui->BMNumberOfDisparitiesSlider->setStepSize(16);
    
    //Setting SGBM constraints
    ui->SGBMNumberOfDisparitiesSlider->setStepSize(16);
    ui->SGBMNumberOfDisparitiesSlider->setRange(16,108);
    ui->SGBMSADWindowSizeSlider->setStepSize(2);
    ui->SGBMUniquenessRatioSlider->setRange(1, 200);
    ui->SGBMSADWindowSizeSlider->setRange(3, 15);
    ui->SGBMSpeckleWindowSizeSlider->setRange(0, 400);
    ui->SGBMSpeckleRangeSlider->setStepSize(16);
    
    //Setting Var Constraints
    ui->VarOrderOfPolynomialSlider->setRange(1, 7);


    
    //Setting BM values

    ui->BMPreFilterCapSlider->setPosition(31);
    ui->BMMinimumDisparitySlider->setPosition(0);
    ui->BMSADWindowSizeSlider->setPosition(9);
    ui->BMMaximumDisparityDifferenceSlider->setPosition((640/8 + 15) & -16);
    ui->BMTextureThresholdSlider->setPosition(10);
    ui->BMUniquenessRatioSlider->setPosition(15);
    ui->BMSpeckleWindowSizeSlider->setPosition(100);
    ui->BMSpeckleRangeSlider->setPosition(32);
    ui->BMMaximumDisparityDifferenceSlider->setPosition(1);
    ui->BMNumberOfDisparitiesSlider->setPosition(16);
	
   

    //Setting SGBM values
    ui->SGBMPreFilterCapSlider->setPosition(89);
    ui->SGBMSADWindowSizeSlider->setPosition(6);
    ui->SGBMMinimumDisparitySlider->setPosition(0);
    ui->SGBMNumberOfDisparitiesSlider->setPosition((640/8 + 15) & -16);
    ui->SGBMUniquenessRatioSlider->setPosition(99);
    ui->SGBMSpeckleWindowSizeSlider->setPosition(300);
    ui->SGBMSpeckleRangeSlider->setPosition(80);
    ui->SGBMMaximumDisparityDifferenceSlider->setPosition(51);


    //Setting Var values
    ui->VarIterationsSlider->setPosition(25);
    ui->VarMinimumDisparitySlider->setPosition(0);
    ui->VarMaximumDisparitySlider->setPosition((640/8 + 15) & -16);
    ui->VarOrderOfPolynomialSlider->setPosition(3);
    ui->VarSmoothnessSlider->setPosition(15);

    //connect all input signals to recalculate function
    QList<MyQSlider *> allSliders = findChildren<MyQSlider *>();

    for(int i=0; i<allSliders.count(); i++)
    {
        connect(allSliders[i], SIGNAL(valueChanged(int)), this, SLOT(recalculate()) );
    }

    connect(ui->VarThresholdLineEdit, SIGNAL(editingFinished()), this, SLOT(recalculate()));
    connect(ui->SGBMFullScale2xPassComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(recalculate()));
	connect(ui->algorithmComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(recalculate()));
	
    bmVariables = new BMVariables();
    sgbmVariables = new SGBMVariables();
    varVariables = new VarVariables();

    mapValues();

    emit(valuesChanged(*this->bmVariables, *this->sgbmVariables, *this->varVariables, 1));
}


ImageDepth::~ImageDepth()
{
    delete ui;
}

void ImageDepth::recalculate()
{
    mapValues();

    int algorithm;

    if( ui->algorithmComboBox->currentIndex() == 0 )
        algorithm = ALG_BM;
    else if( ui->algorithmComboBox->currentIndex() == 1)
        algorithm = ALG_SGBM;
    else
        algorithm = ALG_VAR;

    qDebug() << "Algorithm:=" << algorithm;

    emit(valuesChanged(*this->bmVariables, *this->sgbmVariables, *this->varVariables, algorithm));
}

void ImageDepth::mapValues()
{
    bmVariables->preFilterCap = ui->BMPreFilterCapSlider->value();
    bmVariables->SADWindowSize = ui->BMSADWindowSizeSlider->value();
    bmVariables->minimumDisparity = ui->BMMinimumDisparitySlider->value();
    bmVariables->numberofDisparities = ui->BMNumberOfDisparitiesSlider->value();
    bmVariables->textureThreshold = ui->BMTextureThresholdSlider->value();
    bmVariables->uniquenessRatio = ui->BMUniquenessRatioSlider->value();
    bmVariables->speckleWindowSize = ui->BMSpeckleWindowSizeSlider->value();
    bmVariables->speckleRange = ui->BMSpeckleWindowSizeSlider->value();
    bmVariables->maximumDisparityDifference = ui->BMMaximumDisparityDifferenceSlider->value();

    sgbmVariables->preFilterCap = ui->SGBMPreFilterCapSlider->value();
    sgbmVariables->SADWindowSize = ui->SGBMSADWindowSizeSlider->value();
    sgbmVariables->minimumDisparity = ui->SGBMMinimumDisparitySlider->value();
    sgbmVariables->numberOfDisparities = ui->SGBMNumberOfDisparitiesSlider->value();
    sgbmVariables->uniquenessRatio = ui->SGBMUniquenessRatioSlider->value();
    sgbmVariables->speckleWindowSize = ui->SGBMSpeckleWindowSizeSlider->value();
    sgbmVariables->speckleRange = ui->SGBMSpeckleRangeSlider->value();
    sgbmVariables->maximumDisparityDifference = ui->SGBMMaximumDisparityDifferenceSlider->value();
    sgbmVariables->setFullScale2xPass(ui->SGBMFullScale2xPassComboBox->currentText());

    varVariables->iterations = ui->VarIterationsSlider->value();
    varVariables->minimumDisparity = ui->VarMinimumDisparitySlider->value();
    varVariables->maximumDisparity = ui->VarMaximumDisparitySlider->value();
    varVariables->orderOfPolynomial = ui->VarOrderOfPolynomialSlider->value();
    varVariables->standardDeviation = ui->VarStandardDeviationSlider->value();
    varVariables->smoothness = ui->VarSmoothnessSlider->value();
    varVariables->setThreshold(ui->VarThresholdLineEdit->text());
}
