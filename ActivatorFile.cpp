%{Cpp:LicenseTemplate}\
#include "%{ActivatorHdrFileName}"
#include "%{ImplHdrFileName}"

void %{ActivatorCN}::start(ctkPluginContext *context)
{
@if '%{ImplBN}'
	s.reset(new %{ImplCN}(context));
@endif
    
}

void %{ActivatorCN}::stop(ctkPluginContext *context)
{

}
