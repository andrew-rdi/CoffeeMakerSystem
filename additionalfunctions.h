#ifndef ADDITIONALFUNCTIONS_H
#define ADDITIONALFUNCTIONS_H

#include <QDialog>
#include "Ingridients.h"

namespace Ui {
class AdditionalFunctions;
}

class AdditionalFunctions : public QDialog
{
    Q_OBJECT

public:
    explicit AdditionalFunctions(Ingridients* _ing, QWidget *parent = nullptr);
    ~AdditionalFunctions();

    void update();

signals:
    void firstWindow();

private slots:
    void on_Button_on_mainwindow_clicked();

    void on_Button_milk_clicked();

    void on_Button_water_clicked();

    void on_Button_coffee_clicked();

    void on_Button_koriza_clicked();

    void on_Button_sugar_clicked();

private:
    Ui::AdditionalFunctions *ui;
    Ingridients* ing;
};

#endif // ADDITIONALFUNCTIONS_H
