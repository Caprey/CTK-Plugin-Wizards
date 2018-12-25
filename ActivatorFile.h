%{Cpp:LicenseTemplate}\
#ifndef %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}
#define %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}

#include <QObject>
#include <ctkPluginActivator.h>

@if '%{ImplBN}'
#include "%{ImplBN}.h"
@endif

class %{ActivatorCN} : public QObject,public ctkPluginActivator
{
    Q_OBJECT
    Q_INTERFACES(ctkPluginActivator)
    Q_PLUGIN_METADATA(IID "%{Plugin_Name}")
public:
    void start(ctkPluginContext* context);
    void stop(ctkPluginContext* context);

private:
@if '%{ImplBN}'
	QScopedPointer<%{ImplBN}> s;
@endif
    
};

#endif // %{JS: Cpp.headerGuard('%{ActivatorHdrFileName}')}
