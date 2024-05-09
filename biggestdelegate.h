#ifndef BIGGESTDELEGATE_H
#define BIGGESTDELEGATE_H
#include <QStyledItemDelegate>

class BiggestDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    BiggestDelegate(QObject *parent = 0);
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor,
                      QAbstractItemModel *model,
                      const QModelIndex &index) const override;

    void updateEditorGeometry(QWidget *editor,
                              const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};

#endif // BIGGESTDELEGATE_H
