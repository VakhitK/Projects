#ifndef INSERT_CASH_H
#define INSERT_CASH_H

#include <QWidget>

namespace Ui {
class insert_cash_window;
}

class insert_cash_window : public QWidget
{
    Q_OBJECT

public:
    explicit insert_cash_window(QWidget *parent = nullptr);
    ~insert_cash_window();                                                       //прототип деструктора

signals:
    void login_button_clicked();
    void register_button_clicked();

private:
    Ui::insert_cash_window *ui;
    friend class mainwindow;
};

#endif // INSERT_CASH_H
