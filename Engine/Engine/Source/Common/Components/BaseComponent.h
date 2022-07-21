#pragma once

#include "BaseObject.h"

class BaseComponent : public BaseObject {
public:
	void SetComponentName(const std::string_view& componentName);

	template <typename T>
	static void CreateComponent(const std::string_view& componentName) {
		T::__Construct();
	}

private:
	BaseComponent();
	~BaseComponent();
};