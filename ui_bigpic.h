/********************************************************************************
** Form generated from reading UI file 'bigpic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGPIC_H
#define UI_BIGPIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BigPic
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelPic;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDate;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BigPic)
    {
        if (BigPic->objectName().isEmpty())
            BigPic->setObjectName(QString::fromUtf8("BigPic"));
        BigPic->resize(320, 240);
        verticalLayout_2 = new QVBoxLayout(BigPic);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelPic = new QLabel(BigPic);
        labelPic->setObjectName(QString::fromUtf8("labelPic"));
        labelPic->setMinimumSize(QSize(0, 180));
        labelPic->setScaledContents(true);

        verticalLayout->addWidget(labelPic);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(BigPic);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        QFont font;
        font.setPointSize(11);
        labelName->setFont(font);
        labelName->setScaledContents(false);

        horizontalLayout->addWidget(labelName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelDate = new QLabel(BigPic);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(labelDate);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(BigPic);

        QMetaObject::connectSlotsByName(BigPic);
    } // setupUi

    void retranslateUi(QWidget *BigPic)
    {
        BigPic->setWindowTitle(QCoreApplication::translate("BigPic", "Form", nullptr));
        labelPic->setText(QString());
        labelName->setText(QCoreApplication::translate("BigPic", "TextLabel", nullptr));
        labelDate->setText(QCoreApplication::translate("BigPic", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BigPic: public Ui_BigPic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGPIC_H
