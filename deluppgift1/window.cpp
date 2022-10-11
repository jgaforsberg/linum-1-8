#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // set window size
    setFixedSize(1280, 720);

    // set and position button
    quitButton = new QPushButton("Avsluta", this);
    quitButton->setGeometry(580, 600, 100, 50);
}

