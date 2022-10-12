#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // set window size
    setFixedSize(1280, 720);

    // set and position buttons
    quitButton = new QPushButton("Avsluta", this);
    quitButton->setGeometry(580, 600, 100, 50);
    quitButton->setCheckable(true);


    // button connections
    connect (quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));

}

