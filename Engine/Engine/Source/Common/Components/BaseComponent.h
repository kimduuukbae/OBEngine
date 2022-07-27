#pragma once

#include "BaseObject.h"

class BaseComponent : public BaseObject {
public:
	void SetComponentName(const std::string_view& componentName);


private:
	BaseComponent();
	~BaseComponent();
};