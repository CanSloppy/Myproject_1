#ifndef BIGPIC_H
#define BIGPIC_H

#include <QDateTime>
#include <QWidget>

namespace Ui {
class BigPic;
}

class BigPic : public QWidget
{
    Q_OBJECT

public:
    explicit BigPic(QWidget *parent = nullptr);
    ~BigPic();
    void paintEvent(QPaintEvent *event) override;
    void setValue(const QPixmap &pic,QString name,QDateTime datetime);

private:
    Ui::BigPic *ui;
};

#endif // BIGPIC_H
