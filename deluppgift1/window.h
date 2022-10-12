#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLabel>

class QPushButton;
class Window : public QWidget
{
public:
    explicit Window(QWidget *parent = 0);
private slots:
    void passButtonClicked(bool checked);
    void failButtonClicked(bool checked);
private:
    QPushButton *quitButton;
    QPushButton *passButton;
    QPushButton *failButton;

    QLabel *statement;
    QLabel *message;
};

#endif // WINDOW_H
