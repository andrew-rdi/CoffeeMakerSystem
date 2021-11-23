#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "additionalfunctions.h"
#include "secondwindow.h"
#include "Ingridients.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_produckt_clicked();

    void onAdditionalFunctionsClicked();

    void on_Button_instruction_clicked();

    void onSecondWindowClicked();

    void on_Button_On_clicked();

    void on_Button_Of_clicked();

private:
    Ingridients* ing;
    Ui::MainWindow *ui;
    AdditionalFunctions *functions;
    SecondWindow *window2;
};
#endif // MAINWINDOW_H
