#pragma once

#include <string>
#include <string_view>

// 모든 오브젝트들은 해당 베이스 오브젝트를 상속받아야 함 

class BaseObject {
public:

	virtual void Construct();

	template <typename T> requires std::is_base_of_v<BaseObject, T>
	BaseObject* CreateObject(const std::string_view& objectName) {
		void* p = std::malloc(sizeof(T));
		T* object{ reinterpret_cast<T*>(p) };
		object->Construct();

		return object;
	}

private:
	BaseObject() = default;
	virtual ~BaseObject() = default;

	std::string __objectName;
	uint32_t __layer;

	class World* __world;
};