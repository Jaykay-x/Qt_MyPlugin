#ifndef MYPLUGINA_GLOBAL_H
#define MYPLUGINA_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QObject>
#include ".././MainApp/PluginInterface/PluginBase.h"

#if defined(MYPLUGINA_LIBRARY)
#  define MYPLUGINA_EXPORT Q_DECL_EXPORT
#else
#  define MYPLUGINA_EXPORT Q_DECL_IMPORT
#endif

#endif // MYPLUGINA_GLOBAL_H
