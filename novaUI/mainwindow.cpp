#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // initialize comboBox Test
    ui->comboBoxTest->clear();
    ui->comboBoxTest->addItem("IPMP Test");
    ui->comboBoxTest->addItem("PMP Test");
    ui->comboBoxTest->addItem("NPDP Test");
    ui->comboBoxTest->addItem("Communication Test");
    ui->comboBoxTest->addItem("Computer Technology & Software Test");
    ui->comboBoxTest->setCurrentIndex(0);
    // initialize comboBox Level
    ui->comboBoxLevel->clear();
    ui->comboBoxLevel->addItem("Common");
    ui->comboBoxLevel->setCurrentIndex(0);
    // initialize comboBox Level
    ui->comboBoxSubject->clear();
    ui->comboBoxSubject->addItem("Common");
    ui->comboBoxSubject->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
