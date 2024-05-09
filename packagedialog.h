#ifndef PACKAGEDIALOG_H
#define PACKAGEDIALOG_H

#include <QDialog>

namespace Ui {
class PackageDialog;
}

class PackageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PackageDialog(QWidget *parent = nullptr);
    ~PackageDialog();

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButtonPath_clicked();

    void on_pushButtonPath_2_clicked();

private:
    Ui::PackageDialog *ui;
};

#endif // PACKAGEDIALOG_H
