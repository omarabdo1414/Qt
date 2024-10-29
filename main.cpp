#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "Controllers/system.h"
#include "Controllers/hvachandler.h"
#include "Controllers/audiocontroller.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<System>("System", 1, 0, "System");
    HVACHandler m_driverHVACHandler;
    HVACHandler m_passengerHVACHandler;
    AudioController m_audioController;

    QQmlApplicationEngine engine;
    QQmlContext * context = engine.rootContext();
    context->setContextProperty("driverHVAC", &m_driverHVACHandler);
    context->setContextProperty("passengerHVAC", &m_passengerHVACHandler);
    context->setContextProperty("audioController", &m_audioController);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Tesla_Infotanment", "Main");

    return app.exec();
}
