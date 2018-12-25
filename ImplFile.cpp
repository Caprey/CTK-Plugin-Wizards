%{Cpp:LicenseTemplate}\
#include "%{ImplHdrFileName}"
#include <ctkPluginContext.h>

@if '%{ImplBN}'
#include <QDebug>
#include "%{ImplBN}.h"
@endif


%{ImplCN}::%{ImplCN}(ctkPluginContext *context)
{
@if '%{ImplBN}'
	context->registerService<%{ImplBN}>(this);
@endif
    
}
@if '%{ImplBN}'
void %{ImplCN}::sayHello()
{
    qDebug()<<"test";
}
@endif