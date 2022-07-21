#pragma once

#include <string>
#include <string_view>

// ��� ������Ʈ���� �ش� ���̽� ������Ʈ�� ��ӹ޾ƾ� �� 

class BaseObject {
public:

	BaseObject* CreateObject(const std::string_view& objectName);

private:
	BaseObject();
	~BaseObject();

	std::string __objectName;
};