#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QDialog>
#include "fourthwindow.h"
#include "Ingridients.h"

namespace Ui {
class ThirdWindow;
}

class ThirdWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdWindow(Ingridients* _ing, QWidget *parent = nullptr);
    ~ThirdWindow();

signals:
    void secondWindow();

private slots:
    void on_Button_back_clicked();

    void onFourthWindowClicked();
    void on_Button_capuccino_clicked();

    void on_button_late_clicked();

    void on_Button_amerecano_clicked();

    void on_Button_espresso_clicked();

private:
    Ui::ThirdWindow *ui;
    FourthWindow *window4;
    Ingridients* ing;
};

#endif // THIRDWINDOW_H
