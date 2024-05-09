/********************************************************************************
** Form generated from reading UI file 'choosemodeldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEMODELDIALOG_H
#define UI_CHOOSEMODELDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseModelDialog
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *radioButton_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QRadioButton *radioButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QRadioButton *radioButton_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QRadioButton *radioButton_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QRadioButton *radioButton_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *ChooseModelDialog)
    {
        if (ChooseModelDialog->objectName().isEmpty())
            ChooseModelDialog->setObjectName(QString::fromUtf8("ChooseModelDialog"));
        ChooseModelDialog->resize(960, 528);
        QFont font;
        font.setPointSize(10);
        ChooseModelDialog->setFont(font);
        verticalLayout_9 = new QVBoxLayout(ChooseModelDialog);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ChooseModelDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(320, 0));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        radioButton_1 = new QRadioButton(ChooseModelDialog);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setChecked(true);

        verticalLayout->addWidget(radioButton_1);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(ChooseModelDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(320, 0));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_2->setScaledContents(true);

        verticalLayout_2->addWidget(label_2);

        radioButton_2 = new QRadioButton(ChooseModelDialog);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(ChooseModelDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(320, 0));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_3->setScaledContents(true);

        verticalLayout_3->addWidget(label_3);

        radioButton_3 = new QRadioButton(ChooseModelDialog);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_3->addWidget(radioButton_3);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(ChooseModelDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(320, 0));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_5->setScaledContents(true);

        verticalLayout_5->addWidget(label_5);

        radioButton_5 = new QRadioButton(ChooseModelDialog);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_5->addWidget(radioButton_5);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(ChooseModelDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(320, 0));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_4->setScaledContents(true);

        verticalLayout_4->addWidget(label_4);

        radioButton_4 = new QRadioButton(ChooseModelDialog);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_4->addWidget(radioButton_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(ChooseModelDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(320, 0));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_6->setScaledContents(true);

        verticalLayout_6->addWidget(label_6);

        radioButton_6 = new QRadioButton(ChooseModelDialog);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_6->addWidget(radioButton_6);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(ChooseModelDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(90, 30));
        pushButtonCancel->setFont(font);

        horizontalLayout_3->addWidget(pushButtonCancel);

        pushButtonOk = new QPushButton(ChooseModelDialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(90, 30));
        pushButtonOk->setFont(font);

        horizontalLayout_3->addWidget(pushButtonOk);


        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_9->addLayout(verticalLayout_8);


        retranslateUi(ChooseModelDialog);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), ChooseModelDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChooseModelDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseModelDialog)
    {
        ChooseModelDialog->setWindowTitle(QCoreApplication::translate("ChooseModelDialog", "Dialog", nullptr));
        label->setText(QString());
        radioButton_1->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\344\270\200", nullptr));
        label_2->setText(QString());
        radioButton_2->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\344\272\214", nullptr));
        label_3->setText(QString());
        radioButton_3->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\344\270\211", nullptr));
        label_5->setText(QString());
        radioButton_5->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\345\233\233", nullptr));
        label_4->setText(QString());
        radioButton_4->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\344\272\224", nullptr));
        label_6->setText(QString());
        radioButton_6->setText(QCoreApplication::translate("ChooseModelDialog", "\346\250\241\346\235\277\345\205\255", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("ChooseModelDialog", "\345\217\226\346\266\210", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("ChooseModelDialog", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseModelDialog: public Ui_ChooseModelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEMODELDIALOG_H
