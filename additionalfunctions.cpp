#include "additionalfunctions.h"
#include "ui_additionalfunctions.h"
#include <QMessageBox>

AdditionalFunctions::AdditionalFunctions(Ingridients* _ing, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdditionalFunctions)
{
    ing = _ing;
    ui->setupUi(this);
}

AdditionalFunctions::~AdditionalFunctions()
{
    delete ing;
    delete ui;
}

void AdditionalFunctions::update()
{
    ui->spinBox_milk->setValue(ing->milk);
    ui->spinBox_coffee->setValue(ing->coffee);
    ui->spinBox_sugar->setValue(ing->sugar);
    ui->spinBox_water->setValue(ing->water);
    ui->spinBox_koriza->setValue(ing->cinnamon);
}

void AdditionalFunctions::on_Button_on_mainwindow_clicked()
{
    this->close();
    emit firstWindow();
}
/*ДОБАВЛЕНИЕ ИНГРИДИЕНТОВ*/

void AdditionalFunctions::on_Button_milk_clicked()
{
    ing->milk = ui->spinBox_milk->value();
    if (ing->milk > 450) {
        QMessageBox::warning(this, "УВАГА!", "Ви додали занадто багато молока! <br> Ця кавоварка розрахована максимум на 450 мілілітрів.");
    } else
        if (ing->milk < 50) {
            QMessageBox::warning(this, "УВАГА!", "Ви додали занадто мало молока! <br> Кавоварка зможе приготувати каву, якщо буде мінімум 50 мілілітрів.");
        }
    else {
        ui->label_1->setText("Додано");
        ui->label_1->setStyleSheet("color: #fefbec;"
                                   "padding-left: 25px;"
                                   "background-color: rgb(51, 40, 48);"
                                   "font-size: 25px;");
    }
}

void AdditionalFunctions::on_Button_water_clicked()
{
    ing->water = ui->spinBox_water->value();
    if (ing->water > 2000) {
        QMessageBox::warning(this, "УВАГА!", "Ви додали занадто багато води! <br> Ця кавоварка розрахована максимум на 2000 мілілітрів.");
    } else
        if(ing->water < 100) {
            QMessageBox::warning(this, "УВАГА!", "Ви додали занадто мало води! <br> Кавоварка зможе приготувати каву, якщо буде мінімум 100 мілілітрів.");
        }

    else {
    ui->label_2->setText("Додано");
    ui->label_2->setStyleSheet("color: #fefbec;"
                               "padding-left: 25px;"
                               "background-color: rgb(51, 40, 48);"
                               "font-size: 25px;");
  }
}


void AdditionalFunctions::on_Button_coffee_clicked()
{
    ing->coffee = ui->spinBox_coffee->value();
    if (ing->coffee > 800) {
        QMessageBox::warning(this, "УВАГА!", "Ви додали занадто багато кави! <br> Ця кавоварка розрахована максимум на 800 грамів.");
    } else
        if (ing->coffee < 50) {
            QMessageBox::warning(this, "УВАГА!", "Ви додали занадто мало кави! <br> Кавоварка зможе приготувати каву, якщо буде мінімум 50 грамів.");
        }
    else {
    ui->label_3->setText("Додано");
    ui->label_3->setStyleSheet("color: #fefbec;"
                               "padding-left: 25px;"
                               "background-color: rgb(51, 40, 48);"
                               "font-size: 25px;");
    }
}

void AdditionalFunctions::on_Button_koriza_clicked()
{
    ing->cinnamon = ui->spinBox_koriza->value();
    if (ing->cinnamon > 500) {
        QMessageBox::warning(this, "УВАГА!", "Ви додали занадто багато кориці! <br> Ця кавоварка розрахована максимум на 500 грамів.");
    } else
        if(ing->cinnamon < 50) {
            QMessageBox::warning(this, "УВАГА!", "Ви додали занадто мало кориці! <br> Кавоварка зможе приготувати каву, якщо буде мінімум 50 грамів.");
        }
    else{
    ui->label_4->setText("Додано");
    ui->label_4->setStyleSheet("color: #fefbec;"
                               "padding-left: 25px;"
                               "background-color: rgb(51, 40, 48);"
                               "font-size: 25px;");
    }
}

void AdditionalFunctions::on_Button_sugar_clicked()
{
    ing->sugar = ui->spinBox_sugar->value();
    if (ing->sugar > 500) {
        QMessageBox::warning(this, "УВАГА!", "Ви додали занадто багато цукру! <br> Ця кавоварка розрахована максимум на 500 грамів.");
    } else
        if(ing->sugar < 50) {
            QMessageBox::warning(this, "УВАГА!", "Ви додали занадто мало цукру! <br> Кавоварка зможе приготувати каву, якщо буде мінімум 50 грамів.");
        }
    else {
    ui->label_5->setText("Додано");
    ui->label_5->setStyleSheet("color: #fefbec;"
                               "padding-left: 25px;"
                               "background-color: rgb(51, 40, 48);"
                               "font-size: 25px;");
        }
}
