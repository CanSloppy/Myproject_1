#ifndef RESTOREDIALOG_H
#define RESTOREDIALOG_H

#include <QDialog>

namespace Ui {
class RestoreDialog;
}

class RestoreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RestoreDialog(QWidget *parent = nullptr);
    ~RestoreDialog();

private slots:

    void on_pushButtonPath_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonOk_clicked();

private:
    Ui::RestoreDialog *ui;
};

#endif // RESTOREDIALOG_H
