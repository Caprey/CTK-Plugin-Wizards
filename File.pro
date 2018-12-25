QT += core
QT -= gui

TARGET = %{Plugin_Name}
CONFIG += plugin
TEMPLATE = lib

DESTDIR = $$PWD/../bin/plugins

HEADERS += \\
	%{ImplHdrFileName} \\
    %{ActivatorHdrFileName} \\


SOURCES += \\
	%{ImplSrcFileName} \\
    %{ActivatorSrcFileName} \\



#-------------------------CTK-------------------------------#
#CTK 安装路径
CTK_INSTALL_PATH = $$PWD/../../../CTKInstall

#CTK 相关库所在路径（例如：CTKCore.lib,CTKWidgets.lib）
CTK_LIB_PATH = $$CTK_INSTALL_PATH/lib/ctk-0.1

#CTK 相关头文件所在路径（例如：ctkPluginFramework.h）
CTK_INCLUDE_PATH = $$CTK_INSTALL_PATH/include/ctk-0.1

#CTK 插件相关头文件所在路径（主要因为用到了service 相关东西）
CTK_INCLUDE_FRAMEWORK_PATH = $$PWD/../../../CTK/Libs/PluginFramework

#相关库文件（CTKCore.lib、CTKWidgets.lib）
LIBS += -L$$CTK_LIB_PATH -lCTKCore -lCTKWidgets -lCTKPluginFramework

INCLUDEPATH += $$CTK_INCLUDE_PATH \
               $$CTK_INCLUDE_FRAMEWORK_PATH
#-------------------------CTK-------------------------------#

RESOURCES += \\
    resource.qrc

