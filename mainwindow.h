#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "projectinfo.h"
#include <QStackedLayout>
#include <QAbstractItemView>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initDetailTable();
    void initListTable();
    void updateTable();
    void insertModel(ProjectInfo * info);
    void initBiggestList();
    void initBigList();
    void insertListWidegt();
    void checkPic(QString picname);

private slots:
    void on_actionNew_triggered();

    void on_actionList_triggered();

    void on_actionDetail_triggered();

    void on_actionBiggest_triggered();

    void on_actionBig_triggered();

    void on_actionRestore_triggered();

    void on_actionPackage_triggered();

    void on_actionPic_triggered();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *m_model;
    QList<ProjectInfo*> m_infolist;
    QStackedLayout *layout;
    bool isBiggest = false;
};
#endif // MAINWINDOW_H
