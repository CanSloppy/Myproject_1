#include "mainwindow.h"
#include "newdialog.h"
#include "ui_mainwindow.h"
#include "biggest.h"
#include "packagedialog.h"
#include "bigpic.h"
#include "restoredialog.h"
#include <QFileDialog>
#include <QPalette>
#include <QDebug>
#include "ocr.h"
#include "Json/json.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery> 
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    layout = new QStackedLayout();
    layout->addWidget(ui->tableView);
    layout->addWidget(ui->listWidget);
    ui->centralwidget->setLayout(layout);
    setWindowTitle("工程管理器");
    ui->tableView->verticalHeader()->hide();
    ui->listWidget->setViewMode(QListView::IconMode);
    ui->listWidget->setDragEnabled(false);
    ui->listWidget->setSpacing(10);
    ui->listWidget->setFlow(QListView::LeftToRight);
    ui->listWidget->setResizeMode(QListView::Adjust);
    m_model = new QStandardItemModel();
    initDetailTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initDetailTable()
{
    QStringList list = {"工程ID","工程名称","路径","分辨率","版本","修改日期","描述"};
    m_model->clear();
    m_model->setHorizontalHeaderLabels(list);
    ui->tableView->setModel(m_model);
    updateTable();
}

void MainWindow::initListTable()
{
    QStringList list = {"工程ID","工程名称","路径","描述"};
    m_model->clear();
    m_model->setHorizontalHeaderLabels(list);
    ui->tableView->setModel(m_model);
    updateTable();
}

void MainWindow::updateTable()
{
    if(m_infolist.count() == 0)
    {
        return;
    }
    for(int i = 0; i < m_infolist.count();i++)
    {
        insertModel(m_infolist[i]);
    }
}

void MainWindow::insertModel(ProjectInfo *info)
{
    QList<QStandardItem*> itemList;
    if(m_model->horizontalHeaderItem(3)->text() == "分辨率")
    {
        for(int j = 0;j < 7 ;j++)
        {
            QStandardItem *item = new QStandardItem;
            switch (j) {
            case 0: item->setText(info->getId());
                break;
            case 1: item->setText(info->getName());
                break;
            case 2: item->setText(info->getPath());
                break;
            case 3: item->setText(info->getDpi());
                break;
            case 4: item->setText(info->getVersion());
                break;
            case 5: item->setText(info->getFixtime().toString("yyyy-MM-dd hh:mm:ss"));
                break;
            case 6: item->setText(info->getDescribe());
                break;
            }
            itemList.append(item);
        }
        m_model->appendRow(itemList);
    }
    else
    {
        for(int j = 0;j < 4 ;j++)
        {
            QStandardItem *item = new QStandardItem;
            switch (j) {
            case 0: item->setText(info->getId());
                break;
            case 1: item->setText(info->getName());
                break;
            case 2: item->setText(info->getPath());
                break;
            case 3: item->setText(info->getDescribe());
                break;
            }
            itemList.append(item);
        }
        m_model->appendRow(itemList);
    }
}

void MainWindow::initBiggestList()
{
    ui->listWidget->clear();
    isBiggest = true;
    insertListWidegt();
}

void MainWindow::initBigList()
{
    ui->listWidget->clear();
    isBiggest = false;
    insertListWidegt();
}

void MainWindow::insertListWidegt()
{
    if(isBiggest)
    {
        for(int i = 0;i < m_infolist.count();i++)
        {
            Biggest *biggest = new Biggest(ui->listWidget);
            biggest->setValue(m_infolist[i]->getPixmap(),
                              m_infolist[i]->getLab(),
                              m_infolist[i]->getDescribe(),
                              m_infolist[i]->getDpi());
            QListWidgetItem *aItem = new QListWidgetItem(ui->listWidget);
            aItem->setFlags(Qt::ItemIsSelectable);
            ui->listWidget->addItem(aItem);
            aItem->setSizeHint(QSize(400,300));
            ui->listWidget->setItemWidget(aItem,(QWidget*)biggest);
        }
    }
    else
    {
        for(int i = 0;i < m_infolist.count();i++)
        {
            BigPic *bigpic = new BigPic(ui->listWidget);
            bigpic->setValue(m_infolist[i]->getPixmap(),
                              m_infolist[i]->getName(),
                              m_infolist[i]->getFixtime());
            QListWidgetItem *aItem = new QListWidgetItem(ui->listWidget);
            aItem->setFlags(Qt::ItemIsSelectable);
            ui->listWidget->addItem(aItem);
            aItem->setSizeHint(QSize(320,240));
            ui->listWidget->setItemWidget(aItem,(QWidget*)bigpic);
        }
    }
}

void MainWindow::checkPic(QString picname)
{
    //连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");    //数据库主机名
    db.setDatabaseName("CanSloppy");    //数据库名
    db.setUserName("root");        //数据库用户名
    db.setPassword("211335");        //数据库密码
    /*if (db.open())
    {
        QMessageBox::warning(NULL, "error", "数据库连接成功", QMessageBox::Ok);
    }
    else
    {
        QMessageBox::warning(NULL, "error", "数据库连接失败", QMessageBox::Ok);
    }*/
    //设置APPID/AK/SK
    std::string app_id = "68527577";
    std::string api_key = "YB4cePNSDHxIO4jV9cdQ3XET";
    std::string secret_key = "cWwJS1kDwlUxIP5bA1BHyohfYwjGOnLw";

    aip::Ocr client(app_id, api_key, secret_key);
    Json::Value result;
    std::string image;

    //获取图片数据的二进制字符串
    qDebug() << picname;
    char* ch;
    QByteArray ba = picname.toLatin1(); // must
    ch = ba.data();
    aip::get_file_content(ch, &image);

#if 1
    // 调用通用文字识别, 图片参数为本地图片
    result = client.general_basic(image, aip::null);

#else
    //有可选参数，即options不为空
    std::map<std::string, std::string> options;
    options["language_type"] = "CHN_ENG";      //识别语言类型：中英文结合
    options["detect_direction"] = "true";      //是否检测图像朝向
    options["detect_language"] = "true";       //是否检测语言
    options["probability"] = "true";           //是否返回识别结果中每一行的置信度
    //带参数调用通用文字识别, 图片参数为本地图片
    result = client.general_basic(image, options);
#endif 

    //通用文字识别 返回示例
/*
    {
    "log_id": 2471272194,         //int64
    "words_result_num": 2,        //int64
    "words_result":

    [
        {"words": " TSINGTAO"},
        {"words": "青島睥酒"}
    ]
    }
*/
    Json::FastWriter fastWrite;
    std::string output = fastWrite.write(result);

    SetConsoleOutputCP(CP_UTF8);       //指定控制台输出采用UTF-8编码，不然会有乱码

    //解析json
    if (result.isObject())
    {
        Json::Value::Members keys = result.getMemberNames();  //获取key值集合
        int a = 0;
        QList<std::string> list;
        for (int i = 0; i < keys.size(); i++)
        {
            std::string key = keys[i];           //获取对应key
            Json::Value item = result[key];      //通过key拿Value

            //判断Value类型
            if (item.isInt64())
            {
                std::cout << key << ":" << item.asInt64() << std::endl;
            }
            else if (item.isBool())
            {
                std::cout << key << ":" << item.asBool() << std::endl;
            }
            else if (item.isString())
            {
                std::cout << key << ":" << item.asString() << std::endl;
            }
            else if (item.isArray())       //数组
            {
                int size = item.size();
                for (int j = 5; j < size; j++)
                {
                    Json::Value subValue = item[j];
                    Json::Value::Members obj = subValue.getMemberNames();     //每个项包含的对象列表

                    int objSize = obj.size();
                    for (int k = 0; k < objSize; k++)   //取出对象列表内对象
                    {
                        std::string subKey = obj[k];
                        std::string value = subValue[subKey].asString();
                        list.append(value);
                    }
                }

            }
        }
        //开始mysql插入
        db.open();
        for (int i = 0; i < list.count(); i += 5)
        {
            QString s = QString("INSERT INTO work VALUES('%1',%2,'%3','%4','%5');").
                arg(QString::fromStdString(list[i])).
                arg(QString::fromStdString(list[i + 1])).
                arg(QString::fromStdString(list[i + 2])).
                arg(QString::fromStdString(list[i + 3])).
                arg(QString::fromStdString(list[i + 4]));
            QSqlQuery query;
            if (query.exec(s))
            {
                QMessageBox::warning(NULL, "error", "数据插入成功", QMessageBox::Ok);
            }
            else {
                QMessageBox::warning(NULL, "error", "数据插入失败", QMessageBox::Ok);
            }
            qDebug() << s;
        }
        db.close();
    }
}

void MainWindow::on_actionNew_triggered()
{
    NewDialog * newdialog = new NewDialog(this);
    int res = newdialog->exec();
    if(res == QDialog::Accepted)
    {
        m_infolist.push_back(newdialog->getPorjectInfo());
        insertModel(newdialog->getPorjectInfo());
        if(isBiggest)
        {
            initBiggestList();
        }
        initBigList();
    }
}

void MainWindow::on_actionList_triggered()
{
    layout->setCurrentIndex(0);
    initListTable();
}

void MainWindow::on_actionDetail_triggered()
{
    layout->setCurrentIndex(0);
    initDetailTable();
}

void MainWindow::on_actionBiggest_triggered()
{
    layout->setCurrentIndex(1);
    initBiggestList();
}

void MainWindow::on_actionBig_triggered()
{
    layout->setCurrentIndex(1);
    initBigList();
}

void MainWindow::on_actionRestore_triggered()
{
    RestoreDialog * restoredialog = new RestoreDialog(this);
    int res = restoredialog->exec();
    if(res == QDialog::Accepted)
    {
        //TODO
    }
}

void MainWindow::on_actionPackage_triggered()
{
    PackageDialog * packagedialog = new PackageDialog(this);
    int res = packagedialog->exec();
    if(res == QDialog::Accepted)
    {
        //TODO
    }
}

void MainWindow::on_actionPic_triggered()
{
    QString path = QFileDialog::getOpenFileName(this,
                                                "选择一个图片",
                                                QDir::currentPath(),
                                                "图片文件(*.png *.xpm *.jpg)");
    if (path != NULL)
    {
        //if(db.open())
        //{
        //    QMessageBox::warning(NULL,"win","数据库连接成功",QMessageBox::Ok);
        //}else{
        //    QMessageBox::warning(NULL,"error","数据库连接失败",QMessageBox::Ok);
        //}
        checkPic(path);
    }
}

