#include "withdraw_cash.h"
#include "ui_withdraw_cash.h"
#include <QTextStream>
#include <algorithm>
#include <QDir>
#include <QDate>

withdrawCash::withdrawCash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::withdrawCash)
{
    ui->setupUi(this);
}

withdrawCash::~withdrawCash()
{
    delete ui;
}

void withdrawCash::receiveData(QVector<Container>& container)
{
    recalc_total(container[0], total_rub);
    rub = container[0];
    ui->totalRUB->setText(QString::number(total_rub));
    recalc_total(container[1], total_usd);
    usd = container[1];
    ui->totalUSD->setText(QString::number(total_usd));

    show();
}

void withdrawCash::recalc_total(const Container& container, int& total){

    QMapIterator<int, int> it(container);

    total = 0;

    while (it.hasNext()) {
                it.next();
                total += it.key() * it.value();
    }

}

void withdrawCash::on_pushButton_clicked() //rub
{
    int sum = ui->sgetRub->text().toInt();

    if (sum <= total_rub){
        give_sum(rub, sum);}
    else
    {
        log("Incorrect sum rub");
        ui->status->setText("Некорректная сумма. Введенная сумма больше чем есть в банкомате.");
    }

    recalc_total(rub, total_rub);
    ui->totalRUB->setText(QString::number(total_rub));
    ui->sgetRub->setText("");

}

void withdrawCash::on_pushButton_2_clicked() //usd
{
   int sum = ui->sgetUSD->text().toInt();

   if (sum <= total_usd){
        give_sum(usd, sum);}
   else
   {
       log("Incorrect sum usd");
       ui->status->setText("Некорректная сумма. Введенная сумма больше чем есть в банкомате.");
   }

   recalc_total(usd, total_usd);
   ui->totalUSD->setText(QString::number(total_usd));
   ui->sgetUSD->setText("");

}

void withdrawCash::give_sum(Container &container, int sum){

    auto keys = container.keys();
    Container temporary = container;
    int num = 0;
    std::reverse(keys.begin(),keys.end());

    for(const auto& i : keys){

            num = sum/i;

            if(temporary[i] > 0 && temporary[i] >= num){
                temporary[i] -= num;}
            else{
                num = temporary[i];
                temporary[i] -= num;
            }

            if (sum > 0) {
                sum -= num * i;}
            else{break;}

        }

        if(sum  == 0){
          ui->status->setText("Успешно. Заберите деньги.");
          log("Cash withdraw success");
          container = temporary;
        }
        else{

            QString buffer;
            QMapIterator<int, int> it(container);

            while (it.hasNext()) {
                        it.next();
                        if(it.value() != 0){
                           buffer += QString::number(it.key()) + " : " + QString::number(it.value());
                        }
                        if(it.hasNext()){
                            buffer += " , ";
                        }
            }
            log("Cash withdraw error. Not enough required denomination.");
            ui->status->setText("Недостаточно купюр нужного номинала.\nДоступные номиналы купюр : \n" + buffer);

            return;
    }

}

void withdrawCash::on_buttonBox_accepted()
{
    QVector<Container> data;
    data.push_back(rub);
    data.push_back(usd);

    emit accepted_button_clicked(data);
}

void withdrawCash::log(const QString& _log){

    QFile file(QDir::currentPath() + "/log.txt");

        if (!file.open(QIODevice::Append)) {
           return;
        }

        QTextStream out(&file);

        out << QDateTime::currentDateTime().toString() << " " <<  _log << Qt::endl;

}
