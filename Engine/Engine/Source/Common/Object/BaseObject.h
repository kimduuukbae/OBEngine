#pragma once

#include <string>
#include <string_view>

// 모든 오브젝트들은 해당 베이스 오브젝트를 상속받아야 함 

class BaseObject {
public:

	BaseObject* CreateObject(const std::string_view& objectName);

private:
	BaseObject();
	~BaseObject();

	std::string __objectName;
};