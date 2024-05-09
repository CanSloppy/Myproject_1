#ifndef NEWDIALOG_H
#define NEWDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QBoxLayout>
#include <QLineEdit>
#include "projectinfo.h"

namespace Ui {
class NewDialog;
}

class NewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewDialog(QWidget *parent = nullptr);
    ~NewDialog();
    ProjectInfo* getPorjectInfo() const;

private slots:

    void on_radioButtonModel_toggled(bool checked);

    void on_radioButtonNew_toggled(bool checked);

    void button_model_clicked();

    void on_pushButtonPath_clicked();

    void on_pushButton_Ok_clicked();

private:
    Ui::NewDialog *ui;
    QLabel *label_model;
    QHBoxLayout *layout;
    QPushButton *button_model;
    QLineEdit *lineedit_model;
    ProjectInfo *info;
};

#endif // NEWDIALOG_H
