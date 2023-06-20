#include "mainwindow.h"

#include <QApplication>
#include <QPluginLoader>
#include "PluginInterface/PluginBase.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPluginLoader pluginLoader("E:\\MyProject\\Qt_Project\\build-MyPluginProject-Desktop_Qt_5_15_2_MSVC2019_64bit-Debug\\MyPluginA\\debug\\MyPluginA.dll");


    if(pluginLoader.load())
    {
        PluginInterface *plugin = qobject_cast<PluginInterface *>(pluginLoader.instance());
        if (plugin)
        {
            qDebug() << "Loaded Plugin:" << plugin->name() << "Version:" << plugin->version();
            plugin->execute();
        }
        else
        {
            qDebug() << "Failed to cast plugin instance";
        }
    }
    else
    {
        QString errorString = pluginLoader.errorString();
        qDebug() << "Failed to load plugin:" << pluginLoader.errorString();
    }



    w.show();
    return a.exec();
}
