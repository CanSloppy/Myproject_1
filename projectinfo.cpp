#include "projectinfo.h"

ProjectInfo::ProjectInfo(QObject *parent) : QObject(parent)
{
    m_id = "B70356A5-56D-4FE4-AE12-EB5FB52F530B";
    m_version = "23.1.0.000";
    m_fixtime = QDateTime::currentDateTime();
    m_pixmap = new QPixmap(":/image/1.jpg");
    m_lab = "云上实验室";
}

void ProjectInfo::initInfoValue(QString name, QString path, QString dpi, QString describe)
{
    m_name = name;
    m_path= path;
    m_dpi = dpi;
    m_describe = describe;
}

QString ProjectInfo::getId() const
{
    return m_id;
}

QString ProjectInfo::getName() const
{
    return m_name;
}

QString ProjectInfo::getPath() const
{
    return m_path;
}

QString ProjectInfo::getDpi() const
{
    return m_dpi;
}

QString ProjectInfo::getVersion() const
{
    return m_version;
}

QDateTime ProjectInfo::getFixtime() const
{
    return m_fixtime;
}

const QPixmap ProjectInfo::getPixmap() const
{
    return *m_pixmap;
}

QString ProjectInfo::getDescribe() const
{
    return m_describe;
}

QString ProjectInfo::getLab() const
{
    return m_lab;
}
