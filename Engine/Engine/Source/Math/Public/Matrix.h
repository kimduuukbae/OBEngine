#pragma once

#include "Vector4.h"

struct Matrix {
	alignas(16) float m[4][4];

	Matrix();
	Matrix(const Vector4& newX, const Vector4& newY, const Vector4& newZ, const Vector4& newW);
	Matrix(const Vector3& newX, const Vector3& newY, const Vector3& newZ);

	inline Matrix operator*(const Matrix& other) const;
	inline Matrix operator+(const Matrix& other) const;
	inline Matrix operator-(const Matrix& other) const;

	inline Matrix operator==(const Matrix& other) const;
	inline Matrix operator!=(const Matrix& other) const;

	inline Matrix Inverse() const;

	inline float GetDeterminant() const;
	inline void Transpose();
	inline Matrix GetTranspose();
};