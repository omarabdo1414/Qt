#include "audiocontroller.h"

AudioController::AudioController(QObject *parent)
    : QObject{parent}, m_volumLevel(20)
{}

int AudioController::volumLevel() const
{
    return m_volumLevel;
}

void AudioController::setVolumLevel(int newVolumLevel)
{
    if (m_volumLevel == newVolumLevel)
        return;
    m_volumLevel = newVolumLevel;
    emit volumLevelChanged();
}

void AudioController::incrementVolumLevel(const int &value)
{
    int newVolum = m_volumLevel + value;

    if( newVolum <= 0)
        newVolum = 0;

    if( newVolum >= 100 )
        newVolum = 100;

    setVolumLevel(newVolum);
}
