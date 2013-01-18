#ifndef MYQSLIDER_H
#define MYQSLIDER_H

#include <QWidget>
#include <QSlider>

namespace Ui {
class MyQSlider;
}

class MyQSlider : public QWidget
{
    Q_OBJECT

public:
    explicit MyQSlider(QWidget *parent = 0);
    void setRange(int minimum, int maximum);
    void setPosition(int value);
    void setStepSize(int value);
    int value();
    QSlider *Slider;

    ~MyQSlider();

public slots:
    void updateValue();

signals:
    void valueChanged(const int);

private:
    int stepSize;
    Ui::MyQSlider *ui;

};

#endif // MYQSLIDER_H
