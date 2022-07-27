#include "BaseComponent.h"

void BaseComponent::Construct() {
	Super::Construct();
}

void BaseComponent::SetComponentName(const std::string_view& componentName) {
	__objectName = componentName;
}

