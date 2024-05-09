#ifndef CHOOSEMODELDIALOG_H
#define CHOOSEMODELDIALOG_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class ChooseModelDialog;
}

class ChooseModelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseModelDialog(QWidget *parent = nullptr);
    ~ChooseModelDialog();
    QString getModelName()const;

private slots:
    void on_pushButtonOk_clicked();

private:
    Ui::ChooseModelDialog *ui;
    QButtonGroup *group;
    QString model_name;
};

#endif // CHOOSEMODELDIALOG_H
