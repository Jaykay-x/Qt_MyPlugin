#ifndef PLUGINBASE_H
#define PLUGINBASE_H


class PluginInterface
{
public:
    virtual void Init()  = 0;
    virtual void Register() = 0;
    virtual void Run() = 0;
    virtual void Reset() =0;
};


#endif // PLUGINBASE_H
