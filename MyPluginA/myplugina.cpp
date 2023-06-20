#include "myplugina.h"
#include <QDebug>


/*
MyPluginA::MyPluginA()
{
}
*/

MyPluginA::MyPluginA(QObject *parent)
    : QObject{parent}
{

}


QString MyPluginA::name() const
{
    return "That is a Fucking Example Plugin";
}

QString MyPluginA::version() const
{
    return "1.0.0 beta";
}

void MyPluginA::execute()
{
    qDebug()<<"Example Plugin executed!";

}
