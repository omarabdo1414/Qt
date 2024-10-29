#ifndef AUDIOCONTROLLER_H
#define AUDIOCONTROLLER_H

#include <QObject>

class AudioController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int volumLevel READ volumLevel WRITE setVolumLevel NOTIFY volumLevelChanged FINAL)
public:
    explicit AudioController(QObject *parent = nullptr);

    int volumLevel() const;
    void setVolumLevel(int newVolumLevel);

    Q_INVOKABLE void incrementVolumLevel(const int & value);

signals:
    void volumLevelChanged();
private:
    int m_volumLevel;
};

#endif // AUDIOCONTROLLER_H
