#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qmapwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void getCountry();
    void getCity();

private:
    Ui::MainWindow *ui;
    QMapWidget *widget;
    QLineEdit *countryInput;
    QLineEdit *cityInput;
   // QLineEdit *countryIn;
    //QLineEdit *countryIn;
};

#endif // MAINWINDOW_H
