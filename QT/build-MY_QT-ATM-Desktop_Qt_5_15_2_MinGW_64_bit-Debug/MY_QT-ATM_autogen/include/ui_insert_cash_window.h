/********************************************************************************
** Form generated from reading UI file 'insert_cash_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_CASH_WINDOW_H
#define UI_INSERT_CASH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QSpinBox *spinBox_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QSpinBox *spinBox_50;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QSpinBox *spinBox_100;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpinBox *spinBox_200;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpinBox *spinBox_500;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QSpinBox *spinBox_1000;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_19;
    QSpinBox *spinBox_2000;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QSpinBox *spinBox_5000;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpinBox *usdSpinBox_1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *usdSpinBox_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QSpinBox *usdSpinBox_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *usdSpinBox_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *usdSpinBox_20;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpinBox *usdSpinBox_50;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *usdSpinBox_100;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(749, 598);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(240, 570, 499, 21));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 130, 661, 246));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        spinBox_10 = new QSpinBox(layoutWidget);
        spinBox_10->setObjectName(QString::fromUtf8("spinBox_10"));

        horizontalLayout_12->addWidget(spinBox_10);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_13->addWidget(label_13);

        spinBox_50 = new QSpinBox(layoutWidget);
        spinBox_50->setObjectName(QString::fromUtf8("spinBox_50"));

        horizontalLayout_13->addWidget(spinBox_50);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_14->addWidget(label_14);

        spinBox_100 = new QSpinBox(layoutWidget);
        spinBox_100->setObjectName(QString::fromUtf8("spinBox_100"));

        horizontalLayout_14->addWidget(spinBox_100);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        spinBox_200 = new QSpinBox(layoutWidget);
        spinBox_200->setObjectName(QString::fromUtf8("spinBox_200"));

        horizontalLayout_15->addWidget(spinBox_200);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        spinBox_500 = new QSpinBox(layoutWidget);
        spinBox_500->setObjectName(QString::fromUtf8("spinBox_500"));

        horizontalLayout_16->addWidget(spinBox_500);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        spinBox_1000 = new QSpinBox(layoutWidget);
        spinBox_1000->setObjectName(QString::fromUtf8("spinBox_1000"));

        horizontalLayout_17->addWidget(spinBox_1000);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_19->addWidget(label_19);

        spinBox_2000 = new QSpinBox(layoutWidget);
        spinBox_2000->setObjectName(QString::fromUtf8("spinBox_2000"));

        horizontalLayout_19->addWidget(spinBox_2000);


        verticalLayout_2->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setScaledContents(false);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(label_18);

        spinBox_5000 = new QSpinBox(layoutWidget);
        spinBox_5000->setObjectName(QString::fromUtf8("spinBox_5000"));

        horizontalLayout_18->addWidget(spinBox_5000);


        verticalLayout_2->addLayout(horizontalLayout_18);


        horizontalLayout_20->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        usdSpinBox_1 = new QSpinBox(layoutWidget);
        usdSpinBox_1->setObjectName(QString::fromUtf8("usdSpinBox_1"));

        horizontalLayout_9->addWidget(usdSpinBox_1);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        usdSpinBox_2 = new QSpinBox(layoutWidget);
        usdSpinBox_2->setObjectName(QString::fromUtf8("usdSpinBox_2"));

        horizontalLayout_8->addWidget(usdSpinBox_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_11->addWidget(label_11);

        usdSpinBox_5 = new QSpinBox(layoutWidget);
        usdSpinBox_5->setObjectName(QString::fromUtf8("usdSpinBox_5"));

        horizontalLayout_11->addWidget(usdSpinBox_5);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        usdSpinBox_10 = new QSpinBox(layoutWidget);
        usdSpinBox_10->setObjectName(QString::fromUtf8("usdSpinBox_10"));

        horizontalLayout_7->addWidget(usdSpinBox_10);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        usdSpinBox_20 = new QSpinBox(layoutWidget);
        usdSpinBox_20->setObjectName(QString::fromUtf8("usdSpinBox_20"));

        horizontalLayout->addWidget(usdSpinBox_20);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        usdSpinBox_50 = new QSpinBox(layoutWidget);
        usdSpinBox_50->setObjectName(QString::fromUtf8("usdSpinBox_50"));

        horizontalLayout_10->addWidget(usdSpinBox_50);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_6);

        usdSpinBox_100 = new QSpinBox(layoutWidget);
        usdSpinBox_100->setObjectName(QString::fromUtf8("usdSpinBox_100"));

        horizontalLayout_6->addWidget(usdSpinBox_100);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_20->addLayout(verticalLayout);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 80, 611, 21));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "10 \321\200\321\203\320\261.", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "50 \321\200\321\203\320\261.", nullptr));
        label_14->setText(QCoreApplication::translate("Dialog", "100 \321\200\321\203\320\261.", nullptr));
        label_15->setText(QCoreApplication::translate("Dialog", "200 \321\200\321\203\320\261.", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "500 \321\200\321\203\320\261.", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "1000 \321\200\321\203\320\261.", nullptr));
        label_19->setText(QCoreApplication::translate("Dialog", "2000 \321\200\321\203\320\261.", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "5000 \321\200\321\203\320\261.", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "1$", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "2$", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "5$", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "10$", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "20$", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "50$", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "100$", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\222\320\275\320\265\321\201\320\265\320\275\320\270\320\265 \320\275\320\260\320\273\320\270\321\207\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_CASH_WINDOW_H
