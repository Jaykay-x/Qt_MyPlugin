#ifndef MYPLUGINA_H
#define MYPLUGINA_H

#include "MyPluginA_global.h"


class MYPLUGINA_EXPORT MyPluginA : public QObject, public PluginInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginInterface)
public:
    explicit MyPluginA(QObject *parent = nullptr);
    QString name() const override;
    QString version() const override;
    void execute() override;
    //MyPluginA();
};

#endif // MYPLUGINA_H
