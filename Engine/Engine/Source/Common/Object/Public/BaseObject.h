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
		T* object{ new (p) T };
		object->Construct();

		return object;
	}

	virtual void OnStart();
	virtual void OnDestroy();
	virtual void Update();

protected:
	using Super = BaseObject;

	std::string __objectName{ "Empty" };
	uint32_t __layer{ 0 };

	class World* __world{ nullptr };

private:
	BaseObject() = default;
	virtual ~BaseObject() = default;
};