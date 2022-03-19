#pragma once

#include "Vector3.h"

/*
	Homogeneous Vector or Color
*/
__declspec(align(16)) struct Vector4 {
	/* components */
	float x;
	float y;
	float z;
	float w;

	Vector4();
	Vector4(const Vector3& newVector, float newW = 1.0f);
	Vector4(const Vector4& newVector);
	// Vector4(const Color& newColor);

	float& operator[](int32_t componentIndex);
	float operator[](int32_t componentIndex) const;

	/* element operations */
	inline void Add(const Vector4& other);
	inline void Multiply(const Vector4& other);
	inline void Subtract(const Vector4& other);

	/* add by components */
	inline Vector3 operator+(const Vector3& other);
	inline Vector3 operator-(const Vector3& other);
	inline Vector3 operator*(const Vector3& other);
	inline Vector3 operator/(const Vector3& other);
	inline Vector3 operator/(float scalar);

	/* cross product */
	inline Vector3 operator^(const Vector3& other);

	/* dot product */
	inline float operator|(const Vector3& other);

	/* Access components*/
	inline float operator[](int32_t componentIndex) const;
	inline float& operator[](int32_t componentIndex);

	/* Set all of the vectors coordinates */
	inline void Set(float newX, float newY, float newZ);

	inline static float Dot3Product(const Vector4& lhs, const Vector4& rhs);
	inline static float Dot4Product(const Vector4& lhs, const Vector4& rhs);
	inline static Vector3 CrossProduct(const Vector4& lhs, const Vector4& rhs);
};