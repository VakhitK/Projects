/********************************************************************************
** Form generated from reading UI file 'withdraw_cash.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_CASH_H
#define UI_WITHDRAW_CASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_withdrawCash
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *totalRUB;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *totalUSD;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sgetRub;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *sgetUSD;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *status;

    void setupUi(QDialog *withdrawCash)
    {
        if (withdrawCash->objectName().isEmpty())
            withdrawCash->setObjectName(QString::fromUtf8("withdrawCash"));
        withdrawCash->resize(615, 468);
        buttonBox = new QDialogButtonBox(withdrawCash);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(260, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalLayoutWidget = new QWidget(withdrawCash);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        totalRUB = new QLineEdit(horizontalLayoutWidget);
        totalRUB->setObjectName(QString::fromUtf8("totalRUB"));
        totalRUB->setEnabled(false);

        horizontalLayout->addWidget(totalRUB);

        horizontalLayoutWidget_2 = new QWidget(withdrawCash);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(210, 10, 160, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        totalUSD = new QLineEdit(horizontalLayoutWidget_2);
        totalUSD->setObjectName(QString::fromUtf8("totalUSD"));
        totalUSD->setEnabled(false);

        horizontalLayout_2->addWidget(totalUSD);

        horizontalLayoutWidget_3 = new QWidget(withdrawCash);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 100, 160, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        sgetRub = new QLineEdit(horizontalLayoutWidget_3);
        sgetRub->setObjectName(QString::fromUtf8("sgetRub"));

        horizontalLayout_3->addWidget(sgetRub);

        horizontalLayoutWidget_4 = new QWidget(withdrawCash);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(210, 100, 160, 80));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        sgetUSD = new QLineEdit(horizontalLayoutWidget_4);
        sgetUSD->setObjectName(QString::fromUtf8("sgetUSD"));

        horizontalLayout_4->addWidget(sgetUSD);

        pushButton = new QPushButton(withdrawCash);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 180, 80, 21));
        pushButton_2 = new QPushButton(withdrawCash);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 180, 80, 21));
        status = new QLabel(withdrawCash);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(40, 270, 551, 121));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        status->setFont(font);
        status->setTextFormat(Qt::PlainText);
        status->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(withdrawCash);
        QObject::connect(buttonBox, SIGNAL(accepted()), withdrawCash, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), withdrawCash, SLOT(reject()));

        QMetaObject::connectSlotsByName(withdrawCash);
    } // setupUi

    void retranslateUi(QDialog *withdrawCash)
    {
        withdrawCash->setWindowTitle(QCoreApplication::translate("withdrawCash", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("withdrawCash", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276 RUB", nullptr));
        label_2->setText(QCoreApplication::translate("withdrawCash", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276 USD", nullptr));
        label_3->setText(QCoreApplication::translate("withdrawCash", "\320\241\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\321\217 RUB", nullptr));
        label_4->setText(QCoreApplication::translate("withdrawCash", "\320\241\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\321\217 USD", nullptr));
        pushButton->setText(QCoreApplication::translate("withdrawCash", "\320\241\320\275\321\217\321\202\321\214 RUB", nullptr));
        pushButton_2->setText(QCoreApplication::translate("withdrawCash", "\320\241\320\275\321\217\321\202\321\214 USD", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class withdrawCash: public Ui_withdrawCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_CASH_H
