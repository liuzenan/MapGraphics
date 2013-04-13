#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "qmapwidget.h"

#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMapWidget * widget = new QMapWidget(this, 50.0, 50.0, 2);

    //The view will be our central widget
    this->setCentralWidget(widget);

    widget->locateCity("paris");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//private slot
void MainWindow::on_actionExit_triggered()
{
    this->close();
}
