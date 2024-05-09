#include "packagedialog.h"
#include "ui_packagedialog.h"
#include <QFileDialog>

PackageDialog::PackageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PackageDialog)
{
    ui->setupUi(this);
    setWindowTitle("工程打包");
}

PackageDialog::~PackageDialog()
{
    delete ui;
}

void PackageDialog::on_pushButton_Ok_clicked()
{
    return accept();
}

void PackageDialog::on_pushButton_Cancel_clicked()
{
    return reject();
}

void PackageDialog::on_pushButtonPath_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this,
                                      "选择存放路径",
                                      QDir::currentPath());
    ui->lineEditPath_savepath->setText(path);
}

void PackageDialog::on_pushButtonPath_2_clicked()
{
    QString path = QFileDialog::getExistingDirectory(this,
                                      "选择默认路径",
                                      QDir::currentPath());
    ui->lineEditPath->setText(path);
}
