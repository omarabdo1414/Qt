#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>
#include <QTimer>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(double outdoorTemperature READ outdoorTemperature WRITE setOutdoorTemperature NOTIFY outdoorTemperatureChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString curruntTime READ curruntTime WRITE setCurruntTime NOTIFY curruntTimeChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    Q_INVOKABLE bool carLocked() const;
    Q_INVOKABLE void setCarLocked(bool newCarLocked);

    double outdoorTemperature() const;
    Q_INVOKABLE void setOutdoorTemperature(double newOutdoorTemperature);

    QString userName() const;
    Q_INVOKABLE void setUserName(const QString &newUserName);

    QString curruntTime() const;
    Q_INVOKABLE void setCurruntTime(const QString &newCurruntTime);

    void curruntTimeTimerTimeout();

signals:
    void carLockedChanged(bool carLocked);
    void outdoorTemperatureChanged();

    void userNameChanged();

    void curruntTimeChanged();

private:
    bool m_carLocked;
    double m_outdoorTemperature;
    QString m_userName;
    QString m_curruntTime;
    QTimer * m_curruntTimeTimer;
};



#endif // SYSTEM_H
