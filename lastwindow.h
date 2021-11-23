#ifndef LASTWINDOW_H
#define LASTWINDOW_H

#include <QDialog>

namespace Ui {
class LastWindow;
}

class LastWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LastWindow(QWidget *parent = nullptr);
    ~LastWindow();

signals:
    void fourthWindow();

private slots:
    void on_Button_back_clicked();

private:
    Ui::LastWindow *ui;
};

#endif // LASTWINDOW_H
