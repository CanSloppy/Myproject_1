#include "restoredialog.h"
#include "ui_restoredialog.h"
#include <QFile>
#include <QFileDialog>

RestoreDialog::RestoreDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RestoreDialog)
{
    ui->setupUi(this);
    setWindowTitle("工程恢复");
}

RestoreDialog::~RestoreDialog()
{
    delete ui;
}

void RestoreDialog::on_pushButtonPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this,
                                      "选择工程路径",
                                      QDir::currentPath());
    ui->lineEditPath->setText(path);
}

void RestoreDialog::on_pushButtonCancel_clicked()
{
    return reject();
}

void RestoreDialog::on_pushButtonOk_clicked()
{
    return accept();
}
