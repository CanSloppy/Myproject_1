/********************************************************************************
** Form generated from reading UI file 'restoredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREDIALOG_H
#define UI_RESTOREDIALOG_H

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

class Ui_RestoreDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditPwd;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonPath;
    QLabel *label_3;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *RestoreDialog)
    {
        if (RestoreDialog->objectName().isEmpty())
            RestoreDialog->setObjectName(QString::fromUtf8("RestoreDialog"));
        RestoreDialog->resize(400, 250);
        QFont font;
        font.setPointSize(10);
        RestoreDialog->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(RestoreDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RestoreDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        lineEditPwd = new QLineEdit(RestoreDialog);
        lineEditPwd->setObjectName(QString::fromUtf8("lineEditPwd"));
        lineEditPwd->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(lineEditPwd);

        label_2 = new QLabel(RestoreDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditPath = new QLineEdit(RestoreDialog);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));
        lineEditPath->setEnabled(false);
        lineEditPath->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(lineEditPath);

        pushButtonPath = new QPushButton(RestoreDialog);
        pushButtonPath->setObjectName(QString::fromUtf8("pushButtonPath"));
        pushButtonPath->setMinimumSize(QSize(0, 30));
        pushButtonPath->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(pushButtonPath);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(RestoreDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        progressBar = new QProgressBar(RestoreDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(RestoreDialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(90, 30));

        horizontalLayout_2->addWidget(pushButtonCancel);

        pushButtonOk = new QPushButton(RestoreDialog);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(90, 30));

        horizontalLayout_2->addWidget(pushButtonOk);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(RestoreDialog);

        QMetaObject::connectSlotsByName(RestoreDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreDialog)
    {
        RestoreDialog->setWindowTitle(QCoreApplication::translate("RestoreDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RestoreDialog", "\345\267\245\347\250\213\345\257\206\347\240\201", nullptr));
        lineEditPwd->setText(QString());
        label_2->setText(QCoreApplication::translate("RestoreDialog", "\345\267\245\347\250\213\350\267\257\345\276\204", nullptr));
        lineEditPath->setText(QString());
        pushButtonPath->setText(QCoreApplication::translate("RestoreDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("RestoreDialog", "\345\267\245\347\250\213\346\201\242\345\244\215\344\270\255", nullptr));
        progressBar->setFormat(QCoreApplication::translate("RestoreDialog", "%p%", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("RestoreDialog", "\345\217\226\346\266\210", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("RestoreDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestoreDialog: public Ui_RestoreDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREDIALOG_H
