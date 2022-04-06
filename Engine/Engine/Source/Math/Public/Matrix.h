#pragma once

#include "Vector4.h"

struct Matrix {	
	/*    Row major Matrix
			  m[x][y]

			11 12 13 14
			21 22 23 24
			31 32 33 34
			41 42 43 44
	*/

	alignas(16) float m[4][4]{};

	Matrix() = default;
	Matrix(const Vector4& newX, const Vector4& newY, const Vector4& newZ, const Vector4& newW);
	Matrix(const Vector3& newX, const Vector3& newY, const Vector3& newZ);

	inline Matrix operator*(const Matrix& other) const;
	inline Matrix operator+(const Matrix& other) const;
	inline Matrix operator-(const Matrix& other) const;

	inline bool operator==(const Matrix& other) const;
	inline Matrix operator!=(const Matrix& other) const;

	inline float& operator()(size_t row, size_t column);
	inline float operator()(size_t row, size_t column) const;
	inline Matrix Inverse() const;

	inline float GetDeterminant() const;
	inline void Transpose();
	inline Matrix GetTranspose();
};


Matrix::Matrix(const Vector4& newX, const Vector4& newY, const Vector4& newZ, const Vector4& newW) {
	memcpy(m[0], &newX, sizeof(Vector4));
	memcpy(m[1], &newY, sizeof(Vector4));
	memcpy(m[2], &newZ, sizeof(Vector4));
	memcpy(m[3], &newW, sizeof(Vector4));
}

Matrix::Matrix(const Vector3& newX, const Vector3& newY, const Vector3& newZ) {
	memcpy(m[0], &newX, sizeof(Vector3));
	memcpy(m[1], &newY, sizeof(Vector3));
	memcpy(m[2], &newZ, sizeof(Vector3));
}

Matrix Matrix::operator*(const Matrix& other) const {

}

Matrix Matrix::operator+(const Matrix& other) const {

}

Matrix Matrix::operator-(const Matrix& other) const {

}

bool Matrix::operator==(const Matrix& other) const {
	for (size_t x{ 0 }; x < 4; ++x) {
		for (size_t y{ 0 }; y < 4; ++y) 
			if (m[x][y] != other.m[x][y]) return false;
	}
	return true;
}

Matrix Matrix::operator!=(const Matrix& other) const {

}

inline float& Matrix::operator()(size_t row, size_t column){
	return m[row][column];
}

inline float Matrix::operator()(size_t row, size_t column) const {
	return m[row][column];
}

Matrix Matrix::Inverse() const {

}

float Matrix::GetDeterminant() const {

}

void Matrix::Transpose() {

}

Matrix Matrix::GetTranspose() {

}