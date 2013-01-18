/********************************************************************************
** Form generated from reading UI file 'imagedepth.ui'
**
** Created: Tue Dec 25 23:10:05 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDEPTH_H
#define UI_IMAGEDEPTH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include "myqslider.h"

QT_BEGIN_NAMESPACE

class Ui_ImageDepth
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *algorithmLabel;
    QComboBox *algorithmComboBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_6;
    QLabel *BMPreFilterCapLabel;
    MyQSlider *BMPreFilterCapSlider;
    QLabel *BMSADWindowSizeLabel;
    MyQSlider *BMSADWindowSizeSlider;
    QLabel *BMMinimumDisparityLabel;
    MyQSlider *BMMinimumDisparitySlider;
    QLabel *BMNumberOfDisparitiesLabel;
    MyQSlider *BMNumberOfDisparitiesSlider;
    QLabel *BMTextureThresholdLabel;
    MyQSlider *BMTextureThresholdSlider;
    QLabel *BMUniquenessRatioLabel;
    MyQSlider *BMUniquenessRatioSlider;
    QLabel *BMSpeckleWindowSizeLabel;
    MyQSlider *BMSpeckleWindowSizeSlider;
    QLabel *BMSpeckleRangeLabel;
    MyQSlider *BMSpeckleRangeSlider;
    QLabel *BMMaximumDisparityDifferenceLabel;
    MyQSlider *BMMaximumDisparityDifferenceSlider;
    QWidget *tab_3;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_7;
    QLabel *SGBMPreFilterCapLabel;
    MyQSlider *SGBMPreFilterCapSlider;
    QLabel *SGBMSADWindowSizeLabel;
    MyQSlider *SGBMSADWindowSizeSlider;
    QLabel *SGBMMinimumDisparityLabel;
    MyQSlider *SGBMMinimumDisparitySlider;
    QLabel *SGBMNumberOfDisparitiesLabel;
    MyQSlider *SGBMNumberOfDisparitiesSlider;
    QLabel *SGBMUniquenessRatioLabel;
    MyQSlider *SGBMUniquenessRatioSlider;
    QLabel *SGBMSpeckleWindowSizeLabel;
    MyQSlider *SGBMSpeckleWindowSizeSlider;
    QLabel *SGBMSpeckleRangeLabel;
    MyQSlider *SGBMSpeckleRangeSlider;
    QLabel *SGBMMaximumDisparityDifferenceLabel;
    MyQSlider *SGBMMaximumDisparityDifferenceSlider;
    QLabel *SGBMFullScale2xPassLabel;
    QComboBox *SGBMFullScale2xPassComboBox;
    QWidget *tab_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *VarIterationsLabel;
    MyQSlider *VarIterationsSlider;
    QLabel *VarMinimumDisparityLabel;
    MyQSlider *VarMinimumDisparitySlider;
    QLabel *VarMaximumDisparityLabel;
    MyQSlider *VarMaximumDisparitySlider;
    QLabel *VarOrderOfPolynomialLabel;
    MyQSlider *VarOrderOfPolynomialSlider;
    QLabel *VarStandardDeviationLabel;
    MyQSlider *VarStandardDeviationSlider;
    QLabel *VarSmoothnessLabel;
    MyQSlider *VarSmoothnessSlider;
    QLabel *VarThresholdLabel;
    QLineEdit *VarThresholdLineEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageDepth)
    {
        if (ImageDepth->objectName().isEmpty())
            ImageDepth->setObjectName(QString::fromUtf8("ImageDepth"));
        ImageDepth->resize(702, 452);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageDepth->sizePolicy().hasHeightForWidth());
        ImageDepth->setSizePolicy(sizePolicy);
        ImageDepth->setMinimumSize(QSize(702, 452));
        ImageDepth->setMaximumSize(QSize(702, 452));
        centralWidget = new QWidget(ImageDepth);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 10, 661, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        algorithmLabel = new QLabel(formLayoutWidget);
        algorithmLabel->setObjectName(QString::fromUtf8("algorithmLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, algorithmLabel);

        algorithmComboBox = new QComboBox(formLayoutWidget);
        algorithmComboBox->setObjectName(QString::fromUtf8("algorithmComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, algorithmComboBox);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 50, 661, 370));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayoutWidget_5 = new QWidget(tab);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(21, 20, 632, 284));
        formLayout_6 = new QFormLayout(formLayoutWidget_5);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        BMPreFilterCapLabel = new QLabel(formLayoutWidget_5);
        BMPreFilterCapLabel->setObjectName(QString::fromUtf8("BMPreFilterCapLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, BMPreFilterCapLabel);

        BMPreFilterCapSlider = new MyQSlider(formLayoutWidget_5);
        BMPreFilterCapSlider->setObjectName(QString::fromUtf8("BMPreFilterCapSlider"));
        BMPreFilterCapSlider->setMinimumSize(QSize(420, 26));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, BMPreFilterCapSlider);

        BMSADWindowSizeLabel = new QLabel(formLayoutWidget_5);
        BMSADWindowSizeLabel->setObjectName(QString::fromUtf8("BMSADWindowSizeLabel"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, BMSADWindowSizeLabel);

        BMSADWindowSizeSlider = new MyQSlider(formLayoutWidget_5);
        BMSADWindowSizeSlider->setObjectName(QString::fromUtf8("BMSADWindowSizeSlider"));
        BMSADWindowSizeSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, BMSADWindowSizeSlider);

        BMMinimumDisparityLabel = new QLabel(formLayoutWidget_5);
        BMMinimumDisparityLabel->setObjectName(QString::fromUtf8("BMMinimumDisparityLabel"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, BMMinimumDisparityLabel);

        BMMinimumDisparitySlider = new MyQSlider(formLayoutWidget_5);
        BMMinimumDisparitySlider->setObjectName(QString::fromUtf8("BMMinimumDisparitySlider"));
        BMMinimumDisparitySlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, BMMinimumDisparitySlider);

        BMNumberOfDisparitiesLabel = new QLabel(formLayoutWidget_5);
        BMNumberOfDisparitiesLabel->setObjectName(QString::fromUtf8("BMNumberOfDisparitiesLabel"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, BMNumberOfDisparitiesLabel);

        BMNumberOfDisparitiesSlider = new MyQSlider(formLayoutWidget_5);
        BMNumberOfDisparitiesSlider->setObjectName(QString::fromUtf8("BMNumberOfDisparitiesSlider"));
        BMNumberOfDisparitiesSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, BMNumberOfDisparitiesSlider);

        BMTextureThresholdLabel = new QLabel(formLayoutWidget_5);
        BMTextureThresholdLabel->setObjectName(QString::fromUtf8("BMTextureThresholdLabel"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, BMTextureThresholdLabel);

        BMTextureThresholdSlider = new MyQSlider(formLayoutWidget_5);
        BMTextureThresholdSlider->setObjectName(QString::fromUtf8("BMTextureThresholdSlider"));
        BMTextureThresholdSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, BMTextureThresholdSlider);

        BMUniquenessRatioLabel = new QLabel(formLayoutWidget_5);
        BMUniquenessRatioLabel->setObjectName(QString::fromUtf8("BMUniquenessRatioLabel"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, BMUniquenessRatioLabel);

        BMUniquenessRatioSlider = new MyQSlider(formLayoutWidget_5);
        BMUniquenessRatioSlider->setObjectName(QString::fromUtf8("BMUniquenessRatioSlider"));
        BMUniquenessRatioSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(5, QFormLayout::FieldRole, BMUniquenessRatioSlider);

        BMSpeckleWindowSizeLabel = new QLabel(formLayoutWidget_5);
        BMSpeckleWindowSizeLabel->setObjectName(QString::fromUtf8("BMSpeckleWindowSizeLabel"));

        formLayout_6->setWidget(6, QFormLayout::LabelRole, BMSpeckleWindowSizeLabel);

        BMSpeckleWindowSizeSlider = new MyQSlider(formLayoutWidget_5);
        BMSpeckleWindowSizeSlider->setObjectName(QString::fromUtf8("BMSpeckleWindowSizeSlider"));
        BMSpeckleWindowSizeSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(6, QFormLayout::FieldRole, BMSpeckleWindowSizeSlider);

        BMSpeckleRangeLabel = new QLabel(formLayoutWidget_5);
        BMSpeckleRangeLabel->setObjectName(QString::fromUtf8("BMSpeckleRangeLabel"));

        formLayout_6->setWidget(7, QFormLayout::LabelRole, BMSpeckleRangeLabel);

        BMSpeckleRangeSlider = new MyQSlider(formLayoutWidget_5);
        BMSpeckleRangeSlider->setObjectName(QString::fromUtf8("BMSpeckleRangeSlider"));
        BMSpeckleRangeSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(7, QFormLayout::FieldRole, BMSpeckleRangeSlider);

        BMMaximumDisparityDifferenceLabel = new QLabel(formLayoutWidget_5);
        BMMaximumDisparityDifferenceLabel->setObjectName(QString::fromUtf8("BMMaximumDisparityDifferenceLabel"));

        formLayout_6->setWidget(8, QFormLayout::LabelRole, BMMaximumDisparityDifferenceLabel);

        BMMaximumDisparityDifferenceSlider = new MyQSlider(formLayoutWidget_5);
        BMMaximumDisparityDifferenceSlider->setObjectName(QString::fromUtf8("BMMaximumDisparityDifferenceSlider"));
        BMMaximumDisparityDifferenceSlider->setMinimumSize(QSize(0, 26));

        formLayout_6->setWidget(8, QFormLayout::FieldRole, BMMaximumDisparityDifferenceSlider);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        formLayoutWidget_6 = new QWidget(tab_3);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(20, 20, 632, 301));
        formLayout_7 = new QFormLayout(formLayoutWidget_6);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        SGBMPreFilterCapLabel = new QLabel(formLayoutWidget_6);
        SGBMPreFilterCapLabel->setObjectName(QString::fromUtf8("SGBMPreFilterCapLabel"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, SGBMPreFilterCapLabel);

        SGBMPreFilterCapSlider = new MyQSlider(formLayoutWidget_6);
        SGBMPreFilterCapSlider->setObjectName(QString::fromUtf8("SGBMPreFilterCapSlider"));
        SGBMPreFilterCapSlider->setMinimumSize(QSize(420, 26));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, SGBMPreFilterCapSlider);

        SGBMSADWindowSizeLabel = new QLabel(formLayoutWidget_6);
        SGBMSADWindowSizeLabel->setObjectName(QString::fromUtf8("SGBMSADWindowSizeLabel"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, SGBMSADWindowSizeLabel);

        SGBMSADWindowSizeSlider = new MyQSlider(formLayoutWidget_6);
        SGBMSADWindowSizeSlider->setObjectName(QString::fromUtf8("SGBMSADWindowSizeSlider"));
        SGBMSADWindowSizeSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, SGBMSADWindowSizeSlider);

        SGBMMinimumDisparityLabel = new QLabel(formLayoutWidget_6);
        SGBMMinimumDisparityLabel->setObjectName(QString::fromUtf8("SGBMMinimumDisparityLabel"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, SGBMMinimumDisparityLabel);

        SGBMMinimumDisparitySlider = new MyQSlider(formLayoutWidget_6);
        SGBMMinimumDisparitySlider->setObjectName(QString::fromUtf8("SGBMMinimumDisparitySlider"));
        SGBMMinimumDisparitySlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, SGBMMinimumDisparitySlider);

        SGBMNumberOfDisparitiesLabel = new QLabel(formLayoutWidget_6);
        SGBMNumberOfDisparitiesLabel->setObjectName(QString::fromUtf8("SGBMNumberOfDisparitiesLabel"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, SGBMNumberOfDisparitiesLabel);

        SGBMNumberOfDisparitiesSlider = new MyQSlider(formLayoutWidget_6);
        SGBMNumberOfDisparitiesSlider->setObjectName(QString::fromUtf8("SGBMNumberOfDisparitiesSlider"));
        SGBMNumberOfDisparitiesSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, SGBMNumberOfDisparitiesSlider);

        SGBMUniquenessRatioLabel = new QLabel(formLayoutWidget_6);
        SGBMUniquenessRatioLabel->setObjectName(QString::fromUtf8("SGBMUniquenessRatioLabel"));

        formLayout_7->setWidget(4, QFormLayout::LabelRole, SGBMUniquenessRatioLabel);

        SGBMUniquenessRatioSlider = new MyQSlider(formLayoutWidget_6);
        SGBMUniquenessRatioSlider->setObjectName(QString::fromUtf8("SGBMUniquenessRatioSlider"));
        SGBMUniquenessRatioSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(4, QFormLayout::FieldRole, SGBMUniquenessRatioSlider);

        SGBMSpeckleWindowSizeLabel = new QLabel(formLayoutWidget_6);
        SGBMSpeckleWindowSizeLabel->setObjectName(QString::fromUtf8("SGBMSpeckleWindowSizeLabel"));

        formLayout_7->setWidget(5, QFormLayout::LabelRole, SGBMSpeckleWindowSizeLabel);

        SGBMSpeckleWindowSizeSlider = new MyQSlider(formLayoutWidget_6);
        SGBMSpeckleWindowSizeSlider->setObjectName(QString::fromUtf8("SGBMSpeckleWindowSizeSlider"));
        SGBMSpeckleWindowSizeSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(5, QFormLayout::FieldRole, SGBMSpeckleWindowSizeSlider);

        SGBMSpeckleRangeLabel = new QLabel(formLayoutWidget_6);
        SGBMSpeckleRangeLabel->setObjectName(QString::fromUtf8("SGBMSpeckleRangeLabel"));

        formLayout_7->setWidget(6, QFormLayout::LabelRole, SGBMSpeckleRangeLabel);

        SGBMSpeckleRangeSlider = new MyQSlider(formLayoutWidget_6);
        SGBMSpeckleRangeSlider->setObjectName(QString::fromUtf8("SGBMSpeckleRangeSlider"));
        SGBMSpeckleRangeSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(6, QFormLayout::FieldRole, SGBMSpeckleRangeSlider);

        SGBMMaximumDisparityDifferenceLabel = new QLabel(formLayoutWidget_6);
        SGBMMaximumDisparityDifferenceLabel->setObjectName(QString::fromUtf8("SGBMMaximumDisparityDifferenceLabel"));

        formLayout_7->setWidget(7, QFormLayout::LabelRole, SGBMMaximumDisparityDifferenceLabel);

        SGBMMaximumDisparityDifferenceSlider = new MyQSlider(formLayoutWidget_6);
        SGBMMaximumDisparityDifferenceSlider->setObjectName(QString::fromUtf8("SGBMMaximumDisparityDifferenceSlider"));
        SGBMMaximumDisparityDifferenceSlider->setMinimumSize(QSize(0, 26));

        formLayout_7->setWidget(7, QFormLayout::FieldRole, SGBMMaximumDisparityDifferenceSlider);

        SGBMFullScale2xPassLabel = new QLabel(formLayoutWidget_6);
        SGBMFullScale2xPassLabel->setObjectName(QString::fromUtf8("SGBMFullScale2xPassLabel"));

        formLayout_7->setWidget(8, QFormLayout::LabelRole, SGBMFullScale2xPassLabel);

        SGBMFullScale2xPassComboBox = new QComboBox(formLayoutWidget_6);
        SGBMFullScale2xPassComboBox->setObjectName(QString::fromUtf8("SGBMFullScale2xPassComboBox"));
        SGBMFullScale2xPassComboBox->setMinimumSize(QSize(200, 0));
        SGBMFullScale2xPassComboBox->setMaximumSize(QSize(200, 16777215));

        formLayout_7->setWidget(8, QFormLayout::FieldRole, SGBMFullScale2xPassComboBox);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 20, 630, 301));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        VarIterationsLabel = new QLabel(formLayoutWidget_2);
        VarIterationsLabel->setObjectName(QString::fromUtf8("VarIterationsLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, VarIterationsLabel);

        VarIterationsSlider = new MyQSlider(formLayoutWidget_2);
        VarIterationsSlider->setObjectName(QString::fromUtf8("VarIterationsSlider"));
        VarIterationsSlider->setMinimumSize(QSize(420, 26));
        VarIterationsSlider->setMaximumSize(QSize(16777215, 26));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, VarIterationsSlider);

        VarMinimumDisparityLabel = new QLabel(formLayoutWidget_2);
        VarMinimumDisparityLabel->setObjectName(QString::fromUtf8("VarMinimumDisparityLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, VarMinimumDisparityLabel);

        VarMinimumDisparitySlider = new MyQSlider(formLayoutWidget_2);
        VarMinimumDisparitySlider->setObjectName(QString::fromUtf8("VarMinimumDisparitySlider"));
        VarMinimumDisparitySlider->setMinimumSize(QSize(0, 26));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, VarMinimumDisparitySlider);

        VarMaximumDisparityLabel = new QLabel(formLayoutWidget_2);
        VarMaximumDisparityLabel->setObjectName(QString::fromUtf8("VarMaximumDisparityLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, VarMaximumDisparityLabel);

        VarMaximumDisparitySlider = new MyQSlider(formLayoutWidget_2);
        VarMaximumDisparitySlider->setObjectName(QString::fromUtf8("VarMaximumDisparitySlider"));
        VarMaximumDisparitySlider->setMinimumSize(QSize(0, 26));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, VarMaximumDisparitySlider);

        VarOrderOfPolynomialLabel = new QLabel(formLayoutWidget_2);
        VarOrderOfPolynomialLabel->setObjectName(QString::fromUtf8("VarOrderOfPolynomialLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, VarOrderOfPolynomialLabel);

        VarOrderOfPolynomialSlider = new MyQSlider(formLayoutWidget_2);
        VarOrderOfPolynomialSlider->setObjectName(QString::fromUtf8("VarOrderOfPolynomialSlider"));
        VarOrderOfPolynomialSlider->setMinimumSize(QSize(0, 26));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, VarOrderOfPolynomialSlider);

        VarStandardDeviationLabel = new QLabel(formLayoutWidget_2);
        VarStandardDeviationLabel->setObjectName(QString::fromUtf8("VarStandardDeviationLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, VarStandardDeviationLabel);

        VarStandardDeviationSlider = new MyQSlider(formLayoutWidget_2);
        VarStandardDeviationSlider->setObjectName(QString::fromUtf8("VarStandardDeviationSlider"));
        VarStandardDeviationSlider->setMinimumSize(QSize(0, 26));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, VarStandardDeviationSlider);

        VarSmoothnessLabel = new QLabel(formLayoutWidget_2);
        VarSmoothnessLabel->setObjectName(QString::fromUtf8("VarSmoothnessLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, VarSmoothnessLabel);

        VarSmoothnessSlider = new MyQSlider(formLayoutWidget_2);
        VarSmoothnessSlider->setObjectName(QString::fromUtf8("VarSmoothnessSlider"));
        VarSmoothnessSlider->setMinimumSize(QSize(0, 26));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, VarSmoothnessSlider);

        VarThresholdLabel = new QLabel(formLayoutWidget_2);
        VarThresholdLabel->setObjectName(QString::fromUtf8("VarThresholdLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, VarThresholdLabel);

        VarThresholdLineEdit = new QLineEdit(formLayoutWidget_2);
        VarThresholdLineEdit->setObjectName(QString::fromUtf8("VarThresholdLineEdit"));
        VarThresholdLineEdit->setMaximumSize(QSize(200, 16777215));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, VarThresholdLineEdit);

        tabWidget->addTab(tab_2, QString());
        ImageDepth->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageDepth);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImageDepth->setStatusBar(statusBar);

        retranslateUi(ImageDepth);

        algorithmComboBox->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);
        SGBMFullScale2xPassComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ImageDepth);
    } // setupUi

    void retranslateUi(QMainWindow *ImageDepth)
    {
        ImageDepth->setWindowTitle(QApplication::translate("ImageDepth", "ImageDepth", 0, QApplication::UnicodeUTF8));
        algorithmLabel->setText(QApplication::translate("ImageDepth", "Algorithm", 0, QApplication::UnicodeUTF8));
        algorithmComboBox->clear();
        algorithmComboBox->insertItems(0, QStringList()
         << QApplication::translate("ImageDepth", "Block Matching Algorithm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageDepth", "Semi-global block matching algorithm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageDepth", "Variational matching algorithm", 0, QApplication::UnicodeUTF8)
        );
        BMPreFilterCapLabel->setText(QApplication::translate("ImageDepth", "PreFilterCap", 0, QApplication::UnicodeUTF8));
        BMSADWindowSizeLabel->setText(QApplication::translate("ImageDepth", "SADWindowSize", 0, QApplication::UnicodeUTF8));
        BMMinimumDisparityLabel->setText(QApplication::translate("ImageDepth", "Minimum Disparity", 0, QApplication::UnicodeUTF8));
        BMNumberOfDisparitiesLabel->setText(QApplication::translate("ImageDepth", "Number of Disparities", 0, QApplication::UnicodeUTF8));
        BMTextureThresholdLabel->setText(QApplication::translate("ImageDepth", "Texture Threshold", 0, QApplication::UnicodeUTF8));
        BMUniquenessRatioLabel->setText(QApplication::translate("ImageDepth", "Uniqueness Ratio", 0, QApplication::UnicodeUTF8));
        BMSpeckleWindowSizeLabel->setText(QApplication::translate("ImageDepth", "Speckle Window Size", 0, QApplication::UnicodeUTF8));
        BMSpeckleRangeLabel->setText(QApplication::translate("ImageDepth", "Speckle Range", 0, QApplication::UnicodeUTF8));
        BMMaximumDisparityDifferenceLabel->setText(QApplication::translate("ImageDepth", "Maximum Disparity Difference", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ImageDepth", "BM", 0, QApplication::UnicodeUTF8));
        SGBMPreFilterCapLabel->setText(QApplication::translate("ImageDepth", "PreFilterCap", 0, QApplication::UnicodeUTF8));
        SGBMSADWindowSizeLabel->setText(QApplication::translate("ImageDepth", "SADWindowSize", 0, QApplication::UnicodeUTF8));
        SGBMMinimumDisparityLabel->setText(QApplication::translate("ImageDepth", "Minimum Disparity", 0, QApplication::UnicodeUTF8));
        SGBMNumberOfDisparitiesLabel->setText(QApplication::translate("ImageDepth", "Number of Disparities", 0, QApplication::UnicodeUTF8));
        SGBMUniquenessRatioLabel->setText(QApplication::translate("ImageDepth", "Uniqueness Ratio", 0, QApplication::UnicodeUTF8));
        SGBMSpeckleWindowSizeLabel->setText(QApplication::translate("ImageDepth", "Speckle Window Size", 0, QApplication::UnicodeUTF8));
        SGBMSpeckleRangeLabel->setText(QApplication::translate("ImageDepth", "Speckle Range", 0, QApplication::UnicodeUTF8));
        SGBMMaximumDisparityDifferenceLabel->setText(QApplication::translate("ImageDepth", "Maximum Disparity Difference", 0, QApplication::UnicodeUTF8));
        SGBMFullScale2xPassLabel->setText(QApplication::translate("ImageDepth", "Full Scale 2x Pass", 0, QApplication::UnicodeUTF8));
        SGBMFullScale2xPassComboBox->clear();
        SGBMFullScale2xPassComboBox->insertItems(0, QStringList()
         << QApplication::translate("ImageDepth", "True", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ImageDepth", "False", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ImageDepth", "SGBM", 0, QApplication::UnicodeUTF8));
        VarIterationsLabel->setText(QApplication::translate("ImageDepth", "Iterations", 0, QApplication::UnicodeUTF8));
        VarMinimumDisparityLabel->setText(QApplication::translate("ImageDepth", "Minimum Disparity", 0, QApplication::UnicodeUTF8));
        VarMaximumDisparityLabel->setText(QApplication::translate("ImageDepth", "Maximum Disparity", 0, QApplication::UnicodeUTF8));
        VarOrderOfPolynomialLabel->setText(QApplication::translate("ImageDepth", "Order of Polynomial                    ", 0, QApplication::UnicodeUTF8));
        VarStandardDeviationLabel->setText(QApplication::translate("ImageDepth", "Standard Deviation", 0, QApplication::UnicodeUTF8));
        VarSmoothnessLabel->setText(QApplication::translate("ImageDepth", "Smoothness", 0, QApplication::UnicodeUTF8));
        VarThresholdLabel->setText(QApplication::translate("ImageDepth", "Threshold", 0, QApplication::UnicodeUTF8));
        VarThresholdLineEdit->setText(QApplication::translate("ImageDepth", "0.03", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ImageDepth", "Var", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageDepth: public Ui_ImageDepth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDEPTH_H
