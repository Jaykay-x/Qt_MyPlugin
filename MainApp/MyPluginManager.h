#ifndef MYPLUGINMANAGER_H
#define MYPLUGINMANAGER_H

#include <QObject>

class MyPluginManager : public QObject
{
    Q_OBJECT
public:
    explicit MyPluginManager(QObject *parent = nullptr);

signals:

};

#endif // MYPLUGINMANAGER_H
