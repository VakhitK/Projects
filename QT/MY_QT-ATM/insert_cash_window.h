#ifndef INSERT_CASH_WINDOW_H
#define INSERT_CASH_WINDOW_H

#include <QDialog>

using Container = QMap<int, int>;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void accepted_button_clicked(QVector<Container>&);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Dialog *ui;
    friend class MainWindow;
};

#endif // INSERT_CASH_WINDOW_H
