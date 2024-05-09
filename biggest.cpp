#include "biggest.h"
#include "ui_biggest.h"
#include <QPen>
#include <QPainter>

Biggest::Biggest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Biggest)
{
    ui->setupUi(this);
}

Biggest::~Biggest()
{
    delete ui;
}

void Biggest::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter p(this);
    QPen pen;
    pen.setColor(QColor("gray"));
    pen.setWidth(3);
    pen.setJoinStyle(Qt::RoundJoin);
    pen.setCapStyle(Qt::RoundCap);
    p.setPen(pen);
    p.drawRect(0, 0, width() -1, height() -1); //绘制边框
}

void Biggest::setValue(const QPixmap &pic, QString lab, QString des, QString dpi)
{
    ui->labelPic->setPixmap(pic);
    ui->labellab->setText(lab);
    ui->labelDes->setText(des);
    ui->labelDpi->setText(dpi);
    ui->label->setPixmap(QPixmap(":/image/pic.ico"));
}
