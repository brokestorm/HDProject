#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //m_strings.push_back(QString("NAO"));
    //m_strings.push_back(QString("SIM"));
    //m_strings.push_back(QString("OK"));
    //m_strings.push_back(QString("CANCELAR"));

    ui->botao->setText("BOTAO1");
    ui->outro_botao->setText("BOTAO2");
    connect(ui->botao, SIGNAL(clicked()), ui->outro_botao, SLOT(click()));
    connect(ui->botao, SIGNAL(clicked()), ui->outro_botao, SLOT(animateClick()));
    connect(ui->outro_botao, SIGNAL(clicked()), this, SLOT(mudaTexto()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mudaTexto()
{
    std::cout << "MUDA O TEXTO AQUI\n";
}
