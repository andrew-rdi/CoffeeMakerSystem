#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>
SecondWindow::SecondWindow(Ingridients* _ing, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

    window3 = new ThirdWindow(_ing, this);
    connect(window3, &ThirdWindow::secondWindow, this, &SecondWindow::show);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

void SecondWindow::on_Button_on_mainwindow_clicked()
{
    this->close();
    emit secondWindow();
}

void SecondWindow::onThirdWindowClicked()
{
    window3->show();
    this->close();
}

void SecondWindow::on_Button_on_thirdwindow_clicked()
{
    hide();
    window3->show();
}

void SecondWindow::on_Button_for_cook_clicked()
{
    QMessageBox::information(this, "Це необхідно для приготування кави!", "Для того щоб приготувати каву Вам необхідно перевірити наявність продуктів на головній сторінці.");
}
