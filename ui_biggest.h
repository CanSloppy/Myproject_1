/********************************************************************************
** Form generated from reading UI file 'biggest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGGEST_H
#define UI_BIGGEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Biggest
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelPic;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labellab;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDpi;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelDes;

    void setupUi(QWidget *Biggest)
    {
        if (Biggest->objectName().isEmpty())
            Biggest->setObjectName(QString::fromUtf8("Biggest"));
        Biggest->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(Biggest);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPic = new QLabel(Biggest);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setMinimumSize(QSize(0, 230));
        labelPic->setMaximumSize(QSize(16777215, 16777215));
        labelPic->setScaledContents(true);

        verticalLayout_2->addWidget(labelPic);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Biggest);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(54, 54));
        label->setMaximumSize(QSize(54, 54));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labellab = new QLabel(Biggest);
        labellab->setObjectName(QString::fromUtf8("labellab"));
        QFont font;
        font.setPointSize(11);
        labellab->setFont(font);

        horizontalLayout->addWidget(labellab);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelDpi = new QLabel(Biggest);
        labelDpi->setObjectName(QString::fromUtf8("labelDpi"));
        labelDpi->setMinimumSize(QSize(60, 0));
        labelDpi->setTextFormat(Qt::AutoText);
        labelDpi->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelDpi);

        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        labelDes = new QLabel(Biggest);
        labelDes->setObjectName(QString::fromUtf8("labelDes"));
        QFont font1;
        font1.setPointSize(10);
        labelDes->setFont(font1);

        verticalLayout->addWidget(labelDes);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Biggest);

        QMetaObject::connectSlotsByName(Biggest);
    } // setupUi

    void retranslateUi(QWidget *Biggest)
    {
        Biggest->setWindowTitle(QCoreApplication::translate("Biggest", "Form", nullptr));
        labelPic->setText(QString());
        label->setText(QString());
        labellab->setText(QCoreApplication::translate("Biggest", "TextLabel", nullptr));
        labelDpi->setText(QCoreApplication::translate("Biggest", "TextLabel", nullptr));
        labelDes->setText(QCoreApplication::translate("Biggest", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Biggest: public Ui_Biggest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGGEST_H
