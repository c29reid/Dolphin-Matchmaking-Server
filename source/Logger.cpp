#include "stdafx.h"

#include "Logger.h"

#include <string>
#include <iostream>
#include <ctime>

std::mutex Logger::mtx;
Logger* Logger::m_pInstance = NULL; 

Logger* Logger::Instance()
{
   	if (!m_pInstance)
    	m_pInstance = new Logger;
	return m_pInstance;
}

bool Logger::openLogFile(std::string logfile)
{
	// ... stuff ...
	return false;
}

std::string Logger::getTimeStamp()
{
	time_t currentTime;
	struct tm *localTime;

	time( &currentTime );                   // Get the current time
	localTime = localtime( &currentTime );  // Convert the current time to the local time

	int Day    = localTime->tm_mday;
	int Month  = localTime->tm_mon + 1;
	int Year   = localTime->tm_year + 1900;
	int Hour   = localTime->tm_hour;
	int Min    = localTime->tm_min;
	int Sec    = localTime->tm_sec;
    return "["+ std::to_string(Hour) +":"+ std::to_string(Min) +":"+ std::to_string(Sec) +"]";	
}

void Logger::logMessage(std::string theLog)
{
	mtx.lock();
	std::string timestamp = getTimeStamp();
	std::cout << timestamp << "- " << theLog << std::endl;
	mtx.unlock();
}
