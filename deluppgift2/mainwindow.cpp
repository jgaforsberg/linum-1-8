#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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
    // hämta värdet från lineEdit
    int i = ui->lineEdit->text().toInt();
    // tillskriv värdet spinboxstregring
    ui->spinBoxBlue->setSingleStep(i);
    ui->spinBoxGreen->setSingleStep(i);
    ui->spinBoxRed->setSingleStep(i);
}
/* eventuellt överflödigt
void MainWindow::on_increaseButton_clicked()
{

}

void MainWindow::on_decreaseButton_clicked()
{

}
*/
void MainWindow::on_verticalSliderRed_valueChanged(int value)
{
    QMessageBox message;
    if(value < 1 )
    {

        message.setText("Minsta värde för RÖD uppnått");
        message.exec();
    }
    if(value > 254)
    {
        message.setText("Högsta värde för RÖD uppnått");
        message.exec();
    }
}

void MainWindow::on_verticalSliderGreen_valueChanged(int value)
{
    QMessageBox message;
    if(value < 1 )
    {
        message.setText("Minsta värde för GRÖN uppnått");
        message.exec();
    }
    if(value > 254)
    {
        message.setText("Högsta värde för GRÖN uppnått");
        message.exec();
    }
}

void MainWindow::on_verticalSliderBlue_valueChanged(int value)
{
    QMessageBox message;
    if(value < 1 )
    {
        message.setText("Minsta värde för BLÅ uppnått");
        message.exec();
    }
    if(value > 254)
    {
        message.setText("Högsta värde för BLÅ uppnått");
        message.exec();
    }
}
/* eventuellt överflödigt
void MainWindow::on_spinBoxRed_valueChanged(int value)
{

}
void MainWindow::on_spinBoxGreen_valueChanged(int value)
{

}

void MainWindow::on_spinBoxBlue_valueChanged(int value)
{

}
*/
void MainWindow::on_quitButton_clicked()
{
    qApp->exit();
}
