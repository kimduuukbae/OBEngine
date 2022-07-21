#pragma once

#include <vector>
#include "Singleton.h"

class ThreadElement;

class ThreadManager : public Singleton<ThreadManager>{
public:
	ThreadElement* GetTopInitializableThread();

private:
	ThreadManager();
	~ThreadManager();

	std::vector<ThreadElement*> __threadList;
};
