#ifndef PLUGINBASE_H
#define PLUGINBASE_H

#include <QObject>

class PluginInterface
{
public:
    virtual ~PluginInterface(){}

    /*
    virtual void Init()  = 0;
    virtual void Register() = 0;
    virtual void Run() = 0;
    virtual void Reset() =0;
    */

    virtual QString name() const = 0;
    virtual QString version() const = 0;
    virtual void execute() = 0;
};

#define PluginInterface_iid "com.example.PluginInterface"

Q_DECLARE_INTERFACE(PluginInterface, PluginInterface_iid)


#endif // PLUGINBASE_H
