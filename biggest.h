#ifndef BIGGEST_H
#define BIGGEST_H

#include <QWidget>

namespace Ui {
class Biggest;
}

class Biggest : public QWidget
{
    Q_OBJECT

public:
    explicit Biggest(QWidget *parent = nullptr);
    ~Biggest();
    void paintEvent(QPaintEvent *event) override;
    void setValue(const QPixmap &pic,QString lab,QString des,QString dpi);

private:
    Ui::Biggest *ui;
};

#endif // BIGGEST_H
