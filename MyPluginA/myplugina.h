#ifndef MYPLUGINA_H
#define MYPLUGINA_H

#include "MyPluginA_global.h"



class MYPLUGINA_EXPORT MyPluginA : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
    Q_PLUGIN_METADATA(IID "PluginInterface_iid")
public:
    explicit MyPluginA(QObject *parent = nullptr);
    QString name() const override;
    QString version() const override;
    void execute() override;
    //MyPluginA();
};



#endif // MYPLUGINA_H
