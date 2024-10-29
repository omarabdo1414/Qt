#include "system.h"
#include <QDateTime>
#include <QDebug>

System::System(QObject *parent)
    : QObject{parent},
    m_carLocked( true ),
    m_outdoorTemperature( 64 ),
    m_userName( "Omar" )
{
    m_curruntTimeTimer = new QTimer(this);
    m_curruntTimeTimer->setInterval( 500 );
    m_curruntTimeTimer->setSingleShot( true );

    connect( m_curruntTimeTimer, &QTimer::timeout, this, &System::curruntTimeTimerTimeout);

    curruntTimeTimerTimeout();
}

double System::outdoorTemperature() const
{
    return m_outdoorTemperature;
}

void System::setOutdoorTemperature(double newOutdoorTemperature)
{
    if (qFuzzyCompare(m_outdoorTemperature, newOutdoorTemperature))
        return;
    m_outdoorTemperature = newOutdoorTemperature;
    emit outdoorTemperatureChanged();
}

QString System::userName() const
{
    return m_userName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}

QString System::curruntTime() const
{
    return m_curruntTime;
}

void System::setCurruntTime(const QString &newCurruntTime)
{
    if (m_curruntTime == newCurruntTime)
        return;
    m_curruntTime = newCurruntTime;
    emit curruntTimeChanged();
}

void System::curruntTimeTimerTimeout()
{
    QDateTime dataTime;
    QString curruntTime = dataTime.currentDateTime().toString( "hh:mm ap");

    setCurruntTime(curruntTime);

    m_curruntTimeTimer->start();
}

bool System::carLocked() const {
    return m_carLocked;
}

void System::setCarLocked(bool newCarLocked){
    if(m_carLocked == newCarLocked)
        return;
    qDebug() << "I'm being called";
    m_carLocked = newCarLocked;
    emit carLockedChanged(m_carLocked);
}
