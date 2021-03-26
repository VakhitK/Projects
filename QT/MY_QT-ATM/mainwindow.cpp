#include "mainwindow.h"
#include "insert_cash_window.h"
#include "withdraw_cash.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QTextStream>
#include <QDir>
#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    initialize_from_file(QDir::currentPath() + "/atm_rub.txt" , rub);
    recalc_total(rub, total_rub);
    initialize_from_file(QDir::currentPath() + "/atm_usd.txt" , usd);
    recalc_total(usd, total_usd);

    connect(&ui_insert_cash, SIGNAL(accepted_button_clicked(QVector<Container>&)),
                this, SLOT(receiveData(QVector<Container>&)));
    connect(&ui_insert_cash,SIGNAL(destroyed()),
                this, SLOT(show()));

    connect(this, SIGNAL(getCash_clicked(QVector<Container>&)),
                &ui_withdraw_cash, SLOT(receiveData(QVector<Container>&)));

    connect(&ui_insert_cash,SIGNAL(destroyed()),
                this, SLOT(show()));

    connect(&ui_withdraw_cash, SIGNAL(accepted_button_clicked(QVector<Container>&)),
                this, SLOT(withdraw_receiveData(QVector<Container>&)));

    ui->setupUi(this);

    log("ATM started");
}

MainWindow::~MainWindow()
{
    record_to_file(QDir::currentPath() + "/atm_rub.txt" , rub);
    record_to_file(QDir::currentPath() + "/atm_usd.txt" , usd);
    delete ui;
    log("ATM turned off");
}


void MainWindow::on_insertCash_clicked()
{
    this->hide();
    ui_insert_cash.show();
    log("Cash inserted");

}

void MainWindow::on_getCash_clicked()
{
    this->hide();

    QVector<Container> data;
    data.push_back(rub);
    data.push_back(usd);
    log("Cash get menu started");

    emit getCash_clicked(data);
}

void MainWindow::on_quit_clicked()
{
    close();
}

void MainWindow::receiveData(QVector<Container>& container)
{
    add_cash(container[0], rub);
    recalc_total(rub, total_rub);
    add_cash(container[1], usd);
    recalc_total(usd, total_usd);

    show();
}

void MainWindow::withdraw_receiveData(QVector<Container>& container)
{
    rub = container[0];
    usd = container[1];
    show();
}

void MainWindow::initialize_from_file(const QString& filename, Container& container){

    QFile file(filename);

        if (!file.open(QIODevice::ReadOnly)) {
           return;
        }

        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            line.replace(" ", "");
            QStringList values,lst = line.split(",");
            for(auto i = 0 ; i < lst.size(); ++i){
                values = lst.at(i).split(":");
                container.insert(values[0].toInt(), values[1].toInt());
            };
        }
}

void MainWindow::record_to_file(const QString& filename,const Container& container){

    QFile file(filename);

        if (!file.open(QIODevice::WriteOnly)) {
           return;
        }

        QTextStream out(&file);

        QMapIterator<int, int> it(container);

        while (it.hasNext()) {
                    it.next();
                    out << it.key() << " : " << it.value();
                    if (it.hasNext()) out << ",";
        }

}

void MainWindow::recalc_total(const Container& container, int& total){

    QMapIterator<int, int> it(container);

    total = 0;

    while (it.hasNext()) {
                it.next();
                total += it.key() * it.value();
    }

}

void MainWindow::add_cash(const Container& container, Container& atm){

    QMapIterator<int, int> it(container);

    while (it.hasNext()) {
                it.next();
                atm[it.key()] += it.value();
    }

}

void MainWindow::log(const QString& _log){

    QFile file(QDir::currentPath() + "/log.txt");

        if (!file.open(QIODevice::Append)) {
           return;
        }

        QTextStream out(&file);

        out << QDateTime::currentDateTime().toString() << " " <<  _log << Qt::endl;

}
