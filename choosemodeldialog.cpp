#include "choosemodeldialog.h"
#include "ui_choosemodeldialog.h"

ChooseModelDialog::ChooseModelDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseModelDialog)
{
    ui->setupUi(this);
    group = new QButtonGroup(this);
    group->addButton(ui->radioButton_1);
    group->addButton(ui->radioButton_2);
    group->addButton(ui->radioButton_3);
    group->addButton(ui->radioButton_4);
    group->addButton(ui->radioButton_5);
    group->addButton(ui->radioButton_6);
}

ChooseModelDialog::~ChooseModelDialog()
{
    delete ui;
}

void ChooseModelDialog::on_pushButtonOk_clicked()
{
    model_name = group->checkedButton()->text();
    return accept();
}

QString ChooseModelDialog::getModelName() const
{
    return model_name;
}
