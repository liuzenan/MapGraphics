#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <MapGraphicsScene.h>
#include <QSharedPointer>
#include <QtDebug>
#include <QThread>
#include <QImage>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MapGraphicsScene * scene = new MapGraphicsScene(this);
    widget = new QMapWidget(scene, this, 0, 0, 3);
    QWidget * topWidget = new QWidget();
    //The view will be our central widget
    QHBoxLayout * Hlayout = new QHBoxLayout;
    QLabel * country = new QLabel("country:");
    countryInput = new QLineEdit;
    QLabel * city = new QLabel("city:");
    cityInput = new QLineEdit;
    QLabel * latitude = new QLabel("latitude:");
    QLineEdit * latInput = new QLineEdit;
    QLabel * longitude = new QLabel("longitude:");
    QLineEdit * lngInput = new QLineEdit;
    Hlayout->addWidget(country);
    Hlayout->addWidget(countryInput);
    Hlayout->addWidget(city);
    Hlayout->addWidget(cityInput);
    Hlayout->addWidget(latitude);
    Hlayout->addWidget(latInput);
    Hlayout->addWidget(longitude);
    Hlayout->addWidget(lngInput);
    topWidget->setLayout(Hlayout);
    QWidget * mainWidget = new QWidget();
    QVBoxLayout *Vlayout = new QVBoxLayout;
    Vlayout->addWidget(topWidget);
    Vlayout->addWidget(widget);
    mainWidget->setLayout(Vlayout);
    //The view will be our central widget
    this->setCentralWidget(mainWidget);
    //this->setCentralWidget(widget);
   // widget->locateCity("london");
    connect(countryInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getCountry()));
    connect(cityInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getCity()));
    //QString filename("urban_population.xml");
    //widget->loadHistoryData(filename);
    //widget->displayHistoryData();
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

void MainWindow::getCountry()
{
    qDebug()<<countryInput->text();
    this->widget->locateCountry(this->countryInput->text());
}

void MainWindow::getCity()
{
    qDebug()<<cityInput->text();
    this->widget->locateCity(this->cityInput->text());
}
