#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include <QMessageBox>

FourthWindow::FourthWindow(Ingridients* _ing, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FourthWindow)
{
    ui->setupUi(this);

    ing = _ing;

    window5 = new LastWindow(this);
    connect(window5, &LastWindow::fourthWindow, this, &FourthWindow::show);
}

FourthWindow::~FourthWindow()
{
    delete ui;
}

void FourthWindow::on_Button_back_clicked()
{
    this->close();
    emit thirdWindow();
}

void FourthWindow::onLastWindowClicked()
{
    window5->show();
    this->close();
}
void FourthWindow::on_Button_order_clicked()
{
    hide();
    window5->show();

}

void FourthWindow::on_buttonmilk_clicked()
{
    if(ing->milk <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали молоко у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        ing->milk -= 30;
    }

}

void FourthWindow::on_buttonSugar_clicked()
{
    if(ing->sugar <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали цукор у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        ing->sugar -= 5;
    }
}

void FourthWindow::on_buttonCoriza_clicked()
{
    if(ing->cinnamon <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали корицю у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        ing->cinnamon -= 15;
    }
}
