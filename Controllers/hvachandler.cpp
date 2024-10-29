#include "hvachandler.h"

HVACHandler::HVACHandler(QObject *parent)
    : QObject{parent},
    m_targetTemprature( 70 )
{}

int HVACHandler::targetTemprature() const
{
    return m_targetTemprature;
}

void HVACHandler::setTargetTemprature(int newTargetTemprature)
{
    if (m_targetTemprature == newTargetTemprature)
        return;
    m_targetTemprature = newTargetTemprature;
    emit targetTempratureChanged();
}

void HVACHandler::icreamentTargetTemprature(const int &value)
{
    int newTargetTemprature = m_targetTemprature + value;
    setTargetTemprature(newTargetTemprature);
}
