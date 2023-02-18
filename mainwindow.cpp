#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btQuit, &QPushButton::released, this, &MainWindow::handleQuit);
}

void MainWindow::handleQuit()
{
    QApplication::quit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

