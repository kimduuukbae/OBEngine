#pragma once

#include "BaseComponent.h"
#include "Vector3.h"
#include "Matrix.h"

class TransformComponent : public BaseComponent {
	virtual void Construct() override;

private:
	TransformComponent();
	virtual ~TransformComponent();

	Vector3 __position;
	Vector3 __rotation;

	Vector3 __right;
	Vector3 __up;
	Vector3 __look;
	
	Matrix __worldMatrix;
};