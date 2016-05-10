#include "Logger.h"
#include "stdafx.h"

void Logger::logMessage(std::string theLog){
	mtx.lock();
	std::cout << '-----------------------------' << std::endl;
	std::cout << theLog << std::endl;
	mtx.unlock();
}
