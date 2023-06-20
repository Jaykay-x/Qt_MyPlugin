#include "MyPluginManager.h"
#include "PluginInterface/PluginBase.h"

#include <QDir>
#include <QPluginLoader>

/*
MyPluginManager::MyPluginManager(QObject *parent)
    : QObject{parent}
{

}
*/

MyPluginManager::MyPluginManager(QObject *parent)
    : QObject{parent}
{

}

MyPluginManager::~MyPluginManager()
{

    unloadPlugins();
}

void MyPluginManager::loadPlugins(const QString &path)
{
    QDir pluginsDir(path);
    foreach (QString fileName, pluginsDir.entryList(QDir::Files))
    {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = loader.instance();
        if (plugin)
        {
            PluginInterface *interface = qobject_cast<PluginInterface*>(plugin);
            if (interface)
            {
                m_plugins.append(interface);
                // 这里可以进行插件的初始化操作
            }
        }
    }
}

void MyPluginManager::unloadPlugins()
{
    qDeleteAll(m_plugins);
    m_plugins.clear();
}

QVector<PluginInterface *> MyPluginManager::getPlugins() const
{

    return m_plugins;
}
