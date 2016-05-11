#include "stdafx.h"

#include "Logger.h"

#include <string>
#include <iostream>

std::mutex Logger::mtx;

void Logger::logMessage(std::string theLog){
	mtx.lock();
	//std::cout << "-----------------------------" << std::endl;
	std::cout << "[14S:34:14]:  "<<  theLog << std::endl;
	mtx.unlock();
}
