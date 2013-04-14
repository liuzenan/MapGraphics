#include "MainWindow.h"
#include "ui_MainWindow.h"

#include "qmapwidget.h"
#include <MapGraphicsScene.h>
#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MapGraphicsScene * scene = new MapGraphicsScene(this);
    QMapWidget * widget = new QMapWidget(scene, this, 0, 0, 3);

    //The view will be our central widget
    this->setCentralWidget(widget);

    widget->locateCity("new york");

    QString filename("urban_population.xml");
    widget->loadHistoryData(filename);
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


