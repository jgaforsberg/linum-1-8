#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    // skapade via designer

    void on_verticalSliderRed_valueChanged(int value);

    void on_lineEdit_returnPressed();

    void on_verticalSliderGreen_valueChanged(int value);

    void on_verticalSliderBlue_valueChanged(int value);

    void on_quitButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
