#include <QApplication>
#include <QProgressBar>
#include <QSlider>
//#include "window.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // create container window
    QWidget window;
    window.setFixedSize(200, 80);

    // create progress bar 0 - 100
    QProgressBar *progressbar = new QProgressBar(&window);
    progressbar->setRange(0,100);
    progressbar->setValue(0);
    progressbar->setGeometry(10,10,180,30);

    // create slider 0 - 100
    QSlider *slider = new QSlider(&window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0,100);
    slider->setValue(0);
    slider->setGeometry(10,40,180,30);

    window.show();

    // connection for progress bar values while slider value changes
    QObject::connect(slider, SIGNAL(valueChanged(int)), progressbar, SLOT(setValue(int)));

    return app.exec();
}
