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
#include <QGroupBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MapGraphicsScene * scene = new MapGraphicsScene(this);
    widget = new QMapWidget(scene, this, 0, 0, 3);
    QGroupBox * topGroup = new QGroupBox("Search");
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

    QGroupBox * latlng = new QGroupBox("coordinates:");
    QHBoxLayout * latlngLayout = new QHBoxLayout;
    latlngLayout->addWidget(latitude);
    latlngLayout->addWidget(latInput);
    latlngLayout->addWidget(longitude);
    latlngLayout->addWidget(lngInput);
    latlng->setLayout(latlngLayout);

    Hlayout->addWidget(country);
    Hlayout->addWidget(countryInput);
    Hlayout->addWidget(city);
    Hlayout->addWidget(cityInput);
    Hlayout->addWidget(latlng);
    topGroup->setLayout(Hlayout);

    timeSlider = new QSlider(Qt::Horizontal);
    timeSlider->setEnabled(false);
    yearInput = new QSpinBox;
    yearInput->setEnabled(false);
    checkColor = new QCheckBox("Color");
    checkColor->setCheckState(Qt::Unchecked);
    playButton = new QPushButton;
    playButton->setText("Start");
    playButton->setEnabled(false);
    QHBoxLayout * slideLayout = new QHBoxLayout;
    slideLayout->addWidget(checkColor);
    slideLayout->addWidget(timeSlider);
    slideLayout->addWidget(yearInput);
    slideLayout->addWidget(playButton);
    QGroupBox * slideGroup = new QGroupBox("History");
    slideGroup->setLayout(slideLayout);

    QVBoxLayout * Vlayout = new QVBoxLayout;
    Vlayout->addWidget(topGroup);
    Vlayout->addWidget(slideGroup);
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
    connect(checkColor,
            SIGNAL(stateChanged(int)),
            this,
            SLOT(changeColorSetting(int)));
    timer = new QTimer;
    timer->setInterval(200);
    connect(playButton,
            SIGNAL(released()),
            this,
            SLOT(play()));
    connect(timer,
            SIGNAL(timeout()),
            this,
            SLOT(animate()));
    QString filename("urban_population.xml");
    widget->loadHistoryData(filename);
    setWindowTitle("QMapWidget: "+widget->getItemName());
    timeSlider->setRange(widget->firstYear(),widget->lastYear()-1);
    timeSlider->setValue(widget->firstYear());
    yearInput->setRange(widget->firstYear(),widget->lastYear()-1);
    yearInput->setValue(widget->firstYear());

    countryList << "China" << "India" << "South Africa" << "France" << "Italy" << "Australia" << "Germany" << "Negeria";

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
    checkColor->setCheckState(Qt::Unchecked);
    this->widget->locateCountry(this->countryInput->text());
    this->widget->removeAllCountryOverlay();
}

void MainWindow::getCity()
{
    checkColor->setCheckState(Qt::Unchecked);
    this->widget->locateCity(this->cityInput->text());
    this->widget->removeAllCountryOverlay();
}

void MainWindow::getLocation()
{
    checkColor->setCheckState(Qt::Unchecked);
    if(latInput->text() == "" || lngInput->text() == ""){
        qDebug("not complete");
    }else{
        qreal latitude = latInput->text().toDouble();
        qreal longitude = lngInput->text().toDouble();
        if(latitude <= 90 && latitude >= -90 && longitude <= 180 && longitude >= -180){
            widget->centerOn(longitude,latitude);
        }else{
            qDebug("coordinate is out of bound.");
        }
    }
}

void MainWindow::updateMap(int year){
    widget->updateDataForCountries(countryList, year);
}

void MainWindow::changeColorSetting(int state){
    if(state == Qt::Unchecked){
        widget->removeAllCountryOverlay();
        timeSlider->setEnabled(false);
        yearInput->setEnabled(false);
        playButton->setEnabled(false);
        playButton->setText("Start");
        timer->stop();
        timeSlider->setValue(widget->firstYear());
        yearInput->setValue(widget->firstYear());
    }else if(state == Qt::Checked){
        widget->displayHistoryDataForCountries(countryList);
        timeSlider->setEnabled(true);
        yearInput->setEnabled(true);
        playButton->setEnabled(true);
    }
}

void MainWindow::play(){
    if(playButton->text() == "Start"){
        playButton->setText("Stop");
        timer->start();
    }else{
        playButton->setText("Start");
        timer->stop();
    }
}

void MainWindow::animate(){
    if(yearInput->value() == widget->lastYear() - 1){
        yearInput->setValue(widget->firstYear());
    }else{
        yearInput->setValue(yearInput->value() + 1);
    }
}
