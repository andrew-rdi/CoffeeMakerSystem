#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ing = new Ingridients{0, 0, 0, 0, 0};

    functions = new AdditionalFunctions(ing, this);
    connect(functions, &AdditionalFunctions::firstWindow, this, &MainWindow::show);

    window2 = new SecondWindow(ing, this);
    connect(window2, &SecondWindow::secondWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onAdditionalFunctionsClicked()
{
    functions->show();
    this->close();
}

void MainWindow::on_Button_produckt_clicked()
{
    hide();
    functions->update();
    functions->show();
}

void MainWindow::on_Button_instruction_clicked()
{
     QMessageBox::information(this, "Інструкція для використання!", "Для того щоб приготувати каву спочатку необхідно додати продукти: Кава, Вода, Молоко <br>За бажанням можна додати: Цукор, Кориця<br> Кавоварка може приготувати лате, еспресо, американо, капучино");
}

void MainWindow::onSecondWindowClicked()
{
    window2->show();
    this->close();
}

void MainWindow::on_Button_On_clicked()
{
    hide();
    window2->show();
    ui->label->setStyleSheet("background-image:url(:/res/img/coffeeMaker_7.jpg);");
    ui->label->setText("");
}

void MainWindow::on_Button_Of_clicked()
{
    ui->label->setText("КАВОВАРКА ВИМКНУТА <br><br> Ви всеодно можете додавати продукти<br> та дивитися інструкцію)");
    ui->label->setStyleSheet("color: #fefbec;"
                               "padding-left: 95px;"
                               "background-color: #28251f;"
                               "font-size: 25px;");
    //QMessageBox::information(this, "СТАН КАВОВАРКИ", "КАВОВАРКА ВИМКНУТА! <br> Коли кавоварка вимкнута Ви всеодно можете додавати продукти та дивитися інструкцію)");
}
