#pragma once

struct Vector3 {
public:
	/* components */

	float x{};
	float y{};
	float z{};

	/* element operations*/
	void Add(const Vector3& other);
	void Multiply(const Vector3& other);
	void Subtract(const Vector3& other);

	Vector3 operator+(const Vector3& other);
	Vector3 operator-(const Vector3& other);
	Vector3 operator*(const Vector3& other);

	static float DotProduct(const Vector3& lhs, const Vector3& rhs);
	float DotProduct(const Vector3& other);

	static Vector3 CrossProduct(const Vector3& lhs, const Vector3& rhs);
	Vector3 CrossProduct(const Vector3& other);

	void Normalize();

	static const Vector3 ZeroVector;
	static const Vector3 OneVector;
	static const Vector3 UpVector;
};