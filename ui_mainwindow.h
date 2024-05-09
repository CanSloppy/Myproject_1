/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionFix;
    QAction *actionDel;
    QAction *actionExit;
    QAction *actionRestore;
    QAction *actionBackups;
    QAction *actionPackage;
    QAction *actionBiggest;
    QAction *actionBig;
    QAction *actionSmall;
    QAction *actionList;
    QAction *actionDetail;
    QAction *actionRun;
    QAction *actionWrite;
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_9;
    QAction *actionPic;
    QWidget *centralwidget;
    QTableView *tableView;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionFix = new QAction(MainWindow);
        actionFix->setObjectName(QString::fromUtf8("actionFix"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/fix.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFix->setIcon(icon2);
        actionDel = new QAction(MainWindow);
        actionDel->setObjectName(QString::fromUtf8("actionDel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/del.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDel->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionRestore = new QAction(MainWindow);
        actionRestore->setObjectName(QString::fromUtf8("actionRestore"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/restore.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestore->setIcon(icon5);
        actionBackups = new QAction(MainWindow);
        actionBackups->setObjectName(QString::fromUtf8("actionBackups"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/backups.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackups->setIcon(icon6);
        actionPackage = new QAction(MainWindow);
        actionPackage->setObjectName(QString::fromUtf8("actionPackage"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/package.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPackage->setIcon(icon7);
        actionBiggest = new QAction(MainWindow);
        actionBiggest->setObjectName(QString::fromUtf8("actionBiggest"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/biggest.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBiggest->setIcon(icon8);
        actionBig = new QAction(MainWindow);
        actionBig->setObjectName(QString::fromUtf8("actionBig"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/big.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBig->setIcon(icon9);
        actionSmall = new QAction(MainWindow);
        actionSmall->setObjectName(QString::fromUtf8("actionSmall"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/small.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSmall->setIcon(icon10);
        actionList = new QAction(MainWindow);
        actionList->setObjectName(QString::fromUtf8("actionList"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionList->setIcon(icon11);
        actionDetail = new QAction(MainWindow);
        actionDetail->setObjectName(QString::fromUtf8("actionDetail"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/detail.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDetail->setIcon(icon12);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QString::fromUtf8("actionRun"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon13);
        actionWrite = new QAction(MainWindow);
        actionWrite->setObjectName(QString::fromUtf8("actionWrite"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/image/Write.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWrite->setIcon(icon14);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        actionPic = new QAction(MainWindow);
        actionPic->setObjectName(QString::fromUtf8("actionPic"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(140, 70, 256, 192));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(140, 260, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_4);
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu->addAction(action_7);
        menu->addAction(actionPic);
        menu->addSeparator();
        menu->addAction(action_9);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionFix);
        toolBar->addAction(actionDel);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionRestore);
        toolBar->addAction(actionBackups);
        toolBar->addAction(actionPackage);
        toolBar->addSeparator();
        toolBar->addAction(actionBiggest);
        toolBar->addAction(actionBig);
        toolBar->addAction(actionSmall);
        toolBar->addAction(actionList);
        toolBar->addAction(actionDetail);
        toolBar->addSeparator();
        toolBar->addAction(actionRun);
        toolBar->addAction(actionWrite);
        toolBar->addAction(actionPic);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        actionFix->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        actionDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionRestore->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
        actionBackups->setText(QCoreApplication::translate("MainWindow", "\345\244\207\344\273\275", nullptr));
        actionPackage->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\214\205", nullptr));
        actionBiggest->setText(QCoreApplication::translate("MainWindow", "\350\266\205\345\244\247", nullptr));
        actionBig->setText(QCoreApplication::translate("MainWindow", "\345\244\247\345\233\276", nullptr));
        actionSmall->setText(QCoreApplication::translate("MainWindow", "\345\260\217\345\233\276", nullptr));
        actionList->setText(QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250", nullptr));
        actionDetail->setText(QCoreApplication::translate("MainWindow", "\350\257\246\347\273\206", nullptr));
        actionRun->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214", nullptr));
        actionWrite->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\217\221", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\267\245\347\250\213", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\267\245\347\250\213", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\346\234\200\350\277\221\344\275\277\347\224\250\346\226\207\344\273\266", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionPic->setText(QCoreApplication::translate("MainWindow", "\350\257\206\345\210\253\345\233\276\347\211\207", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\267\245\347\250\213", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
