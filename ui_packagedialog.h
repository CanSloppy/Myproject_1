/********************************************************************************
** Form generated from reading UI file 'packagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGEDIALOG_H
#define UI_PACKAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PackageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_all;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditPath_savepath;
    QPushButton *pushButtonPath_2;
    QLabel *label_2;
    QLineEdit *lineEditTitle;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonPath;
    QLabel *label_7;
    QLineEdit *lineEdit_defaultPath;
    QLabel *label_4;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *PackageDialog)
    {
        if (PackageDialog->objectName().isEmpty())
            PackageDialog->setObjectName(QString::fromUtf8("PackageDialog"));
        PackageDialog->resize(484, 358);
        verticalLayout = new QVBoxLayout(PackageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_all = new QVBoxLayout();
        verticalLayout_all->setObjectName(QString::fromUtf8("verticalLayout_all"));
        label = new QLabel(PackageDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        verticalLayout_all->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEditPath_savepath = new QLineEdit(PackageDialog);
        lineEditPath_savepath->setObjectName(QString::fromUtf8("lineEditPath_savepath"));
        lineEditPath_savepath->setEnabled(false);
        lineEditPath_savepath->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(lineEditPath_savepath);

        pushButtonPath_2 = new QPushButton(PackageDialog);
        pushButtonPath_2->setObjectName(QString::fromUtf8("pushButtonPath_2"));
        pushButtonPath_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(pushButtonPath_2);


        verticalLayout_all->addLayout(horizontalLayout_5);

        label_2 = new QLabel(PackageDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_all->addWidget(label_2);

        lineEditTitle = new QLineEdit(PackageDialog);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));
        lineEditTitle->setMinimumSize(QSize(0, 30));

        verticalLayout_all->addWidget(lineEditTitle);

        label_3 = new QLabel(PackageDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_all->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditPath = new QLineEdit(PackageDialog);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));
        lineEditPath->setEnabled(false);
        lineEditPath->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(lineEditPath);

        pushButtonPath = new QPushButton(PackageDialog);
        pushButtonPath->setObjectName(QString::fromUtf8("pushButtonPath"));
        pushButtonPath->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(pushButtonPath);


        verticalLayout_all->addLayout(horizontalLayout_2);

        label_7 = new QLabel(PackageDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_all->addWidget(label_7);

        lineEdit_defaultPath = new QLineEdit(PackageDialog);
        lineEdit_defaultPath->setObjectName(QString::fromUtf8("lineEdit_defaultPath"));
        lineEdit_defaultPath->setMinimumSize(QSize(0, 30));

        verticalLayout_all->addWidget(lineEdit_defaultPath);

        label_4 = new QLabel(PackageDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_all->addWidget(label_4);

        progressBar = new QProgressBar(PackageDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);

        verticalLayout_all->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Cancel = new QPushButton(PackageDialog);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(pushButton_Cancel);

        pushButton_Ok = new QPushButton(PackageDialog);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(pushButton_Ok);


        verticalLayout_all->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_all);


        retranslateUi(PackageDialog);

        QMetaObject::connectSlotsByName(PackageDialog);
    } // setupUi

    void retranslateUi(QDialog *PackageDialog)
    {
        PackageDialog->setWindowTitle(QCoreApplication::translate("PackageDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PackageDialog", "\345\256\211\350\243\205\345\214\205\345\255\230\346\224\276\350\267\257\345\276\204", nullptr));
        lineEditPath_savepath->setText(QCoreApplication::translate("PackageDialog", "E:\\Qt\\code\\Myproject1", nullptr));
        pushButtonPath_2->setText(QCoreApplication::translate("PackageDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("PackageDialog", "\345\256\211\350\243\205\345\214\205\350\277\220\350\241\214\346\227\266\347\252\227\345\217\243\346\240\207\351\242\230", nullptr));
        lineEditTitle->setText(QString());
        label_3->setText(QCoreApplication::translate("PackageDialog", "\345\256\211\350\243\205\345\214\205\350\277\220\350\241\214\346\227\266\347\274\272\347\234\201\345\256\211\350\243\205\350\267\257\345\276\204", nullptr));
        lineEditPath->setText(QCoreApplication::translate("PackageDialog", "E:\\Qt\\code\\Myproject1", nullptr));
        pushButtonPath->setText(QCoreApplication::translate("PackageDialog", "...", nullptr));
        label_7->setText(QCoreApplication::translate("PackageDialog", "\345\256\211\350\243\205\345\214\205\345\256\214\346\210\220\345\220\216\347\232\204\345\277\253\346\215\267\346\226\271\345\274\217\345\220\215", nullptr));
        lineEdit_defaultPath->setText(QString());
        label_4->setText(QCoreApplication::translate("PackageDialog", "\346\255\243\345\234\250\346\211\223\345\214\205", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("PackageDialog", "\345\217\226\346\266\210", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("PackageDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PackageDialog: public Ui_PackageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGEDIALOG_H
