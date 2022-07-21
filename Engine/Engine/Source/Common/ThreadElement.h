#pragma once

#include <thread>
#include <functional>


// 그리거나 리소스 부르기 등 모든 작업을 할 스레드

class ThreadElement {
public:
	template <typename T>
	requires std::is_function_v<T>
		void SetJob(T&& function) {
		
		if (__thread != nullptr) 
			__thread->_Start(function);
		else 
			__thread = new std::thread{ std::forward<T&&>(function) };
		
		__thread->join();
	}

	bool IsWaitThread() {
		return __thread->joinable();
	}

	bool ReleaseThread() {
		if (__thread && IsWaitThread()) {
			delete __thread;
			__thread = nullptr;
			return true;
		}

		return false;
	}

private:

	std::thread* __thread;
};