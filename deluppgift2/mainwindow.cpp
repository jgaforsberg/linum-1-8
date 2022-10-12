#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
// skapade via designer. right click-> go to slot
void MainWindow::on_lineEdit_returnPressed()
{

}

void MainWindow::on_increaseButton_clicked()
{

}

void MainWindow::on_decreaseButton_clicked()
{

}

void MainWindow::on_verticalSliderRed_valueChanged(int value)
{

}

void MainWindow::on_verticalSliderGreen_valueChanged(int value)
{

}

void MainWindow::on_verticalSliderBlue_valueChanged(int value)
{

}

void MainWindow::on_spinBoxRed_valueChanged(int value)
{

}

void MainWindow::on_spinBoxGreen_valueChanged(int arg1)
{

}

void MainWindow::on_spinBoxBlue_valueChanged(int arg1)
{

}

void MainWindow::on_quitButton_clicked()
{
    qApp->exit();
}
