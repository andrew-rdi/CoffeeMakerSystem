#include "lastwindow.h"
#include "ui_lastwindow.h"

LastWindow::LastWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LastWindow)
{
    ui->setupUi(this);
}

LastWindow::~LastWindow()
{
    delete ui;
}

void LastWindow::on_Button_back_clicked()
{
    this->close();
    emit fourthWindow();
}
