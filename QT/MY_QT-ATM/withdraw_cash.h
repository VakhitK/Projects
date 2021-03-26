#ifndef WITHDRAW_CASH_H
#define WITHDRAW_CASH_H

#include <QDialog>
#include <QMap>

using Container = QMap<int, int>;

namespace Ui {
class withdrawCash;
}

class withdrawCash : public QDialog
{
    Q_OBJECT

public:
    explicit withdrawCash(QWidget *parent = nullptr);
    ~withdrawCash();

private:
    void recalc_total(const Container& container, int& total);
    void give_sum(Container& container, int sum);
    void log(const QString& _log);

signals:
    void accepted_button_clicked(QVector<Container>&);

private slots:
    void receiveData(QVector<Container>&);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_buttonBox_accepted();

private:
    Ui::withdrawCash *ui;
    Container rub, usd;
    int total_rub = 0, total_usd = 0;
};

#endif // WITHDRAW_CASH_H
