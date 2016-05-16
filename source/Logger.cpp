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
}

std::string Logger::getTimeStamp()
{
	time_t ltime;
    struct tm *Tm;
 
    ltime=time(NULL);
    Tm=localtime(&ltime);
    return "["+ std::to_string(Tm->tm_hour) +":"+ std::to_string(Tm->tm_min) +":"+ std::to_string(Tm->tm_sec) +"]";	
}

void Logger::logMessage(std::string theLog)
{
	mtx.lock();
	std::string timestamp = getTimeStamp();
	std::cout << timestamp << "- " << theLog << std::endl;
	mtx.unlock();
}
