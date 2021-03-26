#include "insert_cash_window.h"
#include "./ui_insert_cash_window.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    QVector<Container> data;

    Container atm_rub;
    atm_rub.insert(10 ,ui->spinBox_10->value());
    atm_rub.insert(50 ,ui->spinBox_50->value());
    atm_rub.insert(100 ,ui->spinBox_100->value());
    atm_rub.insert(200 ,ui->spinBox_200->value());
    atm_rub.insert(500 ,ui->spinBox_500->value());
    atm_rub.insert(1000 ,ui->spinBox_1000->value());
    atm_rub.insert(2000 ,ui->spinBox_2000->value());
    atm_rub.insert(5000 ,ui->spinBox_5000->value());

    data.push_back(atm_rub);

    Container atm_usd;
    atm_usd.insert(1 ,ui->usdSpinBox_1->value());
    atm_usd.insert(2 ,ui->usdSpinBox_2->value());
    atm_usd.insert(5 ,ui->usdSpinBox_5->value());
    atm_usd.insert(10 ,ui->usdSpinBox_10->value());
    atm_usd.insert(20 ,ui->usdSpinBox_20->value());
    atm_usd.insert(50 ,ui->usdSpinBox_50->value());
    atm_usd.insert(100 ,ui->usdSpinBox_100->value());

    data.push_back(atm_usd);

    emit accepted_button_clicked(data);

}

