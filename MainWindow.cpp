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
    latInput = new QLineEdit;
    QLabel * longitude = new QLabel("longitude:");
    lngInput = new QLineEdit;
    Hlayout->addWidget(country);
    Hlayout->addWidget(countryInput);
    Hlayout->addWidget(city);
    Hlayout->addWidget(cityInput);
    Hlayout->addWidget(latitude);
    Hlayout->addWidget(latInput);
    Hlayout->addWidget(longitude);
    Hlayout->addWidget(lngInput);
    topWidget->setLayout(Hlayout);

    timeSlider = new QSlider(Qt::Horizontal);

    yearInput = new QSpinBox;

    QHBoxLayout * slideLayout = new QHBoxLayout;
    slideLayout->addWidget(yearInput);
    slideLayout->addWidget(timeSlider);
    QWidget * sliderWidget = new QWidget;
    sliderWidget->setLayout(slideLayout);

    QLabel * search = new QLabel("Search:");
    QLabel * history = new QLabel("History:");
    QVBoxLayout * Vlayout = new QVBoxLayout;
    Vlayout->addWidget(search);
    Vlayout->addWidget(topWidget);
    Vlayout->addWidget(history);
    Vlayout->addWidget(sliderWidget);
    Vlayout->addWidget(widget);

    //The view will be our central widget
    QWidget * mainWidget = new QWidget;
    mainWidget->setLayout(Vlayout);
    this->setCentralWidget(mainWidget);
    connect(countryInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getCountry()));
    connect(cityInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getCity()));
    connect(latInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getLocation()));
    connect(lngInput,
            SIGNAL(returnPressed()),
            this,
            SLOT(getLocation()));
    connect(timeSlider,
            SIGNAL(valueChanged(int)),
            yearInput,
            SLOT(setValue(int)));
    connect(yearInput,
            SIGNAL(valueChanged(int)),
            timeSlider,
            SLOT(setValue(int)));
    connect(timeSlider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(updateMap(int)));
    connect(yearInput,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(updateMap(int)));
    QString filename("urban_population.xml");
    widget->loadHistoryData(filename);

    timeSlider->setRange(widget->firstYear(),widget->lastYear()-1);
    timeSlider->setValue(widget->firstYear());
    yearInput->setRange(widget->firstYear(),widget->lastYear()-1);
    yearInput->setValue(widget->firstYear());

    countryList << "China" << "India" << "South Africa" << "France" << "Italy" << "Australia" << "Germany" << "Negeria";

    widget->displayHistoryDataForCountries(countryList);
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
    this->widget->removeAllCountryOverlay();
}

void MainWindow::getCity()
{
    qDebug()<<cityInput->text();
    this->widget->locateCity(this->cityInput->text());
    this->widget->removeAllCountryOverlay();
}

void MainWindow::getLocation()
{
    if(latInput->text() == "" || lngInput->text() == ""){
        qDebug("not complete");
    }else{
        qreal latitude = latInput->text().toDouble();
        qreal longitude = lngInput->text().toDouble();
        if(latitude <= 90 && latitude >= -90 && longitude <= 180 && longitude >= -180){
            widget->centerOn(longitude,latitude);
            qDebug("correct");
            qDebug()<<latInput->text();
            qDebug()<<lngInput->text();
        }else{
            qDebug("coordinate is out of bound.");
        }
    }
}

void MainWindow::updateMap(int year){
    widget->updateDataForCountries(countryList, year);
}
