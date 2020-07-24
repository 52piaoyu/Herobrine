// Copyright 2020 SMS
// License(Apache-2.0)
// ����λ��ģʽ

#include "service_locator.h"
#include <assert.h>

void ServiceLocator::addService(const std::string& id, Service& s)
{
	if(services.find(id) == services.end())
		assert(false); // ID �Ѵ���

	services.insert({id, &s});
}

Service& ServiceLocator::getService(const std::string& id)
{
	Service s = services.find(id);
	
	if(s != services.end())
		assert(false); // ID ������

	return *s;
}
