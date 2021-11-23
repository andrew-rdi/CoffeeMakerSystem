#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include <QMessageBox>

ThirdWindow::ThirdWindow(Ingridients* _ing, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThirdWindow)
{
    ui->setupUi(this);

    ing = _ing;

    window4 = new FourthWindow(_ing, this);
    connect(window4, &FourthWindow::thirdWindow, this, &ThirdWindow::show);
}

ThirdWindow::~ThirdWindow()
{
    delete ui;
}

void ThirdWindow::on_Button_back_clicked()
{
    this->close();
    emit secondWindow();
}

void ThirdWindow::onFourthWindowClicked()
{
    window4->show();
    this->close();
}

void ThirdWindow::on_Button_capuccino_clicked()
{
   if(ing->water <= 0 || ing->milk <= 0 || ing->coffee <= 0)
   {
       QMessageBox::warning(this, "Увага!","Ви не додали воду, молоко або каву у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
   }
    else
   {
       hide();
       window4->show();
       ing->water -= 90;
       ing->milk -= 20;
       ing->coffee -= 30;
   }
}

void ThirdWindow::on_button_late_clicked()
{
    if(ing->water <= 0 || ing->milk <= 0 || ing->coffee <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали воду, молоко або каву у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        hide();
        window4->show();
        window4->show();
        ing->water -= 90;
        ing->milk -= 50;
        ing->coffee -= 30;
    }
}

void ThirdWindow::on_Button_amerecano_clicked()
{
    if(ing->water <= 0 || ing->coffee <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали воду або каву у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        hide();
        window4->show();
        window4->show();
        ing->water -= 120;
        ing->coffee -= 30;
    }
}

void ThirdWindow::on_Button_espresso_clicked()
{
    if(ing->water <= 0 || ing->coffee <= 0)
    {
        QMessageBox::warning(this, "Увага!","Ви не додали воду або каву у кавоварку! <br> Будь ласка перейдіть до головної сторінки, натисніть ДОДАТИ ПРОДУКТИ та додайте необхідні продукти.");
    }
    else
    {
        hide();
        window4->show();
        window4->show();
        ing->water -= 100;
        ing->coffee -= 50;
    }
}
