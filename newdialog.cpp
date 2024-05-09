#include "newdialog.h"
#include "ui_newdialog.h"
#include "choosemodeldialog.h"
#include "projectinfo.h"
#include <QLabel>
#include <QBoxLayout>
#include <QLineEdit>
#include <QDebug>
#include <QPushButton>
#include <QFile>
#include <QFileDialog>


NewDialog::NewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("新建工程");
}

NewDialog::~NewDialog()
{
    delete ui;
}

ProjectInfo* NewDialog::getPorjectInfo() const
{
    return info;
}

void NewDialog::on_radioButtonModel_toggled(bool checked)
{
    if(!checked)
    {
        return;
    }
    label_model = new QLabel;
    label_model->setText("选择模板");
    QFont font = label_model->font();
    font.setPointSize(10);
    label_model->setFont(font);
    lineedit_model = new QLineEdit;
    lineedit_model->setEnabled(false);
    lineedit_model->setMinimumHeight(30);
    button_model = new QPushButton;
    connect(button_model,SIGNAL(clicked()),this,SLOT(button_model_clicked()));
    button_model->setMinimumHeight(30);
    button_model->resize(30,75);
    button_model->setText("...");
    layout = new QHBoxLayout;
    layout->addWidget(lineedit_model);
    layout->addWidget(button_model);
    ui->verticalLayout_all->insertWidget(2,label_model);
    ui->verticalLayout_all->insertLayout(3,layout);
}

void NewDialog::on_radioButtonNew_toggled(bool checked)
{
    if(!checked)
    {
        return;
    }
    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        delete child->widget();
    }
    delete layout;
    delete label_model;
}


void NewDialog::button_model_clicked()
{
    ChooseModelDialog *dia = new ChooseModelDialog();
    dia->setWindowTitle("选择模板");
    int res = dia->exec();
    if(res == Accepted)
    {
        lineedit_model->setText(dia->getModelName());
    }

}


void NewDialog::on_pushButtonPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this,
                                      "选择工程路径",
                                      QDir::currentPath());
    ui->lineEditPath->setText(path);
}

void NewDialog::on_pushButton_Ok_clicked()
{
    info = new ProjectInfo();
    info->initInfoValue(ui->lineEditName->text(),ui->lineEditPath->text(),
                        ui->lineEdit_Width->text()+"*"+ui->lineEdit_Height->text(),
                        ui->lineEdit_Des->text());
    return accept();
}
