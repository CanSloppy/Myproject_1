#ifndef PROJECTINFO_H
#define PROJECTINFO_H

#include <QObject>
#include <QDateTime>
#include <QPixmap>

class ProjectInfo : public QObject
{
    Q_OBJECT
public:
    explicit ProjectInfo(QObject *parent = nullptr);
    void initInfoValue(QString name,QString path, QString dpi,QString describe);
    QString getId()const;
    QString getName()const;
    QString getPath()const;
    QString getDpi()const;
    QString getVersion()const;
    QDateTime getFixtime()const;
    const QPixmap getPixmap()const;
    QString getDescribe()const;
    QString getLab()const;

signals:

private:
    QString m_id;
    QString m_name;
    QString m_path;
    QString m_dpi;
    QString m_version;
    QDateTime m_fixtime;
    QPixmap *m_pixmap;
    QString m_describe;
    QString m_lab;
};

#endif // PROJECTINFO_H
