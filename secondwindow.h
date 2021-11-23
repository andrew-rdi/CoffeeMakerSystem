#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "thirdwindow.h"
#include "Ingridients.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(Ingridients* _ing, QWidget *parent = nullptr);
    ~SecondWindow();

signals:
    void secondWindow();

private slots:
    void on_Button_on_mainwindow_clicked();

    void onThirdWindowClicked();

    void on_Button_on_thirdwindow_clicked();

    void on_Button_for_cook_clicked();

private:
    Ui::SecondWindow *ui;
    ThirdWindow *window3;
};

#endif // SECONDWINDOW_H
