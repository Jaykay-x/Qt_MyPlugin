#ifndef MYPLUGINMANAGER_H
#define MYPLUGINMANAGER_H

#include <QObject>
#include <QVector>

class PluginInterface;

class MyPluginManager : public QObject
{
    Q_OBJECT

public:
    explicit MyPluginManager(QObject *parent = nullptr);
    ~MyPluginManager();

    void loadPlugins(const QString &path);
    void unloadPlugins();

    QVector<PluginInterface*> getPlugins() const;

private:
    QVector<PluginInterface*> m_plugins;
};

/* 2023-06-18 JK 原本就ok的代码
class MyPluginManager : public QObject
{
    Q_OBJECT
public:
    explicit MyPluginManager(QObject *parent = nullptr);

signals:

};
*/

#endif // MYPLUGINMANAGER_H
