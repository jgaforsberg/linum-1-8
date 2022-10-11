#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // set window size
    setFixedSize(200, 100);
    //create and position button
    m_button = new QPushButton("Hello World!", this);
    m_button->setGeometry(20,20,160,60);
    // with parenting system destructor is unneccessary since instances are automatically deleted

    // connection for button
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}

