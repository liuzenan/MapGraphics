#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qmapwidget.h"
#include <QSpinBox>

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
    void getLocation();
    void updateMap(int year);

private:
    Ui::MainWindow *ui;
    QMapWidget *widget;
    QLineEdit *countryInput;
    QLineEdit *cityInput;
    QLineEdit *latInput;
    QLineEdit *lngInput;
    QSlider * timeSlider;
    QSpinBox * yearInput;
    QList<QString> countryList;
};

#endif // MAINWINDOW_H
