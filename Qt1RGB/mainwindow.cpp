#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("Редактор цвета"));

    RSlider = new QSlider(nullptr);
    RSlider->setMinimum(0);
    RSlider->setMaximum(255);
    GSlider = new QSlider(nullptr);
    GSlider->setMinimum(0);
    GSlider->setMaximum(255);
    BSlider = new QSlider(nullptr);
    BSlider->setMinimum(0);
    BSlider->setMaximum(255);

    connect(ui->RSlider, SIGNAL(valueChanged(int)), SLOT(MainColorChanging()));//соединяем со слайдерами
    connect(ui->GSlider, SIGNAL(valueChanged(int)), SLOT(MainColorChanging()));
    connect(ui->BSlider, SIGNAL(valueChanged(int)), SLOT(MainColorChanging()));
    MainColorChanging();//обновление цвета при изменении слайдера
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MainColorChanging()//когда будет изменяться значение слайдера, будет вызываться эта функция
{
    ui->Text->setStyleSheet(QString("QLabel {color : rgb(%1, %2, %3);}").arg(QString::number(ui->BSlider->value()),
    QString::number(ui->GSlider->value()), QString::number(ui->RSlider->value())));

}

