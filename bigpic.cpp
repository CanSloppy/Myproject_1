#include "bigpic.h"
#include "ui_bigpic.h"
#include <QPen>
#include <QPainter>

BigPic::BigPic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BigPic)
{
    ui->setupUi(this);
}

BigPic::~BigPic()
{
    delete ui;
}

void BigPic::paintEvent(QPaintEvent *event)
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

void BigPic::setValue(const QPixmap &pic, QString name, QDateTime datetime)
{
    ui->labelPic->setPixmap(pic);
    ui->labelName->setText(name);
    ui->labelDate->setText(datetime.date().toString("yyyy/MM/dd"));
}
