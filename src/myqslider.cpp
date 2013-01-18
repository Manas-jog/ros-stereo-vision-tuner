#include "myqslider.h"
#include "ui_myqslider.h"

MyQSlider::MyQSlider(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyQSlider)
{
    ui->setupUi(this);
    connect(ui->slider, SIGNAL(valueChanged(int)), this, SLOT(updateValue()));
    Slider = ui->slider;
    stepSize = 1;
    updateValue();
}

MyQSlider::~MyQSlider()
{
    delete ui;
}

void MyQSlider::updateValue()
{
    QString value;
    int sliderValue = ui->slider->value();

    if( sliderValue % stepSize != 0 )
    {
        sliderValue = sliderValue - sliderValue % stepSize;
        ui->slider->setValue(sliderValue);
    }

    value.append(QString("%1").arg(sliderValue));
    ui->valueLabel->setText(value);

    emit(valueChanged(sliderValue));

}

void MyQSlider::setRange(int minimum, int maximum)
{
    ui->slider->setRange(minimum, maximum);
}

void MyQSlider::setPosition(int value)
{
    ui->slider->setValue(value);
}

void MyQSlider::setStepSize(int value)
{
    stepSize = value;
    ui->slider->setTickInterval(value);
    ui->slider->setPageStep(value*2);
    ui->slider->setSingleStep(value);
}

int MyQSlider::value()
{
    return ui->slider->value();
}
