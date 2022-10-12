#include "window.h"

#include <QApplication>
#include <QPushButton>
#include <QLabel>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // set window size
    setFixedSize(600, 400);

    // set and position buttons
    quitButton = new QPushButton("Avsluta", this);
    quitButton->setGeometry(250, 250, 100, 50);
    passButton = new QPushButton("Godkänd", this);
    passButton->setGeometry(175, 150, 100, 50);
    failButton = new QPushButton("Underkänd", this);
    failButton->setGeometry(325, 150, 100, 50);
  //  failButton->setCheckable(true);

    // set and position labels
    statement = new QLabel("Deluppgift 1 bedöms: ", this);
    statement->setGeometry(225, 100, 150, 50);
    message = new QLabel("tjabba ", this);
    message->setGeometry(225, 200, 300, 50);
    // button connections
    connect (quitButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
    connect (passButton, SIGNAL(clicked(bool)), this, SLOT(passButtonClicked(bool)));
    connect (failButton, SIGNAL(clicked(bool)), this, SLOT(passButtonClicked(bool)));

}

void Window::passButtonClicked(bool clicked)
{
    if(clicked){
        message->setText("Uppgiften godkänd!");
    }else message->setText("else ...");
}
void Window::failButtonClicked(bool clicked)
{
    if(clicked){
        message->setText("Menade du att godkänna uppgiften?");
    }else message->setText("else ...");
}
