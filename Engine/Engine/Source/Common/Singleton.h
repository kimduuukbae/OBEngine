#pragma once

template <typename T>
class Singleton {
public:
	Singleton() = default;
	virtual ~Singleton() = default;

	static T* Get() {
		if (!__instance) __instance = new T{};
		return __instance;
	}

	static void Release() {
		delete __instance;
		__instance = nullptr;
	}

private:
	static T* __instance;
};

template <typename T> T* Singleton<T>::__instance{ nullptr };