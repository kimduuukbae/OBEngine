#pragma once

#include "BaseObject.h"

class BaseComponent : public BaseObject {
public:
	virtual void Construct() override;
	void SetComponentName(const std::string_view& componentName);

private:
	BaseComponent() = default;
	virtual ~BaseComponent() = default;
};