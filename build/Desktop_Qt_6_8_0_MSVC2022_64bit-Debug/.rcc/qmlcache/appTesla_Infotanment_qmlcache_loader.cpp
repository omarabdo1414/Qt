#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _qt_qml_Tesla_Infotanment_Main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_BottomBar_BottomBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_RightScreen_RightScreen_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_LeftScreen_LeftScreen_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_RightScreen_NavigationSearchBar_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_BottomBar_HVACComponent_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_BottomBar_VolumController_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _qt_qml_Tesla_Infotanment_ui_BottomBar_VolumController_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/Main.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_Main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/BottomBar/BottomBar.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_BottomBar_BottomBar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/RightScreen/RightScreen.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_RightScreen_RightScreen_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/LeftScreen/LeftScreen.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_LeftScreen_LeftScreen_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/RightScreen/NavigationSearchBar.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_RightScreen_NavigationSearchBar_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/BottomBar/HVACComponent.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_BottomBar_HVACComponent_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/BottomBar/VolumController.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_BottomBar_VolumController_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/qt/qml/Tesla_Infotanment/ui/BottomBar/VolumController.qml"), &QmlCacheGeneratedCode::_qt_qml_Tesla_Infotanment_ui_BottomBar_VolumController_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appTesla_Infotanment)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appTesla_Infotanment))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appTesla_Infotanment)() {
    return 1;
}
