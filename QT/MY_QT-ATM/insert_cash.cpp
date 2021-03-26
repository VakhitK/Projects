#include "insert_cash.h"
#include "./ui_insert_cash.h"

insert_cash_window::insert_cash_window(QWidget *parent) :                                 //реализация конструктора
    QWidget(parent),                                                        //список инициализации
    ui(new Ui::insert_cash_window)
{
    ui->setupUi(this);                                                      //вызов функции размещения GUI
}

insert_cash_window::~insert_cash_window()                                                 //реализация деструктора
{
    delete ui;                                                              //удалить указатель на экземпляр класса(уничтожить GUI)
}

