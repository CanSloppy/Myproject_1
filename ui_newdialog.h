/********************************************************************************
** Form generated from reading UI file 'newdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWDIALOG_H
#define UI_NEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_all;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonNew;
    QRadioButton *radioButtonModel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonPath;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_Width;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_Height;
    QLabel *label_7;
    QLineEdit *lineEdit_Des;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *NewDialog)
    {
        if (NewDialog->objectName().isEmpty())
            NewDialog->setObjectName(QString::fromUtf8("NewDialog"));
        NewDialog->resize(455, 385);
        QFont font;
        font.setPointSize(10);
        NewDialog->setFont(font);
        verticalLayout_5 = new QVBoxLayout(NewDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_all = new QVBoxLayout();
        verticalLayout_all->setObjectName(QString::fromUtf8("verticalLayout_all"));
        label = new QLabel(NewDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_all->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonNew = new QRadioButton(NewDialog);
        radioButtonNew->setObjectName(QString::fromUtf8("radioButtonNew"));
        radioButtonNew->setChecked(true);

        horizontalLayout->addWidget(radioButtonNew);

        radioButtonModel = new QRadioButton(NewDialog);
        radioButtonModel->setObjectName(QString::fromUtf8("radioButtonModel"));

        horizontalLayout->addWidget(radioButtonModel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_all->addLayout(horizontalLayout);

        label_2 = new QLabel(NewDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout_all->addWidget(label_2);

        lineEditName = new QLineEdit(NewDialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(0, 30));

        verticalLayout_all->addWidget(lineEditName);

        label_3 = new QLabel(NewDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_all->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditPath = new QLineEdit(NewDialog);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));
        lineEditPath->setEnabled(false);
        lineEditPath->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(lineEditPath);

        pushButtonPath = new QPushButton(NewDialog);
        pushButtonPath->setObjectName(QString::fromUtf8("pushButtonPath"));
        pushButtonPath->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(pushButtonPath);


        verticalLayout_all->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(NewDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        comboBox = new QComboBox(NewDialog);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 30));
        comboBox->setEditable(true);

        verticalLayout->addWidget(comboBox);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(NewDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        lineEdit_Width = new QLineEdit(NewDialog);
        lineEdit_Width->setObjectName(QString::fromUtf8("lineEdit_Width"));
        lineEdit_Width->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(lineEdit_Width);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(NewDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        lineEdit_Height = new QLineEdit(NewDialog);
        lineEdit_Height->setObjectName(QString::fromUtf8("lineEdit_Height"));
        lineEdit_Height->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(lineEdit_Height);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_all->addLayout(horizontalLayout_4);

        label_7 = new QLabel(NewDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_all->addWidget(label_7);

        lineEdit_Des = new QLineEdit(NewDialog);
        lineEdit_Des->setObjectName(QString::fromUtf8("lineEdit_Des"));
        lineEdit_Des->setMinimumSize(QSize(0, 30));

        verticalLayout_all->addWidget(lineEdit_Des);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Cancel = new QPushButton(NewDialog);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(pushButton_Cancel);

        pushButton_Ok = new QPushButton(NewDialog);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        pushButton_Ok->setMinimumSize(QSize(90, 30));

        horizontalLayout_3->addWidget(pushButton_Ok);


        verticalLayout_all->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_all);


        retranslateUi(NewDialog);
        QObject::connect(pushButton_Cancel, SIGNAL(clicked()), NewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewDialog);
    } // setupUi

    void retranslateUi(QDialog *NewDialog)
    {
        NewDialog->setWindowTitle(QCoreApplication::translate("NewDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NewDialog", "\345\267\245\347\250\213\347\261\273\345\236\213", nullptr));
        radioButtonNew->setText(QCoreApplication::translate("NewDialog", "\346\226\260\345\273\272\345\267\245\347\250\213", nullptr));
        radioButtonModel->setText(QCoreApplication::translate("NewDialog", "\346\250\241\346\235\277\345\267\245\347\250\213", nullptr));
        label_2->setText(QCoreApplication::translate("NewDialog", "\345\267\245\347\250\213\345\220\215\347\247\260", nullptr));
        lineEditName->setText(QCoreApplication::translate("NewDialog", "Test", nullptr));
        label_3->setText(QCoreApplication::translate("NewDialog", "\345\267\245\347\250\213\350\267\257\345\276\204", nullptr));
        lineEditPath->setText(QCoreApplication::translate("NewDialog", "E:\\Qt\\code\\Myproject1", nullptr));
        pushButtonPath->setText(QCoreApplication::translate("NewDialog", "...", nullptr));
        label_4->setText(QCoreApplication::translate("NewDialog", "\345\210\206\350\276\250\347\216\207", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("NewDialog", "\350\207\252\345\256\232\344\271\211\345\210\206\350\276\250\347\216\207", nullptr));

        label_5->setText(QCoreApplication::translate("NewDialog", "\345\256\275\345\272\246(W)", nullptr));
        lineEdit_Width->setText(QCoreApplication::translate("NewDialog", "1920", nullptr));
        label_6->setText(QCoreApplication::translate("NewDialog", "\351\253\230\345\272\246(H)", nullptr));
        lineEdit_Height->setText(QCoreApplication::translate("NewDialog", "1080", nullptr));
        label_7->setText(QCoreApplication::translate("NewDialog", "\345\267\245\347\250\213\346\217\217\350\277\260", nullptr));
        lineEdit_Des->setText(QCoreApplication::translate("NewDialog", "\346\232\202\346\227\240", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("NewDialog", "\345\217\226\346\266\210", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("NewDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewDialog: public Ui_NewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDIALOG_H
