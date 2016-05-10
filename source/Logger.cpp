#include "Logger.h"
#include "stdafx.h"

void logMessage(std::string theLog){
	mtx.lock();
	std::cout << theLog << std::endl;
	mtx.unlock();
}
