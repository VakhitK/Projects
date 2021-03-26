#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QTextStream>
#include <QFile>
#include <QVector>
#include "insert_cash_window.h"
#include "withdraw_cash.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using Container = QMap<int, int>;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void getCash_clicked(QVector<Container>&);

private slots:
    void on_insertCash_clicked();

    void on_getCash_clicked();

    void on_quit_clicked();

    void withdraw_receiveData(QVector<Container>&);

    void receiveData(QVector<Container>&);

private:

    void initialize_from_file(const QString& filename, Container& container);
    void record_to_file(const QString& filename,const Container& container);
    void recalc_total(const Container& container, int& total);
    void add_cash(const Container& container, Container& atm);
    void log(const QString& _log);

    Ui::MainWindow *ui;
    Dialog ui_insert_cash;
    withdrawCash ui_withdraw_cash;

    Container rub{  {10, 0},
                    {50, 0},
                    {100, 0},
                    {200, 0},
                    {500, 0},
                    {1000, 0},
                    {2000, 0},
                    {5000, 0}};

    Container usd{  {1, 0},
                    {2, 0},
                    {5, 0},
                    {10, 0},
                    {20, 0},
                    {50, 0},
                    {100, 0}};

    int total_rub = 0, total_usd = 0;

};
#endif // MAINWINDOW_H
