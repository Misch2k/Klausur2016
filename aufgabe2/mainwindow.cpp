#include "mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QDebug>
#include <QMessageBox>

bool isPrime(int number){
    for(int i = 2; i < number / 2; i++){
        if(number % i == 0) return false;
    }
    return true;
}

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    check = new QPushButton("Check");
    input = new QLineEdit();
    QVBoxLayout *v = new QVBoxLayout;
    v->addWidget(new QLabel("<h1>Prime Check</h1>"));
    v->addWidget(input);
    v->addWidget(check);
    this->setLayout(v);

    connect(check, &QPushButton::clicked, this, &MainWindow::checkIfPrime);
}

MainWindow::~MainWindow()
{
}

void MainWindow::checkIfPrime()
{
    QString tmp(input->text());
    bool *ok = new bool;
    int val = tmp.toInt(ok);
    if(*ok){
        QMessageBox::information(NULL, "Result", QString("%1 is a Prime Number: %2").arg(val).arg(isPrime(val) ? "true" : "false"));
    }else{
        QMessageBox::critical(NULL, "Result", "Input is no valid Prime Number");
    }
}
