%{Cpp:LicenseTemplate}\
#ifndef %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}
#define %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}

#include <QObject>

@if '%{ImplBN}'
#include "%{ImplBN}.h"
@endif

class ctkPluginContext;

@if '%{ImplBN}'
class %{ImplCN} : public QObject, public %{ImplBN}
@else
class %{ImplCN} : public QObject
@endif
{
    Q_OBJECT
@if '%{ImplBN}'	
    Q_INTERFACES(%{ImplBN})
@endif
public:
    %{ImplCN}(ctkPluginContext* context);
@if '%{ImplBN}'
    void sayHello() Q_DECL_OVERRIDE;
@endif
};

#endif // %{JS: Cpp.headerGuard('%{ImplHdrFileName}')}
