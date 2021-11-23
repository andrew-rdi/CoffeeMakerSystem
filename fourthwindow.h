#ifndef FOURTHWINDOW_H
#define FOURTHWINDOW_H

#include <QDialog>
#include "lastwindow.h"
#include "Ingridients.h"

namespace Ui {
class FourthWindow;
}

class FourthWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FourthWindow(Ingridients* _ing, QWidget *parent = nullptr);
    ~FourthWindow();

signals:
    void thirdWindow();

private slots:
    void on_Button_back_clicked();

    void onLastWindowClicked();

    void on_Button_order_clicked();

    void on_buttonmilk_clicked();

    void on_buttonSugar_clicked();

    void on_buttonCoriza_clicked();

private:
    Ingridients* ing;
    Ui::FourthWindow *ui;
    LastWindow *window5;
};

#endif // FOURTHWINDOW_H
