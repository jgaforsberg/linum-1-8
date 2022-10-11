#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // set window size
    setFixedSize(100, 50);
    //create and position button
    m_button = new QPushButton("Hello World!", this);
    m_button->setGeometry(10,10,80,30);
    // with parenting system destructor is unneccessary since instances are automatically deleted
}

