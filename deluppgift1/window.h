#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
public:
    explicit Window(QWidget *parent = 0);
private:
    QPushButton *quitButton;
};

#endif // WINDOW_H
